#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

  int main(void) {
      char *argv[3]; // 포인터 배열 선언
      
      printf("Before exec function\n");
      
      argv[0] = "ls";   // 포인터 배열의 각 요소에 값을 저장한다. 
      argv[1] = "-a";
      argv[2] = NULL; // 인자가 없으므로 NULL 지정
      if (execv("/usr/bin/ls", argv) == -1) {  // execv 함수로 명령의 경로와 포인터 배열 argv를 인자로 지정한다.
          perror("execv");
          exit(1);
          
      }
      
      printf("After exec function \n");
      
      return 0;
}
