#include <stdint.h>

typedef uint8_t byte;
typedef uint16_t address;

typedef struct
{
	byte accumulator : 4;

	byte registerB : 4;
	byte registerC : 4;
	byte registerD : 4;

	byte registerX : 4;
	byte registerY : 4;
	byte registerZ : 4;
	
	// Program memory. On start-up, the contents of the boot ROM are copied to program memory.
	// It is 4096 bytes long, and can be written to by the program.
	byte MEMO[4096];
} state;

// Attempts to read a byte mapped to an address.
byte readmemory(address addr);

// Attempts to write a byte mapped to an address.
// It will silently fail if the target address is read-only.
void writememory(address addr);