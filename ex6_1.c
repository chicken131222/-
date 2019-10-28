#include <stdlib.h>
#include <stdio.h>

 int main(void) {
     int a;
     a = system("ps -ef | grep han > han.txt");
     /* int a 변수에 system함수를넣어 출력문으로 출력*/
     //system은 명령실행을 위해 쉘까지 동작시키므로 비효율적이다.
     
     printf("Return Value : %d\n", a);

     return 0;
 }
