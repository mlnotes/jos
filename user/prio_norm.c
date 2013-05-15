#include <inc/lib.h>
#include <inc/env.h>

void
umain(int argc, char **argv)
{
	sys_env_set_prio(0, PRIO_NORM);
	int i = 0;
	for(i = 0; i < 500; ++i){
		cprintf("[%08x] Norm Priority\n", sys_getenvid());
	}
}
