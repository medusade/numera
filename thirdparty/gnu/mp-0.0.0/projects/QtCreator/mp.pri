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
#   File: mp.pri
#
# Author: $author$
#   Date: 3/5/2018
#
# QtCreator .pri file for mp
########################################################################

OTHER_PKG = ../../../../../../..
OTHER_PRJ = ../../../../../..
OTHER_BLD = ..

THIRDPARTY_NAME = thirdparty
THIRDPARTY_PKG = $${OTHER_PKG}/$${THIRDPARTY_NAME}
THIRDPARTY_PRJ = $${OTHER_PRJ}/$${THIRDPARTY_NAME}
THIRDPARTY_SRC = $${OTHER_PRJ}/src/$${THIRDPARTY_NAME}

########################################################################
# mp
FRAMEWORK_NAME = mp

MP_PKG = ../../../../..
MP_BLD = ../..

MP_PRJ = $${MP_PKG}
MP_BIN = $${MP_BLD}/bin
MP_LIB = $${MP_BLD}/lib
MP_SRC = $${MP_PKG}/src/gnu/mp

# mp BUILD_CONFIG
#
CONFIG(debug, debug|release) {
BUILD_CONFIG = Debug
mp_DEFINES += DEBUG_BUILD
} else {
BUILD_CONFIG = Release
mp_DEFINES += RELEASE_BUILD
}

# mp INCLUDEPATH
#
mp_INCLUDEPATH += \
$${MP_SRC} \
$${MP_SRC}/mpn \
$${MP_SRC}/mpz \
$${MP_SRC}/../.. \
$${build_mp_INCLUDEPATH} \

# mp DEFINES
#
mp_DEFINES += \
_NO_INLINES \
NO_ASM \
$${build_mp_DEFINES} \

# mp LIBS
#
mp_LIBS += \
-L$${MP_LIB}/lib$${FRAMEWORK_NAME} \
-l$${FRAMEWORK_NAME} \
-L$${MP_LIB}/lib$${FRAMEWORK_NAME}n \
-l$${FRAMEWORK_NAME}n \
-L$${MP_LIB}/lib$${FRAMEWORK_NAME}z \
-l$${FRAMEWORK_NAME}z \
