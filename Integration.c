#include <stdio.h>
#include <math.h>
/*hp_fyFrettfrZKCJfEyYn7Uduy2aABnOg4CbiFG*/

void main(void) {
	int i, y;
	char a[15], x;
	
	fgets(a, 15, stdin);
	
	
	for(i=0;i<15;i++){
		//printf("1-\n");
		if(a[i] == 'x'){
			//printf("2-\n");
			if(a[i+1] == '^'){
				a[i+2] = a[i+2] + 1;
				a[i+3] = '/';
				a[i+4] = a[i+2];
				break;
			}
			else if(a[i+1] != '^'){
				//printf("3-\n");
				if(a[i+1] == ' '){
					//printf("4-\n");
					a[i+1] = '^';
					a[i+2] = '2';
					a[i+3] = '/';
					a[i+4] = '2';
					break;
				}
			}
			break;
		}
	}
	printf("\n\n");
	
	printf("%s\n", a);
	
	
}
