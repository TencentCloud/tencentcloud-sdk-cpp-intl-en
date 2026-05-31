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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ managed instance information.
                */
                class RabbitMQVipInstance : public AbstractModel
                {
                public:
                    RabbitMQVipInstance();
                    ~RabbitMQVipInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance name</p>
                     * @return InstanceName <p>Instance name</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
                     * @param _instanceName <p>Instance name</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Instance version</p>
                     * @return InstanceVersion <p>Instance version</p>
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置<p>Instance version</p>
                     * @param _instanceVersion <p>Instance version</p>
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取<p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * @return Status <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * @param _status <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Node count</p>
                     * @return NodeCount <p>Node count</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>Node count</p>
                     * @param _nodeCount <p>Node count</p>
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取<p>Instance configuration specification name</p>
                     * @return ConfigDisplay <p>Instance configuration specification name</p>
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置<p>Instance configuration specification name</p>
                     * @param _configDisplay <p>Instance configuration specification name</p>
                     * 
                     */
                    void SetConfigDisplay(const std::string& _configDisplay);

                    /**
                     * 判断参数 ConfigDisplay 是否已赋值
                     * @return ConfigDisplay 是否已赋值
                     * 
                     */
                    bool ConfigDisplayHasBeenSet() const;

                    /**
                     * 获取<p>Peak TPS</p>
                     * @return MaxTps <p>Peak TPS</p>
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置<p>Peak TPS</p>
                     * @param _maxTps <p>Peak TPS</p>
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取<p>Peak bandwidth in Mbps</p>
                     * @return MaxBandWidth <p>Peak bandwidth in Mbps</p>
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置<p>Peak bandwidth in Mbps</p>
                     * @param _maxBandWidth <p>Peak bandwidth in Mbps</p>
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取<p>Storage capacity in GB</p>
                     * @return MaxStorage <p>Storage capacity in GB</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>Storage capacity in GB</p>
                     * @param _maxStorage <p>Storage capacity in GB</p>
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取<p>Instance expiration time. The value is 0 for pay-as-you-go instances, in milliseconds. unix timestamp.</p>
                     * @return ExpireTime <p>Instance expiration time. The value is 0 for pay-as-you-go instances, in milliseconds. unix timestamp.</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>Instance expiration time. The value is 0 for pay-as-you-go instances, in milliseconds. unix timestamp.</p>
                     * @param _expireTime <p>Instance expiration time. The value is 0 for pay-as-you-go instances, in milliseconds. unix timestamp.</p>
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Auto-renewal flag. 0 means default state (not set by the user, i.e., initial state is manual renewal), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user)</p>
                     * @return AutoRenewFlag <p>Auto-renewal flag. 0 means default state (not set by the user, i.e., initial state is manual renewal), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user)</p>
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>Auto-renewal flag. 0 means default state (not set by the user, i.e., initial state is manual renewal), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user)</p>
                     * @param _autoRenewFlag <p>Auto-renewal flag. 0 means default state (not set by the user, i.e., initial state is manual renewal), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user)</p>
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>1 indicates prepaid mode, 0 indicates postpaid</p>
                     * @return PayMode <p>1 indicates prepaid mode, 0 indicates postpaid</p>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>1 indicates prepaid mode, 0 indicates postpaid</p>
                     * @param _payMode <p>1 indicates prepaid mode, 0 indicates postpaid</p>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Remark information</p>
                     * @return Remark <p>Remark information</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>Remark information</p>
                     * @param _remark <p>Remark information</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>Node specification of the cluster with corresponding flag:<br>2C8G: rabbit-vip-profession-2c8g<br>4C16G: rabbit-vip-profession-4c16g<br>8C32G: rabbit-vip-profession-8c32g<br>16C32G: rabbit-vip-basic-4<br>16C64G: rabbit-vip-profession-16c64g<br>2C4G: rabbit-vip-basic-5<br>4C8G: rabbit-vip-basic-1<br>8C16G (sold out): rabbit-vip-basic-2<br>Defaults to 4C8G: rabbit-vip-basic-1 if not specified</p>
                     * @return SpecName <p>Node specification of the cluster with corresponding flag:<br>2C8G: rabbit-vip-profession-2c8g<br>4C16G: rabbit-vip-profession-4c16g<br>8C32G: rabbit-vip-profession-8c32g<br>16C32G: rabbit-vip-basic-4<br>16C64G: rabbit-vip-profession-16c64g<br>2C4G: rabbit-vip-basic-5<br>4C8G: rabbit-vip-basic-1<br>8C16G (sold out): rabbit-vip-basic-2<br>Defaults to 4C8G: rabbit-vip-basic-1 if not specified</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>Node specification of the cluster with corresponding flag:<br>2C8G: rabbit-vip-profession-2c8g<br>4C16G: rabbit-vip-profession-4c16g<br>8C32G: rabbit-vip-profession-8c32g<br>16C32G: rabbit-vip-basic-4<br>16C64G: rabbit-vip-profession-16c64g<br>2C4G: rabbit-vip-basic-5<br>4C8G: rabbit-vip-basic-1<br>8C16G (sold out): rabbit-vip-basic-2<br>Defaults to 4C8G: rabbit-vip-basic-1 if not specified</p>
                     * @param _specName <p>Node specification of the cluster with corresponding flag:<br>2C8G: rabbit-vip-profession-2c8g<br>4C16G: rabbit-vip-profession-4c16g<br>8C32G: rabbit-vip-profession-8c32g<br>16C32G: rabbit-vip-basic-4<br>16C64G: rabbit-vip-profession-16c64g<br>2C4G: rabbit-vip-basic-5<br>4C8G: rabbit-vip-basic-1<br>8C16G (sold out): rabbit-vip-basic-2<br>Defaults to 4C8G: rabbit-vip-basic-1 if not specified</p>
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取<p>Cluster exception information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptionInformation <p>Cluster exception information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置<p>Cluster exception information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exceptionInformation <p>Cluster exception information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     * 
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取<p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed<br>To separate from the billing area, enable an additional status bit for display.</p>
                     * @return ClusterStatus <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed<br>To separate from the billing area, enable an additional status bit for display.</p>
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置<p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed<br>To separate from the billing area, enable an additional status bit for display.</p>
                     * @param _clusterStatus <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed<br>To separate from the billing area, enable an additional status bit for display.</p>
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取<p>public network access point</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccessEndpoint <p>public network access point</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置<p>public network access point</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicAccessEndpoint <p>public network access point</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取<p>VPC access point list</p>
                     * @return Vpcs <p>VPC access point list</p>
                     * 
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置<p>VPC access point list</p>
                     * @param _vpcs <p>VPC access point list</p>
                     * 
                     */
                    void SetVpcs(const std::vector<VpcEndpointInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取<p>Creation time in milliseconds. unix timestamp</p>
                     * @return CreateTime <p>Creation time in milliseconds. unix timestamp</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>Creation time in milliseconds. unix timestamp</p>
                     * @param _createTime <p>Creation time in milliseconds. unix timestamp</p>
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
                     * 获取<p>Instance type</p><p>Enumeration value:</p><ul><li>0: Managed version instance</li></ul>
                     * @return InstanceType <p>Instance type</p><p>Enumeration value:</p><ul><li>0: Managed version instance</li></ul>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>Instance type</p><p>Enumeration value:</p><ul><li>0: Managed version instance</li></ul>
                     * @param _instanceType <p>Instance type</p><p>Enumeration value:</p><ul><li>0: Managed version instance</li></ul>
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Isolation time in milliseconds. unix timestamp</p>
                     * @return IsolatedTime <p>Isolation time in milliseconds. unix timestamp</p>
                     * 
                     */
                    uint64_t GetIsolatedTime() const;

                    /**
                     * 设置<p>Isolation time in milliseconds. unix timestamp</p>
                     * @param _isolatedTime <p>Isolation time in milliseconds. unix timestamp</p>
                     * 
                     */
                    void SetIsolatedTime(const uint64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether deletion protection is enabled</p>
                     * @return EnableDeletionProtection <p>Whether deletion protection is enabled</p>
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置<p>Whether deletion protection is enabled</p>
                     * @param _enableDeletionProtection <p>Whether deletion protection is enabled</p>
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>Tag list</p>
                     * @return Tags <p>Tag list</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag list</p>
                     * @param _tags <p>Tag list</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>public data stream Stream access point</p>
                     * @return PublicStreamAccessEndpoint <p>public data stream Stream access point</p>
                     * 
                     */
                    std::string GetPublicStreamAccessEndpoint() const;

                    /**
                     * 设置<p>public data stream Stream access point</p>
                     * @param _publicStreamAccessEndpoint <p>public data stream Stream access point</p>
                     * 
                     */
                    void SetPublicStreamAccessEndpoint(const std::string& _publicStreamAccessEndpoint);

                    /**
                     * 判断参数 PublicStreamAccessEndpoint 是否已赋值
                     * @return PublicStreamAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicStreamAccessEndpointHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance name</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Instance version</p>
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Node count</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>Instance configuration specification name</p>
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * <p>Peak TPS</p>
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * <p>Peak bandwidth in Mbps</p>
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * <p>Storage capacity in GB</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>Instance expiration time. The value is 0 for pay-as-you-go instances, in milliseconds. unix timestamp.</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Auto-renewal flag. 0 means default state (not set by the user, i.e., initial state is manual renewal), 1 means auto-renew, 2 means explicitly no auto-renew (set by the user)</p>
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>1 indicates prepaid mode, 0 indicates postpaid</p>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Remark information</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>Node specification of the cluster with corresponding flag:<br>2C8G: rabbit-vip-profession-2c8g<br>4C16G: rabbit-vip-profession-4c16g<br>8C32G: rabbit-vip-profession-8c32g<br>16C32G: rabbit-vip-basic-4<br>16C64G: rabbit-vip-profession-16c64g<br>2C4G: rabbit-vip-basic-5<br>4C8G: rabbit-vip-basic-1<br>8C16G (sold out): rabbit-vip-basic-2<br>Defaults to 4C8G: rabbit-vip-basic-1 if not specified</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>Cluster exception information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * <p>Instance status. 0 indicates creating in progress, 1 indicates normal, 2 indicates isolated, 3 indicates terminated, 4 - abnormal, 5 - delivery failed<br>To separate from the billing area, enable an additional status bit for display.</p>
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>public network access point</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * <p>VPC access point list</p>
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * <p>Creation time in milliseconds. unix timestamp</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Instance type</p><p>Enumeration value:</p><ul><li>0: Managed version instance</li></ul>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Isolation time in milliseconds. unix timestamp</p>
                     */
                    uint64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * <p>Whether deletion protection is enabled</p>
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * <p>Tag list</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>public data stream Stream access point</p>
                     */
                    std::string m_publicStreamAccessEndpoint;
                    bool m_publicStreamAccessEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIPINSTANCE_H_
