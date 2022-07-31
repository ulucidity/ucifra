########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: ubase64.pri
#
# Author: $author$
#   Date: 7/29/2022, 7/31/2022
#
# generic QtCreator project .pri file for framework ucifra executable ubase64
########################################################################

########################################################################
# ubase64

# ubase64 TARGET
#
ubase64_TARGET = ubase64

# ubase64 INCLUDEPATH
#
ubase64_INCLUDEPATH += \
$${ucifra_INCLUDEPATH} \

# ubase64 DEFINES
#
ubase64_DEFINES += \
$${ucifra_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# ubase64 OBJECTIVE_HEADERS
#
#ubase64_OBJECTIVE_HEADERS += \
#$${UCIFRA_SRC}/xos/app/console/crypto/code/base64/main.hh \

# ubase64 OBJECTIVE_SOURCES
#
#ubase64_OBJECTIVE_SOURCES += \
#$${UCIFRA_SRC}/xos/app/console/crypto/code/base64/main.mm \

########################################################################
# ubase64 HEADERS
#
ubase64_HEADERS += \
$${UCIFRA_SRC}/xos/io/base64/reader.hpp \
$${UCIFRA_SRC}/xos/io/base64/read_to_output.hpp \
\
$${UCIFRA_SRC}/xos/app/console/crypto/base/main_opt.hpp \
$${UCIFRA_SRC}/xos/app/console/crypto/base/main.hpp \
\
$${UCIFRA_SRC}/xos/app/console/crypto/code/base/main_opt.hpp \
$${UCIFRA_SRC}/xos/app/console/crypto/code/base/main.hpp \

# ubase64 SOURCES
#
ubase64_SOURCES += \
$${UCIFRA_SRC}/xos/io/base64/reader.cpp \
$${UCIFRA_SRC}/xos/io/base64/read_to_output.cpp \
\
$${UCIFRA_SRC}/xos/app/console/crypto/code/base/main_opt.cpp \
$${UCIFRA_SRC}/xos/app/console/crypto/code/base/main.cpp \

########################################################################
# ubase64 FRAMEWORKS
#
ubase64_FRAMEWORKS += \
$${ucifra_FRAMEWORKS} \

# ubase64 LIBS
#
ubase64_LIBS += \
$${ucifra_LIBS} \

########################################################################
# NO Qt
QT -= gui core
