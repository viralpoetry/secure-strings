
#include <stdio.h>

// secure_strncat( destination array, 
//			       source array length, 
//			       copied string )

char * secure_strncat(char * dst, size_t sizeDst, const char * src)
{
    size_t srcLength = strlen(src);
    size_t totalLength = strlen(dst) + srcLength;
    
    if (totalLength < sizeDst)
    {
	   // copy string to destination
	   return strncat(dst, src, srcLength);
    }
    else
	   // return untouched destination
	   return dst;
}

int main(int argc, char *argv[])
{
    /* Usage */
    char destArray[10] = "0123";
    char srcString[]  = "45678";

    printf("%s\n", secure_strncat(destArray, sizeof(destArray), srcString));
    
    return 0;
}



