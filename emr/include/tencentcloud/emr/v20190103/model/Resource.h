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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/MultiDisk.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource details
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node specifications description, such as CVM.SA2.
                     * @return Spec Node specifications description, such as CVM.SA2.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Node specifications description, such as CVM.SA2.
                     * @param _spec Node specifications description, such as CVM.SA2.
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
                     * 获取Storage type.
Valid values:
<li>4: Cloud SSD.</li>
<li>5: Premium Cloud Disk.</li>
<li>6: Enhanced SSD.</li>
<li>11: Throughput HDD.</li>
<li>12: Tremendous SSD.</li>: this type is invalid upon creation, and automatic judgment will be conducted based on data disk type and node type.
                     * @return StorageType Storage type.
Valid values:
<li>4: Cloud SSD.</li>
<li>5: Premium Cloud Disk.</li>
<li>6: Enhanced SSD.</li>
<li>11: Throughput HDD.</li>
<li>12: Tremendous SSD.</li>: this type is invalid upon creation, and automatic judgment will be conducted based on data disk type and node type.
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置Storage type.
Valid values:
<li>4: Cloud SSD.</li>
<li>5: Premium Cloud Disk.</li>
<li>6: Enhanced SSD.</li>
<li>11: Throughput HDD.</li>
<li>12: Tremendous SSD.</li>: this type is invalid upon creation, and automatic judgment will be conducted based on data disk type and node type.
                     * @param _storageType Storage type.
Valid values:
<li>4: Cloud SSD.</li>
<li>5: Premium Cloud Disk.</li>
<li>6: Enhanced SSD.</li>
<li>11: Throughput HDD.</li>
<li>12: Tremendous SSD.</li>: this type is invalid upon creation, and automatic judgment will be conducted based on data disk type and node type.
                     * 
                     */
                    void SetStorageType(const int64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Disk type.
Valid values.
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium Cloud Disk.</li>
<li>CLOUD_BASIC: Cloud Disk.</li>
                     * @return DiskType Disk type.
Valid values.
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium Cloud Disk.</li>
<li>CLOUD_BASIC: Cloud Disk.</li>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk type.
Valid values.
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium Cloud Disk.</li>
<li>CLOUD_BASIC: Cloud Disk.</li>
                     * @param _diskType Disk type.
Valid values.
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium Cloud Disk.</li>
<li>CLOUD_BASIC: Cloud Disk.</li>
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
                     * 获取Memory capacity, in MB.
                     * @return MemSize Memory capacity, in MB.
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Memory capacity, in MB.
                     * @param _memSize Memory capacity, in MB.
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return Cpu Number of CPU cores.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpu Number of CPU cores.
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
                     * 获取Data disk capacity.
                     * @return DiskSize Data disk capacity.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Data disk capacity.
                     * @param _diskSize Data disk capacity.
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取System disk capacity.
                     * @return RootSize System disk capacity.
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置System disk capacity.
                     * @param _rootSize System disk capacity.
                     * 
                     */
                    void SetRootSize(const int64_t& _rootSize);

                    /**
                     * 判断参数 RootSize 是否已赋值
                     * @return RootSize 是否已赋值
                     * 
                     */
                    bool RootSizeHasBeenSet() const;

                    /**
                     * 获取List of cloud disks. When the data disk is a cloud disk, `DiskType` and `DiskSize` are used directly; `MultiDisks` will be used for the excessive part
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MultiDisks List of cloud disks. When the data disk is a cloud disk, `DiskType` and `DiskSize` are used directly; `MultiDisks` will be used for the excessive part
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置List of cloud disks. When the data disk is a cloud disk, `DiskType` and `DiskSize` are used directly; `MultiDisks` will be used for the excessive part
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _multiDisks List of cloud disks. When the data disk is a cloud disk, `DiskType` and `DiskSize` are used directly; `MultiDisks` will be used for the excessive part
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMultiDisks(const std::vector<MultiDisk>& _multiDisks);

                    /**
                     * 判断参数 MultiDisks 是否已赋值
                     * @return MultiDisks 是否已赋值
                     * 
                     */
                    bool MultiDisksHasBeenSet() const;

                    /**
                     * 获取List of tags to be bound
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags List of tags to be bound
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags to be bound
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _tags List of tags to be bound
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Specifications type, such as S2.MEDIUM8.
                     * @return InstanceType Specifications type, such as S2.MEDIUM8.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specifications type, such as S2.MEDIUM8.
                     * @param _instanceType Specifications type, such as S2.MEDIUM8.
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
                     * 获取Number of local disks. This field is deprecated.
                     * @return LocalDiskNum Number of local disks. This field is deprecated.
                     * 
                     */
                    uint64_t GetLocalDiskNum() const;

                    /**
                     * 设置Number of local disks. This field is deprecated.
                     * @param _localDiskNum Number of local disks. This field is deprecated.
                     * 
                     */
                    void SetLocalDiskNum(const uint64_t& _localDiskNum);

                    /**
                     * 判断参数 LocalDiskNum 是否已赋值
                     * @return LocalDiskNum 是否已赋值
                     * 
                     */
                    bool LocalDiskNumHasBeenSet() const;

                    /**
                     * 获取Number of local disks, such as 2.
                     * @return DiskNum Number of local disks, such as 2.
                     * 
                     */
                    uint64_t GetDiskNum() const;

                    /**
                     * 设置Number of local disks, such as 2.
                     * @param _diskNum Number of local disks, such as 2.
                     * 
                     */
                    void SetDiskNum(const uint64_t& _diskNum);

                    /**
                     * 判断参数 DiskNum 是否已赋值
                     * @return DiskNum 是否已赋值
                     * 
                     */
                    bool DiskNumHasBeenSet() const;

                    /**
                     * 获取GPU information.
                     * @return GpuDesc GPU information.
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置GPU information.
                     * @param _gpuDesc GPU information.
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                private:

                    /**
                     * Node specifications description, such as CVM.SA2.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Storage type.
Valid values:
<li>4: Cloud SSD.</li>
<li>5: Premium Cloud Disk.</li>
<li>6: Enhanced SSD.</li>
<li>11: Throughput HDD.</li>
<li>12: Tremendous SSD.</li>: this type is invalid upon creation, and automatic judgment will be conducted based on data disk type and node type.
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Disk type.
Valid values.
<li>CLOUD_SSD: Cloud SSD.</li>
<li>CLOUD_PREMIUM: Premium Cloud Disk.</li>
<li>CLOUD_BASIC: Cloud Disk.</li>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Memory capacity, in MB.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Data disk capacity.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * System disk capacity.
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * List of cloud disks. When the data disk is a cloud disk, `DiskType` and `DiskSize` are used directly; `MultiDisks` will be used for the excessive part
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                    /**
                     * List of tags to be bound
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Specifications type, such as S2.MEDIUM8.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Number of local disks. This field is deprecated.
                     */
                    uint64_t m_localDiskNum;
                    bool m_localDiskNumHasBeenSet;

                    /**
                     * Number of local disks, such as 2.
                     */
                    uint64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * GPU information.
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
