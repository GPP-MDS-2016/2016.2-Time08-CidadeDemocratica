#include <stdio.h>

void printMenu();
void printInvalidOptionMessage();
int add(int a, int b);
int sub(int numA,int numB);
int div(int numA, int numB);
int main() {

  printMenu();
  int option = 0;

  scanf("%d", &option);

  int numA = 0, numB = 0;
  int result = 0;

  do {
    switch (option) {
      case 1:
        scanf("%d%d\n", &numA, &numB);
        result = add(numA, numB);
        break;
     case 2:
        scanf("%d%d",&numA,&numB);
        result = sub(numA,numB);
        break;
      default:
        printInvalidOptionMessage();
    }
  } while (option > 2 || option < 1);
  printf("%d\n",result );

  return 0;
}

int add(int a, int b) {
  return a + b;
}

void printMenu() {
  printf("1. Add\n2. Sub\n");
}

void printInvalidOptionMessage() {
  printf("Escolha uma opcao valida\n");
}
 int sub(int numA,int numB){
   int result = numA - numB;
   return result;
 }
int div(int numA, int numB){
  int result  = numA / numB;
  return result;
}
