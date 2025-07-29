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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_SPEC_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_SPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * Instance specification information (influxdb).
                */
                class Spec : public AbstractModel
                {
                public:
                    Spec();
                    ~Spec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1: yearly/monthly subscription; 2: bill by hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode 1: yearly/monthly subscription; 2: bill by hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置1: yearly/monthly subscription; 2: bill by hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode 1: yearly/monthly subscription; 2: bill by hour.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Request unit. 0 indicates following the resource configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RequestUnit Request unit. 0 indicates following the resource configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRequestUnit() const;

                    /**
                     * 设置Request unit. 0 indicates following the resource configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _requestUnit Request unit. 0 indicates following the resource configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRequestUnit(const uint64_t& _requestUnit);

                    /**
                     * 判断参数 RequestUnit 是否已赋值
                     * @return RequestUnit 是否已赋值
                     * 
                     */
                    bool RequestUnitHasBeenSet() const;

                    /**
                     * 获取Maximum number of CPU cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuLimit Maximum number of CPU cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCpuLimit() const;

                    /**
                     * 设置Maximum number of CPU cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpuLimit Maximum number of CPU cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpuLimit(const double& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取Maximum memory size (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemoryLimit Maximum memory size (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMemoryLimit() const;

                    /**
                     * 设置Maximum memory size (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memoryLimit Maximum memory size (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemoryLimit(const double& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取Maximum number of disks (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskLimit Maximum number of disks (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDiskLimit() const;

                    /**
                     * 设置Maximum number of disks (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskLimit Maximum number of disks (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskLimit(const uint64_t& _diskLimit);

                    /**
                     * 判断参数 DiskLimit 是否已赋值
                     * @return DiskLimit 是否已赋值
                     * 
                     */
                    bool DiskLimitHasBeenSet() const;

                    /**
                     * 获取Number of business shards.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Shards Number of business shards.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetShards() const;

                    /**
                     * 设置Number of business shards.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shards Number of business shards.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShards(const uint64_t& _shards);

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取Number of business nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Replicas Number of business nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 设置Number of business nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replicas Number of business nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplicas(const uint64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * 1: yearly/monthly subscription; 2: bill by hour.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Request unit. 0 indicates following the resource configuration.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_requestUnit;
                    bool m_requestUnitHasBeenSet;

                    /**
                     * Maximum number of CPU cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * Maximum memory size (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * Maximum number of disks (Gi).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_diskLimit;
                    bool m_diskLimitHasBeenSet;

                    /**
                     * Number of business shards.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * Number of business nodes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_SPEC_H_
