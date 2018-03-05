########################################################################
# Copyright (c) 1988-2018 $organization$
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
#   Date: 3/4/2018
#
# QtCreator .pri file for numera
########################################################################

OTHER_PKG = ../../../../../../..
OTHER_PRJ = ../../../../../..
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
BN_GROUP = gnu
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
#BN_SRC = $${BN_THIRDPARTY_PKG}/src
BN_SRC = $${BN_THIRDPARTY_PRJ}/src
#BN_SRC = $${BN_PKG}/src
#BN_SRC = $${BN_PRJ}/src

# bn INCLUDEPATH
#
#bn_INCLUDEPATH += \
#$${BN_HOME_BUILD_INCLUDE} \

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
MP_GROUP = openssl
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
#MP_SRC = $${MP_THIRDPARTY_PKG}/src
MP_SRC = $${MP_THIRDPARTY_PRJ}/src
#MP_SRC = $${MP_PKG}/src
#MP_SRC = $${MP_PRJ}/src

# mp INCLUDEPATH
#
#mp_INCLUDEPATH += \
#$${MP_HOME_BUILD_INCLUDE} \

mp_INCLUDEPATH += \
$${MP_SRC}/$${MP_GROUP}/$${MP_NAME} \
$${MP_SRC}/$${MP_GROUP} \
$${MP_SRC} \

# mp DEFINES
#
mp_DEFINES += \
_NO_INLINES \
NO_ASM \

########################################################################
# rostra
ROSTRA_VERSION_MAJOR = 0
ROSTRA_VERSION_MINOR = 0
ROSTRA_VERSION_RELEASE = 0
ROSTRA_VERSION = $${ROSTRA_VERSION_MAJOR}.$${ROSTRA_VERSION_MINOR}.$${ROSTRA_VERSION_RELEASE}
ROSTRA_NAME = rostra
ROSTRA_GROUP = $${ROSTRA_NAME}
ROSTRA_DIR = $${ROSTRA_GROUP}/$${ROSTRA_NAME}-$${ROSTRA_VERSION}
ROSTRA_PKG_DIR = $${ROSTRA_NAME}
ROSTRA_HOME_BUILD = $${HOME}/build/$${ROSTRA_NAME}
ROSTRA_HOME_BUILD_INCLUDE = $${ROSTRA_HOME_BUILD}/include
ROSTRA_HOME_BUILD_LIB = $${ROSTRA_HOME_BUILD}/lib
ROSTRA_THIRDPARTY_PKG = $${THIRDPARTY_PKG}/$${ROSTRA_DIR}
ROSTRA_THIRDPARTY_PRJ = $${THIRDPARTY_PRJ}/$${ROSTRA_DIR}
ROSTRA_THIRDPARTY_SRC = $${THIRDPARTY_SRC}/$${ROSTRA_PKG_DIR}
ROSTRA_THIRDPARTY_SRC_GROUP = $${ROSTRA_NAME}
ROSTRA_THIRDPARTY_SRC_NAME = $${ROSTRA_NAME}
ROSTRA_THIRDPARTY_SRC_DIR = $${THIRDPARTY_SRC}/$${ROSTRA_THIRDPARTY_SRC_GROUP}/$${ROSTRA_THIRDPARTY_SRC_NAME} 
ROSTRA_PKG = $${OTHER_PKG}/$${ROSTRA_PKG_DIR}
ROSTRA_PRJ = $${OTHER_PRJ}/$${ROSTRA_PKG_DIR}
#ROSTRA_SRC = $${ROSTRA_THIRDPARTY_SRC_DIR}
#ROSTRA_SRC = $${ROSTRA_THIRDPARTY_PKG}/src
#ROSTRA_SRC = $${ROSTRA_THIRDPARTY_PRJ}/src
#ROSTRA_SRC = $${ROSTRA_PKG}/src
ROSTRA_SRC = $${ROSTRA_PRJ}/src

# rostra INCLUDEPATH
#
#rostra_INCLUDEPATH += \
#$${ROSTRA_HOME_BUILD_INCLUDE} \

rostra_INCLUDEPATH += \
$${ROSTRA_SRC} \

# rostra DEFINES
#
rostra_DEFINES += \

########################################################################
# nadir
NADIR_VERSION_MAJOR = 0
NADIR_VERSION_MINOR = 0
NADIR_VERSION_RELEASE = 0
NADIR_VERSION = $${NADIR_VERSION_MAJOR}.$${NADIR_VERSION_MINOR}.$${NADIR_VERSION_RELEASE}
NADIR_NAME = nadir
NADIR_GROUP = $${NADIR_NAME}
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
#NADIR_SRC = $${NADIR_THIRDPARTY_PKG}/src
#NADIR_SRC = $${NADIR_THIRDPARTY_PRJ}/src
#NADIR_SRC = $${NADIR_PKG}/src
NADIR_SRC = $${NADIR_PRJ}/src

# nadir INCLUDEPATH
#
#nadir_INCLUDEPATH += \
#$${NADIR_HOME_BUILD_INCLUDE} \

nadir_INCLUDEPATH += \
$${NADIR_SRC} \

# nadir DEFINES
#
nadir_DEFINES += \
NO_USE_XOS_LOGGER_INTERFACE \

########################################################################
# numera
FRAMEWORK_NAME = numera

NUMERA_PKG = ../../../../..
NUMERA_BLD = ../..

NUMERA_PRJ = $${NUMERA_PKG}
NUMERA_BIN = $${NUMERA_BLD}/bin
NUMERA_LIB = $${NUMERA_BLD}/lib
NUMERA_SRC = $${NUMERA_PKG}/src

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
$${nadir_INCLUDEPATH} \
$${rostra_INCLUDEPATH} \
$${build_numera_INCLUDEPATH} \

# numera DEFINES
#
numera_DEFINES += \
$${rostra_DEFINES} \
$${nadir_DEFINES} \
$${build_numera_DEFINES} \

# numera LIBS
#
numera_LIBS += \
-L$${NUMERA_LIB}/lib$${FRAMEWORK_NAME} \
-l$${FRAMEWORK_NAME} \

