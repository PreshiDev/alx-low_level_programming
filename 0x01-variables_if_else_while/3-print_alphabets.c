#!/bin/bash
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: always 0 (Success)
 */
int main(void)
{
	char lowercase;
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
