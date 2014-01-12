#################################
#	Standard Makefile	#
#	Ente		#
#	Version 1.0		#
#################################
CC          = /usr/bin/gcc 	# The Compiler
CC          = /usr/bin/colorgcc 	# The Compiler
NASM        = /usr/bin/nasm
nNFLAGS     = -f elf64 -g -O0
nCFLAGS     = -Wall -g		# Compilerflags
gtk         =  `pkg-config --cflags --libs gtk+-2.0` # gtk
sdl         = `sdl-config --cflags --libs` -lSDL_image -lSDL_gfx -lSDL_ttf  # sdl library
LDLFLAGS    = -lm		# Linker Flags
CFLAGS      = $(nCFLAGS) #$(sdl) #  link all the flags

###########Projectinfo###########
PNAME       = awesomereplace	# The name of the Project
##############OBJECTS############
####A List of ALL Object-files###
OBJ         = awesomereplace.o

$(PNAME): $(OBJ)
	# Start linking: $(PNAME)
	$(CC) $(CFLAGS) -o $(PNAME) $(OBJ) $(LDLFLAGS)
	#Automatic programm start after linking#
	#=============START THE PROGRM=================
	#./$(PNAME)

%.o: %.asm
	#Compile: $<
	$(NASM) $(nNFLAGS) -o $@ $<

%.o: %.c
	#Compile: $<
	$(CC) $(CFLAGS) -c $< -o $@

# clean target
clean:
	rm *.o $(PNAME)


