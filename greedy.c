#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    int counter = 0;
    float orig_owed = 0;
    int change_owed = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    
      do{
    
        printf("Oh, hai! How much change is owed? \n");
        orig_owed = GetFloat();
        
      }while(orig_owed <=0);
     
      change_owed = (int)round(orig_owed*100);
     
      while(change_owed>=quarter)
      {
      change_owed -= quarter;
      counter++;
      }
      while(change_owed>=dime)
      {
      change_owed -= dime;
      counter++;
      }
      while(change_owed>=nickel)
      {
      change_owed -= nickel;
      counter++;
      }
      while(change_owed>=penny)
      {
      change_owed -= penny;
      counter++;
      }
    printf("%d\n",counter);
}
