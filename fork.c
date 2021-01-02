






#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	printf("hello world (pid:%d)\n",(int) getpid());
	int rc=fork();
	if(rc<0){//创建失败，退出
           fprintf(stderr,"fork failed\n");
	   exit(1);
	}
	else if(rc==0){  //子进程
		printf("helllo,i am child (pid:%d)\n",(int) getpid());
	}
	else{
		printf("hello,i am parent of %d (pid:%d)\n",
				rc,(int) getpid());
	}
	return 0;
}
