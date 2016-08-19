  #include <stdio.h>

  void printMenu();
  void printInvalidOptionMessage();
  int add(int numA, int numB);
  int sub(int numA, int numB);
  int div(int numA, int numB);
  int mult(int numA, int numB);

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
          scanf("%d%d", &numA, &numB);
          result = sub(numA, numB);
          break;
        case 3:
          scanf("%d%d", &numA, &numB);
          result = div(numA, numB);
          break;
        case 4:
          scanf("%d%d", &numA, &numB);
          result = mult(numA, numB);
          break;
        default:
          printInvalidOptionMessage();
      }
    } while (option > 4 || option < 1);

    printf("%d\n", result);

    return 0;
  }

  int add(int numA, int numB) {
    int result = numA + numB;
    return result;
  }

  int sub(int numA, int numB) {
    int result = numA - numB;
    return result;
  }

  int div(int numA, int numB) {
    int result = numA / numB;
    return result;
  }

  int mult(int numA, int numB) {
    int result = numA * numB;
    return result;
  }

  void printMenu() {
    printf("1. Add\n2. Sub\n3. Div\n");
  }

  void printInvalidOptionMessage() {
    printf("Escolha uma opcao valida\n");
  }
