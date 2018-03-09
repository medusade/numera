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
#   File: dsa.pri
#
# Author: $author$
#   Date: 3/8/2018
#
# QtCreator .pri file for numera executable dsa
########################################################################

########################################################################
# dsa

# dsa TARGET
#
dsa_TARGET = dsa

# dsa INCLUDEPATH
#
dsa_INCLUDEPATH += \
$${numera_INCLUDEPATH} \

# dsa DEFINES
#
dsa_DEFINES += \
$${numera_DEFINES} \

########################################################################
# dsa OBJECTIVE_HEADERS
#
#dsa_OBJECTIVE_HEADERS += \
#$${NUMERA_SRC}/numera/base/Base.hh \

# dsa OBJECTIVE_SOURCES
#
#dsa_OBJECTIVE_SOURCES += \
#$${NUMERA_SRC}/numera/base/Base.mm \

########################################################################
# dsa HEADERS
#
dsa_HEADERS += \
$${NUMERA_SRC}/numera/console/mp/main_opt.hpp \
$${NUMERA_SRC}/numera/console/mp/main.hpp \
$${NUMERA_SRC}/numera/app/console/dsa/main.hpp \

# dsa SOURCES
#
dsa_SOURCES += \
$${NUMERA_SRC}/numera/console/main_main.cpp \
$${NUMERA_SRC}/numera/console/mp/main_opt.cpp \
$${NUMERA_SRC}/numera/app/console/dsa/main.cpp \

########################################################################
# dsa FRAMEWORKS
#
dsa_FRAMEWORKS += \
$${numera_FRAMEWORKS} \

# dsa LIBS
#
dsa_LIBS += \
$${numera_LIBS} \
$${bn_LIBS} \
$${mp_LIBS} \


