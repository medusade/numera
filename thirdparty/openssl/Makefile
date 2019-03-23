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
# Thirdparty Gcc Makefile for bn
########################################################################


########################################################################
#
# bn defs
#
########################################################################
BN_MAKEDIR=$(PWD)

BN_THIRDPARTY = $(BN_MAKEDIR)/..
#BN_BUILD_HOME = $(BN_THIRDPARTY)

ifndef BN_UNAME
BN_UNAME = $(shell uname)
endif

ifndef BN_OS
ifneq ($(BN_UNAME),Darwin)
BN_OS = linux
else
BN_OS = macosx
endif
endif

#
# bn version
#
BN_VERSION_MAJOR = 0
BN_VERSION_MINOR = 0
BN_VERSION_RELEASE = 0

BN_VERSION_SEPARATOR = .
BN_VERSION_MAJOR_SEPARATOR = $(BN_VERSION_SEPARATOR)
BN_VERSION_MINOR_SEPARATOR = $(BN_VERSION_SEPARATOR)

BN_VERSION_SHORT = $(BN_VERSION_MAJOR)$(BN_VERSION_MINOR)$(BN_VERSION_RELEASE)
BN_VERSION = $(BN_VERSION_MAJOR)$(BN_VERSION_MAJOR_SEPARATOR)$(BN_VERSION_MINOR)$(BN_VERSION_MINOR_SEPARATOR)$(BN_VERSION_RELEASE)

#
# bn name
#
BN_NAME_SEPARATOR = -
BN_NAME_BASE = bn
BN_NAME = $(BN_NAME_BASE)$(BN_NAME_SEPARATOR)$(BN_VERSION)
BN_INSTALL_NAME_SEPARATOR = -
BN_INSTALL_NAME = $(BN_NAME_BASE)$(BN_INSTALL_NAME_SEPARATOR)$(BN_VERSION)
BN_DIR = $(BN_NAME)

#
# bn archive
#
BN_ARCHIVED = tar
BN_COMPRESSED = gz
BN_ARCHIVE_SEPARATOR = .
BN_ARCHIVED_SEPARATOR = $(BN_ARCHIVE_SEPARATOR)
BN_COMPRESSED_SEPARATOR = $(BN_ARCHIVE_SEPARATOR)

BN_EXTRACT_DIR = $(BN_NAME)
BN_TGZ_PREFIX = 
BN_TGZ = $(BN_NAME)$(BN_TGZ_PREFIX)$(BN_ARCHIVED_SEPARATOR)$(BN_ARCHIVED)$(BN_COMPRESSED_SEPARATOR)$(BN_COMPRESSED)
BN_PATCH_TGZ_PREFIX = $(BN_NAME_SEPARATOR)patch
BN_PATCH_TGZ = $(BN_NAME)$(BN_PATCH_TGZ_PREFIX)$(BN_ARCHIVED_SEPARATOR)$(BN_ARCHIVED)$(BN_COMPRESSED_SEPARATOR)$(BN_COMPRESSED)
BN_DOCS_TGZ_PREFIX = $(BN_NAME_SEPARATOR)docs
BN_DOCS_TGZ = $(BN_NAME)$(BN_DOCS_TGZ_PREFIX)$(BN_ARCHIVED_SEPARATOR)$(BN_ARCHIVED)$(BN_COMPRESSED_SEPARATOR)$(BN_COMPRESSED)

#
# bn extract
#
ifeq ($(BN_ARCHIVED),tar)
ifeq ($(BN_COMPRESSED),gz)
BN_TAR_UNCOMPRESS = z
BN_TAR_COMPRESS = z
else
ifeq ($(BN_COMPRESSED),bz2)
BN_TAR_UNCOMPRESS = j
BN_TAR_COMPRESS = j
else
ifeq ($(BN_COMPRESSED),xz)
BN_TAR_UNCOMPRESS = J
BN_TAR_COMPRESS = J
else
endif
endif
endif
BN_LIST = tar -tv$(BN_TAR_UNCOMPRESS)f
BN_EXTRACT = tar -x$(BN_TAR_UNCOMPRESS)f
BN_ARCHIVE = tar -cv$(BN_TAR_COMPRESS)f
else
ifeq ($(BN_ARCHIVED),zip)
BN_LIST = unzip -l
BN_EXTRACT = unzip
BN_ARCHIVE = zip
else
BN_LIST = echo unable to list
BN_EXTRACT = echo unable to extract
BN_ARCHIVE = echo unable to archive
endif
endif

BN_LIST_TGZ = $(BN_LIST) $(BN_TGZ)
BN_EXTRACT_TGZ = $(BN_EXTRACT) $(BN_TGZ)
BN_TOUCH_EXTRACT = touch $(BN_DIR)
BN_REMOVE_DIR = $(BN_REMOVE) $(BN_DIR)

BN_LIST_PATCH = $(BN_LIST)
BN_EXTRACT_PATCH = $(BN_EXTRACT)
BN_LIST_PATCH_TGZ = $(BN_LIST_PATCH) $(BN_PATCH_TGZ)
BN_EXTRACT_PATCH_TGZ = $(BN_EXTRACT_PATCH) $(BN_PATCH_TGZ)

BN_LIST_DOCS = $(BN_LIST)
BN_EXTRACT_DOCS = $(BN_EXTRACT)
BN_LIST_DOCS_TGZ = $(BN_LIST_DOCS) $(BN_DOCS_TGZ)
BN_EXTRACT_DOCS_TGZ = $(BN_EXTRACT_DOCS) $(BN_DOCS_TGZ) -C$(BN_DOCS_PREFIX)

#
# bn build
#
ifndef BN_BUILD_HOME
BN_BUILD = $(HOME)/build
else
BN_BUILD = $(BN_BUILD_HOME)/build
endif
BN_PREFIX = $(BN_BUILD)/$(BN_INSTALL_NAME)
BN_EXEC_PREFIX = $(BN_PREFIX)
BN_CONF_PREFIX = $(BN_PREFIX)
BN_DOCS_PREFIX = $(BN_PREFIX)
BN_LINK_NAME = $(BN_BUILD)/$(BN_NAME_BASE)

BN_MKDIR = mkdir -p
BN_REMOVE = rm -r -f

BN_MAKE_DIR = $(BN_DIR)
BN_MAKE_PUSHD = pushd $(BN_MAKE_DIR)
BN_MAKE = make

#
# bn configure
#
ifneq ($(BN_UNAME), Darwin)
BN_CONFIGURE_UNAME = 
else
BN_CONFIGURE_UNAME = 
endif
BN_CONFIGURE_CONFIGURE = ./configure
BN_CONFIGURE_HELP = $(BN_CONFIGURE_CONFIGURE) --help
BN_CONFIGURE_PUSHD = pushd $(BN_MAKE_DIR)
BN_CONFIGURE = $(BN_CONFIGURE_CONFIGURE) \
$(BN_CONFIGURE_UNAME) --prefix=$(BN_PREFIX) --exec_prefix=$(BN_EXEC_PREFIX)

#
# bn help
#
BN_HELP = $(BN_CONFIGURE_HELP)

########################################################################
#
# rules
#
########################################################################

all: build

package: archive unextract

again: unextract build

test: test-bn

install-links: install-bn-links

install-docs: install-bn-docs

install-prefix: install-bn-prefix

install: install-bn

build: build-bn

clean: clean-bn

configed: configed-$(BN_DIR)

config: config-$(BN_DIR)

help: help-bn

list-docs: list-bn-docs

list-patch: list-bn-patch

extract-patch: extract-bn-patch

list: list-bn

extract: extract-bn

unextract: unextract-bn

archive: archive-bn

linked: bn-linked

prefixed: bn-prefixed

archived: bn-archived

extracted: bn-extracted

########################################################################
#
# bn rules
#
########################################################################

#
# Help bn
#
help-bn: $(BN_DIR)
	@($(BN_CONFIGURE_PUSHD);\
	  (($(BN_HELP)) || (exit 1));\
	  popd)

#
# Install bn
#
install-bn: configed-$(BN_DIR)
	@(echo Installing $(BN_DIR)...;\
	  $(BN_MAKE_PUSHD);\
	  (($(BN_MAKE) install) || (exit 1)) && \
	  ((touch $(BN_MAKEDIR)/configed-$(BN_DIR)) || (exit 1));\
	  popd)
	  
#
# Build bn
#
build-bn: configed-$(BN_DIR)
	@(echo Building $(BN_DIR)...;\
	  $(BN_MAKE_PUSHD);\
	  (($(BN_MAKE)) || (exit 1)) && \
	  ((touch $(BN_MAKEDIR)/configed-$(BN_DIR)) || (exit 1));\
	  popd)
	  
#
# Clean bn
#
clean-bn: configed-$(BN_DIR)
	@(echo Cleaning $(BN_DIR)...;\
	  $(BN_MAKE_PUSHD);\
	  (($(BN_MAKE) clean) || (exit 1)) && \
	  ((touch $(BN_MAKEDIR)/configed-$(BN_DIR)) || (exit 1));\
	  popd)
	  
#
# Test bn
#
test-bn: configed-$(BN_DIR)
	@(echo Building test $(BN_DIR)...;\
	  $(BN_MAKE_PUSHD);\
	  (($(BN_MAKE) test) || (exit 1)) && \
	  ((touch $(BN_MAKEDIR)/configed-$(BN_DIR)) || (exit 1));\
	  popd)
	  
#
# Config bn
#
config-$(BN_DIR): unconfig-$(BN_DIR) configed-$(BN_DIR)

unconfig-$(BN_DIR):
	@(rm -f configed-$(BN_DIR))

configed-$(BN_DIR): $(BN_DIR)
	@(echo Configing $(BN_DIR)...;\
	  $(BN_CONFIGURE_PUSHD);\
	  (($(BN_CONFIGURE)) || (exit 1)) && \
	  ((touch $(BN_DIR)) || (exit 1)) && \
	  ((touch $(BN_MAKEDIR)/configed-$(BN_DIR)) || (exit 1));\
	  popd)

########################################################################
# docs
########################################################################

#
# List bn Docs
#
list-bn-docs: $(BN_DOCS_TGZ)
	@(echo Listing $(BN_DOCS_TGZ)...;\
	  (($(BN_LIST_DOCS_TGZ)) || (exit 1)))

#
# Install bn Docs
#
install-bn-docs: $(BN_DOCS_PREFIX)
	@(echo Extracting $(BN_DOCS_TGZ)...;\
	  (($(BN_EXTRACT_DOCS_TGZ)) || (exit 1)))

########################################################################
# patch
########################################################################

#
# List bn Patch
#
list-bn-patch: $(BN_PATCH_TGZ)
	@(echo Listing $(BN_PATCH_TGZ)...;\
	  (($(BN_LIST_PATCH_TGZ)) || (exit 1)))

#
# Extract bn patch
#
extract-bn-patch: $(BN_DIR)
	@(echo Extracting $(BN_PATCH_TGZ)...;\
	  (($(BN_EXTRACT_PATCH_TGZ)) || (exit 1)))

########################################################################
# archive
########################################################################

#
# List bn
#
list-bn: 
	@(echo Listing $(BN_TGZ)...;\
	  (($(BN_LIST_TGZ)) || (exit 1)))

#
# bn extracted
#
bn-extracted: 
	@(echo $(BN_EXTRACT) $(BN_TGZ))

#
# Extract bn
#
extract-bn: unextract-bn $(BN_DIR)

unextract-bn: unconfig-$(BN_DIR)
	@(echo Removing $(BN_DIR)...;\
	  (($(BN_REMOVE_DIR)) || (exit 1)))

$(BN_DIR): $(BN_TGZ)
	@(echo Extracting $(BN_TGZ)...;\
	  (($(BN_EXTRACT_TGZ)) || (exit 1)) && \
	  (($(BN_TOUCH_EXTRACT)) || (exit 1)))
	  
#
# bn archived
#
bn-archived: 
	@(echo $(BN_TGZ))
	  
#
# Archive bn
#
archive-bn: 
	@(echo Archiving $(BN_DIR) to $(BN_TGZ)...;\
	  (($(BN_ARCHIVE) $(BN_TGZ) $(BN_DIR)) || (exit 1)))

########################################################################
# links
########################################################################

#
# bn linked
#
bn-linked: 
	@echo link is $(BN_LINK_NAME) "->" $(BN_PREFIX)
	  
#
# Install bn links
#
install-bn-links: 
	@((echo removing $(BN_LINK_NAME)) && \
	  ((rm -f $(BN_LINK_NAME)) || (exit 1)) && \
	  (echo Linking $(BN_LINK_NAME) "->" $(BN_PREFIX)) && \
	  ((ln -s $(BN_PREFIX) $(BN_LINK_NAME)) || (exit 1)))
	  
########################################################################
# prefix
########################################################################

#
# bn prefixed
#
bn-prefixed: 
	@((echo prefix is $(BN_PREFIX)) && \
	  (echo exec prefix is $(BN_EXEC_PREFIX)) && \
	  (echo conf prefix is $(BN_CONF_PREFIX)) && \
	  (echo docs prefix is $(BN_DOCS_PREFIX)))
	  
#
# Install bn prefix
#
install-bn-prefix: 
	@((echo makeing $(BN_PREFIX)) && \
	  ((mkdir -p $(BN_PREFIX)) || (exit 1)) && \
	  (echo makeing $(BN_EXEC_PREFIX)) && \
	  ((mkdir -p $(BN_EXEC_PREFIX)) || (exit 1)))
	  
$(BN_PREFIX):
	@(echo Makeing Directory $(BN_PREFIX)...;\
	  (($(BN_MKDIR) $(BN_PREFIX)) || (exit 1)))

$(BN_EXEC_PREFIX):
	@(echo Makeing Directory $(BN_EXEC_PREFIX)...;\
	  (($(BN_MKDIR) $(BN_EXEC_PREFIX)) || (exit 1)))

$(BN_CONF_PREFIX):
	@(echo Makeing Directory $(BN_CONF_PREFIX)...;\
	  (($(BN_MKDIR) $(BN_CONF_PREFIX)) || (exit 1)))

$(BN_DOCS_PREFIX):
	@(echo Makeing Directory $(BN_DOCS_PREFIX)...;\
	  (($(BN_MKDIR) $(BN_DOCS_PREFIX)) || (exit 1)))

