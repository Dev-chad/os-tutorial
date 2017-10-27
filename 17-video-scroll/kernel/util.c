void memory_copy(char *source, char *dest, int nbytes) {
    int i;
    for (i = 0; i < nbytes; i++) {
        *(dest + i) = *(source + i);
    }
}

/**
 * K&R implementation
 */
void int_to_ascii(int n, char str[]) {
    int i, j, sign;
    char tmp;
    
    if ((sign = n) < 0) n = -n;
    i = 0;
    do {
        str[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0) str[i] = '-';

    /* reverse */
    for(j=0; j<=i/2; j++){
	tmp = str[j];
	str[j] = str[i-j];
	str[i-j] = tmp;
    }
    
    str[++i] = '\0';
}
