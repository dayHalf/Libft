
	/*
	 * Compute the cutoff value between legal numbers and illegal
	 * numbers.  That is the largest legal value, divided by the
	 * base.  An input number that is greater than this value, if
	 * followed by a legal input character, is too big.  One that
	 * is equal to this value may be valid or not; the limit
	 * between valid and invalid numbers is then based on the last
	 * digit.  For instance, if the range for longs is
	 * [-2147483648..2147483647] and the input base is 10,
	 * cutoff will be set to 214748364 and cutlim to either
	 * 7 (neg==0) or 8 (neg==1), meaning that if we have accumulated
	 * a value > 214748364, or equal but the next digit is > 7 (or 8),
	 * the number is too big, and we will return a range error.
	 *
	 * Set 'any' if any `digits' consumed; make it negative to indicate
	 * overflow.
	 */
	const char *s;
	unsigned long acc;
	char c;
	unsigned long cutoff;
	int neg, any, cutlim;
	
	acc = any = 0;

	cutoff = neg ? (unsigned long)-(LONG_MIN + LONG_MAX) + LONG_MAX 
	    : LONG_MAX;														//cutoff = |long_min| (neg) or long_max (pos)
	cutlim = cutoff % base;												//cutlim = cutoff % base
	cutoff /= base;
	for ( ; ; c = *s++) {
		if (c >= '0' && c <= '9')
			c -= '0';					//convert char to num
		else
			break;						//is_num checking

		if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))	//any : for checking ERANGE
			any = -1;
		else {
			any = 1;
			acc *= base;
			acc += c;
		}
	}

	//checking any & return val
	if (any < 0) {
		acc = neg ? LONG_MIN : LONG_MAX;
		errno = ERANGE;
	} 
	else if (!any){
		errno = EINVAL;
	} 
	else if (neg)
		acc = -acc;
	return (acc);
}
