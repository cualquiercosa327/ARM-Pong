#include <nds.h>

unsigned short *ballSpriteGfx = NULL;
unsigned short *paddleSpriteGfx = NULL;

int ballX = 120 << 8;
int ballY = 88 << 8;
int ballXV = 256;
int ballYV = 256;

int paddleY[2] = { 80 << 8, 80 << 8 };
