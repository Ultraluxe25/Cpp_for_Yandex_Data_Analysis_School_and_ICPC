/* Dwarf divorce

We all know how the story about Snow White and the Seven Dwarfs ended - Snow White left with her fiancé, leaving all those who selflessly helped her in difficult times. After her departure, the dwarves began to quarrel - each believed that the others had offended Snow White in some way.
In order not to bring eternal quarrels to bloodshed,
the once friendly dwarves decided to part, dividing all their property, from mugs to diamonds, according to the old dwarf divorce laws. According to these laws, all property should be most fairly divided among the gnomes, and what cannot be divided equally should not go to any of them. Thrifty gnomes decided
that undivided things will not be thrown away, but will be given to Snow White as a dowry.

For example, each of the gnomes had two pairs of shoes from birth, by the time this task appeared, the oldest gnome had worn out one of his pairs, which means that after a fair division of the remaining 26 shoes, each gnome will receive 3 shoes,
and Snow White will be made happy with 5 boots.

Note that the gnomes have a lot of some things - only 8 poppy seeds have accumulated. The dwarves spent a lot of time until they calculated that Snow White would receive only one poppy seed. Your task is to help the dwarves calculate Snow White's share. */

#include <iostream>

using namespace std;

int main() {
    int budget, Snow_Whites_share;
    cin >> budget;
    Snow_Whites_share = budget % 7;
    cout << Snow_Whites_share;
}