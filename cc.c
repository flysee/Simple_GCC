#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cut(char *fn){
  int i=0;
  i=strlen(fn);
  char* fn1=fn+i;
  while(fn1>fn){
    if(*fn1=='.')
    {
     *fn1++=' ';
     *fn1='\0';
     break;}
     fn1--;
   }
 }

 int main(int argc, char *argv[])
 {
  char cc[]="gcc -o ";
  char *fn=argv[1];
  char file[11];
  char fbin[11];
  char bin[]="./";
  strcpy(file,argv[1]);
  cut(fn);
  strcpy(fbin,fn);
  strcat (cc,fn);
  strcat (cc,file);
  system(cc);//Compile the file
  strcat (bin,fbin);
  system(bin);//Execute the file
  return 0;
}
