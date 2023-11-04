#include <stdio.h>
#include <string.h>
int main(void) {
  char s1[]="12";
  char s2[]="1211";
  if(strcmp(s1,s2)>0)
    printf("%s > %s\n",s1,s2);
  else if(strcmp(s1,s2)<0)
    printf("%s < %s\n",s1,s2);
   else
    printf("%s==%s\n",s1,s2);
  return 0;
}
int myStrCmp(char *s1, char *s2){
  int i=0;
  while(s1[i]!='\0' && s2[i]!='\0'){
    if(s1[i]>s2[i])
      return 1;
    else if(s1[i]<s2[i])
      return -1;
    i++;
  }
  if(s1[i]=='\0' && s2[i]=='\0')
    return 0;
  else if(s1[i]=='\0')  
    return -1;
  else
    return 1;
}  
