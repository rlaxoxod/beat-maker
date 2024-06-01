OUT = bin

SEARCHPATH += src
vpath %.c $(SEARCHPATH)
vpath %.h $(SEARCHPATH)

DEPS += defs.h structs.h

_OBJS += background.o
_OBJS += draw.o
_OBJS += init.o input.o
_OBJS += main.o
_OBJS += text.o title.o
_OBJS += try.o

_OBJS += mode.o
_OBJS += instrument.o
_OBJS += drum.o
_OBJS += keyboard.o
_OBJS += keyboard2.o
_OBJS += end.o
_OBJS += thread.o
_OBJS += timetime.o
_OBJS += instrument_record.o
_OBJS += keyboard_record.o
_OBJS += drum_record.o
_OBJS += keyboard2_record.o

OBJS = $(patsubst %,$(OUT)/%,$(_OBJS))

# top-level rule to create the program.
all: $(PROG)

# compiling other source files.
$(OUT)/%.o: %.c %.h $(DEPS)
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) $(CXXFLAGS) -c -o $@ $<
	
# cleaning everything that can be automatically recreated with "make".
clean:
	$(RM) -rf $(OUT) $(PROG)
