/*
 * my_fun.c
 *
 *  Created on: Nov 25, 2020
 *      Author: michu
 */

/*
void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart){
}
}
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
	while (1);
}
*/


//1.send message with interupt
void transmit_string_IT(const char* message){
	HAL_UART_Transmit_IT(&huart2, message, sizeof(message));
}

//2.print number on a 7 segment display
void display_7seg(uint8_t map){

}

