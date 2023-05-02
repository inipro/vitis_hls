#include <stdio.h>
#include <string.h>
#include <ap_int.h>

void simple_assign(
		ap_uint<4> sw,
		ap_uint<4> *led){
#pragma HLS INTERFACE ap_none port=led
#pragma HLS INTERFACE ap_none port=sw
#pragma HLS INTERFACE ap_ctrl_none port=return

	*led = sw;
}
