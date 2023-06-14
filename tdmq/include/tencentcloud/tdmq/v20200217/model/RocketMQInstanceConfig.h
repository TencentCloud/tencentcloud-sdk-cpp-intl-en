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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_
