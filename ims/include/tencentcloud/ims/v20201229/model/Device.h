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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_DEVICE_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_DEVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Indicates the information of the business user's device
                */
                class Device : public AbstractModel
                {
                public:
                    Device();
                    ~Device() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field indicates the IP address of the business user's device and supports recording both **IPv4 and IPv6** addresses. It needs to be used together with the `IpType` parameter.
                     * @return Ip This field indicates the IP address of the business user's device and supports recording both **IPv4 and IPv6** addresses. It needs to be used together with the `IpType` parameter.
                     */
                    std::string GetIp() const;

                    /**
                     * 设置This field indicates the IP address of the business user's device and supports recording both **IPv4 and IPv6** addresses. It needs to be used together with the `IpType` parameter.
                     * @param Ip This field indicates the IP address of the business user's device and supports recording both **IPv4 and IPv6** addresses. It needs to be used together with the `IpType` parameter.
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取This field indicates the MAC address of the business user, which makes it easier to identify and manage devices. Its format and value are the same as those of a standard MAC address.
                     * @return Mac This field indicates the MAC address of the business user, which makes it easier to identify and manage devices. Its format and value are the same as those of a standard MAC address.
                     */
                    std::string GetMac() const;

                    /**
                     * 设置This field indicates the MAC address of the business user, which makes it easier to identify and manage devices. Its format and value are the same as those of a standard MAC address.
                     * @param Mac This field indicates the MAC address of the business user, which makes it easier to identify and manage devices. Its format and value are the same as those of a standard MAC address.
                     */
                    void SetMac(const std::string& _mac);

                    /**
                     * 判断参数 Mac 是否已赋值
                     * @return Mac 是否已赋值
                     */
                    bool MacHasBeenSet() const;

                    /**
                     * 获取*In beta test. Stay tuned.*
                     * @return TokenId *In beta test. Stay tuned.*
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置*In beta test. Stay tuned.*
                     * @param TokenId *In beta test. Stay tuned.*
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取*In beta test. Stay tuned.*
                     * @return DeviceId *In beta test. Stay tuned.*
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置*In beta test. Stay tuned.*
                     * @param DeviceId *In beta test. Stay tuned.*
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取This field indicates the international mobile equipment identity **(IMEI)** number of the business user's device, which can be used to identify each mobile communication device such as mobile phone for easier device identification and management.<br>Note: the format is **15–17 digits**.
                     * @return IMEI This field indicates the international mobile equipment identity **(IMEI)** number of the business user's device, which can be used to identify each mobile communication device such as mobile phone for easier device identification and management.<br>Note: the format is **15–17 digits**.
                     */
                    std::string GetIMEI() const;

                    /**
                     * 设置This field indicates the international mobile equipment identity **(IMEI)** number of the business user's device, which can be used to identify each mobile communication device such as mobile phone for easier device identification and management.<br>Note: the format is **15–17 digits**.
                     * @param IMEI This field indicates the international mobile equipment identity **(IMEI)** number of the business user's device, which can be used to identify each mobile communication device such as mobile phone for easier device identification and management.<br>Note: the format is **15–17 digits**.
                     */
                    void SetIMEI(const std::string& _iMEI);

                    /**
                     * 判断参数 IMEI 是否已赋值
                     * @return IMEI 是否已赋值
                     */
                    bool IMEIHasBeenSet() const;

                    /**
                     * 获取**For iOS devices**: this field indicates the identifier for advertisers **(IDFA)** of the business user, which is provided by Apple to identify the user and contains a hexadecimal string of 32 digits and letters.<br>
Note: as iOS 14 has been updated by Apple to allow users to manually enable or disable IDFA since 2021, the validity of this string may be reduced.
                     * @return IDFA **For iOS devices**: this field indicates the identifier for advertisers **(IDFA)** of the business user, which is provided by Apple to identify the user and contains a hexadecimal string of 32 digits and letters.<br>
Note: as iOS 14 has been updated by Apple to allow users to manually enable or disable IDFA since 2021, the validity of this string may be reduced.
                     */
                    std::string GetIDFA() const;

                    /**
                     * 设置**For iOS devices**: this field indicates the identifier for advertisers **(IDFA)** of the business user, which is provided by Apple to identify the user and contains a hexadecimal string of 32 digits and letters.<br>
Note: as iOS 14 has been updated by Apple to allow users to manually enable or disable IDFA since 2021, the validity of this string may be reduced.
                     * @param IDFA **For iOS devices**: this field indicates the identifier for advertisers **(IDFA)** of the business user, which is provided by Apple to identify the user and contains a hexadecimal string of 32 digits and letters.<br>
Note: as iOS 14 has been updated by Apple to allow users to manually enable or disable IDFA since 2021, the validity of this string may be reduced.
                     */
                    void SetIDFA(const std::string& _iDFA);

                    /**
                     * 判断参数 IDFA 是否已赋值
                     * @return IDFA 是否已赋值
                     */
                    bool IDFAHasBeenSet() const;

                    /**
                     * 获取**For iOS devices**: this field indicates the identifier for vendors **(IDFV)** of the business user, which is provided by Apple to identify the app vendor and contains a hexadecimal string of 32 digits and letters. It can be used to uniquely identify a device.
                     * @return IDFV **For iOS devices**: this field indicates the identifier for vendors **(IDFV)** of the business user, which is provided by Apple to identify the app vendor and contains a hexadecimal string of 32 digits and letters. It can be used to uniquely identify a device.
                     */
                    std::string GetIDFV() const;

                    /**
                     * 设置**For iOS devices**: this field indicates the identifier for vendors **(IDFV)** of the business user, which is provided by Apple to identify the app vendor and contains a hexadecimal string of 32 digits and letters. It can be used to uniquely identify a device.
                     * @param IDFV **For iOS devices**: this field indicates the identifier for vendors **(IDFV)** of the business user, which is provided by Apple to identify the app vendor and contains a hexadecimal string of 32 digits and letters. It can be used to uniquely identify a device.
                     */
                    void SetIDFV(const std::string& _iDFV);

                    /**
                     * 判断参数 IDFV 是否已赋值
                     * @return IDFV 是否已赋值
                     */
                    bool IDFVHasBeenSet() const;

                    /**
                     * 获取This field indicates the type of the recorded IP address. Valid values: **0** (IPv4 address), **1** (IPv6 address). It needs to be used together with the `IpType` parameter.
                     * @return IpType This field indicates the type of the recorded IP address. Valid values: **0** (IPv4 address), **1** (IPv6 address). It needs to be used together with the `IpType` parameter.
                     */
                    uint64_t GetIpType() const;

                    /**
                     * 设置This field indicates the type of the recorded IP address. Valid values: **0** (IPv4 address), **1** (IPv6 address). It needs to be used together with the `IpType` parameter.
                     * @param IpType This field indicates the type of the recorded IP address. Valid values: **0** (IPv4 address), **1** (IPv6 address). It needs to be used together with the `IpType` parameter.
                     */
                    void SetIpType(const uint64_t& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     */
                    bool IpTypeHasBeenSet() const;

                private:

                    /**
                     * This field indicates the IP address of the business user's device and supports recording both **IPv4 and IPv6** addresses. It needs to be used together with the `IpType` parameter.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * This field indicates the MAC address of the business user, which makes it easier to identify and manage devices. Its format and value are the same as those of a standard MAC address.
                     */
                    std::string m_mac;
                    bool m_macHasBeenSet;

                    /**
                     * *In beta test. Stay tuned.*
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * *In beta test. Stay tuned.*
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * This field indicates the international mobile equipment identity **(IMEI)** number of the business user's device, which can be used to identify each mobile communication device such as mobile phone for easier device identification and management.<br>Note: the format is **15–17 digits**.
                     */
                    std::string m_iMEI;
                    bool m_iMEIHasBeenSet;

                    /**
                     * **For iOS devices**: this field indicates the identifier for advertisers **(IDFA)** of the business user, which is provided by Apple to identify the user and contains a hexadecimal string of 32 digits and letters.<br>
Note: as iOS 14 has been updated by Apple to allow users to manually enable or disable IDFA since 2021, the validity of this string may be reduced.
                     */
                    std::string m_iDFA;
                    bool m_iDFAHasBeenSet;

                    /**
                     * **For iOS devices**: this field indicates the identifier for vendors **(IDFV)** of the business user, which is provided by Apple to identify the app vendor and contains a hexadecimal string of 32 digits and letters. It can be used to uniquely identify a device.
                     */
                    std::string m_iDFV;
                    bool m_iDFVHasBeenSet;

                    /**
                     * This field indicates the type of the recorded IP address. Valid values: **0** (IPv4 address), **1** (IPv6 address). It needs to be used together with the `IpType` parameter.
                     */
                    uint64_t m_ipType;
                    bool m_ipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_DEVICE_H_
