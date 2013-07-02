#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int line;
  char str[200];

  freopen("in.txt", "r", stdin);
  freopen("out.txt", "w", stdout);

  scanf("%d", &line); printf("%d\n", line);
  gets(str);
  for(int i=0; i < line; i++){
    gets(str);
    //printf("Case #%d: ", icase+1);
    for(int i=0; i<strlen(str); i++){
      switch(str[i]){
        case 'a' : printf("y"); break;
        case 'b' : printf("h"); break;
        case 'c' : printf("e"); break;
        case 'd' : printf("s"); break;
        case 'e' : printf("o"); break;
        case 'f' : printf("c"); break;
        case 'g' : printf("v"); break;
        case 'h' : printf("x"); break;
        case 'i' : printf("d"); break;
        case 'j' : printf("u"); break;
        case 'k' : printf("i"); break;
        case 'l' : printf("g"); break;
        case 'm' : printf("l"); break;
        case 'n' : printf("b"); break;
        case 'o' : printf("k"); break;
        case 'p' : printf("r"); break;
        case 'q' : printf("z"); break;
        case 'r' : printf("t"); break;
        case 's' : printf("n"); break;
        case 't' : printf("w"); break;
        case 'u' : printf("j"); break;
        case 'v' : printf("p"); break;
        case 'w' : printf("f"); break;
        case 'x' : printf("m"); break;
        case 'y' : printf("a"); break;
        case 'z' : printf("q"); break;
        case ' ' : printf(" "); break;
        case ';' : printf(";"); break;
        case ':' : printf(":"); break;
        case ',' : printf(","); break;
        case '!' : printf("!"); break;
        case '@' : printf("@"); break;
        case '#' : printf("#"); break;
        case '$' : printf("$"); break;
        case '%' : printf("%"); break;
        case '^' : printf("^"); break;
        case '&' : printf("&"); break;
        case '*' : printf("*"); break;
        case '(' : printf("("); break;
        case ')' : printf(")"); break;
        case '-' : printf("-"); break;
        case '_' : printf("_"); break;
        case '+' : printf("+"); break;
        case '=' : printf("="); break;
        case '0' : printf("0"); break;
        case '1' : printf("9"); break;
        case '2' : printf("8"); break;
        case '3' : printf("7"); break;
        case '4' : printf("6"); break;
        case '5' : printf("5"); break;
        case '6' : printf("4"); break;
        case '7' : printf("3"); break;
        case '8' : printf("2"); break;
        case '9' : printf("1"); break;
      }
    }
    printf("\n");
  }
  return 0;
}
