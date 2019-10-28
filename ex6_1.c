#include <stdlib.h>
#include <stdio.h>

 int main(void) {
     int a;
     a = system("ps -ef | grep han > han.txt");  // ps -ef | grep han > han.txt 명령 실행하도록 system함수호출 
  //인자로 전달된 명령은 현재 실행 중인 프로세스들에서 han을 포함한 내용을 찾아 han.txt에 리다이렉션 
     printf("Return Value : %d\n", a);
     
     return 0;
}
