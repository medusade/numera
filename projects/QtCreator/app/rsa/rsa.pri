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
#   File: rsa.pri
#
# Author: $author$
#   Date: 3/10/2018
#
# QtCreator .pri file for numera executable rsa
########################################################################

########################################################################
# rsa

# rsa TARGET
#
rsa_TARGET = rsa

# rsa INCLUDEPATH
#
rsa_INCLUDEPATH += \
$${numera_INCLUDEPATH} \

# rsa DEFINES
#
rsa_DEFINES += \
$${numera_DEFINES} \

########################################################################
# rsa OBJECTIVE_HEADERS
#
#rsa_OBJECTIVE_HEADERS += \
#$${NUMERA_SRC}/numera/base/Base.hh \

# rsa OBJECTIVE_SOURCES
#
#rsa_OBJECTIVE_SOURCES += \
#$${NUMERA_SRC}/numera/base/Base.mm \

########################################################################
# rsa HEADERS
#
rsa_HEADERS += \
$${NUMERA_SRC}/numera/console/mp/main_opt.hpp \
$${NUMERA_SRC}/numera/console/mp/main.hpp \
$${NUMERA_SRC}/numera/app/console/rsa/main.hpp \

# rsa SOURCES
#
rsa_SOURCES += \
$${NUMERA_SRC}/numera/console/main_main.cpp \
$${NUMERA_SRC}/numera/console/mp/main_opt.cpp \
$${NUMERA_SRC}/numera/app/console/rsa/main.cpp \

########################################################################
# rsa FRAMEWORKS
#
rsa_FRAMEWORKS += \
$${numera_FRAMEWORKS} \

# rsa LIBS
#
rsa_LIBS += \
$${numera_LIBS} \
$${bn_LIBS} \
$${mp_LIBS} \


