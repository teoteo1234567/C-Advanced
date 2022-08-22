#include <stdio.h>

void SoSanh2Chuoi(char s1[], char s2[])
{
    int n = 0;
    unsigned short flag = 1; // gan co xac dinh 2 chuoi co bang nhau hay ko ?
    
    while(s1[n] != '\0'){
        if(s1[n] != s2[n])
        {
            flag = 0;
            break;
        }
        n++;
    }

    while(s2[n] != '\0'){
        if(s2[n] != s1[n])
        {
            flag = 0;
            break;
        }
        n++;
    }

    if(flag == 1)
    {
        printf("Chuoi %s va chuoi %s dong nhat !\n",s1,s2);
    }else{
        printf("Chuoi %s va chuoi %s khong dong nhat!\n",s1,s2);
    }

}

int main(int argc, char const *argv[])
{
    char s1[] = "Hello World";
    char s2[] = "Hello World 123";
    SoSanh2Chuoi(s1,s2);
    
    // char s1[50];
    // char s2[50];
    // printf("Nhap chuoi s1 :\n");
    // scanf("%s",&s1);
    // printf("Nhap chuoi s2 :\n");
    // scanf("%s",&s2);
    
    

    return 0;
}
