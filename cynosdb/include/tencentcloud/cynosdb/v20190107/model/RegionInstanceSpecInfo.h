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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ZoneStockInfo4Libra.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance specifications in this region
                */
                class RegionInstanceSpecInfo : public AbstractModel
                {
                public:
                    RegionInstanceSpecInfo();
                    ~RegionInstanceSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Cpu Number of CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpu Number of CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory Memory size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memory Memory size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Minimum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinStorageSize Minimum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置Minimum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minStorageSize Minimum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinStorageSize(const int64_t& _minStorageSize);

                    /**
                     * 判断参数 MinStorageSize 是否已赋值
                     * @return MinStorageSize 是否已赋值
                     * 
                     */
                    bool MinStorageSizeHasBeenSet() const;

                    /**
                     * 获取Maximum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxStorageSize Maximum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置Maximum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxStorageSize Maximum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxStorageSize(const int64_t& _maxStorageSize);

                    /**
                     * 判断参数 MaxStorageSize 是否已赋值
                     * @return MaxStorageSize 是否已赋值
                     * 
                     */
                    bool MaxStorageSizeHasBeenSet() const;

                    /**
                     * 获取Whether there is inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HasStock Whether there is inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置Whether there is inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hasStock Whether there is inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     * 
                     */
                    bool HasStockHasBeenSet() const;

                    /**
                     * 获取Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Storage type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageType Storage type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageType Storage type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取minimum replica count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinReplicaNum minimum replica count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMinReplicaNum() const;

                    /**
                     * 设置minimum replica count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minReplicaNum minimum replica count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinReplicaNum(const uint64_t& _minReplicaNum);

                    /**
                     * 判断参数 MinReplicaNum 是否已赋值
                     * @return MinReplicaNum 是否已赋值
                     * 
                     */
                    bool MinReplicaNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxReplicaNum Maximum number of replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxReplicaNum() const;

                    /**
                     * 设置Maximum number of replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxReplicaNum Maximum number of replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxReplicaNum(const uint64_t& _maxReplicaNum);

                    /**
                     * 判断参数 MaxReplicaNum 是否已赋值
                     * @return MaxReplicaNum 是否已赋值
                     * 
                     */
                    bool MaxReplicaNumHasBeenSet() const;

                    /**
                     * 获取Availability zone inventory information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneStockInfos Availability zone inventory information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ZoneStockInfo4Libra> GetZoneStockInfos() const;

                    /**
                     * 设置Availability zone inventory information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneStockInfos Availability zone inventory information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneStockInfos(const std::vector<ZoneStockInfo4Libra>& _zoneStockInfos);

                    /**
                     * 判断参数 ZoneStockInfos 是否已赋值
                     * @return ZoneStockInfos 是否已赋值
                     * 
                     */
                    bool ZoneStockInfosHasBeenSet() const;

                private:

                    /**
                     * Number of CPU cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Minimum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * Maximum storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Whether there is inventory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * Instance type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Storage type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * minimum replica count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_minReplicaNum;
                    bool m_minReplicaNumHasBeenSet;

                    /**
                     * Maximum number of replicas
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxReplicaNum;
                    bool m_maxReplicaNumHasBeenSet;

                    /**
                     * Availability zone inventory information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ZoneStockInfo4Libra> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_
