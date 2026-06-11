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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEDATA_H_

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
                * Instance resizing task information.
                */
                class ModifyInstanceData : public AbstractModel
                {
                public:
                    ModifyInstanceData();
                    ~ModifyInstanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU after resizing.
                     * @return Cpu CPU after resizing.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置CPU after resizing.
                     * @param _cpu CPU after resizing.
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
                     * 获取Memory after resizing.
                     * @return Memory Memory after resizing.
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory after resizing.
                     * @param _memory Memory after resizing.
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
                     * 获取Storage upper limit after resizing.
                     * @return StorageLimit Storage upper limit after resizing.
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置Storage upper limit after resizing.
                     * @param _storageLimit Storage upper limit after resizing.
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
                     * 获取CPU before resizing.
                     * @return OldCpu CPU before resizing.
                     * 
                     */
                    int64_t GetOldCpu() const;

                    /**
                     * 设置CPU before resizing.
                     * @param _oldCpu CPU before resizing.
                     * 
                     */
                    void SetOldCpu(const int64_t& _oldCpu);

                    /**
                     * 判断参数 OldCpu 是否已赋值
                     * @return OldCpu 是否已赋值
                     * 
                     */
                    bool OldCpuHasBeenSet() const;

                    /**
                     * 获取Memory before resizing.
                     * @return OldMemory Memory before resizing.
                     * 
                     */
                    int64_t GetOldMemory() const;

                    /**
                     * 设置Memory before resizing.
                     * @param _oldMemory Memory before resizing.
                     * 
                     */
                    void SetOldMemory(const int64_t& _oldMemory);

                    /**
                     * 判断参数 OldMemory 是否已赋值
                     * @return OldMemory 是否已赋值
                     * 
                     */
                    bool OldMemoryHasBeenSet() const;

                    /**
                     * 获取Storage upper limit before resizing.
                     * @return OldStorageLimit Storage upper limit before resizing.
                     * 
                     */
                    int64_t GetOldStorageLimit() const;

                    /**
                     * 设置Storage upper limit before resizing.
                     * @param _oldStorageLimit Storage upper limit before resizing.
                     * 
                     */
                    void SetOldStorageLimit(const int64_t& _oldStorageLimit);

                    /**
                     * 判断参数 OldStorageLimit 是否已赋值
                     * @return OldStorageLimit 是否已赋值
                     * 
                     */
                    bool OldStorageLimitHasBeenSet() const;

                    /**
                     * 获取Instance Machine Type Before Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * @return OldDeviceType Instance Machine Type Before Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * 
                     */
                    std::string GetOldDeviceType() const;

                    /**
                     * 设置Instance Machine Type Before Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * @param _oldDeviceType Instance Machine Type Before Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * 
                     */
                    void SetOldDeviceType(const std::string& _oldDeviceType);

                    /**
                     * 判断参数 OldDeviceType 是否已赋值
                     * @return OldDeviceType 是否已赋值
                     * 
                     */
                    bool OldDeviceTypeHasBeenSet() const;

                    /**
                     * 获取Instance Machine Type After Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * @return DeviceType Instance Machine Type After Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置Instance Machine Type After Scaling
1. common, universal type.
2. exclusive, dedicated.
                     * @param _deviceType Instance Machine Type After Scaling
1. common, universal type.
2. exclusive, dedicated.
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
                     * 获取Upgrade method. Switch after upgrade completes or switch within maintenance window.
                     * @return UpgradeType Upgrade method. Switch after upgrade completes or switch within maintenance window.
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置Upgrade method. Switch after upgrade completes or switch within maintenance window.
                     * @param _upgradeType Upgrade method. Switch after upgrade completes or switch within maintenance window.
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the quantity of libra nodes.
                     * @return LibraNodeCount Specifies the quantity of libra nodes.
                     * 
                     */
                    int64_t GetLibraNodeCount() const;

                    /**
                     * 设置Specifies the quantity of libra nodes.
                     * @param _libraNodeCount Specifies the quantity of libra nodes.
                     * 
                     */
                    void SetLibraNodeCount(const int64_t& _libraNodeCount);

                    /**
                     * 判断参数 LibraNodeCount 是否已赋值
                     * @return LibraNodeCount 是否已赋值
                     * 
                     */
                    bool LibraNodeCountHasBeenSet() const;

                    /**
                     * 获取Specifies the original quantity of libra nodes.
                     * @return OldLibraNodeCount Specifies the original quantity of libra nodes.
                     * 
                     */
                    int64_t GetOldLibraNodeCount() const;

                    /**
                     * 设置Specifies the original quantity of libra nodes.
                     * @param _oldLibraNodeCount Specifies the original quantity of libra nodes.
                     * 
                     */
                    void SetOldLibraNodeCount(const int64_t& _oldLibraNodeCount);

                    /**
                     * 判断参数 OldLibraNodeCount 是否已赋值
                     * @return OldLibraNodeCount 是否已赋值
                     * 
                     */
                    bool OldLibraNodeCountHasBeenSet() const;

                private:

                    /**
                     * CPU after resizing.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory after resizing.
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Storage upper limit after resizing.
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * CPU before resizing.
                     */
                    int64_t m_oldCpu;
                    bool m_oldCpuHasBeenSet;

                    /**
                     * Memory before resizing.
                     */
                    int64_t m_oldMemory;
                    bool m_oldMemoryHasBeenSet;

                    /**
                     * Storage upper limit before resizing.
                     */
                    int64_t m_oldStorageLimit;
                    bool m_oldStorageLimitHasBeenSet;

                    /**
                     * Instance Machine Type Before Scaling
1. common, universal type.
2. exclusive, dedicated.
                     */
                    std::string m_oldDeviceType;
                    bool m_oldDeviceTypeHasBeenSet;

                    /**
                     * Instance Machine Type After Scaling
1. common, universal type.
2. exclusive, dedicated.
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * Upgrade method. Switch after upgrade completes or switch within maintenance window.
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * Specifies the quantity of libra nodes.
                     */
                    int64_t m_libraNodeCount;
                    bool m_libraNodeCountHasBeenSet;

                    /**
                     * Specifies the original quantity of libra nodes.
                     */
                    int64_t m_oldLibraNodeCount;
                    bool m_oldLibraNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEDATA_H_
