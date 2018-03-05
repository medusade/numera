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
#   File: libnumera.pro
#
# Author: $author$
#   Date: 3/4/2018
#
# QtCreator .pro file for numera library libnumera
########################################################################
include(../../../../../build/QtCreator/numera.pri)
include(../../../../QtCreator/numera.pri)
include(../../numera.pri)
include(../../../../QtCreator/lib/libnumera/libnumera.pri)

TARGET = $${libnumera_TARGET}
TEMPLATE = $${libnumera_TEMPLATE}
CONFIG += $${libnumera_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libnumera_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libnumera_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libnumera_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${libnumera_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libnumera_HEADERS} \

# SOURCES
#
SOURCES += \
$${libnumera_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################


