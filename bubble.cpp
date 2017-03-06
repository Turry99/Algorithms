#include <iostream>

int s[8] = {1, 8, 2, 6 ,9, 4, 0, 3};
// 0,1,2,3,4,6,8,9

void bubble();

int main()

	bubble();

	for(int i=0; i<8;i++){
		std::cout << "Position " << i <<  " is " << s[i] << std::endl;
	}
	return 0;
}


void bubble() // Sort the list
{
	int length;
	length = sizeof(s)/sizeof(*s); // Get the length of the list
	for (int n=0;n < (length-1);n++){
		int pos = length - n;
		if(pos == 1)
			break;
		for(int x=0;x < (pos-1);x++){
			if (s[x] > s[x+1]){
				int z; // Exchange the values
				z = s[x];
				s[x] = s[x+1];
				s[x+1] = z;
			}
		}
	}
}