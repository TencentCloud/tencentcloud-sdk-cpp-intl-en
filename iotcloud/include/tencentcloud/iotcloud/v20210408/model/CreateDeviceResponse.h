/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateDevice response structure.
                */
                class CreateDeviceResponse : public AbstractModel
                {
                public:
                    CreateDeviceResponse();
                    ~CreateDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Device name
                     * @return DeviceName Device name
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Base64-encoded symmetric encryption key, which is returned if symmetric encryption is used
                     * @return DevicePsk Base64-encoded symmetric encryption key, which is returned if symmetric encryption is used
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     */
                    bool DevicePskHasBeenSet() const;

                    /**
                     * 获取Device certificate, which authenticates client identity during TLS connection establishment and is returned if asymmetric encryption is used
                     * @return DeviceCert Device certificate, which authenticates client identity during TLS connection establishment and is returned if asymmetric encryption is used
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取Device private key, which authenticates client identity during TLS connection establishment and is returned if asymmetric encryption is used. Tencent Cloud does not store the key. Please store it by yourself properly.
                     * @return DevicePrivateKey Device private key, which authenticates client identity during TLS connection establishment and is returned if asymmetric encryption is used. Tencent Cloud does not store the key. Please store it by yourself properly.
                     */
                    std::string GetDevicePrivateKey() const;

                    /**
                     * 判断参数 DevicePrivateKey 是否已赋值
                     * @return DevicePrivateKey 是否已赋值
                     */
                    bool DevicePrivateKeyHasBeenSet() const;

                    /**
                     * 获取DevEUI of a LoRa device, which is returned for a LoRa device
                     * @return LoraDevEui DevEUI of a LoRa device, which is returned for a LoRa device
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 判断参数 LoraDevEui 是否已赋值
                     * @return LoraDevEui 是否已赋值
                     */
                    bool LoraDevEuiHasBeenSet() const;

                    /**
                     * 获取MoteType of a LoRa device, which is returned for a LoRa device
                     * @return LoraMoteType MoteType of a LoRa device, which is returned for a LoRa device
                     */
                    uint64_t GetLoraMoteType() const;

                    /**
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取AppKey of a LoRa device, which is returned for a LoRa device
                     * @return LoraAppKey AppKey of a LoRa device, which is returned for a LoRa device
                     */
                    std::string GetLoraAppKey() const;

                    /**
                     * 判断参数 LoraAppKey 是否已赋值
                     * @return LoraAppKey 是否已赋值
                     */
                    bool LoraAppKeyHasBeenSet() const;

                    /**
                     * 获取NwkKey of a LoRa device, which is returned for a LoRa device
                     * @return LoraNwkKey NwkKey of a LoRa device, which is returned for a LoRa device
                     */
                    std::string GetLoraNwkKey() const;

                    /**
                     * 判断参数 LoraNwkKey 是否已赋值
                     * @return LoraNwkKey 是否已赋值
                     */
                    bool LoraNwkKeyHasBeenSet() const;

                private:

                    /**
                     * Device name
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Base64-encoded symmetric encryption key, which is returned if symmetric encryption is used
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * Device certificate, which authenticates client identity during TLS connection establishment and is returned if asymmetric encryption is used
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * Device private key, which authenticates client identity during TLS connection establishment and is returned if asymmetric encryption is used. Tencent Cloud does not store the key. Please store it by yourself properly.
                     */
                    std::string m_devicePrivateKey;
                    bool m_devicePrivateKeyHasBeenSet;

                    /**
                     * DevEUI of a LoRa device, which is returned for a LoRa device
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * MoteType of a LoRa device, which is returned for a LoRa device
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * AppKey of a LoRa device, which is returned for a LoRa device
                     */
                    std::string m_loraAppKey;
                    bool m_loraAppKeyHasBeenSet;

                    /**
                     * NwkKey of a LoRa device, which is returned for a LoRa device
                     */
                    std::string m_loraNwkKey;
                    bool m_loraNwkKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICERESPONSE_H_
