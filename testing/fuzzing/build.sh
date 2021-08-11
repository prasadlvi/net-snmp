#!/bin/bash -eu

scriptdir=$(cd "$(dirname "$0")" && pwd)
CC=clang
CXX=clang++
CFLAGS="-Wall -Werror -fsanitize=fuzzer-no-link"
CXXFLAGS="${CFLAGS} -lssl"
SRC=${scriptdir}
WORK=$SRC
OUT=$WORK
LIB_FUZZING_ENGINE="-fsanitize=fuzzer"

export CC CXX CFLAGS CXXFLAGS SRC WORK OUT LIB_FUZZING_ENGINE

cd "$(dirname "$(dirname "${scriptdir}")")"
$scriptdir/build-fuzz-tests.sh
