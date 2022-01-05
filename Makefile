CC=gcc
CFLAGS=-Wall #-I.

source = src
srcs = main vm display
headers = vm display

buildname = computer

OBJ = $(patsubst %, $(source)/%.o, $(srcs))
DEPS = $(patsubst %, $(source)/%.h, $(headers))

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(buildname): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ)
