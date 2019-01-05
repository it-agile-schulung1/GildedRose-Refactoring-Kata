#include "GildedRose.h"

class BrieItem : public Item {
    public:
    BrieItem(string name, int sellIn, int quality) :  Item(name, sellIn, quality)
    {}
    void updateQuality();
};