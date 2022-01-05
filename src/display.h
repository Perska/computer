#include <stdint.h>

typedef uint8_t color;

extern color framebuffer[];

void initScreen();

void presentScreen();