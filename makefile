#################################
#	Standard Makefile	#
#	Ente		#
#	Version 1.0		#
#################################
CC          = /usr/bin/gcc 	# The Compiler
NASM        = /usr/bin/nasm
nNFLAGS     = -f elf64 -g -O0
nCFLAGS     = -Wall -g		# Compilerflags
gtk         =  `pkg-config --cflags --libs gtk+-2.0` # gtk
sdl         = `sdl-config --cflags --libs` -lSDL_image -lSDL_gfx -lSDL_ttf  # sdl library
LDLFLAGS    = -lm		# Linker Flags
CFLAGS      = $(nCFLAGS) #$(sdl) #  link all the flags
###########Projectinfo###########
PNAME       = awesometools	# The name of the Project
SUBPROJECTS = awesomedump awesomereplace
##############OBJECTS############
####A List of ALL Object-files###
OBJ         =
all:
	for dir in $(SUBPROJECTS); do \
		$(MAKE) -C $$dir; \
	done 
	# Because awesomeness lies in simplicity
clean:
	for dir in $(SUBPROJECTS); do \
		$(MAKE) clean -C $$dir; \
	done 
	# Because awesomeness lies in simplicity

