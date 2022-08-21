#include <stdio.h>

//ham gop 2 mang
void GopMang(int s1[], int n, int s2[], int m, int s[], int l)
{
    printf("Gop 2 mang:\n");
    l = n+m;
    s[l];

    int index = 0;

    for(int i=0; i<n; i++)
    {
        s[index] = s1[i];
        index++; 
    }

    for(int i=0; i<m; i++)
    {
        s[index] = s2[i];
        index++;
    }
}

void TimPhanTuTrongMang(int s[], int n, int k)
{
    printf("\n\nTim phan tu k co trong mang hay khong? \n");
    for(int i=0; i<n; i++)
    {    
        if(s[i] == k)
        {
            printf("Co phan tu %d trong mang\n",k);
        }
    }
}


void SapXepTangDan(int s[], int n)
{
    printf("\nSap xep mang theo thu tu tang dan: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void SapXepGiamDan(int s[], int n)
{
    printf("\nSap xep mang theo thu tu giam dan: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(s[i] < s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

//ham xuat mang
void XuatMang(int s[], int n)
{ 
    for(int i=0; i<n; i++)
    {
         printf("%d ",s[i]);
    }
}

int main(int argc, char const *argv[])
{
    int s1[] = {1,2,5,13,17,19,21};
    int s2[] = {47,74,21,174,196,14,34};
    int s[100];
    int lengthS = 0;
    
    GopMang(s1,sizeof(s1)/sizeof(int),s2,sizeof(s2)/sizeof(int),s,lengthS);
    XuatMang(s,14);

    TimPhanTuTrongMang(s,14,5);

    SapXepTangDan(s,14);
    XuatMang(s,14);

    SapXepGiamDan(s,14);
    XuatMang(s,14);

    return 0;
}
