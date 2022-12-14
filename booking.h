#include "client.h"
#include "hotel.h"
#include "date.h"

class Booking
{
public:
    Booking(Date checkInDate, Hotel& hotel, Client& client, unsigned int roomNumber, unsigned int numberOfNights, unsigned int id=0);
    friend std::ostream& operator<<(std::ostream& os, const Booking& booking);
    void setCheckInDate(Date checkInDate);
    void setNumberOfNights(unsigned int numberOfNights);
    Client getClient();
    Date getCheckInDate();
    unsigned int getRoomNumber();
    unsigned int getNumberOfNights();
    unsigned int getId();
    bool setRoomNumber(unsigned int roomNumber);
    Hotel& getHotel();
private:
    float totalCost();
    Date _checkInDate;
    Hotel _hotel;
    Client _client;
    float _totalCost;
    unsigned int _roomNumber;
    unsigned int _numberOfNights;
    unsigned int _id;

};