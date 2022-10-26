#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int main()
{
  int length = 4;

  char *password = malloc(length + 1);


  char *digits = "0123456789";
  int digits_length = strlen(digits);
  
  char *lowers = "abcdefghijklmnopqrstuwxyz";
  int lowers_length = strlen(lowers);
  
  char *uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int uppers_length = strlen(uppers);
  
    
  srand(time(NULL) * getpid());

  for (int i = 0; i < length; i++)
  {
    int char_type = rand() % 4;
    if (char_type == 0)
      password[i] = digits[rand() % digits_length];
    else if (char_type == 1)
      password[i] = lowers[rand() % lowers_length];
    else
      password[i] = uppers[rand() % uppers_length];
    
  }

  password[length] = '\0';
  
  printf("%s", password);
  printf(" Congrats");
  
  free(password);

  return 0;
}
