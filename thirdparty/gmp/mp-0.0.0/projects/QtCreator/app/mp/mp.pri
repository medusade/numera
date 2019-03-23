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
#   File: mp.pri
#
# Author: $author$
#   Date: 3/5/2018
#
# QtCreator .pri file for mp executable mp
########################################################################

########################################################################
# mp

# mp_exe TARGET
#
mp_exe_TARGET = mp

# mp_exe INCLUDEPATH
#
mp_exe_INCLUDEPATH += \
$${mp_INCLUDEPATH} \

# mp_exe DEFINES
#
mp_exe_DEFINES += \
$${mp_DEFINES} \

########################################################################
# mp_exe OBJECTIVE_HEADERS
#
#mp_exe_OBJECTIVE_HEADERS += \
#$${MP_SRC}/mp/base/Base.hh \

# mp_exe OBJECTIVE_SOURCES
#
#mp_exe_OBJECTIVE_SOURCES += \
#$${MP_SRC}/mp/base/Base.mm \

########################################################################
# mp_exe HEADERS
#
mp_exe_HEADERS += \
$${MP_SRC}/../../gnu/app/console/mp/main_main.hpp \

# mp_exe SOURCES
#
mp_exe_SOURCES += \
$${MP_SRC}/../../gnu/app/console/mp/main_main.cpp \

########################################################################
# mp_exe FRAMEWORKS
#
mp_exe_FRAMEWORKS += \
$${mp_FRAMEWORKS} \

# mp_exe LIBS
#
mp_exe_LIBS += \
$${mp_LIBS} \


