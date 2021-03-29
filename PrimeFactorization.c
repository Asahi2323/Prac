#include <stdio.h>

int main(void){
    int num = 15;
    int i,cnt = 0,data[1000];

    //scanf("%d",&num);
    if(num < 0){
        return 1;
    }
    if(num == 1){
        printf("%d\n",num);
    }else{
        printf("%d = ",num);
        for(i = 2;i <= num;i++){
            if(num % i == 0){
                data[cnt] = i;
                num = num / i;
                i = 1;
                cnt++;
            }
        }
    }
    for(i = 0;i < cnt;i++){
        printf("%d",data[i]);
        if(cnt != i + 1){
            printf("*");
        }
    }
    printf("\n");
}