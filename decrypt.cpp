#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int line;
  char str[200];

  freopen("out.txt", "r", stdin);
  freopen("re-in.txt", "w", stdout);

  scanf("%d", &line); printf("%d\n", line);
  gets(str);
  for(int i=0; i < line; i++){
    gets(str);
    //printf("Case #%d: ", icase+1);
    for(int i=0; i<strlen(str); i++){
      switch(str[i]){
        case 'y' : printf("a"); break;
        case 'h' : printf("b"); break;
        case 'e' : printf("c"); break;
        case 's' : printf("d"); break;
        case 'o' : printf("e"); break;
        case 'c' : printf("f"); break;
        case 'v' : printf("g"); break;
        case 'x' : printf("h"); break;
        case 'd' : printf("i"); break;
        case 'u' : printf("j"); break;
        case 'i' : printf("k"); break;
        case 'g' : printf("l"); break;
        case 'l' : printf("m"); break;
        case 'b' : printf("n"); break;
        case 'k' : printf("o"); break;
        case 'r' : printf("p"); break;
        case 'z' : printf("q"); break;
        case 't' : printf("r"); break;
        case 'n' : printf("s"); break;
        case 'w' : printf("t"); break;
        case 'j' : printf("u"); break;
        case 'p' : printf("v"); break;
        case 'f' : printf("w"); break;
        case 'm' : printf("x"); break;
        case 'a' : printf("y"); break;
        case 'q' : printf("z"); break;
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
