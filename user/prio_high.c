#include <inc/lib.h>
#include <inc/env.h>

void
umain(int argc, char **argv)
{
	sys_env_set_prio(0, PRIO_HIGH);
	int i = 0;
	for(i = 0; i < 500; ++i){
		cprintf("[%08x] High Priority\n", sys_getenvid());
	}
}
