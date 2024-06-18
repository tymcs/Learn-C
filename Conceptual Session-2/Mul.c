#include <stdio.h>


int main() {

    int N;
    scanf("%u",&N);
    if(N>1000)
    {
     
          printf("I will buy Punjabi");
    }
    
     else if(N>1000 && (N-1000)>=500)
     {
        printf("I will buy new shoes\nAlisa will buy new shoes ");
     }
        
        
    else{
        printf("Bad luck!");
    }
    return 0;
}
