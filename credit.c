#include <stdio.h>
#include <stdbool.h>

// 4003600000000014 (teste com esse número)
int every_other_digit(long credit_card);
int multiplyAndSum(int last_digit);

int main() {
  long credit_card;
  printf("Digite o número do seu cartão de crédito: ");
  scanf("%ld", &credit_card);
  int sum_every_other_digit = every_other_digit(credit_card);
  printf("%i\n", sum_every_other_digit);
  if (sum_every_other_digit % 10 != 0){
    printf("Inválido\n");
    return 1;
  }
  else{
    printf("Cartão Válido!\n");
    
    long temp = credit_card;
    int count = 0;
    
    while(temp > 0){
      temp = temp / 10;
      count ++;
    }
    long start = credit_card;
    
    while (start >= 100) {
      start /= 10;
    }
    
    if ((start == 34 || start == 37) && count == 15){
      printf("AMERICAN EXPRESS\n");
    }
    else if (start >= 51 && start <= 55 && count == 16){
      printf("MASTERCARD\n");
    }
    else if ((start / 10 == 4) && (count == 13 || count == 16)){
      printf("VISA\n");
    }
    else{
      printf("Bandeira desconhecida\n");
    }

    return 0;
  }
}

int every_other_digit(long credit_card){
  int sum = 0;
  bool isAlternateDigit = false;
  while (credit_card > 0){
    if (isAlternateDigit == true){
      int last_digit = credit_card % 10;
      int product = multiplyAndSum(last_digit);
      sum = sum + product;
    }
    else{
      int last_digit = credit_card % 10;
      sum = sum + last_digit;
    }
    isAlternateDigit = !isAlternateDigit;
    credit_card = credit_card / 10;
  }
  return sum;
}

int multiplyAndSum(int last_digit){
  int multiply = last_digit * 2;
  int sum = 0;
  while (multiply > 0){
    int last_digit_multiply = multiply % 10;
    sum = sum + last_digit_multiply;
    multiply = multiply / 10;
  }
  return sum;
}