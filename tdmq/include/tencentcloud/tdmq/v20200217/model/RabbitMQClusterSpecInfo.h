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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERSPECINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERSPECINFO_H_

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
                * RabbitMQ Cluster Specifications Information
                */
                class RabbitMQClusterSpecInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterSpecInfo();
                    ~RabbitMQClusterSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster Specification Name
                     * @return SpecName Cluster Specification Name
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Cluster Specification Name
                     * @param _specName Cluster Specification Name
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
                     * 获取Number of Nodes
                     * @return NodeCount Number of Nodes
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置Number of Nodes
                     * @param _nodeCount Number of Nodes
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
                     * 获取Peak tps
                     * @return MaxTps Peak tps
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置Peak tps
                     * @param _maxTps Peak tps
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
                     * 获取Peak bandwidth Unit: mbps
                     * @return MaxBandWidth Peak bandwidth Unit: mbps
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置Peak bandwidth Unit: mbps
                     * @param _maxBandWidth Peak bandwidth Unit: mbps
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
                     * 获取Storage capacity Unit: GB
                     * @return MaxStorage Storage capacity Unit: GB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置Storage capacity Unit: GB
                     * @param _maxStorage Storage capacity Unit: GB
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
                     * 获取public network bandwidth tps. Unit: Mbps
                     * @return PublicNetworkTps public network bandwidth tps. Unit: Mbps
                     * 
                     */
                    uint64_t GetPublicNetworkTps() const;

                    /**
                     * 设置public network bandwidth tps. Unit: Mbps
                     * @param _publicNetworkTps public network bandwidth tps. Unit: Mbps
                     * 
                     */
                    void SetPublicNetworkTps(const uint64_t& _publicNetworkTps);

                    /**
                     * 判断参数 PublicNetworkTps 是否已赋值
                     * @return PublicNetworkTps 是否已赋值
                     * 
                     */
                    bool PublicNetworkTpsHasBeenSet() const;

                private:

                    /**
                     * Cluster Specification Name
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Number of Nodes
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * Peak tps
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * Peak bandwidth Unit: mbps
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * Storage capacity Unit: GB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * public network bandwidth tps. Unit: Mbps
                     */
                    uint64_t m_publicNetworkTps;
                    bool m_publicNetworkTpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERSPECINFO_H_
