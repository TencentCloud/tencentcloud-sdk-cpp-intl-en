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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * Set of cluster information
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取Cluster name.
                     * @return ClusterName Cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Cluster name.
                     * @param _clusterName Cluster name.
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Number of access points
                     * @return EndPointNum Number of access points
                     * 
                     */
                    int64_t GetEndPointNum() const;

                    /**
                     * 设置Number of access points
                     * @param _endPointNum Number of access points
                     * 
                     */
                    void SetEndPointNum(const int64_t& _endPointNum);

                    /**
                     * 判断参数 EndPointNum 是否已赋值
                     * @return EndPointNum 是否已赋值
                     * 
                     */
                    bool EndPointNumHasBeenSet() const;

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
                     * 获取Whether the cluster is healthy. 1: healthy; 0: exceptional
                     * @return Healthy Whether the cluster is healthy. 1: healthy; 0: exceptional
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置Whether the cluster is healthy. 1: healthy; 0: exceptional
                     * @param _healthy Whether the cluster is healthy. 1: healthy; 0: exceptional
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取Cluster health information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return HealthyInfo Cluster health information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHealthyInfo() const;

                    /**
                     * 设置Cluster health information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _healthyInfo Cluster health information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthyInfo(const std::string& _healthyInfo);

                    /**
                     * 判断参数 HealthyInfo 是否已赋值
                     * @return HealthyInfo 是否已赋值
                     * 
                     */
                    bool HealthyInfoHasBeenSet() const;

                    /**
                     * 获取Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
                     * @return Status Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
                     * @param _status Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
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
                     * 获取Maximum number of namespaces
                     * @return MaxNamespaceNum Maximum number of namespaces
                     * 
                     */
                    int64_t GetMaxNamespaceNum() const;

                    /**
                     * 设置Maximum number of namespaces
                     * @param _maxNamespaceNum Maximum number of namespaces
                     * 
                     */
                    void SetMaxNamespaceNum(const int64_t& _maxNamespaceNum);

                    /**
                     * 判断参数 MaxNamespaceNum 是否已赋值
                     * @return MaxNamespaceNum 是否已赋值
                     * 
                     */
                    bool MaxNamespaceNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of topics
                     * @return MaxTopicNum Maximum number of topics
                     * 
                     */
                    int64_t GetMaxTopicNum() const;

                    /**
                     * 设置Maximum number of topics
                     * @param _maxTopicNum Maximum number of topics
                     * 
                     */
                    void SetMaxTopicNum(const int64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取Maximum QPS
                     * @return MaxQps Maximum QPS
                     * 
                     */
                    int64_t GetMaxQps() const;

                    /**
                     * 设置Maximum QPS
                     * @param _maxQps Maximum QPS
                     * 
                     */
                    void SetMaxQps(const int64_t& _maxQps);

                    /**
                     * 判断参数 MaxQps 是否已赋值
                     * @return MaxQps 是否已赋值
                     * 
                     */
                    bool MaxQpsHasBeenSet() const;

                    /**
                     * 获取Maximum message retention period in seconds
                     * @return MessageRetentionTime Maximum message retention period in seconds
                     * 
                     */
                    int64_t GetMessageRetentionTime() const;

                    /**
                     * 设置Maximum message retention period in seconds
                     * @param _messageRetentionTime Maximum message retention period in seconds
                     * 
                     */
                    void SetMessageRetentionTime(const int64_t& _messageRetentionTime);

                    /**
                     * 判断参数 MessageRetentionTime 是否已赋值
                     * @return MessageRetentionTime 是否已赋值
                     * 
                     */
                    bool MessageRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Maximum storage capacity
                     * @return MaxStorageCapacity Maximum storage capacity
                     * 
                     */
                    int64_t GetMaxStorageCapacity() const;

                    /**
                     * 设置Maximum storage capacity
                     * @param _maxStorageCapacity Maximum storage capacity
                     * 
                     */
                    void SetMaxStorageCapacity(const int64_t& _maxStorageCapacity);

                    /**
                     * 判断参数 MaxStorageCapacity 是否已赋值
                     * @return MaxStorageCapacity 是否已赋值
                     * 
                     */
                    bool MaxStorageCapacityHasBeenSet() const;

                    /**
                     * 获取Cluster version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Version Cluster version
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Cluster version
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _version Cluster version
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Public network access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicEndPoint Public network access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置Public network access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _publicEndPoint Public network access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     * 
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VpcEndPoint VPC access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _vpcEndPoint VPC access point
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     * 
                     */
                    bool VpcEndPointHasBeenSet() const;

                    /**
                     * 获取Number of namespaces
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceNum Number of namespaces
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNamespaceNum() const;

                    /**
                     * 设置Number of namespaces
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _namespaceNum Number of namespaces
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespaceNum(const int64_t& _namespaceNum);

                    /**
                     * 判断参数 NamespaceNum 是否已赋值
                     * @return NamespaceNum 是否已赋值
                     * 
                     */
                    bool NamespaceNumHasBeenSet() const;

                    /**
                     * 获取Limit of used storage in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UsedStorageBudget Limit of used storage in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUsedStorageBudget() const;

                    /**
                     * 设置Limit of used storage in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _usedStorageBudget Limit of used storage in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUsedStorageBudget(const int64_t& _usedStorageBudget);

                    /**
                     * 判断参数 UsedStorageBudget 是否已赋值
                     * @return UsedStorageBudget 是否已赋值
                     * 
                     */
                    bool UsedStorageBudgetHasBeenSet() const;

                    /**
                     * 获取Maximum message production rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxPublishRateInMessages Maximum message production rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxPublishRateInMessages() const;

                    /**
                     * 设置Maximum message production rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxPublishRateInMessages Maximum message production rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxPublishRateInMessages(const int64_t& _maxPublishRateInMessages);

                    /**
                     * 判断参数 MaxPublishRateInMessages 是否已赋值
                     * @return MaxPublishRateInMessages 是否已赋值
                     * 
                     */
                    bool MaxPublishRateInMessagesHasBeenSet() const;

                    /**
                     * 获取Maximum message push rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxDispatchRateInMessages Maximum message push rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxDispatchRateInMessages() const;

                    /**
                     * 设置Maximum message push rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxDispatchRateInMessages Maximum message push rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxDispatchRateInMessages(const int64_t& _maxDispatchRateInMessages);

                    /**
                     * 判断参数 MaxDispatchRateInMessages 是否已赋值
                     * @return MaxDispatchRateInMessages 是否已赋值
                     * 
                     */
                    bool MaxDispatchRateInMessagesHasBeenSet() const;

                    /**
                     * 获取Maximum message production rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxPublishRateInBytes Maximum message production rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxPublishRateInBytes() const;

                    /**
                     * 设置Maximum message production rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxPublishRateInBytes Maximum message production rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxPublishRateInBytes(const int64_t& _maxPublishRateInBytes);

                    /**
                     * 判断参数 MaxPublishRateInBytes 是否已赋值
                     * @return MaxPublishRateInBytes 是否已赋值
                     * 
                     */
                    bool MaxPublishRateInBytesHasBeenSet() const;

                    /**
                     * 获取Maximum message push rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxDispatchRateInBytes Maximum message push rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxDispatchRateInBytes() const;

                    /**
                     * 设置Maximum message push rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxDispatchRateInBytes Maximum message push rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxDispatchRateInBytes(const int64_t& _maxDispatchRateInBytes);

                    /**
                     * 判断参数 MaxDispatchRateInBytes 是否已赋值
                     * @return MaxDispatchRateInBytes 是否已赋值
                     * 
                     */
                    bool MaxDispatchRateInBytesHasBeenSet() const;

                    /**
                     * 获取Number of created topics
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TopicNum Number of created topics
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置Number of created topics
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _topicNum Number of created topics
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取Maximum message delay in seconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxMessageDelayInSeconds Maximum message delay in seconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxMessageDelayInSeconds() const;

                    /**
                     * 设置Maximum message delay in seconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxMessageDelayInSeconds Maximum message delay in seconds
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxMessageDelayInSeconds(const int64_t& _maxMessageDelayInSeconds);

                    /**
                     * 判断参数 MaxMessageDelayInSeconds 是否已赋值
                     * @return MaxMessageDelayInSeconds 是否已赋值
                     * 
                     */
                    bool MaxMessageDelayInSecondsHasBeenSet() const;

                    /**
                     * 获取Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicAccessEnabled Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPublicAccessEnabled() const;

                    /**
                     * 设置Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _publicAccessEnabled Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicAccessEnabled(const bool& _publicAccessEnabled);

                    /**
                     * 判断参数 PublicAccessEnabled 是否已赋值
                     * @return PublicAccessEnabled 是否已赋值
                     * 
                     */
                    bool PublicAccessEnabledHasBeenSet() const;

                    /**
                     * 获取Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Billing mode:
`0`: Pay-as-you-go
`1`: Monthly subscription
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return PayMode Billing mode:
`0`: Pay-as-you-go
`1`: Monthly subscription
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode:
`0`: Pay-as-you-go
`1`: Monthly subscription
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _payMode Billing mode:
`0`: Pay-as-you-go
`1`: Monthly subscription
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of access points
                     */
                    int64_t m_endPointNum;
                    bool m_endPointNumHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the cluster is healthy. 1: healthy; 0: exceptional
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * Cluster health information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_healthyInfo;
                    bool m_healthyInfoHasBeenSet;

                    /**
                     * Cluster status. 0: creating; 1: normal; 2: terminating; 3: deleted; 4. isolated; 5. creation failed; 6: deletion failed
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Maximum number of namespaces
                     */
                    int64_t m_maxNamespaceNum;
                    bool m_maxNamespaceNumHasBeenSet;

                    /**
                     * Maximum number of topics
                     */
                    int64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * Maximum QPS
                     */
                    int64_t m_maxQps;
                    bool m_maxQpsHasBeenSet;

                    /**
                     * Maximum message retention period in seconds
                     */
                    int64_t m_messageRetentionTime;
                    bool m_messageRetentionTimeHasBeenSet;

                    /**
                     * Maximum storage capacity
                     */
                    int64_t m_maxStorageCapacity;
                    bool m_maxStorageCapacityHasBeenSet;

                    /**
                     * Cluster version
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Public network access point
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * VPC access point
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                    /**
                     * Number of namespaces
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_namespaceNum;
                    bool m_namespaceNumHasBeenSet;

                    /**
                     * Limit of used storage in MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_usedStorageBudget;
                    bool m_usedStorageBudgetHasBeenSet;

                    /**
                     * Maximum message production rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxPublishRateInMessages;
                    bool m_maxPublishRateInMessagesHasBeenSet;

                    /**
                     * Maximum message push rate in messages
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDispatchRateInMessages;
                    bool m_maxDispatchRateInMessagesHasBeenSet;

                    /**
                     * Maximum message production rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxPublishRateInBytes;
                    bool m_maxPublishRateInBytesHasBeenSet;

                    /**
                     * Maximum message push rate in bytes
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDispatchRateInBytes;
                    bool m_maxDispatchRateInBytesHasBeenSet;

                    /**
                     * Number of created topics
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * Maximum message delay in seconds
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxMessageDelayInSeconds;
                    bool m_maxMessageDelayInSecondsHasBeenSet;

                    /**
                     * Whether to enable public network access. If this parameter is left empty, the feature will be enabled by default
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_publicAccessEnabled;
                    bool m_publicAccessEnabledHasBeenSet;

                    /**
                     * Tag
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Billing mode:
`0`: Pay-as-you-go
`1`: Monthly subscription
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CLUSTER_H_
