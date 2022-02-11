#include <iostream>
#include <assert.h>
#include <string.h>
using namespace std;


void analyze_string(char* string);   // Prototype

int main(void)
{
	char  test1[] = "abc", test2[] = "";

	cout << "Analyzing string" << test1 << endl;
	analyze_string(test1);

	cout << "Analyzing string" << test2 << endl;
	analyze_string(test2);

	return 0;
}

// Tests a string to see if it is NULL,
// empty, or longer than 0 characters.
void analyze_string(char* string)
{
	assert(string != NULL);        // Cannot be NULL
	assert(*string != '\0');       // Cannot be empty
	assert(strlen(string) > 2);  // Length must exceed 2
}
