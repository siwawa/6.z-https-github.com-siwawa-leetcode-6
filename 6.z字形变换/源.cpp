#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* convert(char* s, int numRows) {
	int q,j, k,len,m,n;
	len = strlen(s);
	char* s1 = (char*)malloc(sizeof(char)*(len+1));
	//char s1[255] = { 0 };
	if (numRows == 1)
		return s;
	for ( q = 0, k = 0; k < len; q++) {
		s1[q] = s[k];
		k += 2*(numRows-1);
	}
	for (int i = 1; i < numRows - 1; i++) {
		j = (numRows - i - 1);
		k = i;
		for (m =2*(numRows-1)-i, n = k; m < len || n < len; j++, k++) {
			if (n < len) {
				s1[q] = s[n];
				q++;
			}
			if (m < len) {
				s1[q] = s[m];
				q++;
			}
			m += 2*(numRows - 1);
			n += 2*(numRows - 1);
		}
	}
	for (k=numRows-1; k < len;q++) {
		s1[q] = s[k];
		k += 2*(numRows-1);
	}
	s1[q] = '\0';
	return s1;
}


int main(void) {
	char *s = "yuwq";
	char *s1=convert(s,4);
	return 0;
}