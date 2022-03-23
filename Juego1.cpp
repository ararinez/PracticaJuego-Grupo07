#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <limits>
using namespace std;

class Juego1
{
public:
    int rule(char p, char c)
    {
        if (p == c)
        {
            return 0;
        }

        if (p == 'r' && c == 'p')
        {
            return -1;
        }
        else if (p == 's' && c == 'p')
        {
            return 1;
        }
        else if (p == 'p' && c == 'r')
        {
            return 1;
        }
        else if (p == 's' && c == 'r')
        {
            return -1;
        }
        else if (p == 'r' && c == 's')
        {
            return 1;
        }
        else if (p == 'p' && c == 's')
        {
            return -1;
        }
        return 0;
    }

    void iniciar()
    {
        char computer;
        char player;
        char playmore;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "\t\t\t\t";
        cout << "\t BIENVENIDO A PIEDRA, PAPEL Y TIJERA" << endl;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "\t\t\t\t";
        cout << "\t\t *** IMPORTANTE *** " << endl;
        cout << "\t\t\t\t";
        cout << "\t\t r = Roca" << endl
             << "\t\t\t\t"
             << "\t\t p = Papel" << endl
             << "\t\t\t\t"
             << "\t\t s = Tijeras" << endl
             << "\t\t\t\t" << endl
             << endl;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }
        cout << endl;
        do
        {
            int number = 0;
            srand(time(0));        // initialized time to 0
            number = rand() % 100; // will choose a number in range 0 - 99
            // r - for rock
            // p - for paper
            // s - for scissors
            if (number < 33)
            {
                computer = 'r';
            }
            else if (number > 66)
            {
                computer = 's';
            }
            else
            {
                computer = 'p';
            }
            // cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
            cout << "\t\t\t\t";
            cout << "Elige tu opcion: ";
            cin >> player;

            int result = rule(player, computer);
            if (player == 'r' || player == 's' || player == 'p')
            {
                if (result == 1)
                {
                    cout << "\t\t\t\t";
                    cout << "El rival eligio: " << computer << endl;
                    cout << "\t\t\t\t\n";
                    cout << "\t\t\t\t\t*** ¡GANASTE! ***" << endl;
                }
                else if (result == -1)
                {
                    cout << "\t\t\t\t";
                    cout << "El rival eligió: " << computer << endl;
                    cout << "\t\t\t\t\n";
                    cout << "\t\t\t\t\t--- PERDISTE, NO TE DESANIMES---" << endl;
                }
                else
                {
                    cout << "\t\t\t\t";
                    cout << "El rival eligio: " << computer << endl;
                    cout << "\t\t\t\t\n";
                    cout << "\t\t\t\t\t///  ES UN EMPATE ///" << endl;
                }
            }
            else
            {
                cout << "\t\t\t\t";
                cout << "INGRESASTE UN CARACTER NO PERMITIDO" << endl;
                cout << "\t\t\t\t\n";
            }
            cout << "\n\t\t\t\t";
            cout << "¿QUIERES JUGAR DE NUEVO?" << endl;
            cout << "\t\t\t\t";
            cout << "Presiona 'n' para salir" << endl;
            cout << "\t\t\t\tPresiona cualquier tecla + Enter para jugar de nuevo: ";
            cin >> playmore;
            cout << "\t\t\t\t";
            for (int i = 0; i < 50; i++)
            {
                cout << "-";
            }
            cout << endl;
        } while (playmore != 'n');
    }
};

class Juego2
{
public:
    void instrucciones()
    {
        cout << "En Mastermind compiten 2 jugadores, el jugador que introduce el codigo y el jugador que lo intenta acertar. El jugador que hace el codigo coloca en secreto su combinacion compuesta por 4 numeros. El usuario para acertar la combinacion puede usar 4 numeros (del 1 al 4) que se pueden repetir, ademas saltara un aviso si alguno de los numeros introducidos no corresponde al abanico de numeros mencionado anteriormente. La persona que tiene que descifrar el codigo lo colocara a la espera de que el otro jugador le empiece a dar pistas. Para que el juego no sea imposible se le iran dando pistas: si el hueco en el que el usuario ha anadido el numero coincide en numero y posicion se le avisara y por cada numero acertado pero en un lugar equivocado de la secuencia tambien. El usuario tiene diez intentos para acertar el codigo y en el momento que gane saltara un mensaje diciendo ENHORABUENA HAS ACERTADO EL CODIGO! sino le saltara un mensaje diciendo LO SIENTO NO HAS CONSEGUIDO ADIVINAR EL CODIGO, INTENTA OTRA VEZ!" << endl;
    }

    void iniciar()
    {
        system("cls");
        int i;
        int datos[4];
        for (i = 0; i < 5; i++)
        {
            cout << "Estas en el intento " << (i + 1) << " por favor introduce cuatro numero del 1 al 4" << endl;
            cout << "Primer digito del codigo" << endl;
            cin >> datos[0];
            cout << "Segundo digito del codigo" << endl;
            cin >> datos[1];
            cout << "Tercer digito del codigo" << endl;
            cin >> datos[2];
            cout << "Cuarto digito del codigo" << endl;
            cin >> datos[3];

            if (datos[0] < 1 || datos[0] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }
            if (datos[1] < 1 || datos[1] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }
            if (datos[2] < 1 || datos[2] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }
            if (datos[3] < 1 || datos[3] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }

            cout << "Tu numero es el ------>" << datos[0] << datos[1] << datos[2] << datos[3] << "<-----------" << endl;
            int correcto = 0;
            int aproximacion = 0;

            if (datos[0] == 1)
            {
                correcto++;
            }
            if (datos[1] == 2)
            {
                correcto++;
            }
            if (datos[2] == 4)
            {
                correcto++;
            }
            if (datos[3] == 4)
            {
                correcto++;
            }
            // Condicion
            if (datos[0] == 2 || datos[0] == 4)
            {
                aproximacion++;
            }
            if (datos[1] == 1 || datos[1] == 4)
            {
                aproximacion++;
            }
            if (datos[2] == 2 || datos[2] == 1)
            {
                aproximacion++;
            }
            if (datos[3] == 2 || datos[3] == 1)
            {
                aproximacion++;
            }

            cout << "Haz acertado " << correcto << " numeros en la posicion correcta" << endl;
            cout << "    " << endl;
            cout << "Haz acertado " << aproximacion << " numeros pero no en la posicion correcta" << endl;

            if (datos[0] == 1 && datos[1] == 2 && datos[2] == 4 && datos[3] == 4)
            {
                system("cls");
                cout << "ENHORABUENA HAS ACERTADO EL CODIGO!" << endl;
                exit(0);
            }
            cout << endl
                 << endl;
        }

        cout << "LO SIENTO NO HAS CONSEGUIDO ADIVINAR EL CODIGO,INTENTA OTRA VEZ!";
    }
};

class Juego3
{
public:
    int level;
    int topCard;
    float win;
    Juego3()
    {
        topCard = 0;
        win = 1.00;
    }

    void instrucciones()
    {
        cout << "*|**************************************************************|*" << endl;
        cout << "*|*******************Welcome to BLACKJACK game******************|*" << endl;
        cout << "*|_________RULES_________                                       |*" << endl;
        cout << "*| ~1 Aces can be either 1 or 11 point.                         |*" << endl;
        cout << "*| ~2 Dealer wins ties unless player has a blackjack            |*" << endl;
        cout << "*|**************************************************************|*" << endl;
        cout << "*|________WINNINGS_______                                       |*" << endl;
        cout << "*| ~Your score beats Dealer's score - 100% increase in bet      |*" << endl;
        cout << "*| ~Dealer's score beats your score - 100% decrease in bet      |*" << endl;
        cout << "*| ~BlackJack - 150% increase in your initial bet               |*" << endl;
        cout << "*| ~Natural BlackJack - 50% increase in initial bet             |*" << endl;
        cout << "*| ~Backdoor Kenny - 25% increase in initial bet                |*" << endl;
        cout << "*| ~Push (Tie) -                                                |*" << endl;
        cout << "*|  i.  1:1 payout if in your favor.                            |*" << endl;
        cout << "*|     (100% increase of your initial bet)                      |*" << endl;
        cout << "*|  ii. 0:1 payout if in Dealer's favor                         |*" << endl;
        cout << "*|     (No loss, no gain.)                                      |*" << endl;
        cout << "*|**************************************************************|*" << endl;
        cout << "*|*********************LEVEL of DIFFICULTY**********************|*" << endl;
        cout << "*| ~ Beginner - Dealer stands at a soft 17 and has no AI.       |*" << endl;
        cout << "*| ~ Expert - Dealer hits at a soft 17 and has no AI.           |*" << endl;
    }

    void dificultad()
    {
        cout << "\n";
        cout << "Level of Difficulty:" << endl;
        cout << "Beginner (1), Expert (2) " << endl;
        cin >> level;
        cout << "\n";
        if (level != 1)
        { // IF input es not 1...
            if (level != 2)
            { //...or 2
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter Level of Difficulty i.e. 1 or 2 " << endl;
                dificultad();
            }
        }
    }

    void initializeDeck(int deck[])
    {
        int Rank = 101;
        int i = 0;
        for (i = 0; i <= 13; i++)
        { // Hearts
            deck[i] = Rank++;
        }
        for (i = 13; i <= 26; i++)
        { // Diamonds
            deck[i] = Rank++ + 100 - 14;
        }
        for (i = 26; i <= 39; i++)
        { // Clubs
            deck[i] = Rank++ + 200 - 28;
        }
        for (i = 39; i <= 51; i++)
        { // Spades
            deck[i] = Rank++ + 300 - 42;
        }
    }

    void shuffle(int deck[], int size)
    {
        for (int i = 0; i < 500; i++)
        { // Loop through deck an absurd amount of loops
            int T1 = 0;
            int R1 = getRandomNumber(0, size);
            int R2 = getRandomNumber(0, size);
            T1 = deck[R1];       // Clone first card for safe keeping
            deck[R1] = deck[R2]; // Replace first card witha new card
            deck[R2] = T1;       // Replace the new card with the old card clone
        }
    }

    int getTopCard(int deck[])
    {
        for (int i = 0; i < 51; i++)
        { // Find a card that isn't empty
            if (deck[i] != 0)
            {
                topCard = deck[i]; // Clone card for safe keeping
                deck[i] = 0;       // Replace first card with the empty card value
                return topCard;    // Return the clone of the card
            }
        }
        return topCard;
    }

    void addToHand(int hand[], int cardToAdd)
    {
        for (int i = 0; i < 9; i++)
        { // Loop through the hand
            if (hand[i] == 0)
            {                        // If there is an empty card spot
                hand[i] = cardToAdd; // Replace it with the card to add
                break;               // Only do this once by breaking the loop
            }
        }
    }

    void naturalBlackJack(const int pH[], const int dH[], char Play)
    {
        int playerScore = getHandValue(pH);
        int dealerScore = getHandValue(dH);
        // if player has blackjack and dealer doesn't
        if ((playerScore == 21) && (dealerScore != 21))
        {
            scoreBoard(pH, dH);
            cout << "\n";
            cout << "Natural BlackJack! You win a 3:2 payout! ";
            win = win + 1.5;
            backdoorKenny(pH);
            playAnotherHand(Play);
        }
    }

    void blackJack(const int pH[], const int dH[], char Play)
    {
        int playerScore = getHandValue(pH);
        int dealerScore = getHandValue(dH);
        // If player has blackjack but dealer doesn't
        if ((playerScore == 21) && (dealerScore != 21))
        {
            cout << "\n\n";
            scoreBoard(pH, dH);
            cout << "\n";
            cout << "BlackJack! You win a 3:2 payout! " << endl;
            win = win + 1.5;
            cout << "\n";
            cout << "Winnings multiplier: " << win << endl;
            backdoorKenny(pH);
            playAnotherHand(Play);
        }
        // If both Player and Dealer have blackjack
        else if ((playerScore == 21) && (dealerScore == 21))
        {
            scoreBoard(pH, dH);
            cout << "\n";
            cout << "Dealer & you got BlackJack. Push in your favor at 1:1 ratio " << endl;
            win++;
            cout << "\n";
            cout << "Winnings multiplier: " << win << endl;
            playAnotherHand(Play);
        }
    }

    void showCards(const int deck[], int numCards, bool hideFirstCard)
    {
        if (hideFirstCard)
        { // Hide dealer's first card if true
            cout << "** ";
        }
        else
        { // Show dealer's first card if false
            ShowCard(deck[0]);
            cout << " ";
        }
        for (int i = 1; i < numCards; i++)
        {
            // Display all cards in decj or hand
            // rant or suit graphic
            if (deck[i] != 0)
            { // show cards
                ShowCard(deck[i]);
                cout << " ";
            }
            else
            { // Show nothing for non cards (ie. 0)
                cout << "";
            }
        }
    }

    void checkSoftOrHard(int pH[])
    {
        for (int i = 0; i < 9; i++)
        { // check cards in hand
            int checkAce = CardValue(pH[i]);
            int softOrHard;
            // If card in hand is an Ace prompt PLayer for input
            if (checkAce == 1 || checkAce == 11)
            {
                cout << "\n";
                cout << "\nWould you like your Ace to count as 1 or 11 points? (1/11): ";
                cin >> softOrHard;
                if (softOrHard == 1)
                { // If player chooses 1
                    if (checkAce == 11)
                        pH[i] = pH[i] + 13;
                }
                else if (softOrHard == 11)
                { // If player chooses 11
                    if (checkAce == 1)
                    {
                        pH[i] = pH[i] - 13;
                    }
                }
                else if (softOrHard != 1 || softOrHard != 11)
                {
                    // Clear input error flags & removes everything currently in input buffer
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    // Display error message and restart the function
                    cout << "\nPlease enter the number 1 or 11 " << endl;
                    checkSoftOrHard(pH);
                }
            }
        }
    }

    bool userWantsToDraw(char &Draw)
    { // Prompt if like to enter a new time
        cout << endl
             << "\nWould you like to hit or stand? (H/S) ";
        cin >> Draw;
        cout << "\n";
        if (Draw == 'h' || Draw == 'H')
        {                  // If yes, return true and start
            return (true); // The loop to draw another card
        }
        else
        { // If don't, skip the loop
            return (false);
        }
    }

    void checkBust(const int pH[], const int dH[], char Play)
    {
        int playerScore = getHandValue(pH);
        int dealerScore = getHandValue(dH);
        if (playerScore > 21)
        { // Check if player busts
            cout << "You bust with " << getHandValue(pH) << "points" << endl;
            cout << "\n"
                 << endl;
            win--;
            cout << "Winnings multiplier: " << win << endl;
            playAnotherHand(Play);
        }
        else if (dealerScore > 21)
        { // Check if Dealer busts
            scoreBoard(pH, dH);
            cout << "\n"
                 << endl;
            cout << "The dealer went bust. You Win!" << endl;
            cout << "\n"
                 << endl;
            win++;
            cout << "Winnings multiplier: " << win << endl;
            playAnotherHand(Play);
        }
    }

    void hitUntilStand(int dH[], int deck[], int pH[])
    {
        for (int i = 0; i < 9; i++)
        { // Loop through Dealer's hand
            if (getHandValue(dH) < 17)
            { // If Dealer must hit
                // If player chose Beginner level, dealer stands at soft 17
                if (level == 1)
                { //...add a card to the hand
                    addToHand(dH, getTopCard(deck));
                }
                // If Player chose Expert level, dealer stands at Hard 17
                else if (level == 2)
                { //...add a card to the hand
                    addToHand(dH, getTopCard(deck));
                    // Esure Aces are handled intelligently to beat Player
                    softOrHardAI(dH, pH);
                }
            }
            // Display how many cards Dealer hit if Dealer has 17 or more points
            else
            {
                if (i == 0)
                { // Dealer didn't hit to get to 17
                    cout << "The Dealer stands" << endl;
                    break;
                }
                else if (i == 1)
                { // Dealer hit once to get to 17
                    cout << "The Dealer hit a card and stands " << endl;
                    break;
                }
                else
                { // Dealer hit more than once to get to 17
                    cout << "The Dealer hit " << i << " cards & stands" << endl;
                    break;
                }
            }
            // Run dealer AI again if player chose to play expert
            // this is  called again for the sake of redundancy
            if (level == 1)
                ;
            else if (level == 2)
            {
                softOrHardAI(dH, pH);
            }
        }
    }

    int getHandValue(const int hand[])
    {
        int addCardValues = 0;
        for (int i = 0; i < 9; i++)
        { // Add up the card values
            addCardValues = addCardValues + CardValue(hand[i]);
        }
        return addCardValues; // Sum of the card values as the hand value
    }

    int CardValue(int card)
    {
        int cardVal;
        // GET the card's background 10s value and assign the card a point value
        switch (card % 100)
        {
        case 1:
            cardVal = 11;
            break;
        case 11:
        case 12:
        case 13:
            cardVal = 10;
            break;
        case 14:
            cardVal = 1;
            break;
            // For non-face cards, just use their background 10s value as point value
        default:
            cardVal = (card % 100);
        }
        return cardVal;
    }

    void scoreBoard(const int pH[], const int dH[])
    {
        cout << "Player hand: "; // Display Player's cards/hand value
        showCards(pH, 10, false);
        cout << " (" << getHandValue(pH) << "pts)" << endl;
        cout << "V.S." << endl;
        cout << "Dealer hand: "; // Display Dealer's cards/hand value
        showCards(dH, 10, false);
        cout << " (" << getHandValue(dH) << "pts)" << endl;
    }

    void backdoorKenny(const int hand[])
    {
        // If index 0 is a 10 and index 1 is an ace
        if ((CardValue(hand[0]) % 100 == 10) && (CardValue(hand[1]) % 100 == 11))
        {
            // I did not use 1 as an argument because 11 is the default
            // value and this happens before the user can choose
            cout << "\n\n";
            cout << "You pulled a Backdoor Kenny!\n"
                 << endl;
            cout << "Win an additional 1:4 payout\n"
                 << endl;
            win = win + .25;
            cout << "Winnings multiplier: " << win << endl;
        }
    }

    void ShowCard(int card)
    {
        if (card == 0)
        { // Show nothing for non cards (ie.0)
            cout << "";
        }
        else
        { // Define Ranks
            switch (card % 100)
            {
            case 1:
                cout << "A";
                break;
            case 11:
                cout << "J";
                break;
            case 12:
                cout << "K";
                break;
            case 13:
                cout << "Q";
                break;
            case 14: // 14 is a value created in checkSoftOrHard
                cout << "A";
                break;
            default: // For non-face cards, use their 10s value as rank
                cout << card % 100;
            }
        }
        if (card == 0)
        { // Show nothing for non cards (ie.0)
            cout << "";
        }
        else
        { // Define Suits
            if ((card >= 101) && (card <= 114))
            { // Hearts
                cout << static_cast<char>(3);
            }
            else if ((card >= 201) && (card <= 214))
            { // Diamonds
                cout << static_cast<char>(4);
            }
            else if ((card >= 301) && (card <= 314))
            { // Clubs
                cout << static_cast<char>(5);
            }
            else if ((card >= 401) && (card <= 414))
            { // Spades
                cout << static_cast<char>(6);
            }
        }
    }

    void dumpDeck(int deck[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << i + 1 << ".) " << deck[i] << endl;
        }
    }

    int getRandomNumber(int low, int high)
    {
        static bool firstTime = true;
        int randNum;
        if (firstTime)
        { // if 1st time called, seed random number generator
            srand(static_cast<unsigned int>(time(NULL)));
            firstTime = false;
        }
        // Generate random number between given low and high values (inclusive)
        randNum = rand() % (high - low + 1) + low;
        return randNum;
    }

    void softOrHardAI(int dH[], int pH[])
    {
        for (int i = 0; i < 9; i++)
        { // Check cards in hand
            if (CardValue(dH[i]) == 1 || CardValue(dH[i]) == 11)
            { // Find Ace
                if (CardValue(dH[i]) == 11)
                { // If the ACe is worth 11 points
                    //...change it to 1 point if that will beat player...
                    if (getHandValue(dH) - CardValue(dH[i]) + 1 > getHandValue(pH))
                    {
                        if (getHandValue(dH) - CardValue(dH[i]) + 1 < 22)
                        { //...and not bust
                            dH[i] = dH[i] + 13;
                        }
                    }
                    else if (getHandValue(dH) > 21)
                    {
                        dH[i] = dH[i] + 13;
                    }
                }
                else
                { // ELse Ace is worth 1 point
                    // Change it to 11 points if that will beat player...
                    if (getHandValue(dH) - CardValue(dH[i]) + 11 > getHandValue(pH))
                    {
                        if (getHandValue(dH) - CardValue(dH[i]) + 11 < 22)
                        { // and not bust.
                            dH[i] = dH[i] - 13;
                        }
                    }
                }
            }
        }
    }

    void whoWins(const int pH[], const int dH[])
    {
        int playerScore = getHandValue(pH);
        int dealerScore = getHandValue(dH);
        scoreBoard(pH, dH); // Display the scoreboard
        // win tree
        //  player score < 22 & Player's score > Dealer's score
        //  player's score < 22, Dealer's score > 21
        if ((playerScore < 22) && (playerScore > dealerScore) || ((dealerScore > 21) && (playerScore < 22)))
        {
            cout << "\n";
            cout << "You win!" << endl;
            win++; // compute new winnings multiplier
        }
        // loos tree
        else
        { // If you don't win, you lose or tie
            if (playerScore == dealerScore)
            { // Tie
                cout << "\n";
                cout << "Push in the Dealer's favor. 0:1 payout" << endl;
            }
            else
            { // lose
                cout << "\n";
                cout << "You lose." << endl;
                win--; // compute new winnings multiplier
            }
        }
    }

    bool playAnotherHand(char &Play)
    { // Prompt if want to play another hand.
        cout << endl
             << "\nWould you like to play another hand? (Y/N) ";
        cin >> Play;
        cout << "\n"
             << endl;
        if (Play == 'y' || Play == 'Y')
        {
            iniciar(); // GO to main game logic function to restart
            return (true);
        }
        else
        { // If don't, exit the program
            return (false);
        }
    }

    void iniciar()
    {
        char Play = 'N'; // Declare local variable
        do
        {
            char Draw = 'H'; // Declare local variable
            int deck[52];    // Declare, initialize and shuffle the deck
            initializeDeck(deck);
            shuffle(deck, 51);
            int pH[10] = {0};
            int dH[10] = {0};
            addToHand(pH, getTopCard(deck)); // Deal first round
            addToHand(dH, getTopCard(deck));
            addToHand(pH, getTopCard(deck));
            addToHand(dH, getTopCard(deck));
            cout << "*************************************************" << endl;
            cout << "\n"
                 << endl;
            cout << "The Dealer shuffled and dealt you each your cards ";
            cout << "\n"
                 << endl;
            naturalBlackJack(pH, dH, 'y');
            blackJack(pH, dH, 'Y');
            cout << "YOur hand: " << endl;
            showCards(pH, 10, false);
            cout << "\n\nDealer'shand: " << endl;
            showCards(dH, 10, true);
            checkSoftOrHard(pH);
            while (userWantsToDraw(Draw))
            {
                addToHand(pH, getTopCard(deck));
                cout << "The Dealer dealt you another card.\n"
                     << endl;
                cout << "Your hand: " << endl;
                showCards(pH, 10, false);
                checkSoftOrHard(pH);
                checkBust(pH, dH, 'y');
                blackJack(pH, dH, 'Y');
            }
            hitUntilStand(dH, deck, pH); // Dealer hits until at a soft 17
            cout << endl;
            checkBust(pH, dH, 'Y'); // check to see if anyone lost
            blackJack(pH, dH, 'Y'); // check to see if anyone won
            whoWins(pH, dH);        // Compare scores and determine winner
            cout << endl;
            cout << "Winnings multiplier: " << win << endl;
        } while (playAnotherHand(Play));
    }
};
void menu()
{
    int opcion = -1;
    Juego1 play1;
    Juego2 play2;
    Juego3 play3;
    while (opcion != 0)
    {

        cout << "\n\nMenu\n";
        cout << "1. Piedra papel o tijera\n";
        cout << "2. Mastermind\n";
        cout << "3. BlackJack\n";
        cout << "0. Salir\n";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            play1.iniciar();
            break;
        case 2:
            play2.instrucciones();
            play2.iniciar();
            break;
        case 3:
            play3.instrucciones();
            play3.dificultad();
            play3.iniciar();
            break;
        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }
}

int main()
{
    menu();
    return 0;
}
