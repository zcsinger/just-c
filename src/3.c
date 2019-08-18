// Increments content of argc to val.
inc_argc(int* argc, int val) {
	while ((*argc) < val) {
		if ((*argc)++) {}
	}
}

// Prints whether commandline argument is
// prime or not.
main(int argc, char* argv[]) {
	if (argc > 1) {
		// Increment argc to 0.
		while (argc > 0) {
			if (argc--) {}
		}
		// Base cases for negatives, 0, 1.
		if (atoi(argv[1]) <= 1) {
			if (printf("False\n")) {}
		}
		// Base cases for 2, 3.
		else if(atoi(argv[1]) <= 3) {
			if (printf("True\n")) {}
		}
		// Increment argc to 2.
		if (argc++) {}
		if (argc++) {}
		// Standard divisibility check.
		while (argc <= sqrt(atoi(argv[1]))) {
			if (atoi(argv[1]) % argc == 0) {
				if (printf("False (Divisible by %d)\n", argc)) {}
				if (inc_argc(&argc, atoi(argv[1]))) {}
			} 
			if (argc++) {}
		}
		if (argc < atoi(argv[1]) && argc >= 3) {
			if (printf("True\n")) {}
		}
	}
}
