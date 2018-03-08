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
# build Gcc Makefile for numera
########################################################################


########################################################################
# bn
#
# pkg-config --cflags --libs bn
#

ifndef USE_HOME_BUILD_bn
USE_HOME_BUILD_bn = no
endif

ifeq ($(USE_HOME_BUILD_bn),yes)
#
# home build bn
#
build_bn_USRDEFINES += \

build_bn_USRINCLUDES += \
-I$(HOME)/build/bn/include \

build_bn_USRCXXFLAGS += \

build_bn_USRLIBDIRS += \
-L$(HOME)/build/bn/lib \

build_bn_LIBS += \
-lbn \

build_bn_FRAMEWORKS += \

else
#
# build bn
#
build_bn_USRDEFINES += \

build_bn_USRINCLUDES += \

build_bn_USRCXXFLAGS += \

build_bn_USRLIBDIRS += \

build_bn_LIBS += \

build_bn_FRAMEWORKS += \

endif

########################################################################
# mp
#
# pkg-config --cflags --libs mp
#

ifndef USE_HOME_BUILD_mp
USE_HOME_BUILD_mp = no
endif

ifeq ($(USE_HOME_BUILD_mp),yes)
#
# home build mp
#
build_mp_USRDEFINES += \

build_mp_USRINCLUDES += \
-I$(HOME)/build/mp/include \

build_mp_USRCXXFLAGS += \

build_mp_USRLIBDIRS += \
-L$(HOME)/build/mp/lib \

build_mp_LIBS += \
-lmp \

build_mp_FRAMEWORKS += \

else
#
# build mp
#
build_mp_USRDEFINES += \

build_mp_USRINCLUDES += \

build_mp_USRCXXFLAGS += \

build_mp_USRLIBDIRS += \

build_mp_LIBS += \

build_mp_FRAMEWORKS += \

endif

########################################################################
# rostra
#
# pkg-config --cflags --libs rostra
#

ifndef USE_HOME_BUILD_rostra
USE_HOME_BUILD_rostra = no
endif

ifeq ($(USE_HOME_BUILD_rostra),yes)
#
# home build rostra
#
build_rostra_USRDEFINES += \

build_rostra_USRINCLUDES += \
-I$(HOME)/build/rostra/include \

build_rostra_USRCXXFLAGS += \

build_rostra_USRLIBDIRS += \
-L$(HOME)/build/rostra/lib \

build_rostra_LIBS += \
-lrostra \

build_rostra_FRAMEWORKS += \

else
#
# build rostra
#
build_rostra_USRDEFINES += \

build_rostra_USRINCLUDES += \

build_rostra_USRCXXFLAGS += \

build_rostra_USRLIBDIRS += \

build_rostra_LIBS += \

build_rostra_FRAMEWORKS += \

endif

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

ifndef USE_HOME_BUILD_nadir
USE_HOME_BUILD_nadir = no
endif

ifeq ($(USE_HOME_BUILD_nadir),yes)
#
# home build nadir
#
build_nadir_USRDEFINES += \

build_nadir_USRINCLUDES += \
-I$(HOME)/build/nadir/include \

build_nadir_USRCXXFLAGS += \

build_nadir_USRLIBDIRS += \
-L$(HOME)/build/nadir/lib \

build_nadir_LIBS += \
-lnadir \

build_nadir_FRAMEWORKS += \

else
#
# build nadir
#
build_nadir_USRDEFINES += \

build_nadir_USRINCLUDES += \

build_nadir_USRCXXFLAGS += \

build_nadir_USRLIBDIRS += \

build_nadir_LIBS += \

build_nadir_FRAMEWORKS += \

endif

########################################################################
# numera

# build numera USRDEFINES
#
build_numera_USRDEFINES += \
${build_bn_USRDEFINES} \
${build_mp_USRDEFINES} \
${build_rostra_USRDEFINES} \
${build_nadir_USRDEFINES} \


# build numera USRINCLUDES
#
build_numera_USRINCLUDES += \
${build_nadir_USRINCLUDES} \
${build_rostra_USRINCLUDES} \
${build_mp_USRINCLUDES} \
${build_bn_USRINCLUDES} \


# build numera USRCXXFLAGS
#
build_numera_USRCXXFLAGS += \
${build_bn_USRCXXFLAGS} \
${build_mp_USRCXXFLAGS} \
${build_rostra_USRCXXFLAGS} \
${build_nadir_USRCXXFLAGS} \


# build numera USRLIBDIRS
#
build_numera_USRLIBDIRS += \
${build_nadir_USRLIBDIRS} \
${build_rostra_USRLIBDIRS} \
${build_mp_USRLIBDIRS} \
${build_bn_USRLIBDIRS} \


# build numera FRAMEWORKS
#
build_numera_FRAMEWORKS += \
${build_nadir_FRAMEWORKS} \
${build_rostra_FRAMEWORKS} \
${build_mp_FRAMEWORKS} \
${build_bn_FRAMEWORKS} \


# build numera LIBS
#
build_numera_LIBS += \
${build_nadir_LIBS} \
${build_rostra_LIBS} \
${build_mp_LIBS} \
${build_bn_LIBS} \
${build_numera_FRAMEWORKS}


