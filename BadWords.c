#include <stdio.h>
#include <string.h>	


void replace_goon(char *str) { // Takes in an address


	const char *target = "goon"; // the word we want to replace
	const char *replacement = "****"; // the replacement text

	size_t target_len = strlen(target); // len of target word
	//the adress of the string passed to the function
	char *pos = str; // pointer to serarch through string
	//strstr locates the first occurance of a substring
	//v1 = haystack = pointer to the thing to be searched.
	//v2 = needle = pointer to substring to search for	j
	
	//first, set pos to the first occurence of "goon"
	//this continues until there is none (while not null)	
	while ((pos = strstr(pos,target)) != NULL) {
		//memcpy
		//v1 = destination = where the data will be stored
		//v2 = source = where the data comes from
		//v3 = n = the size of the data in bytes
		memcpy(pos, replacement, target_len);
		pos += target_len;	
	}


}
int main()
{
	char text[100] = "That goon is not goonish. Goon googoon ga googoogoon, nickagooneon.";
	replace_goon(text);
	printf("%s\n", text);
	return 0;	



}


