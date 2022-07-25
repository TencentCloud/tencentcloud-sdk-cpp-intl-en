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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTag.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusInstanceGrantInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus service response body
                */
                class PrometheusInstancesItem : public AbstractModel
                {
                public:
                    PrometheusInstancesItem();
                    ~PrometheusInstancesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param InstanceName Instance name.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values:
<ul>
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
</ul>
                     * @return InstanceChargeType Instance billing mode. Valid values:
<ul>
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
</ul>
                     */
                    int64_t GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing mode. Valid values:
<ul>
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
</ul>
                     * @param InstanceChargeType Instance billing mode. Valid values:
<ul>
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
</ul>
                     */
                    void SetInstanceChargeType(const int64_t& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param RegionId Region ID
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取AZ
                     * @return Zone AZ
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ
                     * @param Zone AZ
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param VpcId VPC ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param SubnetId Subnet ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataRetentionTime Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDataRetentionTime() const;

                    /**
                     * 设置Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DataRetentionTime Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataRetentionTime(const int64_t& _dataRetentionTime);

                    /**
                     * 判断参数 DataRetentionTime 是否已赋值
                     * @return DataRetentionTime 是否已赋值
                     */
                    bool DataRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values:
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     * @return InstanceStatus Instance status. Valid values:
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置Instance status. Valid values:
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     * @param InstanceStatus Instance status. Valid values:
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrafanaURL Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGrafanaURL() const;

                    /**
                     * 设置Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GrafanaURL Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGrafanaURL(const std::string& _grafanaURL);

                    /**
                     * 判断参数 GrafanaURL 是否已赋值
                     * @return GrafanaURL 是否已赋值
                     */
                    bool GrafanaURLHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreatedAt Creation time
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
                     * @param CreatedAt Creation time
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Whether Grafana is enabled
<li>0: Disabled</li>
<li>1: Enabled</li>
                     * @return EnableGrafana Whether Grafana is enabled
<li>0: Disabled</li>
<li>1: Enabled</li>
                     */
                    int64_t GetEnableGrafana() const;

                    /**
                     * 设置Whether Grafana is enabled
<li>0: Disabled</li>
<li>1: Enabled</li>
                     * @param EnableGrafana Whether Grafana is enabled
<li>0: Disabled</li>
<li>1: Enabled</li>
                     */
                    void SetEnableGrafana(const int64_t& _enableGrafana);

                    /**
                     * 判断参数 EnableGrafana 是否已赋值
                     * @return EnableGrafana 是否已赋值
                     */
                    bool EnableGrafanaHasBeenSet() const;

                    /**
                     * 获取Instance IPv4 address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IPv4Address Instance IPv4 address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIPv4Address() const;

                    /**
                     * 设置Instance IPv4 address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IPv4Address Instance IPv4 address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIPv4Address(const std::string& _iPv4Address);

                    /**
                     * 判断参数 IPv4Address 是否已赋值
                     * @return IPv4Address 是否已赋值
                     */
                    bool IPv4AddressHasBeenSet() const;

                    /**
                     * 获取List of tags associated with the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSpecification List of tags associated with the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusTag> GetTagSpecification() const;

                    /**
                     * 设置List of tags associated with the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TagSpecification List of tags associated with the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSpecification(const std::vector<PrometheusTag>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Billing status
<ul>
<li>1: Normal</li>
<li>2: Expired</li>
<li>3: Terminated</li>
<li>4: Assigning</li>
<li>5: Assignment failed</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeStatus Billing status
<ul>
<li>1: Normal</li>
<li>2: Expired</li>
<li>3: Terminated</li>
<li>4: Assigning</li>
<li>5: Assignment failed</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetChargeStatus() const;

                    /**
                     * 设置Billing status
<ul>
<li>1: Normal</li>
<li>2: Expired</li>
<li>3: Terminated</li>
<li>4: Assigning</li>
<li>5: Assignment failed</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ChargeStatus Billing status
<ul>
<li>1: Normal</li>
<li>2: Expired</li>
<li>3: Terminated</li>
<li>4: Assigning</li>
<li>5: Assignment failed</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetChargeStatus(const int64_t& _chargeStatus);

                    /**
                     * 判断参数 ChargeStatus 是否已赋值
                     * @return ChargeStatus 是否已赋值
                     */
                    bool ChargeStatusHasBeenSet() const;

                    /**
                     * 获取Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecName Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SpecName Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag
<ul>
<li>0: Auto-renewal not enabled</li>
<li>1: Auto-renewal enabled</li>
<li>2: Auto-renewal prohibited</li>
<li>-1: Invalid</ii>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenewFlag Auto-renewal flag
<ul>
<li>0: Auto-renewal not enabled</li>
<li>1: Auto-renewal enabled</li>
<li>2: Auto-renewal prohibited</li>
<li>-1: Invalid</ii>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag
<ul>
<li>0: Auto-renewal not enabled</li>
<li>1: Auto-renewal enabled</li>
<li>2: Auto-renewal prohibited</li>
<li>-1: Invalid</ii>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AutoRenewFlag Auto-renewal flag
<ul>
<li>0: Auto-renewal not enabled</li>
<li>1: Auto-renewal enabled</li>
<li>2: Auto-renewal prohibited</li>
<li>-1: Invalid</ii>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Expiring soon
<ul>
<li>0: No</li>
<li>1: Yes</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsNearExpire Expiring soon
<ul>
<li>0: No</li>
<li>1: Yes</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetIsNearExpire() const;

                    /**
                     * 设置Expiring soon
<ul>
<li>0: No</li>
<li>1: Yes</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsNearExpire Expiring soon
<ul>
<li>0: No</li>
<li>1: Yes</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsNearExpire(const int64_t& _isNearExpire);

                    /**
                     * 判断参数 IsNearExpire 是否已赋值
                     * @return IsNearExpire 是否已赋值
                     */
                    bool IsNearExpireHasBeenSet() const;

                    /**
                     * 获取The token required for data writing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthToken The token required for data writing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthToken() const;

                    /**
                     * 设置The token required for data writing
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AuthToken The token required for data writing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthToken(const std::string& _authToken);

                    /**
                     * 判断参数 AuthToken 是否已赋值
                     * @return AuthToken 是否已赋值
                     */
                    bool AuthTokenHasBeenSet() const;

                    /**
                     * 获取Prometheus remote write address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemoteWrite Prometheus remote write address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRemoteWrite() const;

                    /**
                     * 设置Prometheus remote write address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RemoteWrite Prometheus remote write address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRemoteWrite(const std::string& _remoteWrite);

                    /**
                     * 判断参数 RemoteWrite 是否已赋值
                     * @return RemoteWrite 是否已赋值
                     */
                    bool RemoteWriteHasBeenSet() const;

                    /**
                     * 获取Prometheus HTTP API root address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiRootPath Prometheus HTTP API root address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiRootPath() const;

                    /**
                     * 设置Prometheus HTTP API root address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ApiRootPath Prometheus HTTP API root address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiRootPath(const std::string& _apiRootPath);

                    /**
                     * 判断参数 ApiRootPath 是否已赋值
                     * @return ApiRootPath 是否已赋值
                     */
                    bool ApiRootPathHasBeenSet() const;

                    /**
                     * 获取Proxy address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyAddress Proxy address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProxyAddress() const;

                    /**
                     * 设置Proxy address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProxyAddress Proxy address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProxyAddress(const std::string& _proxyAddress);

                    /**
                     * 判断参数 ProxyAddress 是否已赋值
                     * @return ProxyAddress 是否已赋值
                     */
                    bool ProxyAddressHasBeenSet() const;

                    /**
                     * 获取Grafana status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Restarting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>7: Deleted</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrafanaStatus Grafana status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Restarting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>7: Deleted</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetGrafanaStatus() const;

                    /**
                     * 设置Grafana status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Restarting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>7: Deleted</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GrafanaStatus Grafana status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Restarting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>7: Deleted</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGrafanaStatus(const int64_t& _grafanaStatus);

                    /**
                     * 判断参数 GrafanaStatus 是否已赋值
                     * @return GrafanaStatus 是否已赋值
                     */
                    bool GrafanaStatusHasBeenSet() const;

                    /**
                     * 获取Grafana IP allowlist, where IPs are separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrafanaIpWhiteList Grafana IP allowlist, where IPs are separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGrafanaIpWhiteList() const;

                    /**
                     * 设置Grafana IP allowlist, where IPs are separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GrafanaIpWhiteList Grafana IP allowlist, where IPs are separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGrafanaIpWhiteList(const std::string& _grafanaIpWhiteList);

                    /**
                     * 判断参数 GrafanaIpWhiteList 是否已赋值
                     * @return GrafanaIpWhiteList 是否已赋值
                     */
                    bool GrafanaIpWhiteListHasBeenSet() const;

                    /**
                     * 获取Instance authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Grant Instance authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrometheusInstanceGrantInfo GetGrant() const;

                    /**
                     * 设置Instance authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Grant Instance authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGrant(const PrometheusInstanceGrantInfo& _grant);

                    /**
                     * 判断参数 Grant 是否已赋值
                     * @return Grant 是否已赋值
                     */
                    bool GrantHasBeenSet() const;

                    /**
                     * 获取ID of the bound Grafana instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrafanaInstanceId ID of the bound Grafana instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetGrafanaInstanceId() const;

                    /**
                     * 设置ID of the bound Grafana instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param GrafanaInstanceId ID of the bound Grafana instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetGrafanaInstanceId(const std::string& _grafanaInstanceId);

                    /**
                     * 判断参数 GrafanaInstanceId 是否已赋值
                     * @return GrafanaInstanceId 是否已赋值
                     */
                    bool GrafanaInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:
<ul>
<li>2: Monthly subscription</li>
<li>3: Pay-as-you-go</li>
</ul>
                     */
                    int64_t m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Region ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * AZ
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Storage period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_dataRetentionTime;
                    bool m_dataRetentionTimeHasBeenSet;

                    /**
                     * Instance status. Valid values:
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Rebooting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>8: Suspending service for overdue payment</li>
<li>9: Service suspended for overdue payment</li>
</ul>
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Grafana dashboard URL
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grafanaURL;
                    bool m_grafanaURLHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Whether Grafana is enabled
<li>0: Disabled</li>
<li>1: Enabled</li>
                     */
                    int64_t m_enableGrafana;
                    bool m_enableGrafanaHasBeenSet;

                    /**
                     * Instance IPv4 address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iPv4Address;
                    bool m_iPv4AddressHasBeenSet;

                    /**
                     * List of tags associated with the instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<PrometheusTag> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Expiration time of the purchased instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Billing status
<ul>
<li>1: Normal</li>
<li>2: Expired</li>
<li>3: Terminated</li>
<li>4: Assigning</li>
<li>5: Assignment failed</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_chargeStatus;
                    bool m_chargeStatusHasBeenSet;

                    /**
                     * Specification name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Auto-renewal flag
<ul>
<li>0: Auto-renewal not enabled</li>
<li>1: Auto-renewal enabled</li>
<li>2: Auto-renewal prohibited</li>
<li>-1: Invalid</ii>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Expiring soon
<ul>
<li>0: No</li>
<li>1: Yes</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isNearExpire;
                    bool m_isNearExpireHasBeenSet;

                    /**
                     * The token required for data writing
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authToken;
                    bool m_authTokenHasBeenSet;

                    /**
                     * Prometheus remote write address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remoteWrite;
                    bool m_remoteWriteHasBeenSet;

                    /**
                     * Prometheus HTTP API root address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiRootPath;
                    bool m_apiRootPathHasBeenSet;

                    /**
                     * Proxy address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyAddress;
                    bool m_proxyAddressHasBeenSet;

                    /**
                     * Grafana status
<ul>
<li>1: Creating</li>
<li>2: Running</li>
<li>3: Abnormal</li>
<li>4: Restarting</li>
<li>5: Terminating</li>
<li>6: Service suspended</li>
<li>7: Deleted</li>
</ul>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_grafanaStatus;
                    bool m_grafanaStatusHasBeenSet;

                    /**
                     * Grafana IP allowlist, where IPs are separated by comma.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grafanaIpWhiteList;
                    bool m_grafanaIpWhiteListHasBeenSet;

                    /**
                     * Instance authorization information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrometheusInstanceGrantInfo m_grant;
                    bool m_grantHasBeenSet;

                    /**
                     * ID of the bound Grafana instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grafanaInstanceId;
                    bool m_grafanaInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCESITEM_H_
