#include <stdlib.h>
#include <stdio.h>

 void cleanup1 (void) {
   printf("Cleanup 1 is called.\n");
 }
  
 void cleanup2(void) {
   printf("Cleanup 2 is called.\n");

 }     // 4행부터 10행은 프로세스 종료 시 수행할 작업을 지정한 함수들의 정의다.
int main(void) {
    atexit(cleanup1);  // 함수 종료시 실행된다.  1 , 2 에 정의해둔 함수가 실행된다. 
    atexit(cleanup2);

    exit(0);
 }

// 출력은 역구조로 나온다. (스택구조)
