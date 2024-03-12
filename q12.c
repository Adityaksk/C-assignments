#include <stdio.h>
#include <limits.h>
#include<float.h>
int main()
{
    printf("| Data Type | Size | Format Specifier | Range                 |\n");
    printf("|-----------|------|-------------------|-----------------------|\n");
    printf("| char       | %d  | %%c               | %d to %d              |\n", sizeof(char), SCHAR_MIN, SCHAR_MAX);
    printf("| unsigned char | %d | %%c               | 0 to %u              |\n", sizeof(char), UCHAR_MAX);
    printf("| short int  | %d   | %%hd              | %d to %d              |\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("| unsigned short | %d | %%hu              | 0 to %u              |\n", sizeof(short), USHRT_MAX);
    printf("| int        | %d  | %%d               | %d to %d              |\n", sizeof(int), INT_MIN, INT_MAX);
    printf("| unsigned int | %d | %%u               | 0 to %u              |\n", sizeof(int), UINT_MAX);
    printf("| long int   | %d   | %%ld              | %ld to %ld            |\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("| unsigned long | %d | %%lu              | 0 to %lu             |\n", sizeof(long), ULONG_MAX);
    printf("| float      | %d   | %%f, %%g, %%e, %%E | %.e to %.e          |\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("| double     | %d   | %%f, %%g, %%e, %%E | %.e to %.e          |\n",sizeof(double), DBL_MIN, DBL_MAX);
    printf("| long double | %d   | %%f, %%g, %%e, %%E | %.Le to %.Le        |\n",sizeof(long double), LDBL_MIN, LDBL_MAX);
    return 0;
}

