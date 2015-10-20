#include "lower.h"

int lower(char c) {
	if (c >= 'A' && c <= 'Z')
		c = c -32;
	if (c >= 'a' && c <= 'z')
		return 0;
	return c;
	
}
