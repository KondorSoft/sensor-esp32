/*
 * awsiot_client.h
 *
 *  Created on: Feb 18, 2017
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

#ifndef COMPONENTS_AWSIOT_INCLUDE_AWSIOT_H_
#define COMPONENTS_AWSIOT_INCLUDE_AWSIOT_H_

#include "oap_common.h"
#include "esp_err.h"
#include "cJSON.h"

typedef struct {
	int enabled;
	char* endpoint;
	int port;
	char* thingName;
	char* cert;
	char* pkey;
} awsiot_config_t;

awsiot_config_t* get_awsiot_config();
esp_err_t awsiot_configure(cJSON* awsiot);
esp_err_t awsiot_send(oap_meas* meas, oap_sensor_config_t *sensor_config);

#endif /* COMPONENTS_AWSIOT_INCLUDE_AWSIOT_H_ */
