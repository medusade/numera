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
#   File: bn.pri
#
# Author: $author$
#   Date: 3/5/2018
#
# QtCreator .pri file for bn executable bn
########################################################################

########################################################################
# bn

# bn_exe TARGET
#
bn_exe_TARGET = bn

# bn_exe INCLUDEPATH
#
bn_exe_INCLUDEPATH += \
$${bn_INCLUDEPATH} \

# bn_exe DEFINES
#
bn_exe_DEFINES += \
$${bn_DEFINES} \

########################################################################
# bn_exe OBJECTIVE_HEADERS
#
#bn_exe_OBJECTIVE_HEADERS += \
#$${BN_SRC}/bn/base/Base.hh \

# bn_exe OBJECTIVE_SOURCES
#
#bn_exe_OBJECTIVE_SOURCES += \
#$${BN_SRC}/bn/base/Base.mm \

########################################################################
# bn_exe HEADERS
#
bn_exe_HEADERS += \
$${BN_SRC}/../../openssl/app/console/bn/main_main.hpp \

# bn_exe SOURCES
#
bn_exe_SOURCES += \
$${BN_SRC}/../../openssl/app/console/bn/main_main.cpp \

########################################################################
# bn_exe FRAMEWORKS
#
bn_exe_FRAMEWORKS += \
$${bn_FRAMEWORKS} \

# bn_exe LIBS
#
bn_exe_LIBS += \
$${bn_LIBS} \


