//A. Noel Cothren
//acothren1@cnm.edu
//Program 5 - Alaskan Cruise

//AlaskanCruise.cpp


#include "AlaskanCruise.h"
#include "Date.h"

int AlaskanCruise::resNumber{ 0 };
void AlaskanCruise::CalculateFare()
{
	//for numPassengers, add fares FARE_SEVEN or FARE_NINE
	fare = FARE_SEVEN; 
	if (numberDaysCruise == 7) fare *= numberOfPass;
	else fare = FARE_NINE * numberOfPass;
	//figure out the number of days from booking date to departure date using the date class
	numDaysToDepart = dep.GetDayOfYear() - book.GetDayOfYear();
	if (book.GetYear() != dep.GetYear()) numDaysToDepart += 365;  //NOT in same year
	//add 366 for leap year?? ^^

	//depending on how many days that is, may give a discount
	if (numDaysToDepart < DAYS_TO_DEPART_REQD) fare *= DISCOUNT_PERCENT; //discount = 60% on FARE only

	// then add excursions
	double excursionsCost{ 0.0 };
	if (numberOfExcursions) excursionsCost *= numberOfExcursions;
	fare += excursionsCost;
}

void AlaskanCruise::ValidateInput()
{
	// ValidateInput will check if the Departure Date object is valid
	if (!dep.ValidateThisDate()) //use Date class validate date to make sure it's a real date
	{
		bValidInput = false;
		dateString = "\n Error: not a valid departure date.";
	}
	else if (dep.GetFormattedDate() == book.GetFormattedDate())
	{
		bValidInput = false;
		dateString = "\n Error: departure date cannot be today's date.";
	}
	else if ((dep.GetYear() != book.GetYear()) || (dep.GetYear() != (book.GetYear() + 1))) //check that dep is this yr or next yr
		//expand on this and make sub-checks for remaining items??
	{
		bValidInput = false;
		dateString = "\n Error: departure date must be this year or next year.";
	}
	else if (dep.GetYear() == book.GetYear())
	{
		if (book.GetDayOfYear() > dep.GetDayOfYear())	//check that the Date of Departure is after the Date of Booking
		{
			bValidInput = false;
			dateString = "\n Error: departure date must be later than booking date.";
		}
	} 
	else if (reservation == "") //check that reservation name isn't empty
	{
		bValidInput = false;
		dateString = "\n Error: please enter a reservation name.";
	}
	else //if it passed all the above tests, it should be ok
	{
		bValidInput = true;
		dateString = "\n Input valid.";
	}
}

void AlaskanCruise::WriteReservationConfirmation()
{
	//create the filename out of reservation name, resNum and “.txt”.
	filename = reservation + "_" + to_string(AlaskanCruise::resNumber+1) + ".txt";
	ofstream output;
	output.open(filename);
	if (!output) {
		//If not open, set bool, report that no file was written.
		bWrite = false;
		dateString += "\n Error. No file was written.";
	}
	else {
		//If successful...
		//append that to the ReservationDescription and display the filename.
		dateString += "\n The file was written successfully to " + filename;
		output << dateString;
		//increment resNumber
		AlaskanCruise::resNumber += 1;
		//set the bool 
		bWrite = true;
	}
	output.close();
}

//Overloaded Constructor
AlaskanCruise::AlaskanCruise(string resName, int numPass, int numDays, int numEx, Date booking, Date departure) :
	reservation(resName), numberOfPass(numPass), numberDaysCruise(numDays), numberOfExcursions(numEx), book(booking), dep(departure)
{
	ValidateInput();
	if (bValidInput) CalculateFare();
}

void AlaskanCruise::SetDates(Date& bk, Date& dpt)
{
	book = bk;
	dep = dpt;
	ValidateInput();
	if (bValidInput) CalculateFare();
}

string AlaskanCruise::ReservationDescription()
{  
	stringstream ss;

	//If there is no error, then call 
	if (bValidInput) {
		WriteReservationConfirmation();
		//that contains the reservation name, number of passengers, the booking date, travel date and total fare.
		ss << "\r\n " << dateString << "\r\n Your reservation name: " << reservation << "\r\n Number of Passengers: " << numberOfPass << "\r\n " << book.GetFormattedDate() << "\r\n " << dep.GetFormattedDate() << "\r\n Total cost: $" << to_string(fare);
	}
	else {
		//If there is an error in the reservation, it will display the specific error message from the method
		ss << "\r\n " << dateString;
	}

	return ss.str();
}
