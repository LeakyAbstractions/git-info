#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.


# Autoconf requirements
AC_PREREQ([2.68])


# Initialize package
AC_INIT([git-info], [0.1.0.2], [git-info@guillermo.in], [git-info], [https://github.com/LeakyAbstractions/git-info/])


# Information on the package
AC_COPYRIGHT([Copyright 2018 Guillermo Calvo])
AC_REVISION([$PACKAGE_VERSION])
AC_MSG_NOTICE([
       _ _         _        __
      (_) |       (_)      / _|
  __ _ _| |_ _____ _ _ __ | |_ ___
 / _` | | __|_____| | '_ \|  _/ _ \\
| (_| | | |_      | | | | | || (_) |
 \__, |_|\__|     |_|_| |_|_| \___/
  __/ | Automatically generate a
 |___/  header file with GIT info
])


# Check if the source folder is correct
AC_CONFIG_SRCDIR([src/generate-git-info])


# Checks for programs.
AC_PROG_CC
AC_PROG_CPP


# Checks for header files.
AC_HEADER_STDC


# Checks for compiler characteristics
AC_LANG([C])


# The config file is generated but not used by the source code
AC_CONFIG_FILES([
    git-info.pc
    Makefile
])


# Automake initialisation
AM_INIT_AUTOMAKE([
    foreign
	subdir-objects
    no-define
])


AC_OUTPUT
