/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW02 : DECK OF CARD
 *****************************************************************************/

#include "cardDeckHeader.h"

using namespace std;

const string suitStrings [] = {"Clubs", 
                               "Diamonds", 
                               "Hearts", 
                               "Spades"};

const string rankStrings [] = {"Ace", 
                               "King",
                               "Queen",
                               "Jack",
                               "Ten",
                               "Nine",
                               "Eight",
                               "Seven",
                               "Six",
                               "Five",
                               "Four",
                               "Three",
                               "Two"};

CardDeckClass::CardDeckClass()
{
    int cardNum = 0;

    // Initialize the deck of cards
    for (int suit = CLUBS; suit <= SPADES; suit++)
    {
        for (int rank = ACE; rank <= TWO; rank++)
        {
            itsDeck[cardNum].suit = SuitType(suit);
            itsDeck[cardNum].rank = RankType(rank);

            cardNum++;
        }
    }
}


CardDeckClass::~CardDeckClass()
{}


void CardDeckClass::PerfectShuffle()
{
    const int HALF_DECK_SIZE = DECK_SIZE / 2;

    CardType halfDeck1[HALF_DECK_SIZE];
    CardType halfDeck2[HALF_DECK_SIZE];

    int cardNum;
    int deckNum;
    int cardNum1;

    // Split the deck exactly in half
    for (cardNum = 0; cardNum < HALF_DECK_SIZE; cardNum++)
    {
        halfDeck1[cardNum] = itsDeck[cardNum];
        halfDeck2[cardNum] = itsDeck[cardNum + HALF_DECK_SIZE];
    }

    deckNum = 0;
    cardNum1 = 0;

    while (cardNum1 < DECK_SIZE)
    {
        if (deckNum < 52)
        {
            itsDeck[deckNum] = halfDeck1[cardNum1];
            deckNum = deckNum + 1;
            itsDeck[deckNum] = halfDeck2[cardNum1];
            deckNum = deckNum + 1;
        }     
        
        cardNum1 = cardNum1 + 1;
    }  
}


void CardDeckClass::PrintDeck()
{
    int CardNum;

    // Print the deck of card
    for (CardNum = 0; CardNum < DECK_SIZE; CardNum++)
    {
        cout << rankStrings[itsDeck[CardNum].rank] <<  " of " << suitStrings[itsDeck[CardNum].suit];
        cout << endl;
    }
}


bool CardDeckClass::operator== (const CardDeckClass& inDeck)
{
    int cardNum;

    // compare two decks of cards
    for (cardNum = 0; cardNum < DECK_SIZE; cardNum++)
    {
        if (itsDeck[cardNum].rank != inDeck.itsDeck[cardNum].rank ||
            itsDeck[cardNum].suit != inDeck.itsDeck[cardNum].suit)
        {
            return false;
        }
    }

    return true;
}

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

