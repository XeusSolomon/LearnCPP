## ==== VARS ==== ##

# compilation
CC=g++
CFLAGS=-Werror
DEBUG=-ggdb -Wextra
RELEASE=-O2 -DNDEBUG

# directorys
BIN=bin
BLD=build
INC=include
SRC=src
DIRS=$(BIN) $(BLD) $(INC) $(SRC)

# project
PROJ := $(notdir $(patsubst %/,%,$(shell pwd)))

# cleaning info => return actual files
OBJ_FILES := $(shell find . -name '*.o')
BIN_FILES := $(shell ls bin)
NO_FILES := $(shell find . -name 'non_existant_file')
OLD_DIRS=$(addprefix $(BLD)/,$(filter-out $(patsubst $(BLD)/%/,%, $(BLD_DIRS)),$(shell ls $(BLD))))

# build info => generate required build info from SRC
SRCS=$(wildcard $(SRC)/*/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(BLD)/%.o, $(SRCS))
BLD_DIRS=$(sort $(dir $(OBJS)))
MAIN=$(wildcard $(SRC)/*.cpp)

## ==== END VARS ==== ##

#*******************************************************************************

## ==== BUILDS ==== ##

# normal
all: $(PROJ)	# name of root directory

# main build
$(PROJ): $(OBJS) $(MAIN)
	@echo "Compiling $@ ..."
	@$(CC) $(CFLAGS) -o $(BIN)/$@ $^
	@echo "Done"

# generic build *.cpp => *.o
$(BLD)/%.o: $(SRC)/%.cpp
	@mkdir -pv $(BLD_DIRS)
	@echo "Compiling $@ ..."
	@$(CC) $(CFLAGS) -c $^ -o $@
	@echo "Done"

debug: $(OBJS) $(MAIN)
	@echo "Compiling $(PROJ) as debuggable ..."
	@$(CC) $(DEBUG) -o $(BIN)/$(PROJ) $^
	@echo "Done"

release: $(OBJS) $(MAIN)
	@echo "Compiling $(PROJ) as release ..."
	@$(CC) $(RELEASE) -o $(BIN)/$(PROJ) $^
	@echo "Done"

## ==== END BUILDS ==== ##

#*******************************************************************************

## ==== HOUSEKEEPING ==== ##

# completely remove generated files from bin and build
clean:
	@echo "Checking for object files ..."
ifeq ($(OBJ_FILES), $(NO_FILES))
	@echo "Nothing to do"
else
	@echo "Removing all build data ..."
	@rm -vrf $(BLD)/*
	@echo "Done"
endif
	@echo "Checking for binary files ..."
ifeq ($(BIN_FILES), $(NO_FILES))
	@echo "Nothing to do"
else
	@echo "Removing all binary data ..."
	@rm -vrf $(BIN)/*
	@echo "Done"
endif

# remove unneccessary directorys from ./build; use after refactor
tidy:
	@echo "Removing unnecesary directories from ./build ..."
	@rm -vfr $(OLD_DIRS)
	@echo "Done"

# create initial file sturcture
struct:
	@echo "Creating directory stucture..."
	@mkdir -v $(DIRS)
	@echo "Done"

## ==== END HOUSEKEEPING ==== ##

#*******************************************************************************

## ==== INFO ==== ##

# help message
help:
	@echo "Usage: make [option]"
	@echo "Envoke without options to begin the default build process"
	@echo "Options:"
	@echo "clean	- completely remove all files and sub-directorys in ./bin and ./build"
	@echo "debug	- compile project with -gddb flag for debugging"
	@echo "diag	- display an exaple file diagram"
	@echo "help	- print this message"
	@echo "struct	- create base directory structure for project"
	@echo "tidy	- remove unnecesary directories from the build"
	@echo "release	- compile project with optimisation for release"
	@echo "version	- print version information"

# version information
version:
	@echo "Version:	1.0.1"
	@echo "Date:		2023-09-16"
	@echo "Author:		xeus.solomon@gmail.com"
	@echo "GitHub:		https://github.com/XeusSolomon/XeusSolomon"
	@echo ""
	@echo "Copyright (C) 2023 Xeus Solomon"
	@echo ""
	@echo "This makefile is not for public use. It remains unlicensed and is not" 
	@echo "intended for distribution. It is a work in progress and, as such, "
	@echo "most likely contains bugs and problems I have not yet discovered. If "
	@echo "you insist upon using it, you do so entirely at your own risk, and "
	@echo "assume responsibility for any damages incurred. If you intend to "
	@echo "re-distribute regardless, at least give the original author proper "
	@echo "attribution."

# file structure diagram
diag:
	@echo "An example file diagram ..."
	@echo "     ."
	@echo "     └── project name/"
	@echo "         ├── bin/"
	@echo "         │   └── executable*"
	@echo "         ├── build/"
	@echo "         │   ├── feature1*/"
	@echo "         │   │   ├── feat1_file1.o*"
	@echo "         │   │   └── feat1_file2.o*"
	@echo "         │   └── feature2*/"
	@echo "         │       └── feat2_file1.o*"
	@echo "         ├── include/"
	@echo "         │   ├── header1.h"
	@echo "         │   ├── header2.h"
	@echo "         │   └── header3.h"
	@echo "         ├── src/"
	@echo "         │   ├── feature1/"
	@echo "         │   │   ├── feat1_file1.cpp"
	@echo "         │   │   └── feat1_file2.cpp"
	@echo "         │   ├── feature2/"
	@echo "         │   │   └── feat2_file1.cpp"
	@echo "         │   └── main_file.cpp"
	@echo "         └── makefile"
	@echo ""
	@echo "features marked with an asterisk are generated during make process"

## ==== END INFO ==== ##

#*******************************************************************************
