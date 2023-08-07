#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
struct packet
{
    int seq_num;
    std::string data;
    bool a;
};
class selective
{
private:
    std::vector<packet> packets;
    int next_seq_num;
    int base;
    int windowsize;

public:
    selective(int size)
    {
        windowsize = size;
        next_seq_num = 0;
        base = 0;
    }
    void send(const std::string &data)
    {
        if (next_seq_num < base + windowsize)
        {
            packet packet;
            packet.seq_num = next_seq_num;
            packet.data = data;
            packet.a = false;
            packets.push_back(packet);
            std::cout << "Sending packets with seq
                number "<<packet.seq_num<<std::endl;
                next_seq_num++;
        }
    }
    void receive(int ack)
    {
        std::cout << "Received ack for
            sequence "<<ack<<std::endl;
            for (auto &packet : packets)
        {
            if (packet.seq_num == ack)
            {
                packet.a = true;
                break;
            }
        }
        while (!packets.empty() && packets[0].a)
        {
            packets.erase(packets.begin());
            base++;
        }
    }
    void start()
    {
        srand(time(NULL));
        while (true)
        {
            if (rand() % 2 == 0)
            {
                send("DATA");
            }
            if (rand() % 2 == 0)
            {
                int ack = base + rand() % (next_seq_num - base);
                receive(ack);
            }
            sleep(1);
        }
    }
};
int main()
{
    int windowsize;
    std::cout << "Enter window size" << std::endl;
    std::cin >> windowsize;
    selective arq(windowsize);
    arq.start();
    return 0;
}