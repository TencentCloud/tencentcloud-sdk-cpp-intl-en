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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECITEM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Specifications of purchasable MongoDB instances
                */
                class SpecItem : public AbstractModel
                {
                public:
                    SpecItem();
                    ~SpecItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification information identifier
                     * @return SpecCode Specification information identifier
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置Specification information identifier
                     * @param _specCode Specification information identifier
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取Specification purchasable flag. Valid values: 0 (not purchasable), 1 (purchasable)
                     * @return Status Specification purchasable flag. Valid values: 0 (not purchasable), 1 (purchasable)
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Specification purchasable flag. Valid values: 0 (not purchasable), 1 (purchasable)
                     * @param _status Specification purchasable flag. Valid values: 0 (not purchasable), 1 (purchasable)
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Computing resource specification in terms of CPU core
                     * @return Cpu Computing resource specification in terms of CPU core
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Computing resource specification in terms of CPU core
                     * @param _cpu Computing resource specification in terms of CPU core
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory size in MB
                     * @return Memory Memory size in MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size in MB
                     * @param _memory Memory size in MB
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Default disk size in MB
                     * @return DefaultStorage Default disk size in MB
                     * 
                     */
                    uint64_t GetDefaultStorage() const;

                    /**
                     * 设置Default disk size in MB
                     * @param _defaultStorage Default disk size in MB
                     * 
                     */
                    void SetDefaultStorage(const uint64_t& _defaultStorage);

                    /**
                     * 判断参数 DefaultStorage 是否已赋值
                     * @return DefaultStorage 是否已赋值
                     * 
                     */
                    bool DefaultStorageHasBeenSet() const;

                    /**
                     * 获取Maximum disk size in MB
                     * @return MaxStorage Maximum disk size in MB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置Maximum disk size in MB
                     * @param _maxStorage Maximum disk size in MB
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
                     * 获取Minimum disk size in MB
                     * @return MinStorage Minimum disk size in MB
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置Minimum disk size in MB
                     * @param _minStorage Minimum disk size in MB
                     * 
                     */
                    void SetMinStorage(const uint64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取Maximum QPS
                     * @return Qps Maximum QPS
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Maximum QPS
                     * @param _qps Maximum QPS
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取Maximum number of connections
                     * @return Conns Maximum number of connections
                     * 
                     */
                    uint64_t GetConns() const;

                    /**
                     * 设置Maximum number of connections
                     * @param _conns Maximum number of connections
                     * 
                     */
                    void SetConns(const uint64_t& _conns);

                    /**
                     * 判断参数 Conns 是否已赋值
                     * @return Conns 是否已赋值
                     * 
                     */
                    bool ConnsHasBeenSet() const;

                    /**
                     * 获取MongoDB version information of an instance
                     * @return MongoVersionCode MongoDB version information of an instance
                     * 
                     */
                    std::string GetMongoVersionCode() const;

                    /**
                     * 设置MongoDB version information of an instance
                     * @param _mongoVersionCode MongoDB version information of an instance
                     * 
                     */
                    void SetMongoVersionCode(const std::string& _mongoVersionCode);

                    /**
                     * 判断参数 MongoVersionCode 是否已赋值
                     * @return MongoVersionCode 是否已赋值
                     * 
                     */
                    bool MongoVersionCodeHasBeenSet() const;

                    /**
                     * 获取MongoDB version number of an instance
                     * @return MongoVersionValue MongoDB version number of an instance
                     * 
                     */
                    uint64_t GetMongoVersionValue() const;

                    /**
                     * 设置MongoDB version number of an instance
                     * @param _mongoVersionValue MongoDB version number of an instance
                     * 
                     */
                    void SetMongoVersionValue(const uint64_t& _mongoVersionValue);

                    /**
                     * 判断参数 MongoVersionValue 是否已赋值
                     * @return MongoVersionValue 是否已赋值
                     * 
                     */
                    bool MongoVersionValueHasBeenSet() const;

                    /**
                     * 获取MongoDB version number of an instance (short)
                     * @return Version MongoDB version number of an instance (short)
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置MongoDB version number of an instance (short)
                     * @param _version MongoDB version number of an instance (short)
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Storage engine
                     * @return EngineName Storage engine
                     * 
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置Storage engine
                     * @param _engineName Storage engine
                     * 
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * 
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取Cluster type. Valid values: 1 (sharding cluster), 0 (replica set cluster)
                     * @return ClusterType Cluster type. Valid values: 1 (sharding cluster), 0 (replica set cluster)
                     * 
                     */
                    uint64_t GetClusterType() const;

                    /**
                     * 设置Cluster type. Valid values: 1 (sharding cluster), 0 (replica set cluster)
                     * @param _clusterType Cluster type. Valid values: 1 (sharding cluster), 0 (replica set cluster)
                     * 
                     */
                    void SetClusterType(const uint64_t& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Minimum number of secondary nodes in a replica set
                     * @return MinNodeNum Minimum number of secondary nodes in a replica set
                     * 
                     */
                    uint64_t GetMinNodeNum() const;

                    /**
                     * 设置Minimum number of secondary nodes in a replica set
                     * @param _minNodeNum Minimum number of secondary nodes in a replica set
                     * 
                     */
                    void SetMinNodeNum(const uint64_t& _minNodeNum);

                    /**
                     * 判断参数 MinNodeNum 是否已赋值
                     * @return MinNodeNum 是否已赋值
                     * 
                     */
                    bool MinNodeNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of secondary nodes in a replica set
                     * @return MaxNodeNum Maximum number of secondary nodes in a replica set
                     * 
                     */
                    uint64_t GetMaxNodeNum() const;

                    /**
                     * 设置Maximum number of secondary nodes in a replica set
                     * @param _maxNodeNum Maximum number of secondary nodes in a replica set
                     * 
                     */
                    void SetMaxNodeNum(const uint64_t& _maxNodeNum);

                    /**
                     * 判断参数 MaxNodeNum 是否已赋值
                     * @return MaxNodeNum 是否已赋值
                     * 
                     */
                    bool MaxNodeNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of shards
                     * @return MinReplicateSetNum Minimum number of shards
                     * 
                     */
                    uint64_t GetMinReplicateSetNum() const;

                    /**
                     * 设置Minimum number of shards
                     * @param _minReplicateSetNum Minimum number of shards
                     * 
                     */
                    void SetMinReplicateSetNum(const uint64_t& _minReplicateSetNum);

                    /**
                     * 判断参数 MinReplicateSetNum 是否已赋值
                     * @return MinReplicateSetNum 是否已赋值
                     * 
                     */
                    bool MinReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of shards
                     * @return MaxReplicateSetNum Maximum number of shards
                     * 
                     */
                    uint64_t GetMaxReplicateSetNum() const;

                    /**
                     * 设置Maximum number of shards
                     * @param _maxReplicateSetNum Maximum number of shards
                     * 
                     */
                    void SetMaxReplicateSetNum(const uint64_t& _maxReplicateSetNum);

                    /**
                     * 判断参数 MaxReplicateSetNum 是否已赋值
                     * @return MaxReplicateSetNum 是否已赋值
                     * 
                     */
                    bool MaxReplicateSetNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of secondary nodes in a shard
                     * @return MinReplicateSetNodeNum Minimum number of secondary nodes in a shard
                     * 
                     */
                    uint64_t GetMinReplicateSetNodeNum() const;

                    /**
                     * 设置Minimum number of secondary nodes in a shard
                     * @param _minReplicateSetNodeNum Minimum number of secondary nodes in a shard
                     * 
                     */
                    void SetMinReplicateSetNodeNum(const uint64_t& _minReplicateSetNodeNum);

                    /**
                     * 判断参数 MinReplicateSetNodeNum 是否已赋值
                     * @return MinReplicateSetNodeNum 是否已赋值
                     * 
                     */
                    bool MinReplicateSetNodeNumHasBeenSet() const;

                    /**
                     * 获取Maximum number of secondary nodes in a shard
                     * @return MaxReplicateSetNodeNum Maximum number of secondary nodes in a shard
                     * 
                     */
                    uint64_t GetMaxReplicateSetNodeNum() const;

                    /**
                     * 设置Maximum number of secondary nodes in a shard
                     * @param _maxReplicateSetNodeNum Maximum number of secondary nodes in a shard
                     * 
                     */
                    void SetMaxReplicateSetNodeNum(const uint64_t& _maxReplicateSetNodeNum);

                    /**
                     * 判断参数 MaxReplicateSetNodeNum 是否已赋值
                     * @return MaxReplicateSetNodeNum 是否已赋值
                     * 
                     */
                    bool MaxReplicateSetNodeNumHasBeenSet() const;

                    /**
                     * 获取Server type. Valid values: 0 (HIO), 4 (HIO10G)
                     * @return MachineType Server type. Valid values: 0 (HIO), 4 (HIO10G)
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置Server type. Valid values: 0 (HIO), 4 (HIO10G)
                     * @param _machineType Server type. Valid values: 0 (HIO), 4 (HIO10G)
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                private:

                    /**
                     * Specification information identifier
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * Specification purchasable flag. Valid values: 0 (not purchasable), 1 (purchasable)
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Computing resource specification in terms of CPU core
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size in MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Default disk size in MB
                     */
                    uint64_t m_defaultStorage;
                    bool m_defaultStorageHasBeenSet;

                    /**
                     * Maximum disk size in MB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * Minimum disk size in MB
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * Maximum QPS
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * Maximum number of connections
                     */
                    uint64_t m_conns;
                    bool m_connsHasBeenSet;

                    /**
                     * MongoDB version information of an instance
                     */
                    std::string m_mongoVersionCode;
                    bool m_mongoVersionCodeHasBeenSet;

                    /**
                     * MongoDB version number of an instance
                     */
                    uint64_t m_mongoVersionValue;
                    bool m_mongoVersionValueHasBeenSet;

                    /**
                     * MongoDB version number of an instance (short)
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Storage engine
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * Cluster type. Valid values: 1 (sharding cluster), 0 (replica set cluster)
                     */
                    uint64_t m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Minimum number of secondary nodes in a replica set
                     */
                    uint64_t m_minNodeNum;
                    bool m_minNodeNumHasBeenSet;

                    /**
                     * Maximum number of secondary nodes in a replica set
                     */
                    uint64_t m_maxNodeNum;
                    bool m_maxNodeNumHasBeenSet;

                    /**
                     * Minimum number of shards
                     */
                    uint64_t m_minReplicateSetNum;
                    bool m_minReplicateSetNumHasBeenSet;

                    /**
                     * Maximum number of shards
                     */
                    uint64_t m_maxReplicateSetNum;
                    bool m_maxReplicateSetNumHasBeenSet;

                    /**
                     * Minimum number of secondary nodes in a shard
                     */
                    uint64_t m_minReplicateSetNodeNum;
                    bool m_minReplicateSetNodeNumHasBeenSet;

                    /**
                     * Maximum number of secondary nodes in a shard
                     */
                    uint64_t m_maxReplicateSetNodeNum;
                    bool m_maxReplicateSetNodeNumHasBeenSet;

                    /**
                     * Server type. Valid values: 0 (HIO), 4 (HIO10G)
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECITEM_H_
