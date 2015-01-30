#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int start;
    int s;
    int h;

  do{
    printf("Choose a number between 1 and 23: \n");
    height = GetInt();
  }
  while((height<0) || (height>23));
    
        for(start = 1; start <= height; start++)
         {
            for(s = (height-start); s>0 ; s--)
                {
                    printf(" ");
                }
            for(h= 0; h<=start; h++)
                {
                    printf("#");
                }
           printf("\n");
        }
       return 0;
}
