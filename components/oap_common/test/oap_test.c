/*
 * oap_test.c
 *
 *  Created on: Sep 11, 2017
 *      Author: kris
 *
 *  This file is part of OpenAirProject-ESP32.
 *
 *  OpenAirProject-ESP32 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OpenAirProject-ESP32 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OpenAirProject-ESP32.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "esp_log.h"
#include "oap_test.h"
#include "bootwifi.h"
#include "test_wifi.h"
#include "unity.h"

static const char* TAG = "test";

void test_init_wifi() {
	oc_wifi_t wifi_config = {
			.ssid = OAP_TEST_WIFI_SSID,
			.password = OAP_TEST_WIFI_PASSWORD
		};

	wifi_boot(&wifi_config,0);
}

void test_require_wifi() {
	test_init_wifi();
	TEST_ESP_OK(wifi_connected_wait_for(10000));

	ESP_LOGI(TAG, "connected");
}

