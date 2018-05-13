#
# git-info
#
# Copyright (c) 2018 Guillermo Calvo
# Licensed under the GNU Lesser General Public License
#

AUTOMAKE_OPTIONS = foreign subdir-objects

AM_CFLAGS = -Ideps


# Generator script

GIT_INFO_SCRIPT     = src/generate-git-info


# Install

dist_bin_SCRIPTS =                      \
    $(GIT_INFO_SCRIPT)


# Documentation

docdir = $(datadir)/doc/git-info
doc_DATA = doc/*


# Cleanup

CLEANFILES =                            \
    *.log                               \
	deps/git-info.h


# Check

check_PROGRAMS =                        \
	bin/check/test


TESTS =                                 \
	bin/check/test


tests: deps/git-info.h check
deps/git-info.h:
	src/generate-git-info


# git-info test

bin_check_test_SOURCES                  = test/test.c
