/*
* print_int.c - Function when i or d
* Author: Rodrigo Zarate & Carlos Matallana
* Date: July 28, 2021
*/

/**
* print_int - Print formated
* @theList: va_arg
* Return: String to print
*/

char *print_int(va_list theList)
{
char *whattosave;
int n;
int i = 0, j = 0;
char muffer[10]; /* for the muuuus */
unsigned int mu;

/* look for null */
if(!theList)
	return (NULL);
/* case zero */
n = va_arg(theList, int);
	if (n == 0)
	{
		j = 1;
		whattosave = malloc(sizeof(char) * 2);
		whattosave[0] = '0';
	}
	else
	{
	/* minor than zero */
		if (n < 0)
		/* save conversion */
			mu = -n;
		else
			mu = n;

		/* get the numbers char by char */
		/* positive part */
		while (mu)
		{
			/* modulo operand and buffer++ */
			/* put the numbers one by one in buffer on reverse */
			muffer[i++] = (mu % 10) + '0';
			/* divide by ten */
			mu = mu / 10;
		}
		if (n < 0)
			muffer[i++] = '-';
			/* put minus sing at the end if negative */
		whattosave = malloc(sizeof(char) * i);
		/* i-- end of string */
		i--;
		/* reorder and save on var to send to func */
		while (i >= 0)
		{
			whattosave[j++] = muffer[i--];
		}

	}
/* put end of str */
whattosave[j] = '\0';
/* send to caller */
return (whattosave);
}
