#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>

int main (int argc, char **argv)
{
	char buf [100];
	int x = 1 ; 
if (argc > 1) { snprintf(buf, sizeof buf, argv[1]); } else { snprintf(buf, sizeof buf, ""); }
	buf[sizeof buf -1 ] = 0;
	printf("Buffer size is: (%d) \n Data input: %s \n",strlen(buf),buf);
	printf("X equals: %d in hex: %#x\n Memory address for x: (%p) \n",x,x,&x);
	return 0 ;
}
