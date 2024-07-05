/*
 * This is the header file containing the driver function declarations for
 * LPC2148's UART written by <Ayush Nagpure>
 */


/**
 * @brief Configures the baud rate of the UART
 *
 * @param baud : the baud rate of the UART data to be transmitted
 * valid values: 50 ...128000
 * @param clock: the input clock frequency in MHz is from the crystal clock. 
 * valid values: 1.8432MHz, 3.072MHz, 18.432MHz
 *
 * @return none
 */
void configure_baudrate (unsigned int baud, float clock);

/**
 * @brief configures the data width of UART
 *
 * @param width : width of the data in bits 
 * valid values: 0x00, 0x01, 0x10, 0x11 (5-bit,6-bit,7-bit,8-bit)
 *
 * @return none
 */
void configure_data_width (unsigned short width);

/**
 * @brief configures the stop bit or bits of UART. stop_bit is declared as parameter in the configure_stop_bit function(whether 0,1)
 * if the data is 5-bit and stop bit is 0 then 1 stop bit is generated, if the data is 5 bit and stop bit is 1 then 1.5 stop bit is selected,
 * if the data is 6,7,8 bit and stop bit is 1 then stop bit selected will be 2 
 
 * @param stop_bit : bit(s) indicates the end / stop of data
 * valid values: 0, 1 ( depends on the data width whether its 5-, 6- , 7-, 8-bit)
 *
 * @return stop_bit
 */
short configure_stop_bit (unsigned short stop_bit);    
/**
 * @brief configures the parity to be set whether even or odd.Even parity(0) if number of ones in data is even. Odd parity(1) if number of ones in the data is odd.
 * parity_bit is the bit that will be decied as per Tx_data and parity_state selected.
 * if parity need to be disabled then configure it using while or if loop . if parity is not required then the function will not run else it will run .
 
 * @param parity_state : indicates if parity required is even or odd.
 * 
 * parity _state valid values : 0, 1 (even/odd respectively) 
 * 
 * @return parity_bit
 */
 
short configure_parity (unsigned short parity_state);  

/**
 * @brief data that is to be send to the UART receiver
 *
 * @param Tx_data : data to be transmitted
 * valid values: any 5-, 6- , 7-, 8-bit binary value
 *
 * @return none
 */
void transmit_data (unsigned char Tx_data);

/**
 * @brief receives / reads the data from UART transmitter
 *
 * @param Rx_data : received data from UART transmitter
 * valid values: data received from transmitter (5-, 6- , 7-, 8-bit binary value)
 *
 * @return Rx_data
 */
char receive_data ();

