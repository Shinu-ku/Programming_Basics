// Name: Soumya Kushwah  Rollno: 2305823  Branch: VOC IT
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>
using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main() {
    // List of products
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Phone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Lamp", "Home"},
    };

    // Deque to store recent customers
    deque<string> recentCustomer = {"C001", "C002", "C003"};
    recentCustomer.push_back("C004");
    recentCustomer.push_back("C005");

    // List to store order history
    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    // Set to store unique categories
    set<string> categories;
    for (const auto &product : products) {
        categories.insert(product.category);
    }

    // Map to store product stock information
    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    // Multimap to associate customers with their orders
    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    // Unordered map for customer data
    unordered_map<string, string> customerData = {
        {"C001", "Shinu"},
        {"C002", "Soumya"},
        {"C003", "Harry"},
        {"C004", "Daksh"},
        {"C005", "Kabish"},
    };

    // Unordered set to store unique product IDs
    unordered_set<int> uniqueProductIDs;
    for (const auto &product : products) {
        uniqueProductIDs.insert(product.productID);
    }

    // Output
    cout << "Product Categories: ";
    for (const auto &category : categories) {
        cout << category << " ";
    }
    cout << endl;
    return 0;
}

