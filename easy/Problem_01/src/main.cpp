#include <iostream>


int main() {
    
    // Defining a  test case to practice with
    int array[] = {2, 7, 11, 15};
    int target = 9; // Defined target for tthe test case

    int size = sizeof(array) / sizeof(array[0]);
    
    // to find the sum pairs, it has to for every number in the array and find the number. 
    // 9 - 2 = 7
    //pairs are 2 and 7

    for (int i = 0; i < size; i++) {
        int num1 = target - array[i];
        if (array[i] = num1) {
            int num1pair = array[i];
        }
        std::cout << array[i] << " " << num1 << std::endl;
    }

    std::cout << "testing" << std::endl;

    return 0;

}