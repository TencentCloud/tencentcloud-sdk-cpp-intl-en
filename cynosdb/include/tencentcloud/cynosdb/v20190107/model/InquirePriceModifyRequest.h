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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMODIFYREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMODIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * InquirePriceModify request structure.
                */
                class InquirePriceModifyRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyRequest();
                    ~InquirePriceModifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Specifies the number of CPU cores.
                     * @return Cpu Specifies the number of CPU cores.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Specifies the number of CPU cores.
                     * @param _cpu Specifies the number of CPU cores.
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
                     * 获取Memory Size
                     * @return Memory Memory Size
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory Size
                     * @param _memory Memory Size
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
                     * 获取Storage size, storage resource adjustment: ClusterId, StorageLimit.
                     * @return StorageLimit Storage size, storage resource adjustment: ClusterId, StorageLimit.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Storage size, storage resource adjustment: ClusterId, StorageLimit.
                     * @param _storageLimit Storage size, storage resource adjustment: ClusterId, StorageLimit.
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取Instance ID. computational resource adjustment requires passing: ClusterId, instance ID, Cpu, Memory.
                     * @return InstanceId Instance ID. computational resource adjustment requires passing: ClusterId, instance ID, Cpu, Memory.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. computational resource adjustment requires passing: ClusterId, instance ID, Cpu, Memory.
                     * @param _instanceId Instance ID. computational resource adjustment requires passing: ClusterId, instance ID, Cpu, Memory.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance device type.
                     * @return DeviceType Instance device type.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance device type.
                     * @param _deviceType Instance device type.
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the ccu size of the serverless instance.
                     * @return Ccu Specifies the ccu size of the serverless instance.
                     * 
                     */
                    double GetCcu() const;

                    /**
                     * 设置Specifies the ccu size of the serverless instance.
                     * @param _ccu Specifies the ccu size of the serverless instance.
                     * 
                     */
                    void SetCcu(const double& _ccu);

                    /**
                     * 判断参数 Ccu 是否已赋值
                     * @return Ccu 是否已赋值
                     * 
                     */
                    bool CcuHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Specifies the number of CPU cores.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory Size
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage size, storage resource adjustment: ClusterId, StorageLimit.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * Instance ID. computational resource adjustment requires passing: ClusterId, instance ID, Cpu, Memory.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance device type.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Specifies the ccu size of the serverless instance.
                     */
                    double m_ccu;
                    bool m_ccuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICEMODIFYREQUEST_H_
