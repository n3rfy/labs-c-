#include "SomeHeader.h"
int main(int argc, char *argv[]) { int personCount = 0; for (int i = 1; i < argc; i++)
		if (CompareStrings(argv[i], "-person") == 0)
			personCount++;
	struct Person persons[personCount];

	CreatePersons(argc, argv, persons, personCount);
	printf("%s\n",
			"Chose:\n\tascending - 1\n\tdescending - 0");
	fflush(NULL);
	char ans[100];
	scanf_s("%s", ans);
	if (CompareStrings(ans, "1") == 1)
		Sort(persons, personCount, Asc);
	else if (CompareStrings(ans, "0") == 1)
		Sort(persons, personCount, Desc);
	else {
		printf("%s\n", "Oh, noo!! Error");
		return 0;
	}
	PrintPersons(persons, personCount);
	return 0;
}
