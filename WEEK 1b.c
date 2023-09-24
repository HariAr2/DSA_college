#include<stdio.h>
int main(){
    char a='a';
    char b='b';
    char c='c';
    char d='d';
    int x;
    x=(a<<24)|(b<<16)|(c<<8)|d;
    printf("%c",x);
}