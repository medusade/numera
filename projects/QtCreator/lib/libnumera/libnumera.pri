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
#   File: libnumera.pri
#
# Author: $author$
#   Date: 3/4/2018
#
# QtCreator .pri file for numera library libnumera
########################################################################

########################################################################
# libnumera

# libnumera TARGET
#
libnumera_TARGET = numera
libnumera_TEMPLATE = lib
libnumera_CONFIG += staticlib

# libnumera INCLUDEPATH
#
libnumera_INCLUDEPATH += \
$${numera_INCLUDEPATH} \

# libnumera DEFINES
#
libnumera_DEFINES += \
$${numera_DEFINES} \

########################################################################
# libnumera OBJECTIVE_HEADERS
#
#libnumera_OBJECTIVE_HEADERS += \
#$${NUMERA_SRC}/numera/base/Base.hh \

# libnumera OBJECTIVE_SOURCES
#
#libnumera_OBJECTIVE_SOURCES += \
#$${NUMERA_SRC}/numera/base/Base.mm \

########################################################################
# libnumera HEADERS
#
libnumera_HEADERS += \
$${NUMERA_SRC}/numera/base/base.hpp \

# libnumera SOURCES
#
libnumera_SOURCES += \
$${NUMERA_SRC}/numera/base/base.cpp \

########################################################################

