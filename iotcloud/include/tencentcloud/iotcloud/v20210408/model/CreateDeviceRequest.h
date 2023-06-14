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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/Attribute.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateDevice request structure.
                */
                class CreateDeviceRequest : public AbstractModel
                {
                public:
                    CreateDeviceRequest();
                    ~CreateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product ID, globally unique ID assigned by Tencent Cloud during product creation
                     * @return ProductId Product ID, globally unique ID assigned by Tencent Cloud during product creation
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置Product ID, globally unique ID assigned by Tencent Cloud during product creation
                     * @param _productId Product ID, globally unique ID assigned by Tencent Cloud during product creation
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Device name. It is a string of 1 to 48 characters. Letters, digits, and :_- are allowed.
                     * @return DeviceName Device name. It is a string of 1 to 48 characters. Letters, digits, and :_- are allowed.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name. It is a string of 1 to 48 characters. Letters, digits, and :_- are allowed.
                     * @param _deviceName Device name. It is a string of 1 to 48 characters. Letters, digits, and :_- are allowed.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Device attribute
                     * @return Attribute Device attribute
                     * 
                     */
                    Attribute GetAttribute() const;

                    /**
                     * 设置Device attribute
                     * @param _attribute Device attribute
                     * 
                     */
                    void SetAttribute(const Attribute& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取Whether to use custom PSK, no by default
                     * @return DefinedPsk Whether to use custom PSK, no by default
                     * 
                     */
                    std::string GetDefinedPsk() const;

                    /**
                     * 设置Whether to use custom PSK, no by default
                     * @param _definedPsk Whether to use custom PSK, no by default
                     * 
                     */
                    void SetDefinedPsk(const std::string& _definedPsk);

                    /**
                     * 判断参数 DefinedPsk 是否已赋值
                     * @return DefinedPsk 是否已赋值
                     * 
                     */
                    bool DefinedPskHasBeenSet() const;

                    /**
                     * 获取ISP, required for a NB-IoT product. `1`: China Telecom; `2`: China Mobile; `3`: China Unicom
                     * @return Isp ISP, required for a NB-IoT product. `1`: China Telecom; `2`: China Mobile; `3`: China Unicom
                     * 
                     */
                    uint64_t GetIsp() const;

                    /**
                     * 设置ISP, required for a NB-IoT product. `1`: China Telecom; `2`: China Mobile; `3`: China Unicom
                     * @param _isp ISP, required for a NB-IoT product. `1`: China Telecom; `2`: China Mobile; `3`: China Unicom
                     * 
                     */
                    void SetIsp(const uint64_t& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取IMEI, required for a NB-IoT product
                     * @return Imei IMEI, required for a NB-IoT product
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 设置IMEI, required for a NB-IoT product
                     * @param _imei IMEI, required for a NB-IoT product
                     * 
                     */
                    void SetImei(const std::string& _imei);

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取DevEUI of a LoRa device, required when you create a LoRa device
                     * @return LoraDevEui DevEUI of a LoRa device, required when you create a LoRa device
                     * 
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 设置DevEUI of a LoRa device, required when you create a LoRa device
                     * @param _loraDevEui DevEUI of a LoRa device, required when you create a LoRa device
                     * 
                     */
                    void SetLoraDevEui(const std::string& _loraDevEui);

                    /**
                     * 判断参数 LoraDevEui 是否已赋值
                     * @return LoraDevEui 是否已赋值
                     * 
                     */
                    bool LoraDevEuiHasBeenSet() const;

                    /**
                     * 获取MoteType of a LoRa device
                     * @return LoraMoteType MoteType of a LoRa device
                     * 
                     */
                    uint64_t GetLoraMoteType() const;

                    /**
                     * 设置MoteType of a LoRa device
                     * @param _loraMoteType MoteType of a LoRa device
                     * 
                     */
                    void SetLoraMoteType(const uint64_t& _loraMoteType);

                    /**
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     * 
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取Skey, required when you create a LoRa device
                     * @return Skey Skey, required when you create a LoRa device
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置Skey, required when you create a LoRa device
                     * @param _skey Skey, required when you create a LoRa device
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取AppKey of a LoRa device
                     * @return LoraAppKey AppKey of a LoRa device
                     * 
                     */
                    std::string GetLoraAppKey() const;

                    /**
                     * 设置AppKey of a LoRa device
                     * @param _loraAppKey AppKey of a LoRa device
                     * 
                     */
                    void SetLoraAppKey(const std::string& _loraAppKey);

                    /**
                     * 判断参数 LoraAppKey 是否已赋值
                     * @return LoraAppKey 是否已赋值
                     * 
                     */
                    bool LoraAppKeyHasBeenSet() const;

                    /**
                     * 获取Private CA certificate
                     * @return TlsCrt Private CA certificate
                     * 
                     */
                    std::string GetTlsCrt() const;

                    /**
                     * 设置Private CA certificate
                     * @param _tlsCrt Private CA certificate
                     * 
                     */
                    void SetTlsCrt(const std::string& _tlsCrt);

                    /**
                     * 判断参数 TlsCrt 是否已赋值
                     * @return TlsCrt 是否已赋值
                     * 
                     */
                    bool TlsCrtHasBeenSet() const;

                private:

                    /**
                     * Product ID, globally unique ID assigned by Tencent Cloud during product creation
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Device name. It is a string of 1 to 48 characters. Letters, digits, and :_- are allowed.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Device attribute
                     */
                    Attribute m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * Whether to use custom PSK, no by default
                     */
                    std::string m_definedPsk;
                    bool m_definedPskHasBeenSet;

                    /**
                     * ISP, required for a NB-IoT product. `1`: China Telecom; `2`: China Mobile; `3`: China Unicom
                     */
                    uint64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * IMEI, required for a NB-IoT product
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * DevEUI of a LoRa device, required when you create a LoRa device
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * MoteType of a LoRa device
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * Skey, required when you create a LoRa device
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * AppKey of a LoRa device
                     */
                    std::string m_loraAppKey;
                    bool m_loraAppKeyHasBeenSet;

                    /**
                     * Private CA certificate
                     */
                    std::string m_tlsCrt;
                    bool m_tlsCrtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_CREATEDEVICEREQUEST_H_
