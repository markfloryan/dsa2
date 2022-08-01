#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>

using namespace std;

void insertionSort(vector<int> &list, int start, int end);
void quickSort(vector<int> &list, int i, int j, int minSize);
bool checkSorted(vector<int> &orig, vector<int> &sorted);

/* Number of elements to sort */
int SIZE = 100;

int main() {	
	
	/* Make an array (vector) to sort. Fill with random numbers */
	vector<int> list;
	for(int i=0; i<SIZE; i++) list.push_back((int)(rand()*SIZE));
	
	/* Make copies to sort */
	vector<int> ins;
	vector<int> qui;

	ins = list; qui = list; //should make deep copies
	

	cout << "Sorting using insertion sort...";
	insertionSort(ins, 0, ins.size()-1);
	cout << "DONE\nChecking if sorted correctly...";
	checkSorted(list, ins);
	cout << "DONE" << endl;
	
	cout << "Sorting using quick sort...";
	quickSort(qui, 0, qui.size()-1, 1);
	cout << "DONE\nChecking if sorted correctly...";
	checkSorted(list, qui);
	cout << "DONE" << endl;

}

	
bool checkSorted(vector<int> &orig, vector<int> &sorted) {

	/* Make sure size is the same */
	if(orig.size() != sorted.size()) {
		cout << "ERROR...original list and sorted list have different lengths...";
		return false;
	}
	
	/* Make sure new array is sorted */
	for(int i=1; i<sorted.size(); i++) {
		if(sorted[i] < sorted[i-1]) {
			cout << "ERROR...the sorted list does not appear to be correctly sorted...";
			return false;
		}
	}
	
	/* Make sure the same elements are in each array */
	unordered_map<int, int> count;
	for(int i=0; i<orig.size(); i++) {
		if(count.count(orig[i]) == 0) count[orig[i]] = 1;
		else count[orig[i]]++;
		
		if(count.count(sorted[i]) == 0) count[sorted[i]] = -1;
		else count[sorted[i]]--;
	}
	for(auto &key : count) {
		if(key.second != 0) {
			cout << "ERROR...The sorted list does not contain the same elements that the original list does...";
			return false;
		}
	}
	
	return true;
}

/**
 * Use this printlist method while debugging if helpful
 * @param list
 */
void printList(vector<int> &list) {
	for(int i=0; i<list.size(); i++) {
		cout << list[i] << ", ";
	}
	cout << endl;
}
