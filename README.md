
[![Last release](https://img.shields.io/github/package-json/v/LeakyAbstractions/git-info.svg?label=release&colorB=007ec6)](https://github.com/LeakyAbstractions/git-info/releases)
[![Build status](https://travis-ci.org/LeakyAbstractions/git-info.svg?branch=master)](https://travis-ci.org/LeakyAbstractions/git-info)

# git-info

> Extract information from the GIT repository

This project adheres to [Pragmatic Versioning](https://pragver.github.io).


## Generate a header file with GIT info

**Git-info** consists in a shell script that generates a header file containing
repository info for your C programs.

The next macros will be defined:

- GIT_INFO_ORIGIN
- GIT_INFO_BRANCH
- GIT_INFO_HASH
- GIT_INFO_TAG
- GIT_INFO_SUBJECT
- GIT_INFO_BODY
- GIT_INFO_NOTES
- GIT_INFO_AUTHOR_NAME
- GIT_INFO_AUTHOR_EMAIL
- GIT_INFO_AUTHOR_TIMESTAMP
- GIT_INFO_AUTHOR_DATE1
- GIT_INFO_AUTHOR_DATE_RFC2822
- GIT_INFO_AUTHOR_DATE_ISO8601
- GIT_INFO_COMMITTER_NAME
- GIT_INFO_COMMITTER_EMAIL
- GIT_INFO_COMMITTER_TIMESTAMP
- GIT_INFO_COMMITTER_DATE
- GIT_INFO_COMMITTER_DATE_RFC2822
- GIT_INFO_COMMITTER_DATE_ISO8601


## Install

You can always run the script from a local directory, but if you prefer to
properly install it to your system, run:

```bash
$ autoreconf --install && ./configure && make install
```

And the generator script will be copied to `/usr/local/bin`.


## Usage

Run the script from a git repository to generate the header file:

```bash
$ generate-git-info
```

By default, the header file will be located at `./deps/git-info.h`. If you want
to create it at a different path, you can pass it as a parameter.

```bash
$ generate-git-info src/repo.h
```

Once the header file is generated, you can include it from your source code to
access the defined macros containing repository info:

```c
#ifndef GIT_INFO_H
#define GIT_INFO_H

/*
 * This file was auto-generated on: 2018-05-13T10:00+09:00
 * by: /usr/local/bin/generate-git-info
 * DO NOT EDIT THIS FILE DIRECTLY
 */

#define GIT_INFO_ORIGIN                 "git@github.com:LeakyAbstractions/git-info.git"
#define GIT_INFO_BRANCH                 "master"
#define GIT_INFO_HASH                   "964bcd84987bd1d22e7f5752a0a8fd9cdce91ccf"
#define GIT_INFO_TAG                    ""
#define GIT_INFO_SUBJECT                "Initial commit"
#define GIT_INFO_BODY                   \
    "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n" \
    "Nulla eu mi mauris. Sed nec consectetur velit.\n" \
    "In vulputate lorem sed mattis auctor. Donec sed accumsan nisl."
#define GIT_INFO_NOTES                  \
    ""
#define GIT_INFO_AUTHOR_NAME            "Guillermo Calvo"
#define GIT_INFO_AUTHOR_EMAIL           "guillermocalvo@yahoo.com"
#define GIT_INFO_AUTHOR_TIMESTAMP       "1526173216"
#define GIT_INFO_AUTHOR_DATE            "2018-05-13 10:00:16 +0900"
#define GIT_INFO_AUTHOR_DATE_RFC2822    "Sun, 13 May 2018 10:00:16 +0900"
#define GIT_INFO_AUTHOR_DATE_ISO8601    "2018-05-13T10:00:16+09:00"
#define GIT_INFO_COMMITTER_NAME         "Guillermo Calvo"
#define GIT_INFO_COMMITTER_EMAIL        "guillermocalvo@yahoo.com"
#define GIT_INFO_COMMITTER_TIMESTAMP    1526200041
#define GIT_INFO_COMMITTER_DATE         "2018-05-13 17:27:21 +0900"
#define GIT_INFO_COMMITTER_DATE_RFC2822 "Sun, 13 May 2018 17:27:21 +0900"
#define GIT_INFO_COMMITTER_DATE_ISO8601 "2018-05-13T17:27:21+09:00"

#endif
```


## Makefile

You should make your task depend on the generated header file, and then add a
rule to automatically generate it:

```Makefile
foobar: deps/git-info.h

deps/git-info.h:
	generate-git-info
```

You may also add the header file to the list of files to be cleaned, so that you
can re-generate it easily when you need to update the repository info.


## Author

Copyright 2018 [Guillermo Calvo](https://github.com/guillermocalvo)

[![](https://resume.guillermo.in/assets/images/thumb.png)](https://guillermo.in/)


## License

This is free software: you can redistribute it and/or modify it under the terms
of the **GNU Lesser General Public License** as published by the
*Free Software Foundation*, either version 3 of the License, or (at your option)
any later version.

This software is distributed in the hope that it will be useful, but
**WITHOUT ANY WARRANTY**; without even the implied warranty of
**MERCHANTABILITY** or **FITNESS FOR A PARTICULAR PURPOSE**. See the
[GNU Lesser General Public License](http://www.gnu.org/licenses/lgpl.html) for
more details.

You should have received a copy of the GNU Lesser General Public License along
with this software. If not, see <http://www.gnu.org/licenses/>.

### Required

- **License and copyright notice**: Include a copy of the license and copyright
notice with the code.
- **Library usage**: The library may be used within a non-open-source
application.
- **Disclose Source**: Source code for this library must be made available when
distributing the software.

### Permitted

- **Commercial Use**: This software and derivatives may be used for commercial
purposes.
- **Modification**: This software may be modified.
- **Distribution**: You may distribute this software.
- **Sublicensing**: You may grant a sublicense to modify and distribute this
software to third parties not included in the license.
- **Patent Grant**: This license provides an express grant of patent rights from
the contributor to the recipient.

### Forbidden

- **Hold Liable**: Software is provided without warranty and the software
author/license owner cannot be held liable for damages.
