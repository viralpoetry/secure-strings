
#include "stdio.h"

// secure_strncpy( destination array, 
//			       size of destination array,
//			       copied string )

char * secure_strncpy(char *dst,  size_t sizeDst, const char *src )
{
    size_t lenSrc = strlen(src);
    // is copied string shorter than destination?
    if ( sizeDst > lenSrc )
    {
	   dst[lenSrc] = '\0';
	   return strncpy(dst, src, lenSrc);
    }
    else
	   // return untouched destination
	   return dst;
    
}

int main(int argc, char *argv[])
{
    /* Usage */
    char destArray[10];
    char *srcString = "012345678";

    secure_strncpy(destArray, sizeof(destArray), srcString);

    /* if equal, return will be zero */
    if(strncmp(destArray,srcString, sizeof(destArray)) == 0)
	   printf("%s\n", destArray );
    else
	   printf("failed to copy string.\n");
    
    return 0;
}



