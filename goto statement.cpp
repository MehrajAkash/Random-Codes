// C program to check if a number is
// even or not using goto statement
#include <iostream>
using namespace std;

// function to check even or not
void checkEvenOrNot(int num)
{
	if (num % 2 == 0)
		// jump to even
		goto even;
	else
		// jump to odd
		goto odd;

even:
	printf("%d is even \n", num);
	// return if even
	cout<<"Before return"<<endl;
	return;
odd:
	printf("%d is odd", num);
}

void numbers(){
    int n = 1;

    label:
        cout<<n<<endl;
         n++;
        if(n<=10){
            goto label;
        }
}

int main()
{
	int num = 26;
	checkEvenOrNot(num);

	numbers();
	return 0;
}

