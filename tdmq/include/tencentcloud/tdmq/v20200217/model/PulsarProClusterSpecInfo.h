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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * TDMQ for Pulsar pro cluster specification information
                */
                class PulsarProClusterSpecInfo : public AbstractModel
                {
                public:
                    PulsarProClusterSpecInfo();
                    ~PulsarProClusterSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster specification name
                     * @return SpecName Cluster specification name
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Cluster specification name
                     * @param _specName Cluster specification name
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
                     * 获取Peak TPS
                     * @return MaxTps Peak TPS
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置Peak TPS
                     * @param _maxTps Peak TPS
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
                     * 获取Peak bandwidth in Mbps
                     * @return MaxBandWidth Peak bandwidth in Mbps
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置Peak bandwidth in Mbps
                     * @param _maxBandWidth Peak bandwidth in Mbps
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
                     * 获取Maximum number of namespaces
                     * @return MaxNamespaces Maximum number of namespaces
                     * 
                     */
                    uint64_t GetMaxNamespaces() const;

                    /**
                     * 设置Maximum number of namespaces
                     * @param _maxNamespaces Maximum number of namespaces
                     * 
                     */
                    void SetMaxNamespaces(const uint64_t& _maxNamespaces);

                    /**
                     * 判断参数 MaxNamespaces 是否已赋值
                     * @return MaxNamespaces 是否已赋值
                     * 
                     */
                    bool MaxNamespacesHasBeenSet() const;

                    /**
                     * 获取Maximum number of topic partitions
                     * @return MaxTopics Maximum number of topic partitions
                     * 
                     */
                    uint64_t GetMaxTopics() const;

                    /**
                     * 设置Maximum number of topic partitions
                     * @param _maxTopics Maximum number of topic partitions
                     * 
                     */
                    void SetMaxTopics(const uint64_t& _maxTopics);

                    /**
                     * 判断参数 MaxTopics 是否已赋值
                     * @return MaxTopics 是否已赋值
                     * 
                     */
                    bool MaxTopicsHasBeenSet() const;

                    /**
                     * 获取Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScalableTps Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetScalableTps() const;

                    /**
                     * 设置Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scalableTps Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScalableTps(const uint64_t& _scalableTps);

                    /**
                     * 判断参数 ScalableTps 是否已赋值
                     * @return ScalableTps 是否已赋值
                     * 
                     */
                    bool ScalableTpsHasBeenSet() const;

                    /**
                     * 获取32 or 128.
Maximum number of partitions for topics in the current cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxPartitions 32 or 128.
Maximum number of partitions for topics in the current cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxPartitions() const;

                    /**
                     * 设置32 or 128.
Maximum number of partitions for topics in the current cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxPartitions 32 or 128.
Maximum number of partitions for topics in the current cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxPartitions(const uint64_t& _maxPartitions);

                    /**
                     * 判断参数 MaxPartitions 是否已赋值
                     * @return MaxPartitions 是否已赋值
                     * 
                     */
                    bool MaxPartitionsHasBeenSet() const;

                    /**
                     * 获取Maximum delayed message count for the product. 0 indicates no limit.	
                     * @return MaxDelayedMessages Maximum delayed message count for the product. 0 indicates no limit.	
                     * 
                     */
                    int64_t GetMaxDelayedMessages() const;

                    /**
                     * 设置Maximum delayed message count for the product. 0 indicates no limit.	
                     * @param _maxDelayedMessages Maximum delayed message count for the product. 0 indicates no limit.	
                     * 
                     */
                    void SetMaxDelayedMessages(const int64_t& _maxDelayedMessages);

                    /**
                     * 判断参数 MaxDelayedMessages 是否已赋值
                     * @return MaxDelayedMessages 是否已赋值
                     * 
                     */
                    bool MaxDelayedMessagesHasBeenSet() const;

                private:

                    /**
                     * Cluster specification name
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Peak TPS
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * Peak bandwidth in Mbps
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Maximum number of namespaces
                     */
                    uint64_t m_maxNamespaces;
                    bool m_maxNamespacesHasBeenSet;

                    /**
                     * Maximum number of topic partitions
                     */
                    uint64_t m_maxTopics;
                    bool m_maxTopicsHasBeenSet;

                    /**
                     * Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_scalableTps;
                    bool m_scalableTpsHasBeenSet;

                    /**
                     * 32 or 128.
Maximum number of partitions for topics in the current cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxPartitions;
                    bool m_maxPartitionsHasBeenSet;

                    /**
                     * Maximum delayed message count for the product. 0 indicates no limit.	
                     */
                    int64_t m_maxDelayedMessages;
                    bool m_maxDelayedMessagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_
