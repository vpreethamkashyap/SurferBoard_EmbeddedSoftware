#include "MessageManager.h"
#include "struct/struct.h"
#include <util/crc16.h>
#include "Messages.h"

#include "GPS_UBX.h"

#define TEST_ONLY

namespace MessageManager {
	uint8_t txBuffer[128];
	uint8_t rxBuffer[128];
	size_t txLength;
	size_t rxLength;
	
	void init() {

	}
	
	void updateFields() {
#ifndef TEST_ONLY
		Msg::Status::latitude					=					GPS_UBX::latitude;
		Msg::Status::longitude 				=					GPS_UBX::longitude;
		Msg::Status::time							=					GPS_UBX::time;
#else
		Msg::Status::latitude					=					33.4;
		Msg::Status::longitude 				=					-118.8;
		Msg::Status::time							=					12345678;
#endif
	}
	
	uint8_t* getRXBuffer() {
		return rxBuffer;
	}
	
	const uint8_t* getTXBuffer() {
		return txBuffer;
	}
	
	size_t getTXBufferLength() {
		return txLength;
	}
	
	size_t& getRXBufferLength() {
		return rxLength;
	}
}