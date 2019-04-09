#include <stdio.h>


typedef unsigned int(*helloPrint) (unsigned char * ptr);

typedef struct _helloPrint
{
	helloPrint hi;

}hello;

unsigned int hii(unsigned char *p) {

	printf("%s", p);
	return 0;
}

int main(int argc, char const *argv[])
{
	hello hh;
	hh.hi = hii;
	unsigned char x[25] = "HelloWorld";
	hh.hi(x);

	return 0;
}