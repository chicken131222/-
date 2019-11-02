#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

 int main(void) {
     printf("--> Before exec function\n");
     
     if (execlp("ls" ,"ls", "-a" , (char *)NULL) == -1) {  
      /* 8행에  execlp 함수를 호출할 때 ls -a 명령을 실행하도록 설정 
      인자를 포인터를 써야하므로 마지막에 NULL을 지정 */
         perror("execlp");
         exit(1);
     }
     
     printf("--> After exec function\n");
     
     return 0;
  }


