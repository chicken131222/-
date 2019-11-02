#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


   int main(void) {
       pid_t pid;
       
       switch (pid = fork()) {  //fork 함수 호출 새로운 프로세스 생성
          case -1 : /* fork failed */
               perror("fork);
               exit(1);
               break;
          case 0 : /* child Process\n"); // 자식프로세스가 수행할 부분 execlp 함수를 호출
               printf("--> CHild Proceess\n");
               if(execlp("ls", "ls", "-a", (char *)NULL) == -1) {
               perror("execlp");
               exit(1);
             }
               exit(0);
               break;
             default : /* parent process */
               printf("--> Parent Process - My PID :%d\n",(int)getpid());
               break;
          }
          
          retrun 0;
    }
    
