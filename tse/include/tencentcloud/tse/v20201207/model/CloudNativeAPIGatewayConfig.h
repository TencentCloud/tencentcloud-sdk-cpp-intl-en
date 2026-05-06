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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/NetworkAccessControl.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud native API gateway configuration message.
                */
                class CloudNativeAPIGatewayConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayConfig();
                    ~CloudNativeAPIGatewayConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Console type.
                     * @return ConsoleType Console type.
                     * 
                     */
                    std::string GetConsoleType() const;

                    /**
                     * 设置Console type.
                     * @param _consoleType Console type.
                     * 
                     */
                    void SetConsoleType(const std::string& _consoleType);

                    /**
                     * 判断参数 ConsoleType 是否已赋值
                     * @return ConsoleType 是否已赋值
                     * 
                     */
                    bool ConsoleTypeHasBeenSet() const;

                    /**
                     * 获取HTTP URL.
                     * @return HttpUrl HTTP URL.
                     * 
                     */
                    std::string GetHttpUrl() const;

                    /**
                     * 设置HTTP URL.
                     * @param _httpUrl HTTP URL.
                     * 
                     */
                    void SetHttpUrl(const std::string& _httpUrl);

                    /**
                     * 判断参数 HttpUrl 是否已赋值
                     * @return HttpUrl 是否已赋值
                     * 
                     */
                    bool HttpUrlHasBeenSet() const;

                    /**
                     * 获取HTTPS URL.
                     * @return HttpsUrl HTTPS URL.
                     * 
                     */
                    std::string GetHttpsUrl() const;

                    /**
                     * 设置HTTPS URL.
                     * @param _httpsUrl HTTPS URL.
                     * 
                     */
                    void SetHttpsUrl(const std::string& _httpsUrl);

                    /**
                     * 判断参数 HttpsUrl 是否已赋值
                     * @return HttpsUrl 是否已赋值
                     * 
                     */
                    bool HttpsUrlHasBeenSet() const;

                    /**
                     * 获取Network type, Open|Internal.
                     * @return NetType Network type, Open|Internal.
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type, Open|Internal.
                     * @param _netType Network type, Open|Internal.
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Admin username.
                     * @return AdminUser Admin username.
                     * 
                     */
                    std::string GetAdminUser() const;

                    /**
                     * 设置Admin username.
                     * @param _adminUser Admin username.
                     * 
                     */
                    void SetAdminUser(const std::string& _adminUser);

                    /**
                     * 判断参数 AdminUser 是否已赋值
                     * @return AdminUser 是否已赋值
                     * 
                     */
                    bool AdminUserHasBeenSet() const;

                    /**
                     * 获取Administrator password.
                     * @return AdminPassword Administrator password.
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置Administrator password.
                     * @param _adminPassword Administrator password.
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取Network Status, Open|Closed|Updating
                     * @return Status Network Status, Open|Closed|Updating
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Network Status, Open|Closed|Updating
                     * @param _status Network Status, Open|Closed|Updating
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Network access policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessControl Network access policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    NetworkAccessControl GetAccessControl() const;

                    /**
                     * 设置Network access policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessControl Network access policy
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessControl(const NetworkAccessControl& _accessControl);

                    /**
                     * 判断参数 AccessControl 是否已赋值
                     * @return AccessControl 是否已赋值
                     * 
                     */
                    bool AccessControlHasBeenSet() const;

                    /**
                     * 获取Intranet subnet ID
                     * @return SubnetId Intranet subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Intranet subnet ID
                     * @param _subnetId Intranet subnet ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Private network VPC ID
                     * @return VpcId Private network VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Private network VPC ID
                     * @param _vpcId Private network VPC ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Description of load balancing
                     * @return Description Description of load balancing
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of load balancing
                     * @param _description Description of load balancing
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
                     * 获取Load balancing specification type
                     * @return SlaType Load balancing specification type
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置Load balancing specification type
                     * @param _slaType Load balancing specification type
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取clb specification name
                     * @return SlaName clb specification name
                     * 
                     */
                    std::string GetSlaName() const;

                    /**
                     * 设置clb specification name
                     * @param _slaName clb specification name
                     * 
                     */
                    void SetSlaName(const std::string& _slaName);

                    /**
                     * 判断参数 SlaName 是否已赋值
                     * @return SlaName 是否已赋值
                     * 
                     */
                    bool SlaNameHasBeenSet() const;

                    /**
                     * 获取clb vip
                     * @return Vip clb vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置clb vip
                     * @param _vip clb vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Bandwidth
                     * @return InternetMaxBandwidthOut Bandwidth
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Bandwidth
                     * @param _internetMaxBandwidthOut Bandwidth
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Whether the multiple-AZ deployment mode is used.
                     * @return MultiZoneFlag Whether the multiple-AZ deployment mode is used.
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置Whether the multiple-AZ deployment mode is used.
                     * @param _multiZoneFlag Whether the multiple-AZ deployment mode is used.
                     * 
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     * 
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取Primary AZ.
                     * @return MasterZoneId Primary AZ.
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置Primary AZ.
                     * @param _masterZoneId Primary AZ.
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取standby availability zone
                     * @return SlaveZoneId standby availability zone
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置standby availability zone
                     * @param _slaveZoneId standby availability zone
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                    /**
                     * 获取Primary availability zone name
                     * @return MasterZoneName Primary availability zone name
                     * 
                     */
                    std::string GetMasterZoneName() const;

                    /**
                     * 设置Primary availability zone name
                     * @param _masterZoneName Primary availability zone name
                     * 
                     */
                    void SetMasterZoneName(const std::string& _masterZoneName);

                    /**
                     * 判断参数 MasterZoneName 是否已赋值
                     * @return MasterZoneName 是否已赋值
                     * 
                     */
                    bool MasterZoneNameHasBeenSet() const;

                    /**
                     * 获取Backup availability zone name
                     * @return SlaveZoneName Backup availability zone name
                     * 
                     */
                    std::string GetSlaveZoneName() const;

                    /**
                     * 设置Backup availability zone name
                     * @param _slaveZoneName Backup availability zone name
                     * 
                     */
                    void SetSlaveZoneName(const std::string& _slaveZoneName);

                    /**
                     * 判断参数 SlaveZoneName 是否已赋值
                     * @return SlaveZoneName 是否已赋值
                     * 
                     */
                    bool SlaveZoneNameHasBeenSet() const;

                    /**
                     * 获取Network id
                     * @return NetworkId Network id
                     * 
                     */
                    std::string GetNetworkId() const;

                    /**
                     * 设置Network id
                     * @param _networkId Network id
                     * 
                     */
                    void SetNetworkId(const std::string& _networkId);

                    /**
                     * 判断参数 NetworkId 是否已赋值
                     * @return NetworkId 是否已赋值
                     * 
                     */
                    bool NetworkIdHasBeenSet() const;

                    /**
                     * 获取Whether the CLB is a new ipv6 CLB
                     * @return IPV6FullChain Whether the CLB is a new ipv6 CLB
                     * 
                     */
                    bool GetIPV6FullChain() const;

                    /**
                     * 设置Whether the CLB is a new ipv6 CLB
                     * @param _iPV6FullChain Whether the CLB is a new ipv6 CLB
                     * 
                     */
                    void SetIPV6FullChain(const bool& _iPV6FullChain);

                    /**
                     * 判断参数 IPV6FullChain 是否已赋值
                     * @return IPV6FullChain 是否已赋值
                     * 
                     */
                    bool IPV6FullChainHasBeenSet() const;

                    /**
                     * 获取Load balancing personalized configuration content
                     * @return CustomizedConfigContent Load balancing personalized configuration content
                     * 
                     */
                    std::string GetCustomizedConfigContent() const;

                    /**
                     * 设置Load balancing personalized configuration content
                     * @param _customizedConfigContent Load balancing personalized configuration content
                     * 
                     */
                    void SetCustomizedConfigContent(const std::string& _customizedConfigContent);

                    /**
                     * 判断参数 CustomizedConfigContent 是否已赋值
                     * @return CustomizedConfigContent 是否已赋值
                     * 
                     */
                    bool CustomizedConfigContentHasBeenSet() const;

                private:

                    /**
                     * Console type.
                     */
                    std::string m_consoleType;
                    bool m_consoleTypeHasBeenSet;

                    /**
                     * HTTP URL.
                     */
                    std::string m_httpUrl;
                    bool m_httpUrlHasBeenSet;

                    /**
                     * HTTPS URL.
                     */
                    std::string m_httpsUrl;
                    bool m_httpsUrlHasBeenSet;

                    /**
                     * Network type, Open|Internal.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Admin username.
                     */
                    std::string m_adminUser;
                    bool m_adminUserHasBeenSet;

                    /**
                     * Administrator password.
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Network Status, Open|Closed|Updating
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Network access policy
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NetworkAccessControl m_accessControl;
                    bool m_accessControlHasBeenSet;

                    /**
                     * Intranet subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Private network VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Description of load balancing
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Load balancing specification type
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * clb specification name
                     */
                    std::string m_slaName;
                    bool m_slaNameHasBeenSet;

                    /**
                     * clb vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Bandwidth
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Whether the multiple-AZ deployment mode is used.
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * Primary AZ.
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * standby availability zone
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * Primary availability zone name
                     */
                    std::string m_masterZoneName;
                    bool m_masterZoneNameHasBeenSet;

                    /**
                     * Backup availability zone name
                     */
                    std::string m_slaveZoneName;
                    bool m_slaveZoneNameHasBeenSet;

                    /**
                     * Network id
                     */
                    std::string m_networkId;
                    bool m_networkIdHasBeenSet;

                    /**
                     * Whether the CLB is a new ipv6 CLB
                     */
                    bool m_iPV6FullChain;
                    bool m_iPV6FullChainHasBeenSet;

                    /**
                     * Load balancing personalized configuration content
                     */
                    std::string m_customizedConfigContent;
                    bool m_customizedConfigContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCONFIG_H_
