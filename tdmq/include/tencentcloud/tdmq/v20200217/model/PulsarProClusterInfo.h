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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/InstanceNodeDistribution.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ for Pulsar pro cluster information
                */
                class PulsarProClusterInfo : public AbstractModel
                {
                public:
                    PulsarProClusterInfo();
                    ~PulsarProClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Cluster name
                     * @return ClusterName Cluster name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name
                     * @param _clusterName Cluster name
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
                     * 获取Description
                     * @return Remark Description
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Description
                     * @param _remark Description
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Cluster status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated).
                     * @return Status Cluster status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated).
                     * @param _status Cluster status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated).
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
                     * 获取Cluster version
                     * @return Version Cluster version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Cluster version
                     * @param _version Cluster version
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
                     * 获取Node distribution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeDistribution Node distribution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceNodeDistribution> GetNodeDistribution() const;

                    /**
                     * 设置Node distribution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeDistribution Node distribution
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeDistribution(const std::vector<InstanceNodeDistribution>& _nodeDistribution);

                    /**
                     * 判断参数 NodeDistribution 是否已赋值
                     * @return NodeDistribution 是否已赋值
                     * 
                     */
                    bool NodeDistributionHasBeenSet() const;

                    /**
                     * 获取Max storage capacity in MB
                     * @return MaxStorage Max storage capacity in MB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置Max storage capacity in MB
                     * @param _maxStorage Max storage capacity in MB
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
                     * 获取Whether the route can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanEditRoute Whether the route can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCanEditRoute() const;

                    /**
                     * 设置Whether the route can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _canEditRoute Whether the route can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCanEditRoute(const bool& _canEditRoute);

                    /**
                     * 判断参数 CanEditRoute 是否已赋值
                     * @return CanEditRoute 是否已赋值
                     * 
                     */
                    bool CanEditRouteHasBeenSet() const;

                    /**
                     * 获取Specifies different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BillingLabelVersion Specifies different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBillingLabelVersion() const;

                    /**
                     * 设置Specifies different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _billingLabelVersion Specifies different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBillingLabelVersion(const std::string& _billingLabelVersion);

                    /**
                     * 判断参数 BillingLabelVersion 是否已赋值
                     * @return BillingLabelVersion 是否已赋值
                     * 
                     */
                    bool BillingLabelVersionHasBeenSet() const;

                    /**
                     * 获取Instance expiration timestamp, accurate to the millisecond level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Instance expiration timestamp, accurate to the millisecond level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置Instance expiration timestamp, accurate to the millisecond level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expireTime Instance expiration timestamp, accurate to the millisecond level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic topic creation.
true indicates enabled. false indicates disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoCreateTopicStatus Whether to enable automatic topic creation.
true indicates enabled. false indicates disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoCreateTopicStatus() const;

                    /**
                     * 设置Whether to enable automatic topic creation.
true indicates enabled. false indicates disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoCreateTopicStatus Whether to enable automatic topic creation.
true indicates enabled. false indicates disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoCreateTopicStatus(const bool& _autoCreateTopicStatus);

                    /**
                     * 判断参数 AutoCreateTopicStatus 是否已赋值
                     * @return AutoCreateTopicStatus 是否已赋值
                     * 
                     */
                    bool AutoCreateTopicStatusHasBeenSet() const;

                    /**
                     * 获取Specifies the default number of partitions for automatic topic creation. valid values: 0 if not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultPartitionNumber Specifies the default number of partitions for automatic topic creation. valid values: 0 if not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefaultPartitionNumber() const;

                    /**
                     * 设置Specifies the default number of partitions for automatic topic creation. valid values: 0 if not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultPartitionNumber Specifies the default number of partitions for automatic topic creation. valid values: 0 if not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefaultPartitionNumber(const int64_t& _defaultPartitionNumber);

                    /**
                     * 判断参数 DefaultPartitionNumber 是否已赋值
                     * @return DefaultPartitionNumber 是否已赋值
                     * 
                     */
                    bool DefaultPartitionNumberHasBeenSet() const;

                    /**
                     * 获取User-Defined tenant alias. if there is no, reuse the professional cluster ID.

                     * @return Tenant User-Defined tenant alias. if there is no, reuse the professional cluster ID.

                     * 
                     */
                    std::string GetTenant() const;

                    /**
                     * 设置User-Defined tenant alias. if there is no, reuse the professional cluster ID.

                     * @param _tenant User-Defined tenant alias. if there is no, reuse the professional cluster ID.

                     * 
                     */
                    void SetTenant(const std::string& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取Deletion protection switch flag.
                     * @return DeleteProtection Deletion protection switch flag.
                     * 
                     */
                    int64_t GetDeleteProtection() const;

                    /**
                     * 设置Deletion protection switch flag.
                     * @param _deleteProtection Deletion protection switch flag.
                     * 
                     */
                    void SetDeleteProtection(const int64_t& _deleteProtection);

                    /**
                     * 判断参数 DeleteProtection 是否已赋值
                     * @return DeleteProtection 是否已赋值
                     * 
                     */
                    bool DeleteProtectionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Cluster status. Valid values: `0` (Creating), `1` (Normal), `2` (Isolated).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cluster version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Node distribution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceNodeDistribution> m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * Max storage capacity in MB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Whether the route can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_canEditRoute;
                    bool m_canEditRouteHasBeenSet;

                    /**
                     * Specifies different billing specifications for pro edition and small-scale professional edition: PULSAR.P1 fixed storage and PULSAR.P2 elastic storage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_billingLabelVersion;
                    bool m_billingLabelVersionHasBeenSet;

                    /**
                     * Instance expiration timestamp, accurate to the millisecond level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Whether to enable automatic topic creation.
true indicates enabled. false indicates disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoCreateTopicStatus;
                    bool m_autoCreateTopicStatusHasBeenSet;

                    /**
                     * Specifies the default number of partitions for automatic topic creation. valid values: 0 if not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_defaultPartitionNumber;
                    bool m_defaultPartitionNumberHasBeenSet;

                    /**
                     * User-Defined tenant alias. if there is no, reuse the professional cluster ID.

                     */
                    std::string m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * Deletion protection switch flag.
                     */
                    int64_t m_deleteProtection;
                    bool m_deleteProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERINFO_H_
