#include <stdint.h>

typedef uint8_t byte;
typedef uint16_t address;

// Program memory. The first 1000h bytes are always mapped to 0000h-0FFFh.
// The second page is specified by prgPage and maps to 1000h-1FFFh.
// Can be up to 1 MiB.
extern byte PRG[];

// Writable memory. Page A maps to 2000h-2FFFh, Page B to 3000h-3FFFh.
// Use ramPage to change mapped pages. (BBBBAAAA)
// Is always 32 kiB.
extern byte RAM[];

// Writable external memory. Page A maps to 4000h-4FFFh, Page B to 5000h-5FFFh.
// Use exramPage to change mapped pages. (BBBBAAAA)
// Can be up to 32 kiB. However, not all bytes need to map to RAM. It may also be mapped to a peripheral or something. It depends on the cartridge. 
extern byte EXRAM[];

// Specifies the PRG page that is mapped to 1000h-1FFFh.
extern byte prgPage;

// Two nibbles stored as a byte, that specifies the active RAM pages A and B.
// The low nibble (0000XXXX) specifies the RAM page mapped to 2000-2FFF.
// The high nibble (XXXX0000) specifies the RAM page mapped to 3000-3FFF.
extern byte ramPageAB;

// Two nibbles stored as a byte, that specifies the active RAM pages C and D.
// The low nibble (0000XXXX) specifies the RAM page mapped to 2000-2FFF.
// The high nibble (XXXX0000) specifies the RAM page mapped to 3000-3FFF.
extern byte ramPageCD;

// Two nibbles stored as a byte, that specifies the active EXRAM pages.
// The low nibble (0000XXXX) specifies the RAM page mapped to 4000-4FFF.
// The high nibble (XXXX0000) specifies the RAM page mapped to 5000-5FFF.
extern byte exramPage;


// Attempts to read a byte mapped to an address.
byte readmemory(address addr);

// Attempts to write a byte mapped to an address.
// It will silently fail if the target address is read-only.
void writememory(address addr);