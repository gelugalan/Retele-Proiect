#include <stdio.h>
#include <string.h>


void trim(char* arr, int length) {
  int i;
  for (i = 0; i < length; i++) { // trim \n
    if (arr[i] == '\n') {
      arr[i] = '\0';
      break;
    }
  }
}
int main()
{

char str[] = "gelu-alin:salut ce mai faci";
  
  int ok=4;
  char str2[]="abcdefghij";
  char buffer[200];
  printf(" \n inainte strncpy:%s \n",str);
  strncpy(str2,str,ok);
  str2[ok]='\0';
  printf(" \n dupa strncpy:%s \n",str2);
    return 0;

}
