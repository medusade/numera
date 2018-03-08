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
# generic Gcc Makefile for mp
########################################################################

OTHER_VERSION_PKG = ${PKG}
OTHER_DEPENDS_PKG = ${PKG}/..

MP_PKG = ${PKG}
MP_SRC = ${MP_PKG}/src/gnu/mp
MP_BLD = ${MP_PKG}/${BLD}/${BUILD_TYPE}
MP_LIB = ${MP_BLD}/lib
MP_BIN = ${MP_BLD}/bin


########################################################################
# mp

# mp USRDEFINES
#
mp_USRDEFINES += \
-D_NO_INLINES \
-DNO_ASM \
${build_mp_USRDEFINES} \

# mp USRINCLUDES
#
mp_USRINCLUDES += \
-I${MP_SRC} \
-I${MP_SRC}/mpn \
-I${MP_SRC}/mpz \
${build_mp_USRINCLUDES} \

# mp USRCXXFLAGS
#
mp_USRCXXFLAGS += \
${build_mp_USRCXXFLAGS} \

# mp USRLIBDIRS
#
mp_USRLIBDIRS += \
-L${MP_LIB} \
${build_mp_USRLIBDIRS} \

# mp LIBS
#
mp_LIBS += \
-lmp \
${build_mp_LIBS} \

########################################################################

