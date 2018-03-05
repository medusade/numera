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
# build QtCreator .pri file for numera
########################################################################

########################################################################
# bn
#
# pkg-config --cflags --libs bn
#

# build bn INCLUDEPATH
#
build_bn_INCLUDEPATH += \

# build bn DEFINES
#
build_bn_DEFINES += \

# build bn LIBS
#
build_bn_LIBS += \

########################################################################
# mp
#
# pkg-config --cflags --libs mp
#

# build mp INCLUDEPATH
#
build_mp_INCLUDEPATH += \

# build mp DEFINES
#
build_mp_DEFINES += \

# build mp LIBS
#
build_mp_LIBS += \

########################################################################
# rostra
#
# pkg-config --cflags --libs rostra
#

# build rostra INCLUDEPATH
#
build_rostra_INCLUDEPATH += \

# build rostra DEFINES
#
build_rostra_DEFINES += \

# build rostra LIBS
#
build_rostra_LIBS += \

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

# build nadir INCLUDEPATH
#
build_nadir_INCLUDEPATH += \

# build nadir DEFINES
#
build_nadir_DEFINES += \

# build nadir LIBS
#
build_nadir_LIBS += \

########################################################################
# numera

# build numera INCLUDEPATH
#
build_numera_INCLUDEPATH += \
$${build_nadir_INCLUDEPATH} \
$${build_rostra_INCLUDEPATH} \


# build numera DEFINES
#
build_numera_DEFINES += \
$${build_rostra_DEFINES} \
$${build_nadir_DEFINES} \


# build numera LIBS
#
build_numera_LIBS += \
$${build_nadir_LIBS} \
$${build_rostra_LIBS} \


