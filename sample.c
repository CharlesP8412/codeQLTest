#include <stdio.h>
int main() {
	char last_name[20];
	printf ("Enter your last name: ");
	// Originally scanf ("%s", last_name); // No limit
	scanf ("%19s", last_name);  //Limits to 19
	printf("Entered last name is %s\n", last_name);
	}
