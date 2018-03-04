#include "spongeMockify.h"

void changeCase(char &c)
{
	if ((bool)isupper(c))
		c = tolower(c);
	else
		c = toupper(c);
}

void decideCase(char &c, char prev, char prev2)
{
	bool isUpper = (bool)isupper(c);
	bool isValid1 = (prev || prev != NULL || (bool)isalpha(prev));
	bool isValid2 = (prev2 || prev2 != NULL || (bool)isalpha(prev2));
	int odds = rand() % 100;
	//First char -> 50%
	if ((!isValid1) && (!isValid2)) {
		if (odds > 50)
			changeCase(c);
		return;
	}
	//prev char has other case
	if ((bool)isupper(prev) != isUpper) {
		if (odds >= 85) {
			changeCase(c);
			return;
		}
	}	// Else, there is a 85% chance to swap if prev2 does not match case
	else if (!isValid2 || (bool)isupper(prev2) != isUpper) {
		if (odds < 85) {
			changeCase(c);
			return;
		}
		else {
			return;
		}
	}
	// Prev2 *also* matches case, so there is a 98% chance to swap
	else if (odds < 98) {
		changeCase(c);
		return;
	}
	return;
}

void SpongeMockify(std::string &text)
{
	std::string buffer = text;

	for (int i = 0; (size_t)i < text.size(); i++) {
		char c = buffer[i];
		static char prevLetter;
		static char prev2Letter;

		if (!c || c == NULL)
			continue;
		if (!(bool)isalpha(c))
			continue;

		if (c == '"' || c == '\\' || c == ';')
			c = '.';
		else {
			decideCase(c, prevLetter, prev2Letter);
		}
		prev2Letter = prevLetter;
		prevLetter = c;
		buffer[i] = c;
	}
	text = buffer;
}