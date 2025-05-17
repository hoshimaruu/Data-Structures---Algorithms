#include <iostream>
#include <list>
#include <algorithm>

//correct solution sa C++ list challenge based sa correction ni ChatGPT
int main() {
    std::list<int> listA = {3, 5, 7};
    std::list<int> listB = {4, 5, 7};
    std::list<int> backup;

    listA.push_front(1);
    listA.push_back(10);
    listB.push_front(2);
    listB.push_back(10);

    listA.remove(10);
    listB.remove(10);

    listA.sort();
    listB.sort();

    // Correct merge: merge listB into listA
    listA.merge(listB);

    // Remove duplicates using list's unique() method
    listA.unique();

    // Move priority products (5 and 7) from listB to listA at second position
    // After merge, listB should be empty, so let's add them back first to demo splice:

    listB = {5, 7}; // Add priority products back to listB

    auto itA = listA.begin();
    std::advance(itA, 1); // second position in listA

    // Find the range of priority products in listB
    auto start = listB.begin();
    auto end = listB.end();

    listA.splice(itA, listB, start, end);

    // Swap listA with backup
    backup.swap(listA);

    // Remove products < 3
    backup.remove_if([](int x) { return x < 3; });

    // Insert special product 99 at front
    backup.push_front(99);

    // Erase product at third position
    auto itBackup = backup.begin();
    std::advance(itBackup, 2);
    backup.erase(itBackup);

    // Pop front and back
    backup.pop_front();
    backup.pop_back();

    // Print final contents
    std::cout << "Backup list: ";
    for (int num : backup) std::cout << num << " ";
}
