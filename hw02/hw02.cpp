/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW02 : DECK OF CARD
 *****************************************************************************/
#include "cardDeckHeader.h"

using namespace std;

static const CardDeckClass Default;   // Default Deck

/******************************************************************************
 * HW 02 - Deck of Cards
 * ---------------------------------------------------------------------------
 * In this program there are two objects including card object and deck object.
 * A deck of card will be created upon demand. The deck will be perfectly
 * shuffled until the original state is reached.
 * ---------------------------------------------------------------------------
 * INPUT:
 *  <none>
 * 
 * OUTPUT:
 *  1- Original state
 *  2- Perfectly shuffled once
 *  3- Number of shuffles needed to reach the original states
 *  4- Final deck
 *****************************************************************************/

int main()
{
    CardDeckClass OriginalDeck;    // the 1st deck of card (original deck)
       
    bool isEqual;                  // state of equality of 2 decks

    cout << "ORIGINAL DECK:\n";
    OriginalDeck.PrintDeck();      // print the original deck

    CardDeckClass ShuffledDeck;    // the 2nd deck (shuffled deck)

    ShuffledDeck.PerfectShuffle(); // shuffle the original deck of card

    cout << "\nSHUFFLED DECK:\n";
    ShuffledDeck.PrintDeck();      // print the shuffled deck

    isEqual = OriginalDeck == ShuffledDeck;// compare 2 deck

    int shuffleTime;               // shuffle time
    shuffleTime = 0;

    if (isEqual == true)
    {
        cout << "One perfect shuffle is required to return "
        << "the deck to its original configuration.\n";
    }
    else
    {
        while (!isEqual)
        {
            ShuffledDeck.PerfectShuffle(); // shuffle the deck of card one more time
            shuffleTime++;
            isEqual = OriginalDeck == ShuffledDeck; 
        }
        cout << endl << shuffleTime 
            << " perfect shuffles are required to return the deck to its original configuration.\n";
    } 
    
    cout << "\nFINAL DECK:\n";
    ShuffledDeck.PrintDeck();

    return 0;
}
