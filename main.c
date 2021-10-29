#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
  double cale;
  double centymetry,przelicznik;
  przelicznik=2.54;

  printf("Kalkulator cali na centymetry.\n\nile chcesz zamienic cali na cm?: ");
  scanf("%lf", &cale);

  centymetry=cale*przelicznik;

  printf("wynik to: %lf",centymetry);

  _getch();
  return 0;
}
