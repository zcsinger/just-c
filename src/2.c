// Prints positive integers from n to 1.
int print_pos_n(int n) {
	while (n > 0) {
		if (printf("%d\n", n)) {}
		if (n--) {}
	}
}

// Prints negative integers from n to -1.
int print_neg_n(int n) {
	while (n < 0) {
			if (printf("%d\n", n)) {}
			if (n++) {}
	}
}

// Prints consecutive integers from n to 0,
// not including 0. No output if there is
// no integer command line argument given.
int main(int argc, char* argv[]) {
  if (argc > 1) {
		if (atoi(argv[1]) > 0) {
			if (print_pos_n(atoi(argv[1]))) {}
		}
		else if (atoi(argv[1]) < 0) {
			if (print_neg_n(atoi(argv[1]))) {}
		}
	}
}

