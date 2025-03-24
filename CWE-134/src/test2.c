#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>

int main (int argc, char **argv)
{
	char buf [100];
	int x = 1 ; 
	snprintf(buf,sizeof buf, argv [1]);
	buf[sizeof buf -1 ] = 0;
	printf("Buffer size is: (%d) \n Data input: %s \n",strlen(buf),buf);
snprintf(buf, sizeof(buf), "%s", argv[1]);
	return 0 ;
}
