#include <iostream>
#include <list>
#include <algorithm>

//solution ko:
int main() {
    // 1. Add new products
    
    std::list<int> listA;
    std::list<int> listB;
    std::list<int> backup;
    
    //add element;
    listA = {3, 5, 7};
    listB = {4, 5, 7};
    // TODO: Use push_front and push_back to add elements to listA and listB

    listA.push_front(1);
    listA.push_back(10);
    listB.push_front(2);
    listB.push_back(10);

    // 2. Remove discontinued product ID = 10 from listA and listB
    listA.remove(10);
    listB.remove(10);
    // b = 2, 4, 5, 7
    // a = 1, 3, 5, 7
    // 3. Sort both lists
    listA.sort();
    listB.sort();
    // TODO: Use sort()
    
    // 4. Merge listB into listA
    listB.merge(listA); ///dapat listA.merge(listB);
    // 5. Remove duplicates from listA 

    //dapat listA.unique() lang
    auto unique = std::unique(listA.begin(), listA.end());
    listA.erase(unique, listA.end());

    // 6. Move priority products (IDs 5 and 7) from listB to listA at second position
    auto itB = listB.begin();
    auto itB2 = listB.begin();
    std::advance(itB, 2);
    std::advance(itB, 4);
    auto itA = listA.begin();
    std::advance(itA, 2);
    listA.splice(itA, listB, itB, itB2);
    // 7. Swap listA with backup

     // backup = 2, 4, 5, 7
    backup.swap(listA);
    // 8. Remove products with IDs less than 3 from backup (use remove_if)
    backup.remove_if([](const int x) {return x < 3;});
    // 9. Insert special product ID 99 at the front of backup
    backup.push_front(99);
    // 10. Erase the product at the third position in backup
    auto itBackup = backup.begin();
    std::advance(itBackup, 2);
    backup.erase(itBackup);
    // 11. Pop front and back product from backup
    backup.pop_front();
    backup.pop_back();
    // Print final contents
    for(int num : backup) std::cout << num << " ";
}
