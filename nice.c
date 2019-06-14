//
// Created by ningh on 2019/6/8.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
//    printf("int 存储大小 : %lu \n", sizeof(int));
//    printf("float 最小值: %E\N",FLT_MIN);
//    printf("float 最小值: %E\N",FLT_MIN);
//printf("精度值: %d\n",FLT_DIG);

    float f,x=3.6,y=5.2;
    int i = 4,a,b;
    a = x + y;


    b = (int)(x+y);
    f = 10/1;
    printf("a=%d,b=%d,f=%f,x=%f\n",a,b,f,x);
    return 1;
}

