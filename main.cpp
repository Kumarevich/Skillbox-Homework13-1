#include <iostream>
#include <vector>

int main() {
    int size, num, delNum;
    int count = 0;
    std::vector<int> vec;
    std::cout << "Input the vector size: ";
    std::cin >> size;
    while (count < size) {
        std::cout << "Input the number " << count + 1 << ": ";
        std::cin >> num;
        vec.push_back(num);
        ++count;
    }

    if(!vec.empty()) {
        std::cout << "Input the number to be deleted: ";
        std::cin >> delNum;
        for (int i = vec.size() - 1; i >= 0; --i) {
            if (vec[i] == delNum) {
                vec.erase(vec.begin() + i);
            }
        }
    }
    if(vec.empty())
        std::cout << "Your vector is empty.";
    else
        for (int i = 0; i < vec.size(); ++i)
            std::cout << vec[i] << std::endl;

    return 0;
}
