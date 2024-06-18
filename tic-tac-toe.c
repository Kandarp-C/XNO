#include <stdio.h>
/*int start(){
    printf(" | | \n | | \n | | \n");
    return 0;
}*/
char turn(char c){
   if(c=='x'){
    c='o';
  }else{
    c='x';
   }
  return c;
}
void print(char a11,char a12, char a13,char a21,char a22, char a23,char a31,char a32, char a33){
  printf("%c|%c|%c\t\t",a11,a12,a13);printf("11|12|13\n");
  printf("%c|%c|%c\t\t",a21,a22,a23);printf("21|22|23\n");
  printf("%c|%c|%c\t\t",a31,a32,a33); printf("31|32|33\n");
}
void check(char a11,char a12, char a13,char a21,char a22, char a23,char a31,char a32, char a33, char l){
  int label;
  if(a11!='_' && a12!='_' && a13!='_' && a21!='_' && a22!='_' && a23!='_' && a31!='_' && a32!='_' && a33!='_'){
    printf("\n\nmatch ended\n\n****************\n");
    l='n';
  }else if(a11=='x' && a12=='x' && a13=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a21=='x' && a22=='x' && a23=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a31=='x' && a32=='x' && a33=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a11=='x' && a21=='x' && a31=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a12=='x' && a22=='x' && a32=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a13=='x' && a23=='x' && a33=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a11=='x' && a22=='x' && a33=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a13=='x' && a22=='x' && a31=='x'){
    printf("x won the game\n\n********************\n");
    l='n';
  }else if(a11=='o' && a12=='o' && a13=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a21=='o' && a22=='o' && a23=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a31=='o' && a32=='o' && a33=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a11=='o' && a21=='o' && a31=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a12=='o' && a22=='o' && a32=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a13=='o' && a23=='o' && a33=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a11=='o' && a22=='o' && a33=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }else if(a13=='o' && a22=='o' && a31=='o'){
    printf("o won the game\n\n********************\n");
    l='n';
  }
    //Main starts here
}
void main(){
    char a11,a12,a13,a21,a22,a23,a31,a32,a33;
    a11=a12=a13=a21=a22=a23='_';a31=a32=a33=' ';
    int op=0;
    char b[2],c='x',l='y';

    b[0]='y';

    label:
    b[0]=l;
    if(b[0]=='y')
    {
      print (a11,a12,a13,a21,a22,a23,a31,a32,a33);
    }else{ printf("invalid input, Please try again");
    }
 scanf("%d",&op);
 
switch (op) {
  case 11: a11=turn(c);
           c=a11;
  break;

  case 12: a12=turn(c);
           c=a12;
  break;
  case 13: a13=turn(c);
           c=a13;
  break;
  case 21: a21=turn(c);
           c=a21;
  break;

  case 22: a22=turn(c);
           c=a22;
  break;
  case 23: a23=turn(c);
           c=a23;
  break;

  case 31: a31=turn(c);
           c=a31;
  break;

  case 32: a32=turn(c);
           c=a32;
  break;
  case 33: a33=turn(c);
           c=a33;
  break;  
  default:printf("err");       
}
 
 check (a11,a12,a13,a21,a22,a23,a31,a32,a33,l);
goto label;
if (b[0]=='n'){return;}
}





