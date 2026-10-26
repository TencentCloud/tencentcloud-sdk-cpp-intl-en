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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Data returned by the device query API
                */
                class DescribeDeviceData : public AbstractModel
                {
                public:
                    DescribeDeviceData();
                    ~DescribeDeviceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Device ID</p>
                     * @return DeviceId <p>Device ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>Device ID</p>
                     * @param _deviceId <p>Device ID</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>Device code (for national standard devices, it is the 20-digit National Standard Encoding we generated for the device; for rtmp devices, it is the 10-digit device code)</p>
                     * @return Code <p>Device code (for national standard devices, it is the 20-digit National Standard Encoding we generated for the device; for rtmp devices, it is the 10-digit device code)</p>
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置<p>Device code (for national standard devices, it is the 20-digit National Standard Encoding we generated for the device; for rtmp devices, it is the 10-digit device code)</p>
                     * @param _code <p>Device code (for national standard devices, it is the 20-digit National Standard Encoding we generated for the device; for rtmp devices, it is the 10-digit device code)</p>
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>Device name</p>
                     * @return Name <p>Device name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Device name</p>
                     * @param _name <p>Device name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Device access protocol. 1: RTMP, 2: GB, 3: GW</p>
                     * @return AccessProtocol <p>Device access protocol. 1: RTMP, 2: GB, 3: GW</p>
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置<p>Device access protocol. 1: RTMP, 2: GB, 3: GW</p>
                     * @param _accessProtocol <p>Device access protocol. 1: RTMP, 2: GB, 3: GW</p>
                     * 
                     */
                    void SetAccessProtocol(const int64_t& _accessProtocol);

                    /**
                     * 判断参数 AccessProtocol 是否已赋值
                     * @return AccessProtocol 是否已赋值
                     * 
                     */
                    bool AccessProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Device type. 1: IPC. 2: NVR.</p>
                     * @return Type <p>Device type. 1: IPC. 2: NVR.</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Device type. 1: IPC. 2: NVR.</p>
                     * @param _type <p>Device type. 1: IPC. 2: NVR.</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Device access service node id</p>
                     * @return ClusterId <p>Device access service node id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Device access service node id</p>
                     * @param _clusterId <p>Device access service node id</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Device access service node name</p>
                     * @return ClusterName <p>Device access service node name</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>Device access service node name</p>
                     * @param _clusterName <p>Device access service node name</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>Device streaming protocol. 1: UDP; 2: TCP</p>
                     * @return TransportProtocol <p>Device streaming protocol. 1: UDP; 2: TCP</p>
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置<p>Device streaming protocol. 1: UDP; 2: TCP</p>
                     * @param _transportProtocol <p>Device streaming protocol. 1: UDP; 2: TCP</p>
                     * 
                     */
                    void SetTransportProtocol(const int64_t& _transportProtocol);

                    /**
                     * 判断参数 TransportProtocol 是否已赋值
                     * @return TransportProtocol 是否已赋值
                     * 
                     */
                    bool TransportProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Device password</p>
                     * @return Password <p>Device password</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Device password</p>
                     * @param _password <p>Device password</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>Device description</p>
                     * @return Description <p>Device description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Device description</p>
                     * @param _description <p>Device description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>sip service ID</p>
                     * @return SipId <p>sip service ID</p>
                     * 
                     */
                    std::string GetSipId() const;

                    /**
                     * 设置<p>sip service ID</p>
                     * @param _sipId <p>sip service ID</p>
                     * 
                     */
                    void SetSipId(const std::string& _sipId);

                    /**
                     * 判断参数 SipId 是否已赋值
                     * @return SipId 是否已赋值
                     * 
                     */
                    bool SipIdHasBeenSet() const;

                    /**
                     * 获取<p>sip Service Domain</p>
                     * @return SipDomain <p>sip Service Domain</p>
                     * 
                     */
                    std::string GetSipDomain() const;

                    /**
                     * 设置<p>sip Service Domain</p>
                     * @param _sipDomain <p>sip Service Domain</p>
                     * 
                     */
                    void SetSipDomain(const std::string& _sipDomain);

                    /**
                     * 判断参数 SipDomain 是否已赋值
                     * @return SipDomain 是否已赋值
                     * 
                     */
                    bool SipDomainHasBeenSet() const;

                    /**
                     * 获取<p>sip service IP address</p>
                     * @return SipIp <p>sip service IP address</p>
                     * 
                     */
                    std::string GetSipIp() const;

                    /**
                     * 设置<p>sip service IP address</p>
                     * @param _sipIp <p>sip service IP address</p>
                     * 
                     */
                    void SetSipIp(const std::string& _sipIp);

                    /**
                     * 判断参数 SipIp 是否已赋值
                     * @return SipIp 是否已赋值
                     * 
                     */
                    bool SipIpHasBeenSet() const;

                    /**
                     * 获取<p>sip server port</p>
                     * @return SipPort <p>sip server port</p>
                     * 
                     */
                    int64_t GetSipPort() const;

                    /**
                     * 设置<p>sip server port</p>
                     * @param _sipPort <p>sip server port</p>
                     * 
                     */
                    void SetSipPort(const int64_t& _sipPort);

                    /**
                     * 判断参数 SipPort 是否已赋值
                     * @return SipPort 是否已赋值
                     * 
                     */
                    bool SipPortHasBeenSet() const;

                    /**
                     * 获取<p>Rtmp device streaming address (valid only for Rtmp devices)</p>
                     * @return PushStreamUrl <p>Rtmp device streaming address (valid only for Rtmp devices)</p>
                     * 
                     */
                    std::string GetPushStreamUrl() const;

                    /**
                     * 设置<p>Rtmp device streaming address (valid only for Rtmp devices)</p>
                     * @param _pushStreamUrl <p>Rtmp device streaming address (valid only for Rtmp devices)</p>
                     * 
                     */
                    void SetPushStreamUrl(const std::string& _pushStreamUrl);

                    /**
                     * 判断参数 PushStreamUrl 是否已赋值
                     * @return PushStreamUrl 是否已赋值
                     * 
                     */
                    bool PushStreamUrlHasBeenSet() const;

                    /**
                     * 获取<p>Device status. 0: unregistered, 1: online, 2: offline, 3: disabled</p>
                     * @return Status <p>Device status. 0: unregistered, 1: online, 2: offline, 3: disabled</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Device status. 0: unregistered, 1: online, 2: offline, 3: disabled</p>
                     * @param _status <p>Device status. 0: unregistered, 1: online, 2: offline, 3: disabled</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Organization ID of the device</p>
                     * @return OrganizationId <p>Organization ID of the device</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>Organization ID of the device</p>
                     * @param _organizationId <p>Organization ID of the device</p>
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>Device gateway ID, obtained from the query gateway list API (required for gateway access only)</p>
                     * @return GatewayId <p>Device gateway ID, obtained from the query gateway list API (required for gateway access only)</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>Device gateway ID, obtained from the query gateway list API (required for gateway access only)</p>
                     * @param _gatewayId <p>Device gateway ID, obtained from the query gateway list API (required for gateway access only)</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>Gateway name of the device ownership</p>
                     * @return GatewayName <p>Gateway name of the device ownership</p>
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置<p>Gateway name of the device ownership</p>
                     * @param _gatewayName <p>Gateway name of the device ownership</p>
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取<p>Device gateway protocol name</p>
                     * @return ProtocolTypeName <p>Device gateway protocol name</p>
                     * 
                     */
                    std::string GetProtocolTypeName() const;

                    /**
                     * 设置<p>Device gateway protocol name</p>
                     * @param _protocolTypeName <p>Device gateway protocol name</p>
                     * 
                     */
                    void SetProtocolTypeName(const std::string& _protocolTypeName);

                    /**
                     * 判断参数 ProtocolTypeName 是否已赋值
                     * @return ProtocolTypeName 是否已赋值
                     * 
                     */
                    bool ProtocolTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>Gateway access protocol type. 1. Hikvision SDK, 2. Dahua SDK, 3. Uniview SDK, 4. Onvif (required for gateway access only)</p>
                     * @return ProtocolType <p>Gateway access protocol type. 1. Hikvision SDK, 2. Dahua SDK, 3. Uniview SDK, 4. Onvif (required for gateway access only)</p>
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置<p>Gateway access protocol type. 1. Hikvision SDK, 2. Dahua SDK, 3. Uniview SDK, 4. Onvif (required for gateway access only)</p>
                     * @param _protocolType <p>Gateway access protocol type. 1. Hikvision SDK, 2. Dahua SDK, 3. Uniview SDK, 4. Onvif (required for gateway access only)</p>
                     * 
                     */
                    void SetProtocolType(const int64_t& _protocolType);

                    /**
                     * 判断参数 ProtocolType 是否已赋值
                     * @return ProtocolType 是否已赋值
                     * 
                     */
                    bool ProtocolTypeHasBeenSet() const;

                    /**
                     * 获取<p>Device connectivity IP</p>
                     * @return Ip <p>Device connectivity IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Device connectivity IP</p>
                     * @param _ip <p>Device connectivity IP</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>Device Port</p>
                     * @return Port <p>Device Port</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>Device Port</p>
                     * @param _port <p>Device Port</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Device username</p>
                     * @return Username <p>Device username</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>Device username</p>
                     * @param _username <p>Device username</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>Device region</p>
                     * @return Region <p>Device region</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Device region</p>
                     * @param _region <p>Device region</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Device vendor</p>
                     * @return Manufacturer <p>Device vendor</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置<p>Device vendor</p>
                     * @param _manufacturer <p>Device vendor</p>
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>Audio on/off (0: off; 1: on). Audio is dropped when turned off.</p>
                     * @return AudioSwitch <p>Audio on/off (0: off; 1: on). Audio is dropped when turned off.</p>
                     * 
                     */
                    int64_t GetAudioSwitch() const;

                    /**
                     * 设置<p>Audio on/off (0: off; 1: on). Audio is dropped when turned off.</p>
                     * @param _audioSwitch <p>Audio on/off (0: off; 1: on). Audio is dropped when turned off.</p>
                     * 
                     */
                    void SetAudioSwitch(const int64_t& _audioSwitch);

                    /**
                     * 判断参数 AudioSwitch 是否已赋值
                     * @return AudioSwitch 是否已赋值
                     * 
                     */
                    bool AudioSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Subscription switch (0: off; 1: on), enabled by default. When enabled, it subscribes to device channel adjustments. Valid only for national standard NVR devices</p>
                     * @return SubscribeSwitch <p>Subscription switch (0: off; 1: on), enabled by default. When enabled, it subscribes to device channel adjustments. Valid only for national standard NVR devices</p>
                     * 
                     */
                    int64_t GetSubscribeSwitch() const;

                    /**
                     * 设置<p>Subscription switch (0: off; 1: on), enabled by default. When enabled, it subscribes to device channel adjustments. Valid only for national standard NVR devices</p>
                     * @param _subscribeSwitch <p>Subscription switch (0: off; 1: on), enabled by default. When enabled, it subscribes to device channel adjustments. Valid only for national standard NVR devices</p>
                     * 
                     */
                    void SetSubscribeSwitch(const int64_t& _subscribeSwitch);

                    /**
                     * 判断参数 SubscribeSwitch 是否已赋值
                     * @return SubscribeSwitch 是否已赋值
                     * 
                     */
                    bool SubscribeSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Custom appName for RTMP publishing address</p>
                     * @return AppName <p>Custom appName for RTMP publishing address</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>Custom appName for RTMP publishing address</p>
                     * @param _appName <p>Custom appName for RTMP publishing address</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>Custom streamName for RTMP publishing address</p>
                     * @return StreamName <p>Custom streamName for RTMP publishing address</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>Custom streamName for RTMP publishing address</p>
                     * @param _streamName <p>Custom streamName for RTMP publishing address</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable silent frames (0: disabled; 1: enabled)</p>
                     * @return SilentFrameSwitch <p>Whether to enable silent frames (0: disabled; 1: enabled)</p>
                     * 
                     */
                    int64_t GetSilentFrameSwitch() const;

                    /**
                     * 设置<p>Whether to enable silent frames (0: disabled; 1: enabled)</p>
                     * @param _silentFrameSwitch <p>Whether to enable silent frames (0: disabled; 1: enabled)</p>
                     * 
                     */
                    void SetSilentFrameSwitch(const int64_t& _silentFrameSwitch);

                    /**
                     * 判断参数 SilentFrameSwitch 是否已赋值
                     * @return SilentFrameSwitch 是否已赋值
                     * 
                     */
                    bool SilentFrameSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Rtmp device secure authentication streaming address (valid only for Rtmp devices)</p>
                     * @return PushStreamSecureUrl <p>Rtmp device secure authentication streaming address (valid only for Rtmp devices)</p>
                     * 
                     */
                    std::string GetPushStreamSecureUrl() const;

                    /**
                     * 设置<p>Rtmp device secure authentication streaming address (valid only for Rtmp devices)</p>
                     * @param _pushStreamSecureUrl <p>Rtmp device secure authentication streaming address (valid only for Rtmp devices)</p>
                     * 
                     */
                    void SetPushStreamSecureUrl(const std::string& _pushStreamSecureUrl);

                    /**
                     * 判断参数 PushStreamSecureUrl 是否已赋值
                     * @return PushStreamSecureUrl 是否已赋值
                     * 
                     */
                    bool PushStreamSecureUrlHasBeenSet() const;

                private:

                    /**
                     * <p>Device ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>Device code (for national standard devices, it is the 20-digit National Standard Encoding we generated for the device; for rtmp devices, it is the 10-digit device code)</p>
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>Device name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Device access protocol. 1: RTMP, 2: GB, 3: GW</p>
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * <p>Device type. 1: IPC. 2: NVR.</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Device access service node id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Device access service node name</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Device streaming protocol. 1: UDP; 2: TCP</p>
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * <p>Device password</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Device description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>sip service ID</p>
                     */
                    std::string m_sipId;
                    bool m_sipIdHasBeenSet;

                    /**
                     * <p>sip Service Domain</p>
                     */
                    std::string m_sipDomain;
                    bool m_sipDomainHasBeenSet;

                    /**
                     * <p>sip service IP address</p>
                     */
                    std::string m_sipIp;
                    bool m_sipIpHasBeenSet;

                    /**
                     * <p>sip server port</p>
                     */
                    int64_t m_sipPort;
                    bool m_sipPortHasBeenSet;

                    /**
                     * <p>Rtmp device streaming address (valid only for Rtmp devices)</p>
                     */
                    std::string m_pushStreamUrl;
                    bool m_pushStreamUrlHasBeenSet;

                    /**
                     * <p>Device status. 0: unregistered, 1: online, 2: offline, 3: disabled</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Organization ID of the device</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>Device gateway ID, obtained from the query gateway list API (required for gateway access only)</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>Gateway name of the device ownership</p>
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * <p>Device gateway protocol name</p>
                     */
                    std::string m_protocolTypeName;
                    bool m_protocolTypeNameHasBeenSet;

                    /**
                     * <p>Gateway access protocol type. 1. Hikvision SDK, 2. Dahua SDK, 3. Uniview SDK, 4. Onvif (required for gateway access only)</p>
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>Device connectivity IP</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Device Port</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Device username</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>Device region</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Device vendor</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>Audio on/off (0: off; 1: on). Audio is dropped when turned off.</p>
                     */
                    int64_t m_audioSwitch;
                    bool m_audioSwitchHasBeenSet;

                    /**
                     * <p>Subscription switch (0: off; 1: on), enabled by default. When enabled, it subscribes to device channel adjustments. Valid only for national standard NVR devices</p>
                     */
                    int64_t m_subscribeSwitch;
                    bool m_subscribeSwitchHasBeenSet;

                    /**
                     * <p>Custom appName for RTMP publishing address</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Custom streamName for RTMP publishing address</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * <p>Whether to enable silent frames (0: disabled; 1: enabled)</p>
                     */
                    int64_t m_silentFrameSwitch;
                    bool m_silentFrameSwitchHasBeenSet;

                    /**
                     * <p>Rtmp device secure authentication streaming address (valid only for Rtmp devices)</p>
                     */
                    std::string m_pushStreamSecureUrl;
                    bool m_pushStreamSecureUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEDATA_H_
