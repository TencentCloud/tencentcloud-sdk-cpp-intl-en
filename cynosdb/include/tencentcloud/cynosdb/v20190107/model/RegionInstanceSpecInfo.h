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
                     * @return Cpu Number of CPU cores
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores
                     * @param _cpu Number of CPU cores
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
                     * @return Memory Memory size.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size.
                     * @param _memory Memory size.
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
                     * @return MinStorageSize Minimum storage size
                     * 
                     */
                    int64_t GetMinStorageSize() const;

                    /**
                     * 设置Minimum storage size
                     * @param _minStorageSize Minimum storage size
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
                     * @return MaxStorageSize Maximum storage size
                     * 
                     */
                    int64_t GetMaxStorageSize() const;

                    /**
                     * 设置Maximum storage size
                     * @param _maxStorageSize Maximum storage size
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
                     * @return HasStock Whether there is inventory
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置Whether there is inventory
                     * @param _hasStock Whether there is inventory
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
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
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
                     * @return StorageType Storage type
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type
                     * @param _storageType Storage type
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
                     * 获取Minimum replica count
                     * @return MinReplicaNum Minimum replica count
                     * 
                     */
                    uint64_t GetMinReplicaNum() const;

                    /**
                     * 设置Minimum replica count
                     * @param _minReplicaNum Minimum replica count
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
                     * @return MaxReplicaNum Maximum number of replicas
                     * 
                     */
                    uint64_t GetMaxReplicaNum() const;

                    /**
                     * 设置Maximum number of replicas
                     * @param _maxReplicaNum Maximum number of replicas
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
                     * @return ZoneStockInfos Availability zone inventory information list
                     * 
                     */
                    std::vector<ZoneStockInfo4Libra> GetZoneStockInfos() const;

                    /**
                     * 设置Availability zone inventory information list
                     * @param _zoneStockInfos Availability zone inventory information list
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
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Minimum storage size
                     */
                    int64_t m_minStorageSize;
                    bool m_minStorageSizeHasBeenSet;

                    /**
                     * Maximum storage size
                     */
                    int64_t m_maxStorageSize;
                    bool m_maxStorageSizeHasBeenSet;

                    /**
                     * Whether there is inventory
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Storage type
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Minimum replica count
                     */
                    uint64_t m_minReplicaNum;
                    bool m_minReplicaNumHasBeenSet;

                    /**
                     * Maximum number of replicas
                     */
                    uint64_t m_maxReplicaNum;
                    bool m_maxReplicaNumHasBeenSet;

                    /**
                     * Availability zone inventory information list
                     */
                    std::vector<ZoneStockInfo4Libra> m_zoneStockInfos;
                    bool m_zoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REGIONINSTANCESPECINFO_H_
