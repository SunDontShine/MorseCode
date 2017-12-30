///////////////////////////////////////////////////////////////////////////////
// File Name: MorseAlphabet.c
// Description:
//
///////////////////////////////////////////////////////////////////////////////

#include "MorseAlphabet.h"
#include "MorseTranslator.h"

// ------ Public variable definitions -----------------------------------------
// ------ Private function prototypes -----------------------------------------

// ------ Private constants ---------------------------------------------------
#define ASCII_BASE_NUM 65

// ------ Private variables ---------------------------------------------------

///////////////////////////////////////////////////////////////////////////////
// ------ Function implementations---------------------------------------------
///////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////// 
// Function   :             
// Description:    Returns a character based on the morse string parameter     
// Parameters :    sMorseString - string to translate 
///////////////////////////////////////////////////////////////////////////////                  
char MorseToChar(char *sMorseString)
{
	int i;
	//iterate through each char in morse alphabet
	//if a match
	//return the (char)ASCII_BASE_NUM+i
	//if not, continue
	for (i = 0; i < 26; i++)
	{
		if (strcmp(sMorseString, MorseAlpha[i]) == 0)
		{
			return ((char)65 + i);
		}
	}
	return 's';
}
