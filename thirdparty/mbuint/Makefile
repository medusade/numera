########################################################################
# Copyright (c) 1988-2019 $organization$
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
#   Date: 3/21/2019
#
# Thirdpary Makefile for mbuint
########################################################################

########################################################################
#
# mbuint defs
#
########################################################################
MBUINT_MAKEDIR=$(PWD)

MBUINT_THIRDPARTY = $(MBUINT_MAKEDIR)/..
#MBUINT_BUILD_HOME = $(MBUINT_THIRDPARTY)

ifndef MBUINT_UNAME
MBUINT_UNAME = $(shell uname)
endif

ifndef MBUINT_OS
ifneq ($(MBUINT_UNAME), Darwin)
MBUINT_OS = linux
else
MBUINT_OS = macosx
endif
endif

#
# mbuint version
#
MBUINT_VERSION_MAJOR = 0
MBUINT_VERSION_MINOR = 0
MBUINT_VERSION_RELEASE = 0

MBUINT_VERSION_SEPARATOR = .
MBUINT_VERSION_MAJOR_SEPARATOR = $(MBUINT_VERSION_SEPARATOR)
MBUINT_VERSION_MINOR_SEPARATOR = $(MBUINT_VERSION_SEPARATOR)

MBUINT_VERSION_SHORT = $(MBUINT_VERSION_MAJOR)$(MBUINT_VERSION_MINOR)$(MBUINT_VERSION_RELEASE)
MBUINT_VERSION = $(MBUINT_VERSION_MAJOR)$(MBUINT_VERSION_MAJOR_SEPARATOR)$(MBUINT_VERSION_MINOR)$(MBUINT_VERSION_MINOR_SEPARATOR)$(MBUINT_VERSION_RELEASE)

#
# mbuint name
#
MBUINT_NAME_SEPARATOR = -
MBUINT_NAME_BASE = mbuint
MBUINT_NAME = $(MBUINT_NAME_BASE)$(MBUINT_NAME_SEPARATOR)$(MBUINT_VERSION)
MBUINT_INSTALL_NAME_SEPARATOR = -
MBUINT_INSTALL_NAME = $(MBUINT_NAME_BASE)$(MBUINT_INSTALL_NAME_SEPARATOR)$(MBUINT_VERSION)
MBUINT_DIR = $(MBUINT_NAME)

#
# mbuint archive
#
MBUINT_ARCHIVED = tar
MBUINT_COMPRESSED = gz
MBUINT_ARCHIVE_SEPARATOR = .
MBUINT_ARCHIVED_SEPARATOR = $(MBUINT_ARCHIVE_SEPARATOR)
MBUINT_COMPRESSED_SEPARATOR = $(MBUINT_ARCHIVE_SEPARATOR)

MBUINT_EXTRACT_DIR = $(MBUINT_NAME)
MBUINT_TGZ_PREFIX = 
MBUINT_TGZ = $(MBUINT_NAME)$(MBUINT_TGZ_PREFIX)$(MBUINT_ARCHIVED_SEPARATOR)$(MBUINT_ARCHIVED)$(MBUINT_COMPRESSED_SEPARATOR)$(MBUINT_COMPRESSED)
MBUINT_PATCH_TGZ_PREFIX = $(MBUINT_NAME_SEPARATOR)patch
MBUINT_PATCH_TGZ = $(MBUINT_NAME)$(MBUINT_PATCH_TGZ_PREFIX)$(MBUINT_ARCHIVED_SEPARATOR)$(MBUINT_ARCHIVED)$(MBUINT_COMPRESSED_SEPARATOR)$(MBUINT_COMPRESSED)
MBUINT_DOCS_TGZ_PREFIX = $(MBUINT_NAME_SEPARATOR)docs
MBUINT_DOCS_TGZ = $(MBUINT_NAME)$(MBUINT_DOCS_TGZ_PREFIX)$(MBUINT_ARCHIVED_SEPARATOR)$(MBUINT_ARCHIVED)$(MBUINT_COMPRESSED_SEPARATOR)$(MBUINT_COMPRESSED)

#
# mbuint extract
#
ifeq ($(MBUINT_ARCHIVED),tar)
ifeq ($(MBUINT_COMPRESSED),gz)
MBUINT_TAR_UNCOMPRESS = z
MBUINT_TAR_COMPRESS = z
else
ifeq ($(MBUINT_COMPRESSED),bz2)
MBUINT_TAR_UNCOMPRESS = j
MBUINT_TAR_COMPRESS = j
else
ifeq ($(MBUINT_COMPRESSED),xz)
MBUINT_TAR_UNCOMPRESS = J
MBUINT_TAR_COMPRESS = J
else
endif
endif
endif
MBUINT_LIST = tar -tv$(MBUINT_TAR_UNCOMPRESS)f
MBUINT_EXTRACT = tar -x$(MBUINT_TAR_UNCOMPRESS)f
MBUINT_ARCHIVE = tar -cv$(MBUINT_TAR_COMPRESS)f
else
ifeq ($(MBUINT_ARCHIVED),zip)
MBUINT_LIST = unzip -l
MBUINT_EXTRACT = unzip
MBUINT_ARCHIVE = zip
else
MBUINT_LIST = echo unable to list
MBUINT_EXTRACT = echo unable to extract
MBUINT_ARCHIVE = echo unable to archive
endif
endif

MBUINT_LIST_TGZ = $(MBUINT_LIST) $(MBUINT_TGZ)
MBUINT_EXTRACT_TGZ = $(MBUINT_EXTRACT) $(MBUINT_TGZ)
MBUINT_TOUCH_EXTRACT = touch $(MBUINT_DIR)
MBUINT_REMOVE_DIR = $(MBUINT_REMOVE) $(MBUINT_DIR)

MBUINT_LIST_PATCH = $(MBUINT_LIST)
MBUINT_EXTRACT_PATCH = $(MBUINT_EXTRACT)
MBUINT_LIST_PATCH_TGZ = $(MBUINT_LIST_PATCH) $(MBUINT_PATCH_TGZ)
MBUINT_EXTRACT_PATCH_TGZ = $(MBUINT_EXTRACT_PATCH) $(MBUINT_PATCH_TGZ)

MBUINT_LIST_DOCS = $(MBUINT_LIST)
MBUINT_EXTRACT_DOCS = $(MBUINT_EXTRACT)
MBUINT_LIST_DOCS_TGZ = $(MBUINT_LIST_DOCS) $(MBUINT_DOCS_TGZ)
MBUINT_EXTRACT_DOCS_TGZ = $(MBUINT_EXTRACT_DOCS) $(MBUINT_DOCS_TGZ) -C$(MBUINT_DOCS_PREFIX)

#
# mbuint build
#
ifndef MBUINT_BUILD_HOME
MBUINT_BUILD = $(HOME)/build
else
MBUINT_BUILD = $(MBUINT_BUILD_HOME)/build
endif
MBUINT_PREFIX = $(MBUINT_BUILD)/$(MBUINT_INSTALL_NAME)
MBUINT_EXEC_PREFIX = $(MBUINT_PREFIX)
MBUINT_CONF_PREFIX = $(MBUINT_PREFIX)
MBUINT_DOCS_PREFIX = $(MBUINT_PREFIX)
MBUINT_LINK_NAME = $(MBUINT_BUILD)/$(MBUINT_NAME_BASE)

MBUINT_MKDIR = mkdir -p
MBUINT_REMOVE = rm -r -f

MBUINT_MAKE_DIR = $(MBUINT_DIR)
MBUINT_MAKE_PUSHD = pushd $(MBUINT_MAKE_DIR)
MBUINT_MAKE = make

#
# mbuint configure
#
ifneq ($(MBUINT_UNAME), Darwin)
MBUINT_CONFIGURE_UNAME = 
else
MBUINT_CONFIGURE_UNAME = 
endif
MBUINT_CONFIGURE_CONFIGURE = ./configure
MBUINT_CONFIGURE_HELP = $(MBUINT_CONFIGURE_CONFIGURE) --help
MBUINT_CONFIGURE_PUSHD = pushd $(MBUINT_MAKE_DIR)
MBUINT_CONFIGURE = $(MBUINT_CONFIGURE_CONFIGURE) \
$(MBUINT_CONFIGURE_UNAME) --prefix=$(MBUINT_PREFIX) --exec_prefix=$(MBUINT_EXEC_PREFIX)

#
# mbuint help
#
MBUINT_HELP = $(MBUINT_CONFIGURE_HELP)

########################################################################
#
# rules
#
########################################################################

all: build

package: archive unextract

again: unextract build

test: test-mbuint

install-links: install-mbuint-links

install-docs: install-mbuint-docs

install-prefix: install-mbuint-prefix

install: install-mbuint

build: build-mbuint

clean: clean-mbuint

configed: configed-$(MBUINT_DIR)

config: config-$(MBUINT_DIR)

help: help-mbuint

list-docs: list-mbuint-docs

list-patch: list-mbuint-patch

extract-patch: extract-mbuint-patch

list: list-mbuint

extract: extract-mbuint

unextract: unextract-mbuint

archive: archive-mbuint

linked: mbuint-linked

prefixed: mbuint-prefixed

archived: mbuint-archived

extracted: mbuint-extracted

########################################################################
#
# mbuint rules
#
########################################################################

#
# Help mbuint
#
help-mbuint: $(MBUINT_DIR)
	@($(MBUINT_CONFIGURE_PUSHD);\
	  (($(MBUINT_HELP)) || (exit 1));\
	  popd)

#
# Install mbuint
#
install-mbuint: configed-$(MBUINT_DIR)
	@(echo Installing $(MBUINT_DIR)...;\
	  $(MBUINT_MAKE_PUSHD);\
	  (($(MBUINT_MAKE) install) || (exit 1)) && \
	  ((touch $(MBUINT_MAKEDIR)/configed-$(MBUINT_DIR)) || (exit 1));\
	  popd)
	  
#
# Build mbuint
#
build-mbuint: configed-$(MBUINT_DIR)
	@(echo Building $(MBUINT_DIR)...;\
	  $(MBUINT_MAKE_PUSHD);\
	  (($(MBUINT_MAKE)) || (exit 1)) && \
	  ((touch $(MBUINT_MAKEDIR)/configed-$(MBUINT_DIR)) || (exit 1));\
	  popd)
	  
#
# Clean mbuint
#
clean-mbuint: configed-$(MBUINT_DIR)
	@(echo Cleaning $(MBUINT_DIR)...;\
	  $(MBUINT_MAKE_PUSHD);\
	  (($(MBUINT_MAKE) clean) || (exit 1)) && \
	  ((touch $(MBUINT_MAKEDIR)/configed-$(MBUINT_DIR)) || (exit 1));\
	  popd)
	  
#
# Test mbuint
#
test-mbuint: configed-$(MBUINT_DIR)
	@(echo Building test $(MBUINT_DIR)...;\
	  $(MBUINT_MAKE_PUSHD);\
	  (($(MBUINT_MAKE) test) || (exit 1)) && \
	  ((touch $(MBUINT_MAKEDIR)/configed-$(MBUINT_DIR)) || (exit 1));\
	  popd)
	  
#
# Config mbuint
#
config-$(MBUINT_DIR): unconfig-$(MBUINT_DIR) configed-$(MBUINT_DIR)

unconfig-$(MBUINT_DIR):
	@(rm -f configed-$(MBUINT_DIR))

configed-$(MBUINT_DIR): $(MBUINT_DIR)
	@(echo Configing $(MBUINT_DIR)...;\
	  $(MBUINT_CONFIGURE_PUSHD);\
	  (($(MBUINT_CONFIGURE)) || (exit 1)) && \
	  ((touch $(MBUINT_DIR)) || (exit 1)) && \
	  ((touch $(MBUINT_MAKEDIR)/configed-$(MBUINT_DIR)) || (exit 1));\
	  popd)

########################################################################
# docs
########################################################################

#
# List mbuint Docs
#
list-mbuint-docs: $(MBUINT_DOCS_TGZ)
	@(echo Listing $(MBUINT_DOCS_TGZ)...;\
	  (($(MBUINT_LIST_DOCS_TGZ)) || (exit 1)))

#
# Install mbuint Docs
#
install-mbuint-docs: $(MBUINT_DOCS_PREFIX)
	@(echo Extracting $(MBUINT_DOCS_TGZ)...;\
	  (($(MBUINT_EXTRACT_DOCS_TGZ)) || (exit 1)))

########################################################################
# patch
########################################################################

#
# List mbuint Patch
#
list-mbuint-patch: $(MBUINT_PATCH_TGZ)
	@(echo Listing $(MBUINT_PATCH_TGZ)...;\
	  (($(MBUINT_LIST_PATCH_TGZ)) || (exit 1)))

#
# Extract mbuint patch
#
extract-mbuint-patch: $(MBUINT_DIR)
	@(echo Extracting $(MBUINT_PATCH_TGZ)...;\
	  (($(MBUINT_EXTRACT_PATCH_TGZ)) || (exit 1)))

########################################################################
# archive
########################################################################

#
# List mbuint
#
list-mbuint: 
	@(echo Listing $(MBUINT_TGZ)...;\
	  (($(MBUINT_LIST_TGZ)) || (exit 1)))

#
# mbuint extracted
#
mbuint-extracted: 
	@(echo $(MBUINT_EXTRACT) $(MBUINT_TGZ))

#
# Extract mbuint
#
extract-mbuint: unextract-mbuint $(MBUINT_DIR)

unextract-mbuint: unconfig-$(MBUINT_DIR)
	@(echo Removing $(MBUINT_DIR)...;\
	  (($(MBUINT_REMOVE_DIR)) || (exit 1)))

$(MBUINT_DIR): $(MBUINT_TGZ)
	@(echo Extracting $(MBUINT_TGZ)...;\
	  (($(MBUINT_EXTRACT_TGZ)) || (exit 1)) && \
	  (($(MBUINT_TOUCH_EXTRACT)) || (exit 1)))
	  
#
# mbuint archived
#
mbuint-archived: 
	@(echo $(MBUINT_TGZ))
	  
#
# Archive mbuint
#
archive-mbuint: 
	@(echo Archiving $(MBUINT_DIR) to $(MBUINT_TGZ)...;\
	  (($(MBUINT_ARCHIVE) $(MBUINT_TGZ) $(MBUINT_DIR)) || (exit 1)))

########################################################################
# links
########################################################################

#
# mbuint linked
#
mbuint-linked: 
	@echo link is $(MBUINT_LINK_NAME) "->" $(MBUINT_PREFIX)
	  
#
# Install mbuint links
#
install-mbuint-links: 
	@((echo removing $(MBUINT_LINK_NAME)) && \
	  ((rm -f $(MBUINT_LINK_NAME)) || (exit 1)) && \
	  (echo Linking $(MBUINT_LINK_NAME) "->" $(MBUINT_PREFIX)) && \
	  ((ln -s $(MBUINT_PREFIX) $(MBUINT_LINK_NAME)) || (exit 1)))
	  
########################################################################
# prefix
########################################################################

#
# mbuint prefixed
#
mbuint-prefixed: 
	@((echo prefix is $(MBUINT_PREFIX)) && \
	  (echo exec prefix is $(MBUINT_EXEC_PREFIX)) && \
	  (echo conf prefix is $(MBUINT_CONF_PREFIX)) && \
	  (echo docs prefix is $(MBUINT_DOCS_PREFIX)))
	  
#
# Install mbuint prefix
#
install-mbuint-prefix: 
	@((echo makeing $(MBUINT_PREFIX)) && \
	  ((mkdir -p $(MBUINT_PREFIX)) || (exit 1)) && \
	  (echo makeing $(MBUINT_EXEC_PREFIX)) && \
	  ((mkdir -p $(MBUINT_EXEC_PREFIX)) || (exit 1)))
	  
$(MBUINT_PREFIX):
	@(echo Makeing Directory $(MBUINT_PREFIX)...;\
	  (($(MBUINT_MKDIR) $(MBUINT_PREFIX)) || (exit 1)))

$(MBUINT_EXEC_PREFIX):
	@(echo Makeing Directory $(MBUINT_EXEC_PREFIX)...;\
	  (($(MBUINT_MKDIR) $(MBUINT_EXEC_PREFIX)) || (exit 1)))

$(MBUINT_CONF_PREFIX):
	@(echo Makeing Directory $(MBUINT_CONF_PREFIX)...;\
	  (($(MBUINT_MKDIR) $(MBUINT_CONF_PREFIX)) || (exit 1)))

$(MBUINT_DOCS_PREFIX):
	@(echo Makeing Directory $(MBUINT_DOCS_PREFIX)...;\
	  (($(MBUINT_MKDIR) $(MBUINT_DOCS_PREFIX)) || (exit 1)))




        

