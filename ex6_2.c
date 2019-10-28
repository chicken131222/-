#include <sys/types.h>
#include <unistd.h>
#include <stdlin.h>
#include <stdio.h>

 int main(void) {
     pid_t pid;
     
     switch (pid = fork()) { //fork 함수를 호출한다.  
        case -1: /*fork failed */  //리턴 값이 -1이면 오류가 발생한 것이므로 10행의 case -1절에서 처리하고
           perror("fork");        // perror로 오류 메세지 출력
           exit(1);               // 
           break;                 //프로그램을 종료한다.
        case 0: /*child process*/   // 리턴 값이 0이면 자식 프로세스에 리턴한 것 `14행의 case 0절에서 처리한다.
        pritnf("Child Process - My PID:%d, My Parent's PID:%d\n",     
               (int)getpid(), (int)getppid());   //15 16행은 자식 프로세스에서 수행되며 , 자신의 PID의 부모 프로세스 PPID를 출력한다.
           break;
           
        default: /*parent process*/ //리턴 값이 -1 이나 0이 아니면 부모 프로세스에 리턴한 것이므로 default항목에서 처리한다. 
        printf("Parent process - My PID:%d, My Parent's PID:%d\n",
                (int)getpid(), (int)getppid() , (int)pid); // 자식프로세스와 부모프로세스 모두 자신의 pid와 부모 프로세스의 id를 출력한다.
           break;
      }
  
     printf("End of fork\n");   // 자식프로세스와 부모프로세스가 각각 실행하므로 두 번 출력된다. 
  
     return 0;
  }

 
