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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/InstanceNodeDistribution.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicDistribution.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Instance configurations of a TDMQ for RocketMQ exclusive cluster
                */
                class RocketMQInstanceConfig : public AbstractModel
                {
                public:
                    RocketMQInstanceConfig();
                    ~RocketMQInstanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum TPS per namespace
                     * @return MaxTpsPerNamespace Maximum TPS per namespace
                     * 
                     */
                    uint64_t GetMaxTpsPerNamespace() const;

                    /**
                     * 设置Maximum TPS per namespace
                     * @param _maxTpsPerNamespace Maximum TPS per namespace
                     * 
                     */
                    void SetMaxTpsPerNamespace(const uint64_t& _maxTpsPerNamespace);

                    /**
                     * 判断参数 MaxTpsPerNamespace 是否已赋值
                     * @return MaxTpsPerNamespace 是否已赋值
                     * 
                     */
                    bool MaxTpsPerNamespaceHasBeenSet() const;

                    /**
                     * 获取Maximum number of namespaces
                     * @return MaxNamespaceNum Maximum number of namespaces
                     * 
                     */
                    uint64_t GetMaxNamespaceNum() const;

                    /**
                     * 设置Maximum number of namespaces
                     * @param _maxNamespaceNum Maximum number of namespaces
                     * 
                     */
                    void SetMaxNamespaceNum(const uint64_t& _maxNamespaceNum);

                    /**
                     * 判断参数 MaxNamespaceNum 是否已赋值
                     * @return MaxNamespaceNum 是否已赋值
                     * 
                     */
                    bool MaxNamespaceNumHasBeenSet() const;

                    /**
                     * 获取Number of used namespaces
                     * @return UsedNamespaceNum Number of used namespaces
                     * 
                     */
                    uint64_t GetUsedNamespaceNum() const;

                    /**
                     * 设置Number of used namespaces
                     * @param _usedNamespaceNum Number of used namespaces
                     * 
                     */
                    void SetUsedNamespaceNum(const uint64_t& _usedNamespaceNum);

                    /**
                     * 判断参数 UsedNamespaceNum 是否已赋值
                     * @return UsedNamespaceNum 是否已赋值
                     * 
                     */
                    bool UsedNamespaceNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of topics
                     * @return MaxTopicNum Maximum number of topics
                     * 
                     */
                    uint64_t GetMaxTopicNum() const;

                    /**
                     * 设置Maximum number of topics
                     * @param _maxTopicNum Maximum number of topics
                     * 
                     */
                    void SetMaxTopicNum(const uint64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取Number of used topics
                     * @return UsedTopicNum Number of used topics
                     * 
                     */
                    uint64_t GetUsedTopicNum() const;

                    /**
                     * 设置Number of used topics
                     * @param _usedTopicNum Number of used topics
                     * 
                     */
                    void SetUsedTopicNum(const uint64_t& _usedTopicNum);

                    /**
                     * 判断参数 UsedTopicNum 是否已赋值
                     * @return UsedTopicNum 是否已赋值
                     * 
                     */
                    bool UsedTopicNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of groups
                     * @return MaxGroupNum Maximum number of groups
                     * 
                     */
                    uint64_t GetMaxGroupNum() const;

                    /**
                     * 设置Maximum number of groups
                     * @param _maxGroupNum Maximum number of groups
                     * 
                     */
                    void SetMaxGroupNum(const uint64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     * 
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取Number of used groups
                     * @return UsedGroupNum Number of used groups
                     * 
                     */
                    uint64_t GetUsedGroupNum() const;

                    /**
                     * 设置Number of used groups
                     * @param _usedGroupNum Number of used groups
                     * 
                     */
                    void SetUsedGroupNum(const uint64_t& _usedGroupNum);

                    /**
                     * 判断参数 UsedGroupNum 是否已赋值
                     * @return UsedGroupNum 是否已赋值
                     * 
                     */
                    bool UsedGroupNumHasBeenSet() const;

                    /**
                     * 获取Cluster type
                     * @return ConfigDisplay Cluster type
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置Cluster type
                     * @param _configDisplay Cluster type
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
                     * 获取Number of nodes in the cluster
                     * @return NodeCount Number of nodes in the cluster
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of nodes in the cluster
                     * @param _nodeCount Number of nodes in the cluster
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
                     * 获取Node distribution
                     * @return NodeDistribution Node distribution
                     * 
                     */
                    std::vector<InstanceNodeDistribution> GetNodeDistribution() const;

                    /**
                     * 设置Node distribution
                     * @param _nodeDistribution Node distribution
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
                     * 获取Topic distribution
                     * @return TopicDistribution Topic distribution
                     * 
                     */
                    std::vector<RocketMQTopicDistribution> GetTopicDistribution() const;

                    /**
                     * 设置Topic distribution
                     * @param _topicDistribution Topic distribution
                     * 
                     */
                    void SetTopicDistribution(const std::vector<RocketMQTopicDistribution>& _topicDistribution);

                    /**
                     * 判断参数 TopicDistribution 是否已赋值
                     * @return TopicDistribution 是否已赋值
                     * 
                     */
                    bool TopicDistributionHasBeenSet() const;

                    /**
                     * 获取
                     * @return MaxQueuesPerTopic 
                     * 
                     */
                    uint64_t GetMaxQueuesPerTopic() const;

                    /**
                     * 设置
                     * @param _maxQueuesPerTopic 
                     * 
                     */
                    void SetMaxQueuesPerTopic(const uint64_t& _maxQueuesPerTopic);

                    /**
                     * 判断参数 MaxQueuesPerTopic 是否已赋值
                     * @return MaxQueuesPerTopic 是否已赋值
                     * 
                     */
                    bool MaxQueuesPerTopicHasBeenSet() const;

                    /**
                     * 获取Maximum configurable message retention time, in hours	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxRetention Maximum configurable message retention time, in hours	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置Maximum configurable message retention time, in hours	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxRetention Maximum configurable message retention time, in hours	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxRetention(const int64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取Minimum configurable message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinRetention Minimum configurable message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置Minimum configurable message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minRetention Minimum configurable message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinRetention(const int64_t& _minRetention);

                    /**
                     * 判断参数 MinRetention 是否已赋值
                     * @return MinRetention 是否已赋值
                     * 
                     */
                    bool MinRetentionHasBeenSet() const;

                    /**
                     * 获取Instance message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Retention Instance message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置Instance message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retention Instance message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取Minimum quota for the number of topics, which is the free quota. The default number is the minimum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicNumLowerLimit Minimum quota for the number of topics, which is the free quota. The default number is the minimum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicNumLowerLimit() const;

                    /**
                     * 设置Minimum quota for the number of topics, which is the free quota. The default number is the minimum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicNumLowerLimit Minimum quota for the number of topics, which is the free quota. The default number is the minimum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicNumLowerLimit(const int64_t& _topicNumLowerLimit);

                    /**
                     * 判断参数 TopicNumLowerLimit 是否已赋值
                     * @return TopicNumLowerLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLowerLimitHasBeenSet() const;

                    /**
                     * 获取Maximum quota for the number of topics. The default number is the maximum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicNumUpperLimit Maximum quota for the number of topics. The default number is the maximum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 设置Maximum quota for the number of topics. The default number is the maximum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicNumUpperLimit Maximum quota for the number of topics. The default number is the maximum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit);

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                    /**
                     * 获取Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * @return SendReceiveRatio Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * 
                     */
                    double GetSendReceiveRatio() const;

                    /**
                     * 设置Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * @param _sendReceiveRatio Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     * 
                     */
                    void SetSendReceiveRatio(const double& _sendReceiveRatio);

                    /**
                     * 判断参数 SendReceiveRatio 是否已赋值
                     * @return SendReceiveRatio 是否已赋值
                     * 
                     */
                    bool SendReceiveRatioHasBeenSet() const;

                private:

                    /**
                     * Maximum TPS per namespace
                     */
                    uint64_t m_maxTpsPerNamespace;
                    bool m_maxTpsPerNamespaceHasBeenSet;

                    /**
                     * Maximum number of namespaces
                     */
                    uint64_t m_maxNamespaceNum;
                    bool m_maxNamespaceNumHasBeenSet;

                    /**
                     * Number of used namespaces
                     */
                    uint64_t m_usedNamespaceNum;
                    bool m_usedNamespaceNumHasBeenSet;

                    /**
                     * Maximum number of topics
                     */
                    uint64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * Number of used topics
                     */
                    uint64_t m_usedTopicNum;
                    bool m_usedTopicNumHasBeenSet;

                    /**
                     * Maximum number of groups
                     */
                    uint64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * Number of used groups
                     */
                    uint64_t m_usedGroupNum;
                    bool m_usedGroupNumHasBeenSet;

                    /**
                     * Cluster type
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * Number of nodes in the cluster
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Node distribution
                     */
                    std::vector<InstanceNodeDistribution> m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * Topic distribution
                     */
                    std::vector<RocketMQTopicDistribution> m_topicDistribution;
                    bool m_topicDistributionHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_maxQueuesPerTopic;
                    bool m_maxQueuesPerTopicHasBeenSet;

                    /**
                     * Maximum configurable message retention time, in hours	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * Minimum configurable message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * Instance message retention time, in hours
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * Minimum quota for the number of topics, which is the free quota. The default number is the minimum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNumLowerLimit;
                    bool m_topicNumLowerLimitHasBeenSet;

                    /**
                     * Maximum quota for the number of topics. The default number is the maximum quota per node in the cluster specification multiplied by the number of nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                    /**
                     * Controls the TPS ratio for producing and consuming messages. Value range: 0–1. Default value: 0.5.
                     */
                    double m_sendReceiveRatio;
                    bool m_sendReceiveRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_
