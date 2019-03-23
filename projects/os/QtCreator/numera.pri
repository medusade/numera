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
# Os QtCreator .pri file for numera
########################################################################
UNAME = $$system(uname)

contains(UNAME,Darwin) {
NUMERA_OS = macosx
} else {
contains(UNAME,Linux) {
NUMERA_OS = linux
} else {
NUMERA_OS = windows
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)

#CONFIG += c++11
#CONFIG += c++0x

########################################################################
# bn
BN_THIRDPARTY_PKG_MAKE_BLD = $${BN_THIRDPARTY_PKG}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
BN_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${BN_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
BN_THIRDPARTY_PKG_BLD = $${BN_THIRDPARTY_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
BN_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${BN_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
BN_PKG_BLD = $${OTHER_BLD}/$${BN_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
BN_PRJ_BLD = $${OTHER_BLD}/$${BN_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
#BN_LIB = $${BN_THIRDPARTY_PKG_MAKE_BLD}/lib
BN_LIB = $${BN_THIRDPARTY_PRJ_MAKE_BLD}/lib
#BN_LIB = $${BN_THIRDPARTY_PKG_BLD}/lib
#BN_LIB = $${BN_THIRDPARTY_PRJ_BLD}/lib
#BN_LIB = $${BN_PKG_BLD}/lib
#BN_LIB = $${BN_PRJ_BLD}/lib
#BN_LIB = $${NUMERA_LIB}

# bn LIBS
#
bn_LIBS += \
-L$${BN_LIB}/lib$${BN_NAME} \
-L$${BN_LIB} \
-l$${BN_NAME} \

########################################################################
# mp
MP_THIRDPARTY_PKG_MAKE_BLD = $${MP_THIRDPARTY_PKG}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
MP_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${MP_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
MP_THIRDPARTY_PKG_BLD = $${MP_THIRDPARTY_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
MP_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${MP_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
MP_PKG_BLD = $${OTHER_BLD}/$${MP_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
MP_PRJ_BLD = $${OTHER_BLD}/$${MP_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
#MP_LIB = $${MP_THIRDPARTY_PKG_MAKE_BLD}/lib
MP_LIB = $${MP_THIRDPARTY_PRJ_MAKE_BLD}/lib
#MP_LIB = $${MP_THIRDPARTY_PKG_BLD}/lib
#MP_LIB = $${MP_THIRDPARTY_PRJ_BLD}/lib
#MP_LIB = $${MP_PKG_BLD}/lib
#MP_LIB = $${MP_PRJ_BLD}/lib
#MP_LIB = $${NUMERA_LIB}

# mp LIBS
#
mp_LIBS += \
-L$${MP_LIB}/lib$${MP_NAME} \
-L$${MP_LIB}/lib$${MP_NAME}n \
-L$${MP_LIB}/lib$${MP_NAME}z \
-L$${MP_LIB} \
-l$${MP_NAME} \
-l$${MP_NAME}n \
-l$${MP_NAME}z \

########################################################################
# mbuint
MBUINT_THIRDPARTY_PKG_MAKE_BLD = $${MBUINT_THIRDPARTY_PKG}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
MBUINT_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${MBUINT_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
MBUINT_THIRDPARTY_PKG_BLD = $${MBUINT_THIRDPARTY_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
MBUINT_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${MBUINT_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
MBUINT_PKG_BLD = $${OTHER_BLD}/$${MBUINT_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
MBUINT_PRJ_BLD = $${OTHER_BLD}/$${MBUINT_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
#MBUINT_LIB = $${MBUINT_THIRDPARTY_PKG_MAKE_BLD}/lib
MBUINT_LIB = $${MBUINT_THIRDPARTY_PRJ_MAKE_BLD}/lib
#MBUINT_LIB = $${MBUINT_THIRDPARTY_PKG_BLD}/lib
#MBUINT_LIB = $${MBUINT_THIRDPARTY_PRJ_BLD}/lib
#MBUINT_LIB = $${MBUINT_PKG_BLD}/lib
#MBUINT_LIB = $${MBUINT_PRJ_BLD}/lib
#MBUINT_LIB = $${NUMERA_LIB}

# mbuint LIBS
#
mbuint_LIBS += \
-L$${MBUINT_LIB}/lib$${MBUINT_NAME} \
-L$${MBUINT_LIB} \
-l$${MBUINT_NAME} \

########################################################################
# nadir
NADIR_THIRDPARTY_PKG_MAKE_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_MAKE_BLD = $${OTHER_BLD}/$${NADIR_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PKG_BLD = $${NADIR_THIRDPARTY_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_THIRDPARTY_PRJ_BLD = $${OTHER_BLD}/$${NADIR_THIRDPARTY_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PKG_BLD = $${OTHER_BLD}/$${NADIR_PKG}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
NADIR_PRJ_BLD = $${OTHER_BLD}/$${NADIR_PRJ}/build/$${NUMERA_OS}/QtCreator/$${BUILD_CONFIG}
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_MAKE_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_THIRDPARTY_PRJ_BLD}/lib
NADIR_LIB = $${NADIR_PKG_BLD}/lib
#NADIR_LIB = $${NADIR_PRJ_BLD}/lib
#NADIR_LIB = $${NUMERA_LIB}

# nadir LIBS
#
nadir_LIBS += \
-L$${NADIR_LIB}/libxos$${NADIR_NAME} \
-lxos$${NADIR_NAME} \

########################################################################
# numera

# numera INCLUDEPATH
#
numera_INCLUDEPATH += \

# numera DEFINES
#
numera_DEFINES += \

# numera LIBS
#
numera_LIBS += \
$${nadir_LIBS} \
$${mbuint_LIBS} \
$${bn_LIBS} \
$${mp_LIBS} \
$${build_numera_LIBS} \

contains(NUMERA_OS,macosx|linux) {
numera_LIBS += \
-lpthread \
-ldl
} else {
} # contains(NUMERA_OS,macosx|linux)

contains(NUMERA_OS,linux) {
numera_LIBS += \
-lrt
} else {
} # contains(NUMERA_OS,linux)


