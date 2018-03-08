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
# generic Gcc Makefile for mp Library libmp
########################################################################


#
# target
#
libmp_LIBTARGET = libmp.${LIBEXT}

########################################################################

#
# user c++ flags
#
libmp_USRCXXFLAGS += \
${mp_USRCXXFLAGS} \

#
# user defines
#
libmp_USRDEFINES += \
${mp_USRDEFINES} \

#
# user includes
#
libmp_USRINCLUDES += \
${mp_USRINCLUDES} \

#
# user libdirs
#
libmp_USRLIBDIRS += \
${mp_USRLIBDIRS} \

########################################################################

#
# Library .c sources
#
libmp_LIB_C_SOURCES += \
${MP_SRC}/extract-double.c \
${MP_SRC}/insert-double.c \
${MP_SRC}/memory.c \
${MP_SRC}/mp_bpl.c \
${MP_SRC}/mp_clz_tab.c \
${MP_SRC}/mp_set_fns.c \
${MP_SRC}/stack-alloc.c \
${MP_SRC}/version.c \

#
# Library .cc sources
#
#libmp_LIB_CC_SOURCES += \
#${MP_SRC}/mp/base/Base.cc \

#
# Library .cxx sources
#
#libmp_LIB_CXX_SOURCES += \
#${MP_SRC}/mp/base/Base.cxx \

#
# Library .cpp sources
#
#libmp_LIB_CPP_SOURCES += \
#${MP_SRC}/mp/base/Base.cpp \

#
# Library .m sources
#
#libmp_LIB_M_SOURCES += \
#${MP_SRC}/mp/base/Base.m \

#
# Library .mm sources
#
#libmp_LIB_MM_SOURCES += \
#${MP_SRC}/mp/base/Base.mm \


########################################################################




