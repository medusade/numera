########################################################################
# Copyright (c) 1988-2024 $organization$
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
#   File: numera.pro
#
# Author: $author$
#   Date: 2/25/2024
#
# os specific QtCreator project .pro file for medusade framework numera executable numera
########################################################################
# Depends: bn;mp;mbuint;rostra;nadir
#
# Debug: numera/build/os/QtCreator/Debug/bin/numera
# Release: numera/build/os/QtCreator/Release/bin/numera
# Profile: numera/build/os/QtCreator/Profile/bin/numera
#
include(../../../../../build/QtCreator/numera.pri)
include(../../../../QtCreator/numera.pri)
include(../../numera.pri)
include(../../../../QtCreator/app/numera/numera.pri)

TARGET = $${numera_exe_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${numera_exe_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${numera_exe_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${numera_exe_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${numera_exe_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${numera_exe_HEADERS} \
$${numera_exe_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${numera_exe_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${numera_exe_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${numera_exe_LIBS} \
$${FRAMEWORKS} \

########################################################################
