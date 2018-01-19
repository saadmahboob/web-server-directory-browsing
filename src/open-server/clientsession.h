#ifndef CLIENTSESSION_H
#define CLIENTSESSION_H

#include <vector>

class ClientSession
{
public:
    ClientSession();

    int socket;//to socket pou client sto opoio ginetai i apostoli dedomenwn
    int fds_index;//i thesi pou vrisketai to socket mesa sto pollfd array, sto poll
    bool keep_alive = true;//ean sto HTTP request exei zitithei keep-alive
    bool ewouldblock_flag = false;//gia megala mynimata, ean den ginei apostoli me ena send, thetei afto to flag se true
    std::vector<char> recv_message;//periexei to HTTP request
    std::vector<char> send_message;//periexei ta dedomena pros apostoli
    bool send_message_has_more_bytes = false;//ta megala arxeia den fortwnontai oloklira sto send_message alla tmimatika. se afti tin periptwsi thetei to flag se true
    long send_message_index = 0; //posa bytes exoun synolika stalei apo to arxeio, ean einai megalo. perilamvanei to megethos tou HTTP response header
    long send_message_header_size = 0;//to megethos tou HTTP response header. Afairontas to apo to send_message_index exw ta synolika bytes pou stalthikan

};

#endif // CLIENTSESSION_H
