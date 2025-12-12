#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
	int index;
	int i;

	char *first_half = "One for ";
	char *second_half = ", one for me.";
	char *you = "you";
	index = 0;
	i = 0;
	while(first_half[i])
		buffer[index++] = first_half[i++];
	i = 0;
	if (name != NULL)
		while(*name)
			buffer[index++] = *(name++);
	else
		while(you[i])
			buffer[index++] = you[i++];
	i = 0;
	while(second_half[i])
		buffer[index++] = second_half[i++];
	buffer[index] = '\0';
}
