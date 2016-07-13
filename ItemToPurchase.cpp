#include <iostream>
#include <string>
#include "ItemToPurchase.h"
using namespace std;

void ItemToPurchase::SetName(string itemNam) {
    itemName = itemNam;
}
void ItemToPurchase::SetPrice(int itemPric) {
    itemPrice = itemPric;
}
void ItemToPurchase::SetQuantity(int itemQuantit) {
    itemQuantity = itemQuantit;
}
void ItemToPurchase::SetDescription(string itemDescriptio) {
    itemDescription = itemDescriptio;
}
string ItemToPurchase::GetName() const {
    return itemName;
}
int ItemToPurchase::GetPrice() const {
    return itemPrice;
}
int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}
string ItemToPurchase::GetDescription() const {
    return itemDescription;
}
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity) {
    SetName(name);
    SetPrice(price);
    SetQuantity(quantity);
    SetDescription(description);
}
void ItemToPurchase::PrintItemCost() {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice << endl;
    return;
}
void ItemToPurchase::PrintItemDescription() {
    cout << itemName << ": " << itemDescription << endl;
    return;
}