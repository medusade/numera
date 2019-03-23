########################################################################
# Copyright (c) 1988-2019 $organization$
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
#   File: numera.pri
#
# Author: $author$
#   Date: 3/22/2019
#
# QtCreator .pri file for numera
########################################################################

OTHER_PKG = ../../../../../..
OTHER_PRJ = ../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/src/$${THIRDPARTY_NAME}

########################################################################
# bn
BN_VERSION_MAJOR = 0
BN_VERSION_MINOR = 0
BN_VERSION_RELEASE = 0
BN_VERSION = $${BN_VERSION_MAJOR}.$${BN_VERSION_MINOR}.$${BN_VERSION_RELEASE}
BN_NAME = bn
BN_GROUP = openssl
BN_SOURCE = src
BN_DIR = $${BN_GROUP}/$${BN_NAME}-$${BN_VERSION}
BN_PKG_DIR = $${BN_NAME}
BN_HOME_BUILD = $${HOME}/build/$${BN_NAME}
BN_HOME_BUILD_INCLUDE = $${BN_HOME_BUILD}/include
BN_HOME_BUILD_LIB = $${BN_HOME_BUILD}/lib
BN_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${BN_DIR}
BN_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${BN_DIR}
BN_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${BN_PKG_DIR}
BN_THIRDPARTY_SRC_GROUP = $${BN_NAME}
BN_THIRDPARTY_SRC_NAME = $${BN_NAME}
BN_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${BN_THIRDPARTY_SRC_GROUP}/$${BN_THIRDPARTY_SRC_NAME} 
BN_PKG = $${OTHER_PKG}/$${BN_PKG_DIR}
BN_PRJ = $${OTHER_PRJ}/$${BN_PKG_DIR}
#BN_SRC = $${BN_THIRDPARTY_SRC_DIR}
#BN_SRC = $${BN_THIRDPARTY_PKG}/$${BN_SOURCE}
BN_SRC = $${BN_THIRDPARTY_PRJ}/$${BN_SOURCE}
#BN_SRC = $${BN_PKG}/$${BN_SOURCE}
#BN_SRC = $${BN_PRJ}/$${BN_SOURCE}

# bn INCLUDEPATH
#
bn_INCLUDEPATH += \
$${BN_SRC}/$${BN_GROUP}/$${BN_NAME} \
$${BN_SRC}/$${BN_GROUP} \
$${BN_SRC} \

# bn DEFINES
#
bn_DEFINES += \

########################################################################
# mp
MP_VERSION_MAJOR = 0
MP_VERSION_MINOR = 0
MP_VERSION_RELEASE = 0
MP_VERSION = $${MP_VERSION_MAJOR}.$${MP_VERSION_MINOR}.$${MP_VERSION_RELEASE}
MP_NAME = mp
MP_GROUP = gmp
MP_SOURCE = src
MP_DIR = $${MP_GROUP}/$${MP_NAME}-$${MP_VERSION}
MP_PKG_DIR = $${MP_NAME}
MP_HOME_BUILD = $${HOME}/build/$${MP_NAME}
MP_HOME_BUILD_INCLUDE = $${MP_HOME_BUILD}/include
MP_HOME_BUILD_LIB = $${MP_HOME_BUILD}/lib
MP_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${MP_DIR}
MP_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${MP_DIR}
MP_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${MP_PKG_DIR}
MP_THIRDPARTY_SRC_GROUP = $${MP_NAME}
MP_THIRDPARTY_SRC_NAME = $${MP_NAME}
MP_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${MP_THIRDPARTY_SRC_GROUP}/$${MP_THIRDPARTY_SRC_NAME} 
MP_PKG = $${OTHER_PKG}/$${MP_PKG_DIR}
MP_PRJ = $${OTHER_PRJ}/$${MP_PKG_DIR}
#MP_SRC = $${MP_THIRDPARTY_SRC_DIR}
#MP_SRC = $${MP_THIRDPARTY_PKG}/$${MP_SOURCE}
MP_SRC = $${MP_THIRDPARTY_PRJ}/$${MP_SOURCE}
#MP_SRC = $${MP_PKG}/$${MP_SOURCE}
#MP_SRC = $${MP_PRJ}/$${MP_SOURCE}

# mp INCLUDEPATH
#
mp_INCLUDEPATH += \
$${MP_SRC}/$${MP_GROUP}/$${MP_NAME}/$${MP_NAME}n \
$${MP_SRC}/$${MP_GROUP}/$${MP_NAME}/$${MP_NAME}z \
$${MP_SRC}/$${MP_GROUP}/$${MP_NAME} \
$${MP_SRC}/$${MP_GROUP} \
$${MP_SRC} \

# mp DEFINES
#
mp_DEFINES += \
_NO_INLINES \
NO_ASM \

########################################################################
# mbuint
MBUINT_VERSION_MAJOR = 0
MBUINT_VERSION_MINOR = 0
MBUINT_VERSION_RELEASE = 0
MBUINT_VERSION = $${MBUINT_VERSION_MAJOR}.$${MBUINT_VERSION_MINOR}.$${MBUINT_VERSION_RELEASE}
MBUINT_NAME = mbuint
MBUINT_GROUP = mbuint
MBUINT_SOURCE = src
MBUINT_DIR = $${MBUINT_GROUP}/$${MBUINT_NAME}-$${MBUINT_VERSION}
MBUINT_PKG_DIR = $${MBUINT_NAME}
MBUINT_HOME_BUILD = $${HOME}/build/$${MBUINT_NAME}
MBUINT_HOME_BUILD_INCLUDE = $${MBUINT_HOME_BUILD}/include
MBUINT_HOME_BUILD_LIB = $${MBUINT_HOME_BUILD}/lib
MBUINT_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${MBUINT_DIR}
MBUINT_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${MBUINT_DIR}
MBUINT_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${MBUINT_PKG_DIR}
MBUINT_THIRDPARTY_SRC_GROUP = $${MBUINT_NAME}
MBUINT_THIRDPARTY_SRC_NAME = $${MBUINT_NAME}
MBUINT_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${MBUINT_THIRDPARTY_SRC_GROUP}/$${MBUINT_THIRDPARTY_SRC_NAME} 
MBUINT_PKG = $${OTHER_PKG}/$${MBUINT_PKG_DIR}
MBUINT_PRJ = $${OTHER_PRJ}/$${MBUINT_PKG_DIR}
#MBUINT_SRC = $${MBUINT_THIRDPARTY_SRC_DIR}
#MBUINT_SRC = $${MBUINT_THIRDPARTY_PKG}/$${MBUINT_SOURCE}
MBUINT_SRC = $${MBUINT_THIRDPARTY_PRJ}/$${MBUINT_SOURCE}
#MBUINT_SRC = $${MBUINT_PKG}/$${MBUINT_SOURCE}
#MBUINT_SRC = $${MBUINT_PRJ}/$${MBUINT_SOURCE}

# mbuint INCLUDEPATH
#
mbuint_INCLUDEPATH += \
$${MBUINT_SRC}/$${MBUINT_GROUP}/$${MBUINT_NAME} \
$${MBUINT_SRC}/$${MBUINT_GROUP} \
$${MBUINT_SRC} \

# mbuint DEFINES
#
mbuint_DEFINES += \

########################################################################
# nadir
NADIR_VERSION_MAJOR = 0
NADIR_VERSION_MINOR = 0
NADIR_VERSION_RELEASE = 0
NADIR_VERSION = $${NADIR_VERSION_MAJOR}.$${NADIR_VERSION_MINOR}.$${NADIR_VERSION_RELEASE}
NADIR_NAME = nadir
NADIR_GROUP = $${NADIR_NAME}
NADIR_SOURCE = src
NADIR_DIR = $${NADIR_GROUP}/$${NADIR_NAME}-$${NADIR_VERSION}
NADIR_PKG_DIR = $${NADIR_NAME}
NADIR_HOME_BUILD = $${HOME}/build/$${NADIR_NAME}
NADIR_HOME_BUILD_INCLUDE = $${NADIR_HOME_BUILD}/include
NADIR_HOME_BUILD_LIB = $${NADIR_HOME_BUILD}/lib
NADIR_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${NADIR_DIR}
NADIR_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${NADIR_DIR}
NADIR_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${NADIR_PKG_DIR}
NADIR_THIRDPARTY_SRC_GROUP = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_NAME = $${NADIR_NAME}
NADIR_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${NADIR_THIRDPARTY_SRC_GROUP}/$${NADIR_THIRDPARTY_SRC_NAME} 
NADIR_PKG = $${OTHER_PKG}/$${NADIR_PKG_DIR}
NADIR_PRJ = $${OTHER_PRJ}/$${NADIR_PKG_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_SRC_DIR}
#NADIR_SRC = $${NADIR_THIRDPARTY_PKG}/$${NADIR_SOURCE}
#NADIR_SRC = $${NADIR_THIRDPARTY_PRJ}/$${NADIR_SOURCE}
NADIR_SRC = $${NADIR_PKG}/$${NADIR_SOURCE}
#NADIR_SRC = $${NADIR_PRJ}/$${NADIR_SOURCE}

# nadir INCLUDEPATH
#
nadir_INCLUDEPATH += \
$${NADIR_SRC} \

# nadir DEFINES
#
nadir_DEFINES += \

# xosnadir INCLUDEPATH
#
xosnadir_INCLUDEPATH += \
$${NADIR_SRC} \

# xosnadir DEFINES
#
xosnadir_DEFINES += \
NO_USE_NADIR_BASE \
NO_USE_XOS_LOGGER_INTERFACE \

########################################################################
# numera
NUMERA_NAME = numera
NUMERA_SOURCE = src

NUMERA_PKG = ../../../../..
NUMERA_BLD = ../..

NUMERA_PRJ = $${NUMERA_PKG}
NUMERA_BIN = $${NUMERA_BLD}/bin
NUMERA_LIB = $${NUMERA_BLD}/lib
NUMERA_SRC = $${NUMERA_PKG}/$${NUMERA_SOURCE}

# numera BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
numera_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
numera_DEFINES += RELEASE_BUILD
}

# numera INCLUDEPATH
#
numera_INCLUDEPATH += \
$${NUMERA_SRC} \
$${xosnadir_INCLUDEPATH} \
$${mbuint_INCLUDEPATH} \
$${mp_INCLUDEPATH} \
$${bn_INCLUDEPATH} \
$${build_numera_INCLUDEPATH} \

# numera DEFINES
#
numera_DEFINES += \
$${bn_DEFINES} \
$${mp_DEFINES} \
$${mbuint_DEFINES} \
$${xosnadir_DEFINES} \
$${build_numera_DEFINES} \

# numera LIBS
#
numera_LIBS += \
-L$${NUMERA_LIB}/lib$${NUMERA_NAME} \
-l$${NUMERA_NAME} \
