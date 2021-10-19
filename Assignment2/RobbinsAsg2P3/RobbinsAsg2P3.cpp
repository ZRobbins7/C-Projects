/*
Zac Robbins
zrobbins@my.athens.edu
00100125
Asg2P3, CS317
*/

// This program calculates the number of Thrive samples on a pallet, total pallet weight, and total number of samples on the pallet.

#include <iostream>
using namespace std;

int main()
{
	const double PACK_WEIGHT = 3.15;
	const int PALLET_WEIGHT = 25;
	const int SAMPLES_PER_PACK = 20;

	// Address the user
	cout << "This program will calculate and display the number of Thrive sample packs, " << endl;
	cout << "weight of the full pallet of samples, and the total number of samples per pallet." << endl;

	int fullPallet = 51;
	int sampleWeight = fullPallet - PALLET_WEIGHT;

	int numPacks = sampleWeight / PACK_WEIGHT;
	double actualWeight = (numPacks * PACK_WEIGHT) + PALLET_WEIGHT;
	int numSamples = numPacks * SAMPLES_PER_PACK;

	// Display results and information.
	cout << "Listed below is the typical content information of a single pallet of Thrive Product: \n\n" << endl;
	cout << "Full Pallet Weight       Number of Sample Packs       Actual Pallet Weight       Total Number of Samples" << endl;
	cout << "       " << fullPallet << " lbs                    " << numPacks << " packs                   " << actualWeight << " lbs                   " << numSamples << " samples" << endl;

	return 0;
}