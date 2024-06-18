#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   char b[100];
   scanf("%[^\n] %[^\n]",a,b);
   
  // int sz = sizeof(a);
  // int siz = strlen(a);
  // fgets(a,sizeof(a),stdin);
  // a[strlen(a)-1] = '\0';

   //scanf("%[^\n]",a);
  // gets(a);
  //fgets(a , sizeof(a),stdin);

    // char b[12];
   // scanf("%[^\n]",b);
  //  scanf(" %[^\n]",b);
   //gets(b);
   //fgets(b , sizeof(b),stdin);

   // strncpy(a,b,sizeof(b));

    printf("%s \n%s\n",a,b);
  //  printf("%s\n",a);
  //  printf("%d\n",siz);
  //  printf("%s\n",b);
   char A[100];
    scanf(" %[^\n]",A);
    printf("%s\n",A);




    return 0;
}