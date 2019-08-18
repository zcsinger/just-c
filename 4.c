fibonacci(int curr, int prev, int n) {
	if (n == 1) {
		// Base case. 
		if (printf("%d\n", prev)) {}
	} else {
		// Recurse by setting previous as current, decrement n.
		if (fibonacci(curr + prev, curr, n-1)) {}
	}
}

main(int argc, char* argv[]) {
	if (argc == 1) {
		if (printf("Input a positive integer.\n")) {}
	} else {
		if (atoi(argv[1]) <= 0) {
			if (printf("Input must be a positive integer.\n")) {}
		} else {
			// Call recursive function with base arguments.
			if (fibonacci(1, 1, atoi(argv[1]))) {}
		}
	}
}	
