#include <stdio.h>
#include <string.h>

void sys_exit(int error_code)
{
    	asm volatile
    	(
        	"syscall"
        	: 
        	: "a"(SYSCALL_EXIT), "D"(error_code)
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
        	: "a"(SYSCALL_WRITE), "D"(fd), "S"(buf), "d"(count)
        	: "rcx", "r11", "memory"
   	);
    
   	return ret;
}
void _puts(char *str)
{
	sys_write(1, hwText, sizeof(hwText));
   	sys_exit(12);
}
