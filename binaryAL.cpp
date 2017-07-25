#include <iostream>

int iterations = 0;
int maximum,curPos, amount,guess,result;
int minimum = 0;

using namespace std;

int bin(int j);

int main(){
    cout << "How big do you want the list to be?\n->   ";
    cin >> amount;
    int numbers[amount];
    
    //Fill the list with ordered integers
	//They can be floats/doubles but for the sake of this I will use integers
	for (int i=0;i < amount;i++){
    	numbers[i]=i;
	}

	//Get the guess
	cout << "Tell me a number and I will tell you where is it in my list\n->   ";
	cin >> guess;


	result = bin(guess);
	if (result == -1){
		cout << "We couldn't find your number :c" << endl;
	} else {
		cout << "Your number was found in position: " << result << " with only " << iterations << " iterations" << endl;
	}


    return 0;
}


int bin(int find){
	int maximum = amount -1;
	while (1){
		iterations++;
		curPos = (minimum + maximum)/2;
		if (curPos == guess) return curPos; // Found the number
		else if (curPos < guess) { // The number is too low
			minimum = curPos;
			continue;
		} else if (curPos > guess) { // The number is too big
			maximum = curPos;
			continue;
		} else return -1; // Didn't find it
	}
}