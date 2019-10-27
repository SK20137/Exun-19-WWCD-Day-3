// Calculate sum of digits of a given number n
// Complexity: E

int sumOfDigits(int n) {
 	if(n <10 ) { 
 		return n;
 	}
 	return n % 10 + sumOfDigits(n / 10); 
}

