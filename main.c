#include "/home/ayushn/Desktop/uart/uart_ayush.h"
int main(){
int baud = 2400;
float clock = 1.8432;
short width = 01; //6-bit value
char parity_bit; //even parity
unsigned char Tx_data = 'A';
configure_baudrate(baud, clock);
configure_data_width(01);
char stopbit = configure_stop_bit(1); //set as 1 stating either 1.5 or 2 stop bits 
char parity = configure_parity(1);
transmit_data(Tx_data);
char data_received = receive_data();
}
