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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBINSTANCEINITINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBINSTANCEINITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * libra instance initialization info
                */
                class LibraDBInstanceInitInfo : public AbstractModel
                {
                public:
                    LibraDBInstanceInitInfo();
                    ~LibraDBInstanceInitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu
                     * @return Cpu cpu
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置cpu
                     * @param _cpu cpu
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
                     * 获取memory
                     * @return Memory memory
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置memory
                     * @param _memory memory
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
                     * 获取hard disk
                     * @return StorageSize hard disk
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置hard disk
                     * @param _storageSize hard disk
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

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
                     * 获取Instance version
                     * @return LibraDBVersion Instance version
                     * 
                     */
                    std::string GetLibraDBVersion() const;

                    /**
                     * 设置Instance version
                     * @param _libraDBVersion Instance version
                     * 
                     */
                    void SetLibraDBVersion(const std::string& _libraDBVersion);

                    /**
                     * 判断参数 LibraDBVersion 是否已赋值
                     * @return LibraDBVersion 是否已赋值
                     * 
                     */
                    bool LibraDBVersionHasBeenSet() const;

                    /**
                     * 获取Instance count
                     * @return InstanceCount Instance count
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Instance count
                     * @param _instanceCount Instance count
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取subnet id
                     * @return SubnetId subnet id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置subnet id
                     * @param _subnetId subnet id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Number of instance replicas to purchase
                     * @return ReplicasNum Number of instance replicas to purchase
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 设置Number of instance replicas to purchase
                     * @param _replicasNum Number of instance replicas to purchase
                     * 
                     */
                    void SetReplicasNum(const int64_t& _replicasNum);

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                private:

                    /**
                     * cpu
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * memory
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * hard disk
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * Storage type
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance version
                     */
                    std::string m_libraDBVersion;
                    bool m_libraDBVersionHasBeenSet;

                    /**
                     * Instance count
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * subnet id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Port.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Number of instance replicas to purchase
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBINSTANCEINITINFO_H_
