#include <leguan.h>
#include <cube.h>

int main() {
	// Initialize Hardware
	CUBEMX_Init();
	// Initialize Leguan board
	LEGUAN_Init();

	//FPGA_Init();

	// Set logging output destination to be the LCD
	LOG_SetDestination(LCD_Stream);

	// Main loop
	// uint8_t state, val = 0;
	while (true) {
		int state = FPGA_GetButton(Button0);
		FPGA_7SegDisplayDecimal(state);
//		state = FPGA_DIPGetLeft();
//		val = 0;
//
//		for(uint8_t i = 0; i < 8; i++){
//			val += (state & (1 << i)) > 0;
//		}
//
//		FPGA_7SegDisplayDecimal(val);
//		HAL_Delay(100);
	}
}
