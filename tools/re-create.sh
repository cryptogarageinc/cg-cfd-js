#!/bin/sh

rm -rf *.in */*.in
rm -rf Makefile */Makefile
rm -rf */*.gcno */*/*.gcno
rm -rf */*.gcda */*/*.gcda

rm -f */*~
rm -f *~
rm -f aclocal.m4
rm -rf autom4te.cache
rm -f config.h config.h.in
rm -f configure
rm -f config.log config.guess config.status config.sub
rm -f depcomp install-sh missing stamp-h1
rm -f compile

autoreconf --install --force || exit 1
