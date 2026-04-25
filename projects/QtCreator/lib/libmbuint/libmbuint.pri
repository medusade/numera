########################################################################
# Copyright (c) 1988-2024 $organization$
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
#   File: libmbuint.pri
#
# Author: $author$
#   Date: 2/25/2024
#
# generic QtCreator project file for medusade framework numera static library libmbuint
########################################################################

########################################################################
# libmbuint
XOS_LIB_MBUINT_VERSION_BUILD_DATE = 2/25/2024 #$$system(~/bin/utility/tdate)

# libmbuint TARGET
#
libmbuint_TARGET = mbuint
libmbuint_TEMPLATE = lib
libmbuint_CONFIG += staticlib

# libmbuint INCLUDEPATH
#
libmbuint_INCLUDEPATH += \
$${numera_INCLUDEPATH} \

# libmbuint DEFINES
#
libmbuint_DEFINES += \
$${numera_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_LIB_MBUINT_VERSION_BUILD_DATE=$${XOS_LIB_MBUINT_VERSION_BUILD_DATE} \

########################################################################
# libmbuint OBJECTIVE_HEADERS
#
#libmbuint_OBJECTIVE_HEADERS += \
#$${NUMERA_SRC}/xos/lib/mbuint/version.hh \

# libmbuint OBJECTIVE_SOURCES
#
#libmbuint_OBJECTIVE_SOURCES += \
#$${NUMERA_SRC}/xos/lib/mbuint/version.mm \

########################################################################
# libmbuint HEADERS
#
libmbuint_HEADERS += \
$${MBUINT_SRC}/mbuint.h \

# libmbuint SOURCES
#
libmbuint_SOURCES += \
$${MBUINT_SRC}/mbuint.c \

########################################################################
