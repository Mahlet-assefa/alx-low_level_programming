#include <stdio.h>

/**
* main - prints the size of various types a based on
* the computer it is compiled and run on..
* Return: Always 0.
*/

int main(void)
{
printf("Size of char: %Zu byte(s)\n", sizeof(char));
printf("Size of int: %Zu byte(s)\n", sizeof(int));
printf("Size of long int: %Zu byte(s)\n", sizeof(long int));
printf("Size of long long int: %Zu byte(s)\n", sizeof(long long int));
printf("Size of float: %Zu byte(s)\n", sizeof(float));
return (0);
}
