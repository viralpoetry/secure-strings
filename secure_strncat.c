#include <stdio.h>


char * secure_strncat(char * dst, size_t sizeDst, const char * src)
{
    size_t dlzkaZdroja = strlen(src);
    size_t celkovaDlzka = strlen(dst) + dlzkaZdroja;
    
    if (celkovaDlzka < sizeDst)
    {

	   return strncat(dst, src, dlzkaZdroja);
    }
    else

	   return dst;
}

int main(int argc, char *argv[])
{
    /* Usage */
    char Array[10] = "0123";
    char String[]  = "45678";

    printf("\n%s\n", secure_strncat(Array, sizeof(Array), String));
    
    getchar();
    return 0;
}



