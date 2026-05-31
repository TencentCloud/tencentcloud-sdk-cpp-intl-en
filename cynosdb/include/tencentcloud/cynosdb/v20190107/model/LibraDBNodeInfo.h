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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBNODEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBNODEINFO_H_

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
                * LibraDB node information
                */
                class LibraDBNodeInfo : public AbstractModel
                {
                public:
                    LibraDBNodeInfo();
                    ~LibraDBNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LibraDB Node ID
                     * @return NodeId LibraDB Node ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置LibraDB Node ID
                     * @param _nodeId LibraDB Node ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Node status
                     * @return Status Node status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Node status
                     * @param _status Node status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取syncing data
                     * @return DataStatus syncing data
                     * 
                     */
                    std::string GetDataStatus() const;

                    /**
                     * 设置syncing data
                     * @param _dataStatus syncing data
                     * 
                     */
                    void SetDataStatus(const std::string& _dataStatus);

                    /**
                     * 判断参数 DataStatus 是否已赋值
                     * @return DataStatus 是否已赋值
                     * 
                     */
                    bool DataStatusHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return Cpu Number of CPU cores.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpu Number of CPU cores.
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
                     * 获取Memory size. Unit: GB.
                     * @return Memory Memory size. Unit: GB.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size. Unit: GB.
                     * @param _memory Memory size. Unit: GB.
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
                     * 获取Disk size, in GB
                     * @return Storage Disk size, in GB
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置Disk size, in GB
                     * @param _storage Disk size, in GB
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return Message Error message
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message
                     * @param _message Error message
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * LibraDB Node ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Node status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * syncing data
                     */
                    std::string m_dataStatus;
                    bool m_dataStatusHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size. Unit: GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk size, in GB
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBNODEINFO_H_
