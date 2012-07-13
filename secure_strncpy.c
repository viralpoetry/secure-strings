
#include "stdio.h"

// PARAMETRE:
// secure_strncpy( cie�ov� pole, 
//			    ve�kos� cie�ov�ho po�a,
//			    re�azec ktor� sa m� kop�rova� )

char * secure_strncpy(char *dst,  size_t sizeDst, const char *src )
{
    size_t lenSrc = strlen(src);
    // je kop�rovan� re�azec krat�� ako cie�ov� pole?
    if ( sizeDst > lenSrc )
    {
	   dst[lenSrc] = '\0';
	   return strncpy(dst, src, lenSrc);
    }
    else
	   // inak vr� p�vodn� pole
	   return dst;
    
}

int main(int argc, char *argv[])
{
    
    char destBuffer[10];
    char *srcString = "012345678";

    secure_strncpy(destBuffer, sizeof(destBuffer), srcString);

    // ak s� porovn�van� re�azce ekvivalentn�, funkcia vr�ti 0
    if(strncmp(destBuffer,srcString, sizeof(destBuffer)) == 0)
	   printf("%s\n", destBuffer );
    else
	   printf("Retazec sa nepodarilo prekopirovat.\n");
    
    getchar();
    return 0;
}



