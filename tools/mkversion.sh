#!/bin/sh

rev=$(git rev-parse --short HEAD 2>/dev/null || echo "non-git-release")

if test $# -ge 1; then
    BUILD_TIME=$1
else
    BUILD_TIME=$(date -u)
fi

if test $# -ge 2; then
    VERSION_MAJOR=$(echo "$2" | cut -f 1 -d\-)
    VERSION_MINOR=$(echo "$2" | cut -f 2 -d\-)
    VERSION_TINY=$(echo "$2" | cut -f 3 -d\-)
else
    VERSION_MAJOR=$(date '+%Y')
    VERSION_MINOR=$(date '+%m')
    VERSION_TINY="0"
fi

cat << EOF > version.c
/*
    This file is part of Kismet

    Kismet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kismet is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kismet; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    This file is automatically generated during compilation.
*/

const char *VERSION_MAJOR = "$VERSION_MAJOR";
const char *VERSION_MINOR = "$VERSION_MINOR";
const char *VERSION_TINY = "$VERSION_TINY";

const char *VERSION_GIT_COMMIT = "$rev";
const char *VERSION_BUILD_TIME = "$BUILD_TIME";
EOF

