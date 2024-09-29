#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

//return true or false if there are two numbers in an array that adds up to the target sum

bool hasSum(const vector<int>& data, int sum) {
    unordered_set<int> comp; //created a hashset
    for (int value:data) { //for each value in the data vector
        if (comp.find(value) != comp.end()) { //find if the value I'm currently on is in the hashset because I'm adding the complement of each number
            return true; //if found, return true
        }
        comp.insert(sum - value); //otherwise, hashset add the value of the sum - value number
    }
    return false; //return false if no pairs add up to target sum
}

//this is linear solution O(n)