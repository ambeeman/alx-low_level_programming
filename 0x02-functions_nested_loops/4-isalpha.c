<<<<<<< HEAD
#include "main.h"
/**
 * _isalpha - fucntion to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
=======
#include "main.h"                                                            
/**                                                                          
 * _isalpha - fucntion to check if c is a letter, lowercase or uppercase     
 * @c: is the int that will use for the argument of the function             
 * Return: 0                                                                 
 */                                                                          
int _isalpha(int c)                                                          
{                                                                            
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))                
        {                                                                    
        return (1);                                                          
        }                                                                    
        else                                                                 
        return (0);                                                          
}                                                                                                
>>>>>>> ea2edf0df4b853fa478784a9148b7878dcd936d1
