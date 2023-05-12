#include <autoconf.h>
#include <stdio.h>
#include <unistd.h>
#include <asm/unistd.h>
#pragma GCC diagnostic ignored "-Wunused-result"
int main()
{
	long i;
	printf("input value = ");
	scanf("%ld",&i);
  	i = syscall(__NR_mysyscall,i);
	if(i<0)
	{
		perror("syscall");
		return 1;
	}
	printf("mysyscall return value = %ld\n",i);
	return 0;
}
