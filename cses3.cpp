#include<iostream>

int main()
{
	//gets input
	std::string input;//to store input
	//gets the input, stores it into variable
	std::cin >> input;

	/*makes sure input[0] != previous
	since we don't have 'z' in DNA sequence */
	char previous = 'z';

	//to keep track of how many consecutive matches
	int count_match = 0;

	//to store the highest repeat
	int highest = 0;

	//iterates over all chars of input
	for(int i = 0; i < input.length(); i++)
	{
		//if i == previous
		if(input[i] == previous)
		{
			count_match++; // increments with each match

			//updates highest if count count_match hits new record
			if(count_match > highest)
				highest = count_match;
		}
		else
		{
			if(count_match != 0)
			{
			/*this runs after a row finishes.*/

				count_match = 0;//restart the counter 
			}

			//store input[i] - 1
			previous = input[i];
		}	
	}
	/*the counter is always 1 less than the real repeatation
	becuase it's initiall value is set to 0 each time so the
	we have to print the (highest + 1).
	*/
	printf("%d\n", highest + 1);
	return 0;
}
