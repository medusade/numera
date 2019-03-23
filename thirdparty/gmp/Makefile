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
#   File: Makefile
#
# Author: $author$
#   Date: 3/11/2018
#
# Thirdparty Gcc Makefile for mp
########################################################################


########################################################################
#
# mp defs
#
########################################################################
MP_MAKEDIR=$(PWD)

MP_THIRDPARTY = $(MP_MAKEDIR)/..
#MP_BUILD_HOME = $(MP_THIRDPARTY)

ifndef MP_UNAME
MP_UNAME = $(shell uname)
endif

ifndef MP_OS
ifneq ($(MP_UNAME),Darwin)
MP_OS = linux
else
MP_OS = macosx
endif
endif

#
# mp version
#
MP_VERSION_MAJOR = 0
MP_VERSION_MINOR = 0
MP_VERSION_RELEASE = 0

MP_VERSION_SEPARATOR = .
MP_VERSION_MAJOR_SEPARATOR = $(MP_VERSION_SEPARATOR)
MP_VERSION_MINOR_SEPARATOR = $(MP_VERSION_SEPARATOR)

MP_VERSION_SHORT = $(MP_VERSION_MAJOR)$(MP_VERSION_MINOR)$(MP_VERSION_RELEASE)
MP_VERSION = $(MP_VERSION_MAJOR)$(MP_VERSION_MAJOR_SEPARATOR)$(MP_VERSION_MINOR)$(MP_VERSION_MINOR_SEPARATOR)$(MP_VERSION_RELEASE)

#
# mp name
#
MP_NAME_SEPARATOR = -
MP_NAME_BASE = mp
MP_NAME = $(MP_NAME_BASE)$(MP_NAME_SEPARATOR)$(MP_VERSION)
MP_INSTALL_NAME_SEPARATOR = -
MP_INSTALL_NAME = $(MP_NAME_BASE)$(MP_INSTALL_NAME_SEPARATOR)$(MP_VERSION)
MP_DIR = $(MP_NAME)

#
# mp archive
#
MP_ARCHIVED = tar
MP_COMPRESSED = gz
MP_ARCHIVE_SEPARATOR = .
MP_ARCHIVED_SEPARATOR = $(MP_ARCHIVE_SEPARATOR)
MP_COMPRESSED_SEPARATOR = $(MP_ARCHIVE_SEPARATOR)

MP_EXTRACT_DIR = $(MP_NAME)
MP_TGZ_PREFIX = 
MP_TGZ = $(MP_NAME)$(MP_TGZ_PREFIX)$(MP_ARCHIVED_SEPARATOR)$(MP_ARCHIVED)$(MP_COMPRESSED_SEPARATOR)$(MP_COMPRESSED)
MP_PATCH_TGZ_PREFIX = $(MP_NAME_SEPARATOR)patch
MP_PATCH_TGZ = $(MP_NAME)$(MP_PATCH_TGZ_PREFIX)$(MP_ARCHIVED_SEPARATOR)$(MP_ARCHIVED)$(MP_COMPRESSED_SEPARATOR)$(MP_COMPRESSED)
MP_DOCS_TGZ_PREFIX = $(MP_NAME_SEPARATOR)docs
MP_DOCS_TGZ = $(MP_NAME)$(MP_DOCS_TGZ_PREFIX)$(MP_ARCHIVED_SEPARATOR)$(MP_ARCHIVED)$(MP_COMPRESSED_SEPARATOR)$(MP_COMPRESSED)

#
# mp extract
#
ifeq ($(MP_ARCHIVED),tar)
ifeq ($(MP_COMPRESSED),gz)
MP_TAR_UNCOMPRESS = z
MP_TAR_COMPRESS = z
else
ifeq ($(MP_COMPRESSED),bz2)
MP_TAR_UNCOMPRESS = j
MP_TAR_COMPRESS = j
else
ifeq ($(MP_COMPRESSED),xz)
MP_TAR_UNCOMPRESS = J
MP_TAR_COMPRESS = J
else
endif
endif
endif
MP_LIST = tar -tv$(MP_TAR_UNCOMPRESS)f
MP_EXTRACT = tar -x$(MP_TAR_UNCOMPRESS)f
MP_ARCHIVE = tar -cv$(MP_TAR_COMPRESS)f
else
ifeq ($(MP_ARCHIVED),zip)
MP_LIST = unzip -l
MP_EXTRACT = unzip
MP_ARCHIVE = zip
else
MP_LIST = echo unable to list
MP_EXTRACT = echo unable to extract
MP_ARCHIVE = echo unable to archive
endif
endif

MP_LIST_TGZ = $(MP_LIST) $(MP_TGZ)
MP_EXTRACT_TGZ = $(MP_EXTRACT) $(MP_TGZ)
MP_TOUCH_EXTRACT = touch $(MP_DIR)
MP_REMOVE_DIR = $(MP_REMOVE) $(MP_DIR)

MP_LIST_PATCH = $(MP_LIST)
MP_EXTRACT_PATCH = $(MP_EXTRACT)
MP_LIST_PATCH_TGZ = $(MP_LIST_PATCH) $(MP_PATCH_TGZ)
MP_EXTRACT_PATCH_TGZ = $(MP_EXTRACT_PATCH) $(MP_PATCH_TGZ)

MP_LIST_DOCS = $(MP_LIST)
MP_EXTRACT_DOCS = $(MP_EXTRACT)
MP_LIST_DOCS_TGZ = $(MP_LIST_DOCS) $(MP_DOCS_TGZ)
MP_EXTRACT_DOCS_TGZ = $(MP_EXTRACT_DOCS) $(MP_DOCS_TGZ) -C$(MP_DOCS_PREFIX)

#
# mp build
#
ifndef MP_BUILD_HOME
MP_BUILD = $(HOME)/build
else
MP_BUILD = $(MP_BUILD_HOME)/build
endif
MP_PREFIX = $(MP_BUILD)/$(MP_INSTALL_NAME)
MP_EXEC_PREFIX = $(MP_PREFIX)
MP_CONF_PREFIX = $(MP_PREFIX)
MP_DOCS_PREFIX = $(MP_PREFIX)
MP_LINK_NAME = $(MP_BUILD)/$(MP_NAME_BASE)

MP_MKDIR = mkdir -p
MP_REMOVE = rm -r -f

MP_MAKE_DIR = $(MP_DIR)
MP_MAKE_PUSHD = pushd $(MP_MAKE_DIR)
MP_MAKE = make

#
# mp configure
#
ifneq ($(MP_UNAME), Darwin)
MP_CONFIGURE_UNAME = 
else
MP_CONFIGURE_UNAME = 
endif
MP_CONFIGURE_CONFIGURE = ./configure
MP_CONFIGURE_HELP = $(MP_CONFIGURE_CONFIGURE) --help
MP_CONFIGURE_PUSHD = pushd $(MP_MAKE_DIR)
MP_CONFIGURE = $(MP_CONFIGURE_CONFIGURE) \
$(MP_CONFIGURE_UNAME) --prefix=$(MP_PREFIX) --exec_prefix=$(MP_EXEC_PREFIX)

#
# mp help
#
MP_HELP = $(MP_CONFIGURE_HELP)

########################################################################
#
# rules
#
########################################################################

all: build

package: archive unextract

again: unextract build

test: test-mp

install-links: install-mp-links

install-docs: install-mp-docs

install-prefix: install-mp-prefix

install: install-mp

build: build-mp

clean: clean-mp

configed: configed-$(MP_DIR)

config: config-$(MP_DIR)

help: help-mp

list-docs: list-mp-docs

list-patch: list-mp-patch

extract-patch: extract-mp-patch

list: list-mp

extract: extract-mp

unextract: unextract-mp

archive: archive-mp

linked: mp-linked

prefixed: mp-prefixed

archived: mp-archived

extracted: mp-extracted

########################################################################
#
# mp rules
#
########################################################################

#
# Help mp
#
help-mp: $(MP_DIR)
	@($(MP_CONFIGURE_PUSHD);\
	  (($(MP_HELP)) || (exit 1));\
	  popd)

#
# Install mp
#
install-mp: configed-$(MP_DIR)
	@(echo Installing $(MP_DIR)...;\
	  $(MP_MAKE_PUSHD);\
	  (($(MP_MAKE) install) || (exit 1)) && \
	  ((touch $(MP_MAKEDIR)/configed-$(MP_DIR)) || (exit 1));\
	  popd)
	  
#
# Build mp
#
build-mp: configed-$(MP_DIR)
	@(echo Building $(MP_DIR)...;\
	  $(MP_MAKE_PUSHD);\
	  (($(MP_MAKE)) || (exit 1)) && \
	  ((touch $(MP_MAKEDIR)/configed-$(MP_DIR)) || (exit 1));\
	  popd)
	  
#
# Clean mp
#
clean-mp: configed-$(MP_DIR)
	@(echo Cleaning $(MP_DIR)...;\
	  $(MP_MAKE_PUSHD);\
	  (($(MP_MAKE) clean) || (exit 1)) && \
	  ((touch $(MP_MAKEDIR)/configed-$(MP_DIR)) || (exit 1));\
	  popd)
	  
#
# Test mp
#
test-mp: configed-$(MP_DIR)
	@(echo Building test $(MP_DIR)...;\
	  $(MP_MAKE_PUSHD);\
	  (($(MP_MAKE) test) || (exit 1)) && \
	  ((touch $(MP_MAKEDIR)/configed-$(MP_DIR)) || (exit 1));\
	  popd)
	  
#
# Config mp
#
config-$(MP_DIR): unconfig-$(MP_DIR) configed-$(MP_DIR)

unconfig-$(MP_DIR):
	@(rm -f configed-$(MP_DIR))

configed-$(MP_DIR): $(MP_DIR)
	@(echo Configing $(MP_DIR)...;\
	  $(MP_CONFIGURE_PUSHD);\
	  (($(MP_CONFIGURE)) || (exit 1)) && \
	  ((touch $(MP_DIR)) || (exit 1)) && \
	  ((touch $(MP_MAKEDIR)/configed-$(MP_DIR)) || (exit 1));\
	  popd)

########################################################################
# docs
########################################################################

#
# List mp Docs
#
list-mp-docs: $(MP_DOCS_TGZ)
	@(echo Listing $(MP_DOCS_TGZ)...;\
	  (($(MP_LIST_DOCS_TGZ)) || (exit 1)))

#
# Install mp Docs
#
install-mp-docs: $(MP_DOCS_PREFIX)
	@(echo Extracting $(MP_DOCS_TGZ)...;\
	  (($(MP_EXTRACT_DOCS_TGZ)) || (exit 1)))

########################################################################
# patch
########################################################################

#
# List mp Patch
#
list-mp-patch: $(MP_PATCH_TGZ)
	@(echo Listing $(MP_PATCH_TGZ)...;\
	  (($(MP_LIST_PATCH_TGZ)) || (exit 1)))

#
# Extract mp patch
#
extract-mp-patch: $(MP_DIR)
	@(echo Extracting $(MP_PATCH_TGZ)...;\
	  (($(MP_EXTRACT_PATCH_TGZ)) || (exit 1)))

########################################################################
# archive
########################################################################

#
# List mp
#
list-mp: 
	@(echo Listing $(MP_TGZ)...;\
	  (($(MP_LIST_TGZ)) || (exit 1)))

#
# mp extracted
#
mp-extracted: 
	@(echo $(MP_EXTRACT) $(MP_TGZ))

#
# Extract mp
#
extract-mp: unextract-mp $(MP_DIR)

unextract-mp: unconfig-$(MP_DIR)
	@(echo Removing $(MP_DIR)...;\
	  (($(MP_REMOVE_DIR)) || (exit 1)))

$(MP_DIR): $(MP_TGZ)
	@(echo Extracting $(MP_TGZ)...;\
	  (($(MP_EXTRACT_TGZ)) || (exit 1)) && \
	  (($(MP_TOUCH_EXTRACT)) || (exit 1)))
	  
#
# mp archived
#
mp-archived: 
	@(echo $(MP_TGZ))
	  
#
# Archive mp
#
archive-mp: 
	@(echo Archiving $(MP_DIR) to $(MP_TGZ)...;\
	  (($(MP_ARCHIVE) $(MP_TGZ) $(MP_DIR)) || (exit 1)))

########################################################################
# links
########################################################################

#
# mp linked
#
mp-linked: 
	@echo link is $(MP_LINK_NAME) "->" $(MP_PREFIX)
	  
#
# Install mp links
#
install-mp-links: 
	@((echo removing $(MP_LINK_NAME)) && \
	  ((rm -f $(MP_LINK_NAME)) || (exit 1)) && \
	  (echo Linking $(MP_LINK_NAME) "->" $(MP_PREFIX)) && \
	  ((ln -s $(MP_PREFIX) $(MP_LINK_NAME)) || (exit 1)))
	  
########################################################################
# prefix
########################################################################

#
# mp prefixed
#
mp-prefixed: 
	@((echo prefix is $(MP_PREFIX)) && \
	  (echo exec prefix is $(MP_EXEC_PREFIX)) && \
	  (echo conf prefix is $(MP_CONF_PREFIX)) && \
	  (echo docs prefix is $(MP_DOCS_PREFIX)))
	  
#
# Install mp prefix
#
install-mp-prefix: 
	@((echo makeing $(MP_PREFIX)) && \
	  ((mkdir -p $(MP_PREFIX)) || (exit 1)) && \
	  (echo makeing $(MP_EXEC_PREFIX)) && \
	  ((mkdir -p $(MP_EXEC_PREFIX)) || (exit 1)))
	  
$(MP_PREFIX):
	@(echo Makeing Directory $(MP_PREFIX)...;\
	  (($(MP_MKDIR) $(MP_PREFIX)) || (exit 1)))

$(MP_EXEC_PREFIX):
	@(echo Makeing Directory $(MP_EXEC_PREFIX)...;\
	  (($(MP_MKDIR) $(MP_EXEC_PREFIX)) || (exit 1)))

$(MP_CONF_PREFIX):
	@(echo Makeing Directory $(MP_CONF_PREFIX)...;\
	  (($(MP_MKDIR) $(MP_CONF_PREFIX)) || (exit 1)))

$(MP_DOCS_PREFIX):
	@(echo Makeing Directory $(MP_DOCS_PREFIX)...;\
	  (($(MP_MKDIR) $(MP_DOCS_PREFIX)) || (exit 1)))

