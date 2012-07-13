
#include <stdio.h>

// PARAMETRE:
// secure_strncat( cieæovÈ pole, 
//			    veækosù cieæovÈho poæa, 
//			    reùazec ktor˝ sa m· kopÌrovaù )

char * secure_strncat(char * dst, size_t sizeDst, const char * src)
{
    size_t dlzkaZdroja = strlen(src);
    size_t celkovaDlzka = strlen(dst) + dlzkaZdroja;
    
    if (celkovaDlzka < sizeDst)
    {
	   // skopÌruj zdrojov˝ reùazec do cieæovÈho poæa
	   return strncat(dst, src, dlzkaZdroja);
    }
    else
	   // inak vr·ù nezmenenÈ cieæovÈ pole
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



