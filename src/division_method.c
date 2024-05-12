#include <stdio.h>
#include <string.h>

#define PRIME_NUMBER 71

static int hash_division_method(const char*);

static int hash_division_method(const char* input) {
	int hash_number = 0;
	int input_length = strlen(input);

	for (int i = 0; i < input_length; i++) {
		hash_number += (int)input[i];
	}

	return hash_number % PRIME_NUMBER;
}

int main() {
	char user_input[256] = "";
	printf("Hash Division Method\n");
	printf("--------------------\n");
	printf("Input String: %s", user_input);
	fgets(user_input, sizeof(user_input), stdin);
	user_input[strcspn(user_input, "\n")] = 0;
	printf("Hash Value: %d\n", hash_division_method(user_input));
	return 0;
}