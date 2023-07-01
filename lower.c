#include <stdio.h>
#include <string.h>
 
int main()
{
  int i;
  char str[100];
  printf("Enter your string : ");
  fgets(str,100,stdin);
  for(i=0;str[i];i++)
    {
     if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32; 
    }
  }
    printf("lowercase string : %s", str);

    return 0;
}
