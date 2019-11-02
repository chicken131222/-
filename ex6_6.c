#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

  int main(void) {
      char *argv[3]; // 포인터 배열 선언
      char *envp[2];
      
      printf("Before exec function\n");
      
      argv[0] = "arg.out";   // 포인터 배열의 각 요소에 값을 저장한다. 
      argv[1] = "100";
      argv[2] = NULL; // 인자가 없으므로 NULL 지정
      
      envp[0] = "MYENV=hanbit";
      envp[1] = NULL;
      
      if (execve("./arg.out", argv, envp) == -1) {  
      /* argv와 envp 인자를 모두 지정해 execve 함수를 호출한다. 
      이 값들이 제대로 전달되는지 확인을 위해 arg.out 파일을 별도로 작성한다.*/
          perror("execve");
          exit(1);
          
      }
      
      printf("After exec function \n");
      
      return 0;
}
