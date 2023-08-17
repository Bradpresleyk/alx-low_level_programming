#include <unistd.h>
#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 */
int _islower(int c)
{	

	if(c > 96 && c < 122)	
	{	
		return(1);	
	}	
	else 	
	{	
		return(0);	
	}
}
