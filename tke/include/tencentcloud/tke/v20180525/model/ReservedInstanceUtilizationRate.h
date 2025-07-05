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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCEUTILIZATIONRATE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCEUTILIZATIONRATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Usage rate information of Reserved Coupons
                */
                class ReservedInstanceUtilizationRate : public AbstractModel
                {
                public:
                    ReservedInstanceUtilizationRate();
                    ~ReservedInstanceUtilizationRate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Usage rate
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Rate Usage rate
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置Usage rate
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _rate Usage rate
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Quantity of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Num Quantity of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置Quantity of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _num Quantity of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Number of cores

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return CPU Number of cores

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置Number of cores

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _cPU Number of cores

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Memory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Memory Memory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置Memory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _memory Memory

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取 Type of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Type  Type of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置 Type of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _type  Type of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return GpuNum Number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetGpuNum() const;

                    /**
                     * 设置Number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _gpuNum Number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGpuNum(const std::string& _gpuNum);

                    /**
                     * 判断参数 GpuNum 是否已赋值
                     * @return GpuNum 是否已赋值
                     * 
                     */
                    bool GpuNumHasBeenSet() const;

                    /**
                     * 获取Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Zone Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _zone Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Cluster ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ClusterId Cluster ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _clusterId Cluster ID

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Node name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return NodeName Node name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _nodeName Node name

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Number of Pods
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return PodNum Number of Pods
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetPodNum() const;

                    /**
                     * 设置Number of Pods
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _podNum Number of Pods
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPodNum(const uint64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                private:

                    /**
                     * Usage rate
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Quantity of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Number of cores

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Memory

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     *  Type of Reserved Coupons
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of GPU cards
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_gpuNum;
                    bool m_gpuNumHasBeenSet;

                    /**
                     * Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Cluster ID

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Node name

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Number of Pods
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    uint64_t m_podNum;
                    bool m_podNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RESERVEDINSTANCEUTILIZATIONRATE_H_
