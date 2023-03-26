#include<stdio.h>    //program courtesy of thetechdog 2023
int main(){
    short nr,b,i=0,v[30];
    printf("Input a number, and then a base:\n");
    scanf("%hi%hi",&nr,&b);
    if(b>10)printf("Your base is greater than 10, the digits will be shown with spaces in between.\n");
    if(nr==0){printf("Number 0 in base %hi is 0.",b);
                goto end;}
    if(b<2 || b>nr){printf("Please input a valid base next time."); goto end;}
    printf("Number %hi in base %hi is ",nr,b);
    while(nr){
       v[i]=nr%b;
        nr=nr/b;
        i++;
    }
    for(i=i-1;i>=0;i--){
        if (b>10) printf("%hi ",v[i]);
        else printf("%hi",v[i]);}
end:return 0;

}
/* This program is free software. It comes without any warranty, to
     * the extent permitted by applicable law. You can redistribute it
     * and/or modify it under the terms of the Do What The Fuck You Want
     * To Public License, Version 2, as published by Sam Hocevar. See
     * http://www.wtfpl.net/ for more details. */
