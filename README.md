# StockMarket101
> ***StockMarket101***
>
> *Virtual Stock Simulation Game*
>
> ***Introduction:***
> 
> *Group members: Goli Smaran (3035830703), Mohammad Abdur Rahman (3035756579)*
> 
> *Group no: 78*
>
> Investing in stocks is a very important financial strategy in today’s
> world, as it enables one to grow with the economy, also to make money
> in two ways. Starting early is the key to becoming a successful
> investor. For example, educating students about investment is very
> important, and presently, in schools, the only focus is to teach
> formulas of compounding, hence they end up in between some numeric
> values, the significance of which they may not understand.
>
> Through virtual world simulation, we want to give our players the
> experience required, also help them understand what compounding and
> investing actually means. Our game can be a wonderful platform for
> potential investors to build their own portfolio and gain the
> experience and feel of placing trade and orders.

-   Description of our game and introduce the game rules

    -   The investor will be asked to login/create an account with name
        > and portfolio account number as input

    -   New player starts with virtual cash of 100,000 HKD in his/her
        > portfolio account, while an already registered user is
        > redirected to his account to view all his previous activity

    -   There will be stocks of 5 companies

    -   Player gets to experiment with these stocks by placing investing
        > in virtual stocks

    -   As the day begins:

<!-- -->

-   all stocks are displayed with their current par value

-   Player will be asked if he wants to buy/sell stocks

> Do you want to buy/sell?
>
> If, yes

-   Player would choose to buy or sell

<!-- -->

-   Player would input the name and number of stocks he wants to buy

> (or)

-   Player would input the name and number of stocks he wants to sell

<!-- -->

-   Then, the investor will be redirected to the home page and the
    > process continues. If he does not want to invest further he can
    > simply select no and select logout option from the drop down menu.

> If no, i.e., player chooses not to invest, the following menu will be
> displayed to assist the player/investor:
>
> --------------------------------------------------------------------------------------

1\. See available funds

2\. View details of shares purchased/sold(transaction history)

3\. Day and details of stock on which max profit/loss was made

4\. Current day profit/loss for each stock

5\. Net profit/loss

> A message will be displayed to the player about his progress.
> (For example: “Congratulations! You have made a profit of HKD XYZ so far”)

6\. Logout

**Features incorporating coding requirements:**

1.  *Generation of random game sets or events:*

> The current market value of stocks would be made dynamic.

2.  *Data structures for storing game status:*

> We will be using arrays, struct and classes for storing our game data.

3.  *Dynamic memory management:*

> Used for storing details of past transactions, including profit/loss
> made, historical prices of stocks.

4.  *File input/output* (e.g., for loading/saving game status):

> We will be using two binary files for storing game data, one for user
> details, and another for details of stocks

5.  *Program codes in multiple files*:

> We will be using many functions in our code, creating a different .cpp
> file to store function definitions, function prototypes, and the main
> function.
