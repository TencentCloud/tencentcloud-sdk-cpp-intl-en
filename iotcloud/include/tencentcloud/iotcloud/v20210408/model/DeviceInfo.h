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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICEINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Device details
                */
                class DeviceInfo : public AbstractModel
                {
                public:
                    DeviceInfo();
                    ~DeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Device name
                     * @return DeviceName Device name
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name
                     * @param _deviceName Device name
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
                     * 获取Whether the device is online. `0`: offline; `1`: online
                     * @return Online Whether the device is online. `0`: offline; `1`: online
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置Whether the device is online. `0`: offline; `1`: online
                     * @param _online Whether the device is online. `0`: offline; `1`: online
                     * 
                     */
                    void SetOnline(const uint64_t& _online);

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
                     * 设置Device login time
                     * @param _loginTime Device login time
                     * 
                     */
                    void SetLoginTime(const uint64_t& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取Device version
                     * @return Version Device version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Device version
                     * @param _version Device version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Device certificate, which is returned for devices that use certificates for authentication
                     * @return DeviceCert Device certificate, which is returned for devices that use certificates for authentication
                     * 
                     */
                    std::string GetDeviceCert() const;

                    /**
                     * 设置Device certificate, which is returned for devices that use certificates for authentication
                     * @param _deviceCert Device certificate, which is returned for devices that use certificates for authentication
                     * 
                     */
                    void SetDeviceCert(const std::string& _deviceCert);

                    /**
                     * 判断参数 DeviceCert 是否已赋值
                     * @return DeviceCert 是否已赋值
                     * 
                     */
                    bool DeviceCertHasBeenSet() const;

                    /**
                     * 获取Device key, which is returned for devices that use keys for authentication
                     * @return DevicePsk Device key, which is returned for devices that use keys for authentication
                     * 
                     */
                    std::string GetDevicePsk() const;

                    /**
                     * 设置Device key, which is returned for devices that use keys for authentication
                     * @param _devicePsk Device key, which is returned for devices that use keys for authentication
                     * 
                     */
                    void SetDevicePsk(const std::string& _devicePsk);

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
                     * 设置Device attribute
                     * @param _tags Device attribute
                     * 
                     */
                    void SetTags(const std::vector<DeviceTag>& _tags);

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
                     * 设置Device type
                     * @param _deviceType Device type
                     * 
                     */
                    void SetDeviceType(const uint64_t& _deviceType);

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
                     * 设置International Mobile Equipment Identity (IMEI)
                     * @param _imei International Mobile Equipment Identity (IMEI)
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
                     * 获取ISP
                     * @return Isp ISP
                     * 
                     */
                    uint64_t GetIsp() const;

                    /**
                     * 设置ISP
                     * @param _isp ISP
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
                     * 获取Device ID at the NB-IoT ISP
                     * @return NbiotDeviceID Device ID at the NB-IoT ISP
                     * 
                     */
                    std::string GetNbiotDeviceID() const;

                    /**
                     * 设置Device ID at the NB-IoT ISP
                     * @param _nbiotDeviceID Device ID at the NB-IoT ISP
                     * 
                     */
                    void SetNbiotDeviceID(const std::string& _nbiotDeviceID);

                    /**
                     * 判断参数 NbiotDeviceID 是否已赋值
                     * @return NbiotDeviceID 是否已赋值
                     * 
                     */
                    bool NbiotDeviceIDHasBeenSet() const;

                    /**
                     * 获取IP address
                     * @return ConnIP IP address
                     * 
                     */
                    uint64_t GetConnIP() const;

                    /**
                     * 设置IP address
                     * @param _connIP IP address
                     * 
                     */
                    void SetConnIP(const uint64_t& _connIP);

                    /**
                     * 判断参数 ConnIP 是否已赋值
                     * @return ConnIP 是否已赋值
                     * 
                     */
                    bool ConnIPHasBeenSet() const;

                    /**
                     * 获取Last updated time of the device
                     * @return LastUpdateTime Last updated time of the device
                     * 
                     */
                    uint64_t GetLastUpdateTime() const;

                    /**
                     * 设置Last updated time of the device
                     * @param _lastUpdateTime Last updated time of the device
                     * 
                     */
                    void SetLastUpdateTime(const uint64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取DevEUI of a LoRa device
                     * @return LoraDevEui DevEUI of a LoRa device
                     * 
                     */
                    std::string GetLoraDevEui() const;

                    /**
                     * 设置DevEUI of a LoRa device
                     * @param _loraDevEui DevEUI of a LoRa device
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
                     * 获取The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FirstOnlineTime The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetFirstOnlineTime() const;

                    /**
                     * 设置The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _firstOnlineTime The first time when the device went online
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetFirstOnlineTime(const uint64_t& _firstOnlineTime);

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
                     * 设置The last time when the device went offline
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _lastOfflineTime The last time when the device went offline
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLastOfflineTime(const uint64_t& _lastOfflineTime);

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
                     * 设置Device creation time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _createTime Device creation time
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Device log level
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return LogLevel Device log level
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetLogLevel() const;

                    /**
                     * 设置Device log level
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _logLevel Device log level
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLogLevel(const uint64_t& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return CertState Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetCertState() const;

                    /**
                     * 设置Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _certState Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetCertState(const uint64_t& _certState);

                    /**
                     * 判断参数 CertState 是否已赋值
                     * @return CertState 是否已赋值
                     * 
                     */
                    bool CertStateHasBeenSet() const;

                    /**
                     * 获取Whether the device is enabled. `0`: disabled; `1`: enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return EnableState Whether the device is enabled. `0`: disabled; `1`: enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 设置Whether the device is enabled. `0`: disabled; `1`: enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _enableState Whether the device is enabled. `0`: disabled; `1`: enabled
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetEnableState(const uint64_t& _enableState);

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
                     * 设置Device tags
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _labels Device tags
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetLabels(const std::vector<DeviceLabel>& _labels);

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
                     * 设置IP address of the MQTT client
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _clientIP IP address of the MQTT client
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Time of last OTA update
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FirmwareUpdateTime Time of last OTA update
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    uint64_t GetFirmwareUpdateTime() const;

                    /**
                     * 设置Time of last OTA update
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _firmwareUpdateTime Time of last OTA update
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetFirmwareUpdateTime(const uint64_t& _firmwareUpdateTime);

                    /**
                     * 判断参数 FirmwareUpdateTime 是否已赋值
                     * @return FirmwareUpdateTime 是否已赋值
                     * 
                     */
                    bool FirmwareUpdateTimeHasBeenSet() const;

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
                     * Device version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Device certificate, which is returned for devices that use certificates for authentication
                     */
                    std::string m_deviceCert;
                    bool m_deviceCertHasBeenSet;

                    /**
                     * Device key, which is returned for devices that use keys for authentication
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
                     * Device ID at the NB-IoT ISP
                     */
                    std::string m_nbiotDeviceID;
                    bool m_nbiotDeviceIDHasBeenSet;

                    /**
                     * IP address
                     */
                    uint64_t m_connIP;
                    bool m_connIPHasBeenSet;

                    /**
                     * Last updated time of the device
                     */
                    uint64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

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
                     * Device log level
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * Whether the device certificate has been obtained. `0`: no; `1`: yes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_certState;
                    bool m_certStateHasBeenSet;

                    /**
                     * Whether the device is enabled. `0`: disabled; `1`: enabled
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
                     * Time of last OTA update
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    uint64_t m_firmwareUpdateTime;
                    bool m_firmwareUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICEINFO_H_
