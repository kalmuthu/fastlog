#include <fastlog.h>

int main(int argc,char** argv,char ** envp) {
	fastlog_init(NULL);
	for(unsigned int i=0;i<100;i++) {
		fastlog_log("did you know that %d+%d=%d",i,i+1,i+i+1);
	}
	fastlog_close();
	return 0;
}
