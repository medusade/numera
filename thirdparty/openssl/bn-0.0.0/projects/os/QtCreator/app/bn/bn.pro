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
#   File: bn.pro
#
# Author: $author$
#   Date: 3/5/2018
#
# QtCreator .pro file for bn executable bn
########################################################################
include(../../../../../build/QtCreator/bn.pri)
include(../../../../QtCreator/bn.pri)
include(../../bn.pri)
include(../../../../QtCreator/app/bn/bn.pri)

TARGET = $${bn_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${bn_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${bn_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${bn_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${bn_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${bn_exe_HEADERS} \

# SOURCES
#
SOURCES += \
$${bn_exe_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${bn_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${bn_exe_LIBS} \
$${FRAMEWORKS} \


