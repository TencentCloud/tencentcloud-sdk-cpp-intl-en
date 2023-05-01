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
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Cluster specification name
                     * @param SpecName Cluster specification name
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Peak TPS
                     * @return MaxTps Peak TPS
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置Peak TPS
                     * @param MaxTps Peak TPS
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth in Mbps
                     * @return MaxBandWidth Peak bandwidth in Mbps
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置Peak bandwidth in Mbps
                     * @param MaxBandWidth Peak bandwidth in Mbps
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取Maximum number of namespaces
                     * @return MaxNamespaces Maximum number of namespaces
                     */
                    uint64_t GetMaxNamespaces() const;

                    /**
                     * 设置Maximum number of namespaces
                     * @param MaxNamespaces Maximum number of namespaces
                     */
                    void SetMaxNamespaces(const uint64_t& _maxNamespaces);

                    /**
                     * 判断参数 MaxNamespaces 是否已赋值
                     * @return MaxNamespaces 是否已赋值
                     */
                    bool MaxNamespacesHasBeenSet() const;

                    /**
                     * 获取Maximum number of topic partitions
                     * @return MaxTopics Maximum number of topic partitions
                     */
                    uint64_t GetMaxTopics() const;

                    /**
                     * 设置Maximum number of topic partitions
                     * @param MaxTopics Maximum number of topic partitions
                     */
                    void SetMaxTopics(const uint64_t& _maxTopics);

                    /**
                     * 判断参数 MaxTopics 是否已赋值
                     * @return MaxTopics 是否已赋值
                     */
                    bool MaxTopicsHasBeenSet() const;

                    /**
                     * 获取Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScalableTps Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetScalableTps() const;

                    /**
                     * 设置Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ScalableTps Elastic TPS beyond the specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScalableTps(const uint64_t& _scalableTps);

                    /**
                     * 判断参数 ScalableTps 是否已赋值
                     * @return ScalableTps 是否已赋值
                     */
                    bool ScalableTpsHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_
