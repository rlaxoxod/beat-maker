PROG = beatmaker
CC = gcc

include common.mk

CXXFLAGS += `sdl2-config --cflags`
CXXFLAGS += -g -lefence

LDFLAGS += `sdl2-config --libs` -lSDL2_mixer -lSDL2_image -lSDL2_ttf -lm -lpthread -fno-stack-protector

# linking the program.
$(PROG): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LDFLAGS)
