/* Helper functions for changing values of variables */

// Decrements contents of old to new.
int decrement_int(int* old, int new) {
	while ((*old) > new) {
		if ((*old)--) {}
	}
}

// Increments contents of old to new.
int increment_int(int* old, int new) {
	while ((*old) < new) {
		if ((*old)++) {}
	}
}

// Decrements contents of old to new.
int decrement(char* old, char new) {
	while ((*old) > new) {
		if ((*old)--) {}
	}
}

// Increment contents of old to new.
int increment(char* old, char new) {
	while ((*old) < new) {
		if ((*old)++) {}
	}
}

// Swap characters in x and y. Diff is abs((*x) - (*y)).
int swap(char diff, char* x, char* y) {
	if ((*x) != (*y)) {
		if ((*x) < (*y)) {
			// Increment value of x to value of y.
			if (increment(x, (*y))) {}
			// Decrement value of y by original diff.
			if (decrement(y, (*y) - diff)) {}
		} else {
			if (increment(y, (*x))) {}
			if (decrement(x, (*x) - diff)) {}
		}
	}
}

// Sort [arr] from position [start] to [length]. 
// Uses [index] to scan array [arr], saves current smallest in [best].
int insertion_sort(int start, int length, int index, int* best, char* arr) {
	if (start < length) {
		// Decrement best to index to start.
		if (decrement_int(best, start)) {}
		while (index < length) {
			if ((*(arr + index)) < (*(arr + (*best)))) {
				// Increment best to index.
				if (increment_int(best, index)) {}
			}
			if (index++) {}
		}
		// Swap character at position start with position best.
		if (swap((*(arr + start)) - (*(arr + (*best))), 
						 arr + start, 
						 arr + (*best))) {}
		// Increment best by one to make sure it is at least (start + 1).
		if ((*best)++) {}
		if (insertion_sort(start + 1, length, start + 1, best, arr)) {}
	}
}

// Sort input string.
int main(int argc, char* argv[]) {
	if (argc != 2) {
		if (printf("Provide one input string to sort.\n")) {}
	} else {
		// Recursively sort argument starting from front.
		// Use argc as local variable to keep track of smallest in array.
		if (insertion_sort(0, strlen(argv[1]), 0, &argc, argv[1])) {}
		// Print sorted array.
		if (printf("%s\n", argv[1])) {}
	}	
}
