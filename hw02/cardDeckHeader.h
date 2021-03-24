/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW02 : DECK OF CARD
 *****************************************************************************/
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

const int DECK_SIZE = 52;   // DECK SIZE

class CardDeckClass{
    public:

    /************************************
     ****  CONSTRUCTOR / DESTRUCTOR ****
     ***********************************/    

    /******************************************************
     * Constructor CardDecklass: Class CardDeckClass
     * ___________________________________________________
     * This creates a default instance of the class
     * ___________________________________________________
     * PRE-CONDITIONS
     *  <none>
     * 
     * POST-CONDITIONS
     *  This function creates a deck of cards (SIZE = 52)
     * ****************************************************/
    CardDeckClass();


    /******************************************************
     * Destructor ~CardDecklass: Class CardDeckClass
     * ___________________________________________________
     * This terminates instance of the class
     * ___________________________________________________
     * PRE-CONDITIONS
     *  <none>
     * 
     * POST-CONDITIONS
     *  The object will be destructed automatically
     * ****************************************************/
    ~CardDeckClass();



    /******************
     **** MUTATORS ****
     ******************/

    /******************************************************
     * Method PerfectShuffle: Class CardDeckClass
     * ___________________________________________________
     * This method performs a perfect shuffle on a deck of 
     * cards
     * ___________________________________________________
     * PRE-CONDITIONS
     *  obj deck
     * 
     * POST-CONDITIONS
     *  shuffle will be performed
     * ****************************************************/
    void PerfectShuffle();



    /*******************
     **** ACCESSORS ****
     *******************/

    /******************************************************
     * Method PrintDeck: Class CardDeckClass
     * ___________________________________________________
     * This method prints out the deck of cards.
     * ___________________________________________________
     * PRE-CONDITIONS
     *  none
     * 
     * POST-CONDITIONS
     *  deck of cards will be printed
     * ****************************************************/
    void PrintDeck();

    /******************************************************
     * Method operator ==: Class CardDeckClass
     * ___________________________________________________
     * This method is an overloaded version of the operator
     * ==; the purpose of this method is to compare a deck 
     * to another and ch
     * ___________________________________________________
     * PRE-CONDITIONS
     *  none
     * 
     * POST-CONDITIONS
     *  deck of cards will be printed
     * ****************************************************/
    bool operator == (const CardDeckClass& inDeck);


    private:
    enum SuitType       // suit enum type
    {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };

    enum RankType       // rank enum type
    {
        ACE,
        KING,
        QUEEN,
        JACK,
        TEN,
        NINE,
        EIGHT,
        SEVEN,
        SIX,
        FIVE,
        FOUR,
        THREE,
        TWO
    };

    struct CardType
    {
        RankType rank;
        SuitType suit;
    };

    CardType itsDeck [DECK_SIZE];
};
