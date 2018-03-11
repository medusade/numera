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
#   File: rsa.pro
#
# Author: $author$
#   Date: 3/10/2018
#
# QtCreator .pro file for numera executable rsa
########################################################################
include(../../../../../build/QtCreator/numera.pri)
include(../../../../QtCreator/numera.pri)
include(../../numera.pri)
include(../../../../QtCreator/app/rsa/rsa.pri)

TARGET = $${rsa_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${rsa_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${rsa_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${rsa_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
SOURCES += \
$${rsa_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${rsa_HEADERS} \

# SOURCES
#
SOURCES += \
$${rsa_SOURCES} \
$${OBJECTIVE_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${rsa_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${rsa_LIBS} \
$${FRAMEWORKS} \


