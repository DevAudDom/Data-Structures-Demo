#include "list.h"

int main() {
    list mylist;
    // adding integers "2" "3" "9" to empty list
    mylist.AddNode(2);
    mylist.AddNode(3);
    mylist.AddNode(9);
    // printing list to console
    mylist.PrintList();
    // removing 3 from list
    mylist.DeleteNode(3);
    // printing list to console
    mylist.PrintList();

    return 0;
}
