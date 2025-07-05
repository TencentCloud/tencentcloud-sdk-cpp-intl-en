/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/DeviceTag.h>
#include <tencentcloud/iotcloud/v20210408/model/DeviceLabel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeDevice response structure.
                */
                class DescribeDeviceResponse : public AbstractModel
                {
                public:
                    DescribeDeviceResponse();
                    ~DescribeDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Device name
                     * @return DeviceName Device name
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Whether the device is online. `0`: offline; `1`: online
                     * @return Online Whether the device is online. `0`: offline; `1`: online
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取Device login time
                     * @return LoginTime Device login time
                     * 
                     */
                    uint64_t GetLoginTime() const;

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取Device firmware version
                     * @return Version Device firmware version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Last updated time of the device
                     * @return LastUpdateTime Last updated time of the device
                     * 
                     */
                    uint64_t GetLastUpdateTime() const;

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Device certificate
                     * @return DeviceCert Device certificate
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     * 
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取Device key
                     * @return DevicePsk Device key
                     * 
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 判断参数 DevicePsk 是否已赋值
                     * @return DevicePsk 是否已赋值
                     * 
                     */
                    bool DevicePskHasBeenSet() const;

                    /**
                     * 获取Device attribute
                     * @return Tags Device attribute
                     * 
                     */
                    std::vector<DeviceTag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Device type
                     * @return DeviceType Device type
                     * 
                     */
                    uint64_t GetDeviceType() const;

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取International Mobile Equipment Identity (IMEI)
                     * @return Imei International Mobile Equipment Identity (IMEI)
                     * 
                     */
                    std::string GetImei() const;

                    /**
                     * 判断参数 Imei 是否已赋值
                     * @return Imei 是否已赋值
                     * 
                     */
                    bool ImeiHasBeenSet() const;

                    /**
                     * 获取ISP
                     * @return Isp ISP
                     * 
                     */
                    uint64_t GetIsp() const;

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return ConnIP IP address
                     * 
                     */
                    uint64_t GetConnIP() const;

                    /**
                     * 判断参数 ConnIP 是否已赋值
                     * @return ConnIP 是否已赋值
                     * 
                     */
                    bool ConnIPHasBeenSet() const;

                    /**
                     * 获取Device ID at the NB-IoT ISP
                     * @return NbiotDeviceID Device ID at the NB-IoT ISP
                     * @deprecated
                     */
                    std::string GetNbiotDeviceID() const;

                    /**
                     * 判断参数 NbiotDeviceID 是否已赋值
                     * @return NbiotDeviceID 是否已赋值
                     * @deprecated
                     */
                    bool NbiotDeviceIDHasBeenSet() const;

                    /**
                     * 获取DevEUI of a LoRa device
                     * @return LoraDevEui DevEUI of a LoRa device
                     * 
                     */
                    std::string GetLoraDevEui() const;

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
                     * 判断参数 LoraMoteType 是否已赋值
                     * @return LoraMoteType 是否已赋值
                     * 
                     */
                    bool LoraMoteTypeHasBeenSet() const;

                    /**
                     * 获取SDK log level of the device
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogLevel SDK log level of the device
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetLogLevel() const;

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FirstOnlineTime The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetFirstOnlineTime() const;

                    /**
                     * 判断参数 FirstOnlineTime 是否已赋值
                     * @return FirstOnlineTime 是否已赋值
                     * 
                     */
                    bool FirstOnlineTimeHasBeenSet() const;

                    /**
                     * 获取The last time when the device went offline
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LastOfflineTime The last time when the device went offline
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetLastOfflineTime() const;

                    /**
                     * 判断参数 LastOfflineTime 是否已赋值
                     * @return LastOfflineTime 是否已赋值
                     * 
                     */
                    bool LastOfflineTimeHasBeenSet() const;

                    /**
                     * 获取Device creation time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CreateTime Device creation time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CertState Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetCertState() const;

                    /**
                     * 判断参数 CertState 是否已赋值
                     * @return CertState 是否已赋值
                     * 
                     */
                    bool CertStateHasBeenSet() const;

                    /**
                     * 获取Whether the device is enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return EnableState Whether the device is enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     * 
                     */
                    bool EnableStateHasBeenSet() const;

                    /**
                     * 获取Device tags
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Labels Device tags
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<DeviceLabel> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取IP address of the MQTT client
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ClientIP IP address of the MQTT client
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Firmware update time of the device
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FirmwareUpdateTime Firmware update time of the device
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetFirmwareUpdateTime() const;

                    /**
                     * 判断参数 FirmwareUpdateTime 是否已赋值
                     * @return FirmwareUpdateTime 是否已赋值
                     * 
                     */
                    bool FirmwareUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Account ID of the creator
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateUserId Account ID of the creator
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateUserId() const;

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                private:

                    /**
                     * Device name
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Whether the device is online. `0`: offline; `1`: online
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * Device login time
                     */
                    uint64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * Device firmware version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Last updated time of the device
                     */
                    uint64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Device certificate
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * Device key
                     */
                    std::string m_devicePsk;
                    bool m_devicePskHasBeenSet;

                    /**
                     * Device attribute
                     */
                    std::vector<DeviceTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Device type
                     */
                    uint64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * International Mobile Equipment Identity (IMEI)
                     */
                    std::string m_imei;
                    bool m_imeiHasBeenSet;

                    /**
                     * ISP
                     */
                    uint64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * IP address
                     */
                    uint64_t m_connIP;
                    bool m_connIPHasBeenSet;

                    /**
                     * Device ID at the NB-IoT ISP
                     */
                    std::string m_nbiotDeviceID;
                    bool m_nbiotDeviceIDHasBeenSet;

                    /**
                     * DevEUI of a LoRa device
                     */
                    std::string m_loraDevEui;
                    bool m_loraDevEuiHasBeenSet;

                    /**
                     * MoteType of a LoRa device
                     */
                    uint64_t m_loraMoteType;
                    bool m_loraMoteTypeHasBeenSet;

                    /**
                     * SDK log level of the device
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_firstOnlineTime;
                    bool m_firstOnlineTimeHasBeenSet;

                    /**
                     * The last time when the device went offline
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_lastOfflineTime;
                    bool m_lastOfflineTimeHasBeenSet;

                    /**
                     * Device creation time
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_certState;
                    bool m_certStateHasBeenSet;

                    /**
                     * Whether the device is enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                    /**
                     * Device tags
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<DeviceLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * IP address of the MQTT client
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * Firmware update time of the device
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_firmwareUpdateTime;
                    bool m_firmwareUpdateTimeHasBeenSet;

                    /**
                     * Account ID of the creator
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICERESPONSE_H_
