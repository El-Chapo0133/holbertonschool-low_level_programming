#include <stdio.h>
#include <string.h>

/*void sys_exit(int error_code)
{
    	asm volatile
    	(
        	"syscall"
        	: 
        	: "a"(60), "D"(error_code)
        	: "rcx", "r11", "memory"
    	);
}

int sys_write(unsigned fd, const char *buf, unsigned count)
{
    	unsigned ret;

    	asm volatile
    	(
        	"syscall"
        	: "=a"(ret)
        	: "a"(1), "D"(fd), "S"(buf), "d"(count)
        	: "rcx", "r11", "memory"
   	);
    
   	return ret;
}*/
void _puts(char *str)
{
	/*sys_write(1, str, sizeof(str));
   	sys_exit(12);*/

	printf("yo");
}
