#include <stdio.h>
#define BOLD		0x01 //0B00000001
#define ITALIC		0x02 //0B00000010
#define UNDERLINE	0x04 //0B00000100
#define STRIKEOUT	0x08 //0B00001000
#define STATUS4		0x10 //0B00010000
#define STATUS5		0x20 //0B00100000
#define STATUS6		0x40 //0B01000000
#define STATUS7		0x80 //0B10000000

unsigned char st = 0x00;

st = st | BOLD | ITALIC; //BOLD 와 ITALIC 을 true로 설정

st = st & ~ITALIC; //ITALIC 
