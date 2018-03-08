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
#   File: Makefile
#
# Author: $author$
#   Date: 3/7/2018
#
# generic Gcc Makefile for bn
########################################################################

OTHER_VERSION_PKG = ${PKG}
OTHER_DEPENDS_PKG = ${PKG}/..

BN_PKG = ${PKG}
BN_SRC = ${BN_PKG}/src/openssl/bn
BN_BLD = ${BN_PKG}/${BLD}/${BUILD_TYPE}
BN_LIB = ${BN_BLD}/lib
BN_BIN = ${BN_BLD}/bin


########################################################################
# bn

# bn USRDEFINES
#
bn_USRDEFINES += \
${build_bn_USRDEFINES} \

# bn USRINCLUDES
#
bn_USRINCLUDES += \
-I${BN_SRC} \
${build_bn_USRINCLUDES} \

# bn USRCXXFLAGS
#
bn_USRCXXFLAGS += \
${build_bn_USRCXXFLAGS} \

# bn USRLIBDIRS
#
bn_USRLIBDIRS += \
-L${BN_LIB} \
${build_bn_USRLIBDIRS} \

# bn LIBS
#
bn_LIBS += \
-lbn \
${build_bn_LIBS} \

########################################################################

