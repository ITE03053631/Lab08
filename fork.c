#include<stdio.h>
#include<stdlib.h>
int main()
{
 int pid;
 int i,status = 0;
 for(i=0;i<3;i++)
 {
  pid=fork();
  if(pid!=0)
  {
   printf("\nParent\n");
   printf("PID=%d",getpid());
   pid=wait(&status); 
  }
  else
  {
   printf("\nChild\n");
   printf("PID=%d",getpid());
   printf("PPID=%d",getppid());
   exit(status);
  }
 }
}
