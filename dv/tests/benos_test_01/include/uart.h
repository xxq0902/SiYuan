#ifndef	_UART_H
#define	_UART_H


typedef signed char             int8_t;   
typedef short int               int16_t;  
typedef int                     int32_t;  
  
typedef unsigned char           uint8_t;  
typedef unsigned short int      uint16_t;  
typedef unsigned int            uint32_t;  
typedef unsigned long int       uint64_t; 

typedef unsigned long int	    uintptr_t;
 

#define UART_BASE 0x10000000

#define UART_RBR UART_BASE + 0
#define UART_THR UART_BASE + 0
#define UART_INTERRUPT_ENABLE UART_BASE + 4
#define UART_INTERRUPT_IDENT UART_BASE + 8
#define UART_FIFO_CONTROL UART_BASE + 8
#define UART_LINE_CONTROL UART_BASE + 12
#define UART_MODEM_CONTROL UART_BASE + 16
#define UART_LINE_STATUS UART_BASE + 20
#define UART_MODEM_STATUS UART_BASE + 24
#define UART_DLAB_LSB UART_BASE + 0
#define UART_DLAB_MSB UART_BASE + 4

void init_uart();

void print_uart(const char* str);

void print_uart_int(uint32_t addr);

void print_uart_addr(uint64_t addr);

void print_uart_byte(uint8_t byte);

#endif  /*_UART_H */
