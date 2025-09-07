#include <stdio.h>

int mystrlen(char *s)
{
    int length = 0;
    while(*s)
    {
        length++;
        s++;
    }
    return length;
}

char* mystrchr(char *s, int target)
{
    //verilen string içinde target var mı arayacak varsa konumunu yok ise 0 döndürecek
    while(*s)
    {
        if(*s == target)
        {
            return (char*)s;
        }
        s++;
    }
    return (char*)s;
}

void* mymemcpy(void* dest, const void* src, size_t n)
{
    //src den dest e kadar bütün byteları kopyalar
    char* d = (char*)dest;
    const char* s = (const char*)src;

    for(size_t i = 0 ; i < n ; i++)
    {
        *d++ = *s++;
    }

    return dest;
}


int main(void)
{

    int x = 'n';
    printf("\nlength is : %d",mystrlen("sudenaz"));
    printf("\n aranan harf indexi %p",mystrchr("sudenaz",x));
    return 0;
}