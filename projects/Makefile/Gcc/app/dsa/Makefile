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
#   Date: 3/9/2018
#
# generic Gcc Makefile for numera Executable dsa
########################################################################


#
# target
#
dsa_EXETARGET = dsa

########################################################################

#
# user c++ flags
#
dsa_USRCXXFLAGS += \
${numera_USRCXXFLAGS} \

#
# user defines
#
dsa_USRDEFINES += \
${numera_USRDEFINES} \

#
# user includes
#
dsa_USRINCLUDES += \
${numera_USRINCLUDES} \

#
# user libdirs
#
dsa_USRLIBDIRS += \
${numera_USRLIBDIRS} \

########################################################################

#
# Executable .c sources
#
#dsa_EXE_C_SOURCES += \
#${NUMERA_SRC}/numera/base/Base.c \

#
# Executable .cc sources
#
#dsa_EXE_CC_SOURCES += \
#${NUMERA_SRC}/numera/base/Base.cc \

#
# Executable .cxx sources
#
#dsa_EXE_CXX_SOURCES += \
#${NUMERA_SRC}/numera/base/Base.cxx \

#
# Executable .cpp sources
#
dsa_EXE_CPP_SOURCES += \
${NUMERA_SRC}/numera/console/main_main.cpp \
${NUMERA_SRC}/numera/console/mp/main_opt.cpp \
${NUMERA_SRC}/numera/app/console/dsa/main.cpp \

#
# Executable .m sources
#
#dsa_EXE_M_SOURCES += \
#${NUMERA_SRC}/numera/base/Base.m \

#
# Executable .mm sources
#
#dsa_EXE_MM_SOURCES += \
#${NUMERA_SRC}/numera/base/Base.mm \


########################################################################

#
# Executable libraries
#
dsa_LIBS += \
${numera_LIBS} \

