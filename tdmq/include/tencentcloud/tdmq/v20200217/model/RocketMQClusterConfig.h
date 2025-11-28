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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERCONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * RocketMQ cluster configuration
                */
                class RocketMQClusterConfig : public AbstractModel
                {
                public:
                    RocketMQClusterConfig();
                    ~RocketMQClusterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Upper limit of TPS per single namespace.
                     * @return MaxTpsPerNamespace Upper limit of TPS per single namespace.
                     * @deprecated
                     */
                    uint64_t GetMaxTpsPerNamespace() const;

                    /**
                     * 设置Upper limit of TPS per single namespace.
                     * @param _maxTpsPerNamespace Upper limit of TPS per single namespace.
                     * @deprecated
                     */
                    void SetMaxTpsPerNamespace(const uint64_t& _maxTpsPerNamespace);

                    /**
                     * 判断参数 MaxTpsPerNamespace 是否已赋值
                     * @return MaxTpsPerNamespace 是否已赋值
                     * @deprecated
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
                     * 获取Maximum message retention period in milliseconds
                     * @return MaxRetentionTime Maximum message retention period in milliseconds
                     * 
                     */
                    uint64_t GetMaxRetentionTime() const;

                    /**
                     * 设置Maximum message retention period in milliseconds
                     * @param _maxRetentionTime Maximum message retention period in milliseconds
                     * 
                     */
                    void SetMaxRetentionTime(const uint64_t& _maxRetentionTime);

                    /**
                     * 判断参数 MaxRetentionTime 是否已赋值
                     * @return MaxRetentionTime 是否已赋值
                     * 
                     */
                    bool MaxRetentionTimeHasBeenSet() const;

                    /**
                     * 获取Maximum message delay in milliseconds
                     * @return MaxLatencyTime Maximum message delay in milliseconds
                     * 
                     */
                    uint64_t GetMaxLatencyTime() const;

                    /**
                     * 设置Maximum message delay in milliseconds
                     * @param _maxLatencyTime Maximum message delay in milliseconds
                     * 
                     */
                    void SetMaxLatencyTime(const uint64_t& _maxLatencyTime);

                    /**
                     * 判断参数 MaxLatencyTime 是否已赋值
                     * @return MaxLatencyTime 是否已赋值
                     * 
                     */
                    bool MaxLatencyTimeHasBeenSet() const;

                    /**
                     * 获取The maximum number of queues in a single topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxQueuesPerTopic The maximum number of queues in a single topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxQueuesPerTopic() const;

                    /**
                     * 设置The maximum number of queues in a single topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxQueuesPerTopic The maximum number of queues in a single topic
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Topic distribution.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicDistribution Topic distribution.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RocketMQTopicDistribution> GetTopicDistribution() const;

                    /**
                     * 设置Topic distribution.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicDistribution Topic distribution.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum number of roles.
                     * @return MaxRoleNum Maximum number of roles.
                     * 
                     */
                    int64_t GetMaxRoleNum() const;

                    /**
                     * 设置Maximum number of roles.
                     * @param _maxRoleNum Maximum number of roles.
                     * 
                     */
                    void SetMaxRoleNum(const int64_t& _maxRoleNum);

                    /**
                     * 判断参数 MaxRoleNum 是否已赋值
                     * @return MaxRoleNum 是否已赋值
                     * 
                     */
                    bool MaxRoleNumHasBeenSet() const;

                    /**
                     * 获取TPS quota.
                     * @return MaxTpsLimit TPS quota.
                     * 
                     */
                    int64_t GetMaxTpsLimit() const;

                    /**
                     * 设置TPS quota.
                     * @param _maxTpsLimit TPS quota.
                     * 
                     */
                    void SetMaxTpsLimit(const int64_t& _maxTpsLimit);

                    /**
                     * 判断参数 MaxTpsLimit 是否已赋值
                     * @return MaxTpsLimit 是否已赋值
                     * 
                     */
                    bool MaxTpsLimitHasBeenSet() const;

                private:

                    /**
                     * Upper limit of TPS per single namespace.
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
                     * Maximum message retention period in milliseconds
                     */
                    uint64_t m_maxRetentionTime;
                    bool m_maxRetentionTimeHasBeenSet;

                    /**
                     * Maximum message delay in milliseconds
                     */
                    uint64_t m_maxLatencyTime;
                    bool m_maxLatencyTimeHasBeenSet;

                    /**
                     * The maximum number of queues in a single topic
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxQueuesPerTopic;
                    bool m_maxQueuesPerTopicHasBeenSet;

                    /**
                     * Topic distribution.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RocketMQTopicDistribution> m_topicDistribution;
                    bool m_topicDistributionHasBeenSet;

                    /**
                     * Maximum number of roles.
                     */
                    int64_t m_maxRoleNum;
                    bool m_maxRoleNumHasBeenSet;

                    /**
                     * TPS quota.
                     */
                    int64_t m_maxTpsLimit;
                    bool m_maxTpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERCONFIG_H_
