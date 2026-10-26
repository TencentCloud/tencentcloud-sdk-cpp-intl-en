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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEDATA_H_

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
                * Modify the device interface return data
                */
                class UpdateDeviceData : public AbstractModel
                {
                public:
                    UpdateDeviceData();
                    ~UpdateDeviceData() = default;
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
                     * 获取<p>Device name.</p>
                     * @return Name <p>Device name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Device name.</p>
                     * @param _name <p>Device name.</p>
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
                     * 获取<p>Device access protocol. 1: RTMP; 2: GB.</p><p>Enumeration values:</p><ul><li>1: RTMP</li><li>2: GB</li></ul>
                     * @return AccessProtocol <p>Device access protocol. 1: RTMP; 2: GB.</p><p>Enumeration values:</p><ul><li>1: RTMP</li><li>2: GB</li></ul>
                     * 
                     */
                    int64_t GetAccessProtocol() const;

                    /**
                     * 设置<p>Device access protocol. 1: RTMP; 2: GB.</p><p>Enumeration values:</p><ul><li>1: RTMP</li><li>2: GB</li></ul>
                     * @param _accessProtocol <p>Device access protocol. 1: RTMP; 2: GB.</p><p>Enumeration values:</p><ul><li>1: RTMP</li><li>2: GB</li></ul>
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
                     * 获取<p>Device type. 1: IPC. 2: NVR</p>
                     * @return Type <p>Device type. 1: IPC. 2: NVR</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Device type. 1: IPC. 2: NVR</p>
                     * @param _type <p>Device type. 1: IPC. 2: NVR</p>
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
                     * 获取<p>Device access service node ID</p>
                     * @return ClusterId <p>Device access service node ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Device access service node ID</p>
                     * @param _clusterId <p>Device access service node ID</p>
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
                     * 获取<p>Device streaming protocol. 1: UDP, 2: TCP</p>
                     * @return TransportProtocol <p>Device streaming protocol. 1: UDP, 2: TCP</p>
                     * 
                     */
                    int64_t GetTransportProtocol() const;

                    /**
                     * 设置<p>Device streaming protocol. 1: UDP, 2: TCP</p>
                     * @param _transportProtocol <p>Device streaming protocol. 1: UDP, 2: TCP</p>
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
                     * 获取<p>Device password.</p>
                     * @return Password <p>Device password.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Device password.</p>
                     * @param _password <p>Device password.</p>
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
                     * 获取<p>Affiliated organization ID of the device</p>
                     * @return OrganizationId <p>Affiliated organization ID of the device</p>
                     * 
                     */
                    int64_t GetOrganizationId() const;

                    /**
                     * 设置<p>Affiliated organization ID of the device</p>
                     * @param _organizationId <p>Affiliated organization ID of the device</p>
                     * 
                     */
                    void SetOrganizationId(const int64_t& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>Device access gateway ID (deprecated, reserved for compatibility, can be ignored)</p>
                     * @return GatewayId <p>Device access gateway ID (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>Device access gateway ID (deprecated, reserved for compatibility, can be ignored)</p>
                     * @param _gatewayId <p>Device access gateway ID (deprecated, reserved for compatibility, can be ignored)</p>
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
                     * 获取<p>Gateway access protocol type (deprecated, reserved for compatibility, can be ignored)</p>
                     * @return ProtocolType <p>Gateway access protocol type (deprecated, reserved for compatibility, can be ignored)</p>
                     * 
                     */
                    int64_t GetProtocolType() const;

                    /**
                     * 设置<p>Gateway access protocol type (deprecated, reserved for compatibility, can be ignored)</p>
                     * @param _protocolType <p>Gateway access protocol type (deprecated, reserved for compatibility, can be ignored)</p>
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
                     * 获取<p>Device access IP</p>
                     * @return Ip <p>Device access IP</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>Device access IP</p>
                     * @param _ip <p>Device access IP</p>
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
                     * 获取<p>User Id</p>
                     * @return AppId <p>User Id</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>User Id</p>
                     * @param _appId <p>User Id</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * <p>Device name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Device access protocol. 1: RTMP; 2: GB.</p><p>Enumeration values:</p><ul><li>1: RTMP</li><li>2: GB</li></ul>
                     */
                    int64_t m_accessProtocol;
                    bool m_accessProtocolHasBeenSet;

                    /**
                     * <p>Device type. 1: IPC. 2: NVR</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Device access service node ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Device access service node name</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>Device streaming protocol. 1: UDP, 2: TCP</p>
                     */
                    int64_t m_transportProtocol;
                    bool m_transportProtocolHasBeenSet;

                    /**
                     * <p>Device password.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Device description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Device status. 0: unregistered, 1: online, 2: offline, 3: disabled</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Affiliated organization ID of the device</p>
                     */
                    int64_t m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>Device access gateway ID (deprecated, reserved for compatibility, can be ignored)</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>Gateway access protocol type (deprecated, reserved for compatibility, can be ignored)</p>
                     */
                    int64_t m_protocolType;
                    bool m_protocolTypeHasBeenSet;

                    /**
                     * <p>Device access IP</p>
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
                     * <p>User Id</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICEDATA_H_
