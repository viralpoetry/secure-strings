
#include <stdio.h>

// PARAMETRE:
// secure_strncat( cie�ov� pole, 
//			    ve�kos� cie�ov�ho po�a, 
//			    re�azec ktor� sa m� kop�rova� )

char * secure_strncat(char * dst, size_t sizeDst, const char * src)
{
    size_t dlzkaZdroja = strlen(src);
    size_t celkovaDlzka = strlen(dst) + dlzkaZdroja;
    
    if (celkovaDlzka < sizeDst)
    {
	   // skop�ruj zdrojov� re�azec do cie�ov�ho po�a
	   return strncat(dst, src, dlzkaZdroja);
    }
    else
	   // inak vr� nezmenen� cie�ov� pole
	   return dst;
}

int main(int argc, char *argv[])
{
    char Array[10] = "0123";
    char String[]  = "45678";

    printf("\n%s\n", secure_strncat(Array, sizeof(Array), String));
    
    getchar();
    return 0;
}



