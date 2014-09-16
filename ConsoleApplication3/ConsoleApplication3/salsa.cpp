#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	vector<string> names(5);
	names.at(0) = "Mild";
	names.at(1) = "Medium";
	names.at(2) = "Sweet";
	names.at(3) = "Hot";
	names.at(4) = "Zesty";
		
	vector<int> sales(5);

	//ask user for jars sold for each flavor
	for (int i = 0; i < 5; i++)
	{

		cout << "Enter the amount of jars sold of " << names.at(i) << ": ";
		cin >> sales.at(i);
		while (sales.at(i) < 0){
			cout << "The amount you entered was below zero. Please try again." << endl;
			cout << "Enter the amount of jars sold of " << names.at(i) << ": ";
			cin >> sales.at(i);		
		}
		cout << endl;
	}

	int highest = 0;
	int lowest = 0;
	int total = 0;

	// Comparison to get highest and lowest flavor sold. Also calculate total sales.
	for (int i = 0; i < 5; i++){
		if (sales.at(i) > sales.at(highest)){
			highest = i;
		}
		else if (sales.at(i) < sales.at(lowest)){
			lowest = i;
		}
		total += sales.at(i);
	}

	// Sales report
	cout << "Report of sales: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << names.at(i) << ": " << sales.at(i) << endl;
	}
	
	cout << endl <<  "Highest sales: " << names.at(highest)<< " sold " << sales.at(highest)  << " jars" <<  endl;
	cout << "Lowest sales: " << names.at(lowest) << " sold " << sales.at(lowest) << " jars" << endl;
	cout << "Total sales: " << total << " jars sold" << endl;

	return 0;

}