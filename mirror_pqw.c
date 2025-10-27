    
#include<stdio.h>
int main()
{
    char a[105],b[105];
    scanf("%s",a);

    int len=strlen(a);
    for(int i=0;i<len;i++){
        char ch=a[len-1-i];


        if(ch=='p')b[i]='q';
        else if(ch=='q')b[i]='p';
        else if(ch=='w')b[i]='w';

        else{

        printf("%c\n",ch);

        return 1;
    }
}
b[len]='\0';
printf("%s\n",b);

return 0;
}
