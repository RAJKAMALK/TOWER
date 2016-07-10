#include<stdio.h>
void tow(intn disk,char source,char temp,char desk);
int main()
{
char source='a',temp='b',desk='c';
int disk;
printf("entre the number of disk":);
scanf("%d",&disk);
printf("sequence is :\n");
tow(ndisk,source,temp,dest);
return 0;
}
void tow(int ndisk,char source,char temp,char dest)
{
if(n disk==1)
{
printf("move disk%d from %c-->%c\n,ndisk,source,dest);
return;
}
tow(ndisk-1,source,dest,temp)
printf("move disk %d from %c-->%c\n",ndisk,source,dest,dest);
tow(ndisk-1,temp,source dest);
}
