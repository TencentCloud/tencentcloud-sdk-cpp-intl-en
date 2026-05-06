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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayVpcConfig.h>
#include <tencentcloud/tse/v20201207/model/InstanceTagInfo.h>
#include <tencentcloud/tse/v20201207/model/InstancePort.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Retrieve the response result of the Cloud Native API gateway basic information.
                */
                class DescribeCloudNativeAPIGatewayResult : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayResult();
                    ~DescribeCloudNativeAPIGatewayResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud Native API Gateway ID.
                     * @return GatewayId Cloud Native API Gateway ID.
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Cloud Native API Gateway ID.
                     * @param _gatewayId Cloud Native API Gateway ID.
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
                     * 获取Cloud native API gateway status.
                     * @return Status Cloud native API gateway status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Cloud native API gateway status.
                     * @param _status Cloud native API gateway status.
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
                     * 获取Cloud native API gateway name.
                     * @return Name Cloud native API gateway name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cloud native API gateway name.
                     * @param _name Cloud native API gateway name.
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
                     * 获取Cloud native API gateway type.
                     * @return Type Cloud native API gateway type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Cloud native API gateway type.
                     * @param _type Cloud native API gateway type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Instance version:
- 2.4.1
- 2.5.1
                     * @return GatewayVersion Instance version:
- 2.4.1
- 2.5.1
                     * 
                     */
                    std::string GetGatewayVersion() const;

                    /**
                     * 设置Instance version:
- 2.4.1
- 2.5.1
                     * @param _gatewayVersion Instance version:
- 2.4.1
- 2.5.1
                     * 
                     */
                    void SetGatewayVersion(const std::string& _gatewayVersion);

                    /**
                     * 判断参数 GatewayVersion 是否已赋值
                     * @return GatewayVersion 是否已赋值
                     * 
                     */
                    bool GatewayVersionHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway node information.
                     * @return NodeConfig Cloud native API gateway node information.
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置Cloud native API gateway node information.
                     * @param _nodeConfig Cloud native API gateway node information.
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway vpc configuration.
                     * @return VpcConfig Cloud native API gateway vpc configuration.
                     * 
                     */
                    CloudNativeAPIGatewayVpcConfig GetVpcConfig() const;

                    /**
                     * 设置Cloud native API gateway vpc configuration.
                     * @param _vpcConfig Cloud native API gateway vpc configuration.
                     * 
                     */
                    void SetVpcConfig(const CloudNativeAPIGatewayVpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取Cloud native API gateway description.
                     * @return Description Cloud native API gateway description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Cloud native API gateway description.
                     * @param _description Cloud native API gateway description.
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
                     * 获取Creation time of the cloud native API gateway.
                     * @return CreateTime Creation time of the cloud native API gateway.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the cloud native API gateway.
                     * @param _createTime Creation time of the cloud native API gateway.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Tag information of the instance
                     * @return Tags Tag information of the instance
                     * 
                     */
                    std::vector<InstanceTagInfo> GetTags() const;

                    /**
                     * 设置Tag information of the instance
                     * @param _tags Tag information of the instance
                     * 
                     */
                    void SetTags(const std::vector<InstanceTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Is cls log enabled?
                     * @return EnableCls Is cls log enabled?
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置Is cls log enabled?
                     * @param _enableCls Is cls log enabled?
                     * 
                     */
                    void SetEnableCls(const bool& _enableCls);

                    /**
                     * 判断参数 EnableCls 是否已赋值
                     * @return EnableCls 是否已赋值
                     * 
                     */
                    bool EnableClsHasBeenSet() const;

                    /**
                     * 获取Payment mode. 0 indicates postpaid, and 1 indicates prepaid.
                     * @return TradeType Payment mode. 0 indicates postpaid, and 1 indicates prepaid.
                     * 
                     */
                    int64_t GetTradeType() const;

                    /**
                     * 设置Payment mode. 0 indicates postpaid, and 1 indicates prepaid.
                     * @param _tradeType Payment mode. 0 indicates postpaid, and 1 indicates prepaid.
                     * 
                     */
                    void SetTradeType(const int64_t& _tradeType);

                    /**
                     * 判断参数 TradeType 是否已赋值
                     * @return TradeType 是否已赋值
                     * 
                     */
                    bool TradeTypeHasBeenSet() const;

                    /**
                     * 获取Instance version. Currently supported: development edition, standard version, and professional version [TRIAL, STANDARD, PROFESSIONAL].
                     * @return FeatureVersion Instance version. Currently supported: development edition, standard version, and professional version [TRIAL, STANDARD, PROFESSIONAL].
                     * 
                     */
                    std::string GetFeatureVersion() const;

                    /**
                     * 设置Instance version. Currently supported: development edition, standard version, and professional version [TRIAL, STANDARD, PROFESSIONAL].
                     * @param _featureVersion Instance version. Currently supported: development edition, standard version, and professional version [TRIAL, STANDARD, PROFESSIONAL].
                     * 
                     */
                    void SetFeatureVersion(const std::string& _featureVersion);

                    /**
                     * 判断参数 FeatureVersion 是否已赋值
                     * @return FeatureVersion 是否已赋值
                     * 
                     */
                    bool FeatureVersionHasBeenSet() const;

                    /**
                     * 获取Public network outbound traffic bandwidth, [1,2048]Mbps
                     * @return InternetMaxBandwidthOut Public network outbound traffic bandwidth, [1,2048]Mbps
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network outbound traffic bandwidth, [1,2048]Mbps
                     * @param _internetMaxBandwidthOut Public network outbound traffic bandwidth, [1,2048]Mbps
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
                     * 获取Auto-renewal flag. 0 means the default state (not set by the user, that is, the initial state).
1 means auto-renew, 2 means no automatic renewal (set by the user). If the business has no renewal concept or no need for auto-renewal, set it to 0.
                     * @return AutoRenewFlag Auto-renewal flag. 0 means the default state (not set by the user, that is, the initial state).
1 means auto-renew, 2 means no automatic renewal (set by the user). If the business has no renewal concept or no need for auto-renewal, set it to 0.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. 0 means the default state (not set by the user, that is, the initial state).
1 means auto-renew, 2 means no automatic renewal (set by the user). If the business has no renewal concept or no need for auto-renewal, set it to 0.
                     * @param _autoRenewFlag Auto-renewal flag. 0 means the default state (not set by the user, that is, the initial state).
1 means auto-renew, 2 means no automatic renewal (set by the user). If the business has no renewal concept or no need for auto-renewal, set it to 0.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiry time, used when prepaid
                     * @return CurDeadline Expiry time, used when prepaid
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置Expiry time, used when prepaid
                     * @param _curDeadline Expiry time, used when prepaid
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取Isolation time. Used when an instance is isolated.
                     * @return IsolateTime Isolation time. Used when an instance is isolated.
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置Isolation time. Used when an instance is isolated.
                     * @param _isolateTime Isolation time. Used when an instance is isolated.
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取Is client public network enabled?
                     * @return EnableInternet Is client public network enabled?
                     * 
                     */
                    bool GetEnableInternet() const;

                    /**
                     * 设置Is client public network enabled?
                     * @param _enableInternet Is client public network enabled?
                     * 
                     */
                    void SetEnableInternet(const bool& _enableInternet);

                    /**
                     * 判断参数 EnableInternet 是否已赋值
                     * @return EnableInternet 是否已赋值
                     * 
                     */
                    bool EnableInternetHasBeenSet() const;

                    /**
                     * 获取Actual regional information of the instance
                     * @return EngineRegion Actual regional information of the instance
                     * 
                     */
                    std::string GetEngineRegion() const;

                    /**
                     * 设置Actual regional information of the instance
                     * @param _engineRegion Actual regional information of the instance
                     * 
                     */
                    void SetEngineRegion(const std::string& _engineRegion);

                    /**
                     * 判断参数 EngineRegion 是否已赋值
                     * @return EngineRegion 是否已赋值
                     * 
                     */
                    bool EngineRegionHasBeenSet() const;

                    /**
                     * 获取Ingress class name
                     * @return IngressClassName Ingress class name
                     * 
                     */
                    std::string GetIngressClassName() const;

                    /**
                     * 设置Ingress class name
                     * @param _ingressClassName Ingress class name
                     * 
                     */
                    void SetIngressClassName(const std::string& _ingressClassName);

                    /**
                     * 判断参数 IngressClassName 是否已赋值
                     * @return IngressClassName 是否已赋值
                     * 
                     */
                    bool IngressClassNameHasBeenSet() const;

                    /**
                     * 获取Public network billing method. Selectable values: BANDWIDTH | TRAFFIC, representing billing by bandwidth and by traffic.
                     * @return InternetPayMode Public network billing method. Selectable values: BANDWIDTH | TRAFFIC, representing billing by bandwidth and by traffic.
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置Public network billing method. Selectable values: BANDWIDTH | TRAFFIC, representing billing by bandwidth and by traffic.
                     * @param _internetPayMode Public network billing method. Selectable values: BANDWIDTH | TRAFFIC, representing billing by bandwidth and by traffic.
                     * 
                     */
                    void SetInternetPayMode(const std::string& _internetPayMode);

                    /**
                     * 判断参数 InternetPayMode 是否已赋值
                     * @return InternetPayMode 是否已赋值
                     * 
                     */
                    bool InternetPayModeHasBeenSet() const;

                    /**
                     * 获取Cloud Native API Gateway minor version number
                     * @return GatewayMinorVersion Cloud Native API Gateway minor version number
                     * 
                     */
                    std::string GetGatewayMinorVersion() const;

                    /**
                     * 设置Cloud Native API Gateway minor version number
                     * @param _gatewayMinorVersion Cloud Native API Gateway minor version number
                     * 
                     */
                    void SetGatewayMinorVersion(const std::string& _gatewayMinorVersion);

                    /**
                     * 判断参数 GatewayMinorVersion 是否已赋值
                     * @return GatewayMinorVersion 是否已赋值
                     * 
                     */
                    bool GatewayMinorVersionHasBeenSet() const;

                    /**
                     * 获取Ports monitored by the instance
                     * @return InstancePort Ports monitored by the instance
                     * 
                     */
                    InstancePort GetInstancePort() const;

                    /**
                     * 设置Ports monitored by the instance
                     * @param _instancePort Ports monitored by the instance
                     * 
                     */
                    void SetInstancePort(const InstancePort& _instancePort);

                    /**
                     * 判断参数 InstancePort 是否已赋值
                     * @return InstancePort 是否已赋值
                     * 
                     */
                    bool InstancePortHasBeenSet() const;

                    /**
                     * 获取Public network CLB default type
                     * @return LoadBalancerType Public network CLB default type
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置Public network CLB default type
                     * @param _loadBalancerType Public network CLB default type
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取Public IP address list
                     * @return PublicIpAddresses Public IP address list
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置Public IP address list
                     * @param _publicIpAddresses Public IP address list
                     * 
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Whether to enable deletion protection
                     * @return DeleteProtect Whether to enable deletion protection
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置Whether to enable deletion protection
                     * @param _deleteProtect Whether to enable deletion protection
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                    /**
                     * 获取Version number that can be upgraded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AvailableVersions Version number that can be upgraded
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAvailableVersions() const;

                    /**
                     * 设置Version number that can be upgraded
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _availableVersions Version number that can be upgraded
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAvailableVersions(const std::vector<std::string>& _availableVersions);

                    /**
                     * 判断参数 AvailableVersions 是否已赋值
                     * @return AvailableVersions 是否已赋值
                     * 
                     */
                    bool AvailableVersionsHasBeenSet() const;

                    /**
                     * 获取Version list for gateway upgrade
                     * @return AvailableUpgradeVersions Version list for gateway upgrade
                     * 
                     */
                    std::vector<std::string> GetAvailableUpgradeVersions() const;

                    /**
                     * 设置Version list for gateway upgrade
                     * @param _availableUpgradeVersions Version list for gateway upgrade
                     * 
                     */
                    void SetAvailableUpgradeVersions(const std::vector<std::string>& _availableUpgradeVersions);

                    /**
                     * 判断参数 AvailableUpgradeVersions 是否已赋值
                     * @return AvailableUpgradeVersions 是否已赋值
                     * 
                     */
                    bool AvailableUpgradeVersionsHasBeenSet() const;

                    /**
                     * 获取Whether to prompt for upgrade
                     * @return AvailableUpgrade Whether to prompt for upgrade
                     * 
                     */
                    bool GetAvailableUpgrade() const;

                    /**
                     * 设置Whether to prompt for upgrade
                     * @param _availableUpgrade Whether to prompt for upgrade
                     * 
                     */
                    void SetAvailableUpgrade(const bool& _availableUpgrade);

                    /**
                     * 判断参数 AvailableUpgrade 是否已赋值
                     * @return AvailableUpgrade 是否已赋值
                     * 
                     */
                    bool AvailableUpgradeHasBeenSet() const;

                    /**
                     * 获取Rollback version
                     * @return AvailableRollbackVersion Rollback version
                     * 
                     */
                    std::string GetAvailableRollbackVersion() const;

                    /**
                     * 设置Rollback version
                     * @param _availableRollbackVersion Rollback version
                     * 
                     */
                    void SetAvailableRollbackVersion(const std::string& _availableRollbackVersion);

                    /**
                     * 判断参数 AvailableRollbackVersion 是否已赋值
                     * @return AvailableRollbackVersion 是否已赋值
                     * 
                     */
                    bool AvailableRollbackVersionHasBeenSet() const;

                private:

                    /**
                     * Cloud Native API Gateway ID.
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Cloud native API gateway status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cloud native API gateway name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cloud native API gateway type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Instance version:
- 2.4.1
- 2.5.1
                     */
                    std::string m_gatewayVersion;
                    bool m_gatewayVersionHasBeenSet;

                    /**
                     * Cloud native API gateway node information.
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * Cloud native API gateway vpc configuration.
                     */
                    CloudNativeAPIGatewayVpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * Cloud native API gateway description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time of the cloud native API gateway.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Tag information of the instance
                     */
                    std::vector<InstanceTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Is cls log enabled?
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * Payment mode. 0 indicates postpaid, and 1 indicates prepaid.
                     */
                    int64_t m_tradeType;
                    bool m_tradeTypeHasBeenSet;

                    /**
                     * Instance version. Currently supported: development edition, standard version, and professional version [TRIAL, STANDARD, PROFESSIONAL].
                     */
                    std::string m_featureVersion;
                    bool m_featureVersionHasBeenSet;

                    /**
                     * Public network outbound traffic bandwidth, [1,2048]Mbps
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Auto-renewal flag. 0 means the default state (not set by the user, that is, the initial state).
1 means auto-renew, 2 means no automatic renewal (set by the user). If the business has no renewal concept or no need for auto-renewal, set it to 0.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Expiry time, used when prepaid
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * Isolation time. Used when an instance is isolated.
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * Is client public network enabled?
                     */
                    bool m_enableInternet;
                    bool m_enableInternetHasBeenSet;

                    /**
                     * Actual regional information of the instance
                     */
                    std::string m_engineRegion;
                    bool m_engineRegionHasBeenSet;

                    /**
                     * Ingress class name
                     */
                    std::string m_ingressClassName;
                    bool m_ingressClassNameHasBeenSet;

                    /**
                     * Public network billing method. Selectable values: BANDWIDTH | TRAFFIC, representing billing by bandwidth and by traffic.
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * Cloud Native API Gateway minor version number
                     */
                    std::string m_gatewayMinorVersion;
                    bool m_gatewayMinorVersionHasBeenSet;

                    /**
                     * Ports monitored by the instance
                     */
                    InstancePort m_instancePort;
                    bool m_instancePortHasBeenSet;

                    /**
                     * Public network CLB default type
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * Public IP address list
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Whether to enable deletion protection
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                    /**
                     * Version number that can be upgraded
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_availableVersions;
                    bool m_availableVersionsHasBeenSet;

                    /**
                     * Version list for gateway upgrade
                     */
                    std::vector<std::string> m_availableUpgradeVersions;
                    bool m_availableUpgradeVersionsHasBeenSet;

                    /**
                     * Whether to prompt for upgrade
                     */
                    bool m_availableUpgrade;
                    bool m_availableUpgradeHasBeenSet;

                    /**
                     * Rollback version
                     */
                    std::string m_availableRollbackVersion;
                    bool m_availableRollbackVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYRESULT_H_
