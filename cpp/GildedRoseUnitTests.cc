#include <gtest/gtest.h>


#include "BrieItem.h"

TEST(GildedRoseTest, Foo) {
    vector<Item> items;
    items.push_back(Item("Foo", 0, 0));
    GildedRose app(items);
    app.updateQuality();

    BrieItem brieItem = BrieItem("XXXAged Brie", 2, 0);
    brieItem.updateQuality();

    EXPECT_EQ("fixme", app.items[0].name);
}

void example()
{
    vector<Item> items;
    items.push_back(Item("+5 Dexterity Vest", 10, 20));
    items.push_back(Item("Aged Brie", 2, 0));
    items.push_back(Item("Elixir of the Mongoose", 5, 7));
    items.push_back(Item("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(Item("Conjured Mana Cake", 3, 6));
    items.push_back(BrieItem("XXXAged Brie", 2, 0));
    GildedRose app(items);
    app.updateQuality();
}
