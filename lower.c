#include "lower.h"

int lower(char c) {
	if (c >= 'A' && c <= 'Z')
		return 0;
	else
		return 1;
}
