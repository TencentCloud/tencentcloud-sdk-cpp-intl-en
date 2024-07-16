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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODESSUMMARY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODESSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/AttachCBSSpec.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Node role description information
                */
                class NodesSummary : public AbstractModel
                {
                public:
                    NodesSummary();
                    ~NodesSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Model, such as S1
                     * @return Spec Model, such as S1
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Model, such as S1
                     * @param _spec Model, such as S1
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return NodeSize Number of nodes
                     * 
                     */
                    int64_t GetNodeSize() const;

                    /**
                     * 设置Number of nodes
                     * @param _nodeSize Number of nodes
                     * 
                     */
                    void SetNodeSize(const int64_t& _nodeSize);

                    /**
                     * 判断参数 NodeSize 是否已赋值
                     * @return NodeSize 是否已赋值
                     * 
                     */
                    bool NodeSizeHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores, in counts
                     * @return Core Number of CPU cores, in counts
                     * 
                     */
                    int64_t GetCore() const;

                    /**
                     * 设置Number of CPU cores, in counts
                     * @param _core Number of CPU cores, in counts
                     * 
                     */
                    void SetCore(const int64_t& _core);

                    /**
                     * 判断参数 Core 是否已赋值
                     * @return Core 是否已赋值
                     * 
                     */
                    bool CoreHasBeenSet() const;

                    /**
                     * 获取Memory size, in GB
                     * @return Memory Memory size, in GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置Memory size, in GB
                     * @param _memory Memory size, in GB
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
                     * 获取Disk size, in GB
                     * @return Disk Disk size, in GB
                     * 
                     */
                    int64_t GetDisk() const;

                    /**
                     * 设置Disk size, in GB
                     * @param _disk Disk size, in GB
                     * 
                     */
                    void SetDisk(const int64_t& _disk);

                    /**
                     * 判断参数 Disk 是否已赋值
                     * @return Disk 是否已赋值
                     * 
                     */
                    bool DiskHasBeenSet() const;

                    /**
                     * 获取Disk type
                     * @return DiskType Disk type
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type
                     * @param _diskType Disk type
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Disk description
                     * @return DiskDesc Disk description
                     * 
                     */
                    std::string GetDiskDesc() const;

                    /**
                     * 设置Disk description
                     * @param _diskDesc Disk description
                     * 
                     */
                    void SetDiskDesc(const std::string& _diskDesc);

                    /**
                     * 判断参数 DiskDesc 是否已赋值
                     * @return DiskDesc 是否已赋值
                     * 
                     */
                    bool DiskDescHasBeenSet() const;

                    /**
                     * 获取Information of mounted cloud disks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttachCBSSpec Information of mounted cloud disks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AttachCBSSpec GetAttachCBSSpec() const;

                    /**
                     * 设置Information of mounted cloud disks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attachCBSSpec Information of mounted cloud disks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttachCBSSpec(const AttachCBSSpec& _attachCBSSpec);

                    /**
                     * 判断参数 AttachCBSSpec 是否已赋值
                     * @return AttachCBSSpec 是否已赋值
                     * 
                     */
                    bool AttachCBSSpecHasBeenSet() const;

                    /**
                     * 获取Sub-product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubProductType Sub-product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubProductType() const;

                    /**
                     * 设置Sub-product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subProductType Sub-product name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubProductType(const std::string& _subProductType);

                    /**
                     * 判断参数 SubProductType 是否已赋值
                     * @return SubProductType 是否已赋值
                     * 
                     */
                    bool SubProductTypeHasBeenSet() const;

                    /**
                     * 获取Specified cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecCore Specified cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSpecCore() const;

                    /**
                     * 设置Specified cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specCore Specified cores
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecCore(const int64_t& _specCore);

                    /**
                     * 判断参数 SpecCore 是否已赋值
                     * @return SpecCore 是否已赋值
                     * 
                     */
                    bool SpecCoreHasBeenSet() const;

                    /**
                     * 获取Specified memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecMemory Specified memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSpecMemory() const;

                    /**
                     * 设置Specified memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specMemory Specified memory
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecMemory(const int64_t& _specMemory);

                    /**
                     * 判断参数 SpecMemory 是否已赋值
                     * @return SpecMemory 是否已赋值
                     * 
                     */
                    bool SpecMemoryHasBeenSet() const;

                    /**
                     * 获取Disk size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskCount Disk size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置Disk size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskCount Disk size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     * 
                     */
                    bool DiskCountHasBeenSet() const;

                    /**
                     * 获取Whether it is encrypted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Encrypt Whether it is encrypted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEncrypt() const;

                    /**
                     * 设置Whether it is encrypted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encrypt Whether it is encrypted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncrypt(const int64_t& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Maximum disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxDiskSize Maximum disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置Maximum disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxDiskSize Maximum disk
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     * 
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                private:

                    /**
                     * Model, such as S1
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    int64_t m_nodeSize;
                    bool m_nodeSizeHasBeenSet;

                    /**
                     * Number of CPU cores, in counts
                     */
                    int64_t m_core;
                    bool m_coreHasBeenSet;

                    /**
                     * Memory size, in GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Disk size, in GB
                     */
                    int64_t m_disk;
                    bool m_diskHasBeenSet;

                    /**
                     * Disk type
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk description
                     */
                    std::string m_diskDesc;
                    bool m_diskDescHasBeenSet;

                    /**
                     * Information of mounted cloud disks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AttachCBSSpec m_attachCBSSpec;
                    bool m_attachCBSSpecHasBeenSet;

                    /**
                     * Sub-product name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subProductType;
                    bool m_subProductTypeHasBeenSet;

                    /**
                     * Specified cores
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_specCore;
                    bool m_specCoreHasBeenSet;

                    /**
                     * Specified memory
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_specMemory;
                    bool m_specMemoryHasBeenSet;

                    /**
                     * Disk size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                    /**
                     * Whether it is encrypted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Maximum disk
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_NODESSUMMARY_H_
