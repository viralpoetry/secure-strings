#include "stdio.h"


char * secure_strncpy(char *dst,  size_t sizeDst, const char *src )
{
    size_t lenSrc = strlen(src);

    if ( sizeDst > lenSrc )
    {
	   dst[lenSrc] = '\0';
	   return strncpy(dst, src, lenSrc);
    }
    else

	   return dst;
    
}

int main(int argc, char *argv[])
{
    /* Usage */
    char destBuffer[10];
    char *srcString = "012345678";

    secure_strncpy(destBuffer, sizeof(destBuffer), srcString);


    if(strncmp(destBuffer,srcString, sizeof(destBuffer)) == 0)
	   printf("%s\n", destBuffer );
    else
	   printf("Error.\n");
    
    getchar();
    return 0;
}



