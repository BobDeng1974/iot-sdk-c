/*
* Copyright (c) 2017 Baidu, Inc. All Rights Reserved.
*
* Licensed to the Apache Software Foundation (ASF) under one or more
* contributor license agreements.  See the NOTICE file distributed with
* this work for additional information regarding copyright ownership.
* The ASF licenses this file to You under the Apache License, Version 2.0
* (the "License"); you may not use this file except in compliance with
* the License.  You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef IOT_SMARTHOME_CLIENT_SAMPLE_H
#define IOT_SMARTHOME_CLIENT_SAMPLE_H

#ifdef __cplusplus
extern "C" {
#endif

int iot_smarthome_client_run(bool isGatewayDevice);
int iot_smarthome_client_run_ota(bool isGatewayDevice);

#ifdef __cplusplus
}
#endif

#endif // IOT_SMARTHOME_CLIENT_SAMPLE_H
