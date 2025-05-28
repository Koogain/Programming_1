#include <stdio.h>
#include "contact.h"

void testContact();

int main(void)
{
	testContact();

	return 0;
}
void testContact()
{
	Contact c1 = { "È«±æµ¿", "01022778029", MAN, 2025 };
	Contact c2 = { "È«±æµ¿", "01022778029", MAN, 2025 };
	Contact c3 = { "±è±æµ¿", "01022778029", MAN, 2025 };

	printContact(c1);

}