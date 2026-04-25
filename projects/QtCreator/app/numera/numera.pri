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
#   File: numera.pri
#
# Author: $author$
#   Date: 2/25/2024
#
# generic QtCreator project file for medusade framework numera executable numera
########################################################################

########################################################################
# numera

# numera_exe TARGET
#
numera_exe_TARGET = numera

# numera_exe INCLUDEPATH
#
numera_exe_INCLUDEPATH += \
$${numera_INCLUDEPATH} \

# numera_exe DEFINES
#
numera_exe_DEFINES += \
$${numera_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# numera_exe OBJECTIVE_HEADERS
#
#numera_exe_OBJECTIVE_HEADERS += \
#$${NUMERA_SRC}/xos/app/console/numera/main.hh \

# numera_exe OBJECTIVE_SOURCES
#
#numera_exe_OBJECTIVE_SOURCES += \
#$${NUMERA_SRC}/xos/app/console/numera/main.mm \

########################################################################
# numera_exe HEADERS
#
numera_exe_HEADERS += \
$${NUMERA_SRC}/numera/console/main_opt.hpp \
$${NUMERA_SRC}/numera/console/main.hpp \
$${NUMERA_SRC}/numera/console/main_main.hpp \
$${NUMERA_SRC}/numera/console/lib/numera/version/main.hpp \
$${NUMERA_SRC}/numera/app/console/numera/main_opt.hpp \
$${NUMERA_SRC}/numera/app/console/numera/main.hpp \

# numera_exe SOURCES
#
numera_exe_SOURCES += \
$${NUMERA_SRC}/numera/console/main_main.cpp \
$${NUMERA_SRC}/numera/app/console/numera/main_opt.cpp \
$${NUMERA_SRC}/numera/app/console/numera/main.cpp \

########################################################################
# numera_exe FRAMEWORKS
#
numera_exe_FRAMEWORKS += \
$${numera_FRAMEWORKS} \

# numera_exe LIBS
#
numera_exe_LIBS += \
$${numera_LIBS} \

########################################################################
# NO Qt
QT -= gui core
