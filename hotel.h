#include "address.h"
#include "room.h"
#include <vector>


class Hotel
{
public:
    Hotel(Address address, std::string name, std::string id);
    Room getRoom(unsigned int roomNumber);
    void setRoom(unsigned int roomNumber, Room room);
    bool addRoom(Room& room);
    bool removeRoom(unsigned int roomNumber);
    void displayRooms() const;
    std::string getId() const;
    void setRoomPrice(unsigned int roomNumber, float price);
    friend std::ostream& operator<<(std::ostream& os, const Hotel& hotel);
    unsigned int getNumberOfRooms() const;
private:
    Address _address;
    std::string _name;
    std::vector<Room> _rooms;
    std::string _id;
};