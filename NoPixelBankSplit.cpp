#include <iostream>

using namespace std;

int main()
{
    // Prices of lootable items in bank.
    double bags = 250;
    double inkbags = 50000;
    double cash = 1;
    double goldbars = 5000;
    double gems = 800;

    //List Options
    int listoption;

    // User Input Variables
    double numsmallbags, numinkbags, numcash, numgoldbars, numgems;
    double bankmembers, person1, person2, person3, person4;

    // Variables for Result Display
    double totalperson1, totalperson2, totalperson3, totalperson4;
    double totalinvested, totalsmallbags, totalinkbags, totalcash, totalgoldbars, totalgems,totalpayout,totalprofit;

    //Display option for user to choose from.
    cout<<"Choose one of these option: \n";
    cout<<"1 - Bank Heist Payout (Do this Inside of the Bank)"<<endl;
    cout<<"2 - Splitting Heist Payout (Do this Outside of the Bank)"<<endl;
    cin>>listoption;

    if (listoption == 1) 
    {
    // Process User Input for Loot
    cout<<"Amount of Small Bags: "<<endl;
    cin>>numsmallbags;
    cout<<"Amount of Ink Bags: "<<endl;
    cin>>numinkbags;
    cout<<"Amount of Cash: "<<endl;
    cin>>numcash;
    cout<<"Amount of Gold Bars: "<<endl;
    cin>>numgoldbars;
    cout<<"Amount of Gems: "<<endl;
    cin>>numgems;
    cout<<" "<<endl;

    // Do all the math for the data entered
    totalsmallbags = numsmallbags * bags;
    totalinkbags = numinkbags * inkbags;
    totalcash = numcash * cash;
    totalgoldbars = numgoldbars * goldbars;
    totalgems = numgems * gems;
    totalpayout = totalsmallbags + totalinkbags + totalcash + totalgoldbars + totalgems;

    //Display Payout
    cout<<"Bank Heist Total Payout: $"<<totalpayout<<endl;
    system("pause");

    } else if (listoption == 2) 
    
    {
    // Proccess User Input for Participants of the heist and the total they've invested.
    cout<<"Total Participants: "<<endl;
    cin>>bankmembers;
    cout<<"Enter amount Person 1 Invested: "<<endl;
    cin>>person1;
    cout<<"Enter amount Person 2 Invested: "<<endl;
    cin>>person2;
    cout<<"Enter amount Person 3 Invested: "<<endl;
    cin>>person3;
    cout<<"Enter amount Person 4 Invested: "<<endl;
    cin>>person4;

    // Process User Input for Loot
    cout<<"Amount of Small Bags: "<<endl;
    cin>>numsmallbags;
    cout<<"Amount of Ink Bags: "<<endl;
    cin>>numinkbags;
    cout<<"Amount of Cash: "<<endl;
    cin>>numcash;
    cout<<"Amount of Gold Bars: "<<endl;
    cin>>numgoldbars;
    cout<<"Amount of Gems: "<<endl;
    cin>>numgems;
    cout<<" "<<endl;

    // Do all the math for the data entered
    totalinvested = person1 + person2 + person3 + person4;
    totalsmallbags = numsmallbags * bags;
    totalinkbags = numinkbags * inkbags;
    totalcash = numcash * cash;
    totalgoldbars = numgoldbars * goldbars;
    totalgems = numgems * gems;
    totalpayout = totalsmallbags + totalinkbags + totalcash + totalgoldbars + totalgems;
    totalprofit = totalpayout - totalinvested;
    totalperson1 = totalprofit / bankmembers + person1;
    totalperson2 = totalprofit / bankmembers + person2;
    totalperson3 = totalprofit / bankmembers + person3;
    totalperson4 = totalprofit / bankmembers + person4;

    //Display Results for heist
    cout<<"Participants: "<<bankmembers<<endl;
    cout<<"Total Invested in Heist: $"<<totalinvested<<endl;
    cout<<" "<<endl;
    cout<<"Cost of Small Bags: $"<<totalsmallbags<<endl;
    cout<<"Cost of Ink Bags: $"<<totalinkbags<<endl;
    cout<<"Cost of Gold Bars: $"<<totalgoldbars<<endl;
    cout<<"Cost of Gems: $"<<totalgems<<endl;
    cout<<"Cash Received: $"<<totalcash<<endl;

    cout<<" "<<endl;
    cout<<"Bank Heist Total Payout: $"<<totalpayout<<endl;
    cout<<"Bank Heist Total Profit: $"<<totalprofit<<endl;

    cout<<" "<<endl;
    cout<<"Person 1 Receives: $"<<totalperson1<<endl;
    cout<<"Person 2 Receives: $"<<totalperson2<<endl;
    cout<<"Person 3 Receives: $"<<totalperson3<<endl;
    cout<<"Person 4 Receives: $"<<totalperson4<<endl;
    system("pause");

    }else 

    {
    cout<<"You're an actual retard. Try again you autistic fuck."<<endl;
    system("pause");
    }
    return 0;
}