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
#include <tencentcloud/emr/v20190103/model/GpuImageDriverSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource details.
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Node specification description, such as CVM.SA2.</p>
                     * @return Spec <p>Node specification description, such as CVM.SA2.</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>Node specification description, such as CVM.SA2.</p>
                     * @param _spec <p>Node specification description, such as CVM.SA2.</p>
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
                     * 获取<p>Valid values:<br>&quot;LOCAL_SSD&quot;   3     // Local SSD<br>&quot;CLOUD_SSD&quot;   4     // Cloud SSD<br>&quot;CLOUD_PREMIUM&quot;  5  // Premium Disk<br>&quot;CLOUD_HSSD&quot;   6    // Enhanced SSD<br>&quot;CLOUD_THROUGHPUT&quot; 11// Throughput-Optimized Cloud Disk<br>&quot;CLOUD_TSSD&quot;  12     // Tremendous SSD<br>&quot;CLOUD_BSSD&quot;    13   // Balanced SSD<br>&quot;CLOUD_BIGDATA&quot; 14   // Big Data Cloud Disk<br>&quot;CLOUD_HIGHIO&quot;  15   // High-IO Cloud Disk </p><p>This field is invalid. The actual system disk type is determined based on the data disk type and node type. If the node supports the selected data disk type, the system disk type is consistent with the data disk. It is recommended to use the CreateCluster API.</p>
                     * @return StorageType <p>Valid values:<br>&quot;LOCAL_SSD&quot;   3     // Local SSD<br>&quot;CLOUD_SSD&quot;   4     // Cloud SSD<br>&quot;CLOUD_PREMIUM&quot;  5  // Premium Disk<br>&quot;CLOUD_HSSD&quot;   6    // Enhanced SSD<br>&quot;CLOUD_THROUGHPUT&quot; 11// Throughput-Optimized Cloud Disk<br>&quot;CLOUD_TSSD&quot;  12     // Tremendous SSD<br>&quot;CLOUD_BSSD&quot;    13   // Balanced SSD<br>&quot;CLOUD_BIGDATA&quot; 14   // Big Data Cloud Disk<br>&quot;CLOUD_HIGHIO&quot;  15   // High-IO Cloud Disk </p><p>This field is invalid. The actual system disk type is determined based on the data disk type and node type. If the node supports the selected data disk type, the system disk type is consistent with the data disk. It is recommended to use the CreateCluster API.</p>
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置<p>Valid values:<br>&quot;LOCAL_SSD&quot;   3     // Local SSD<br>&quot;CLOUD_SSD&quot;   4     // Cloud SSD<br>&quot;CLOUD_PREMIUM&quot;  5  // Premium Disk<br>&quot;CLOUD_HSSD&quot;   6    // Enhanced SSD<br>&quot;CLOUD_THROUGHPUT&quot; 11// Throughput-Optimized Cloud Disk<br>&quot;CLOUD_TSSD&quot;  12     // Tremendous SSD<br>&quot;CLOUD_BSSD&quot;    13   // Balanced SSD<br>&quot;CLOUD_BIGDATA&quot; 14   // Big Data Cloud Disk<br>&quot;CLOUD_HIGHIO&quot;  15   // High-IO Cloud Disk </p><p>This field is invalid. The actual system disk type is determined based on the data disk type and node type. If the node supports the selected data disk type, the system disk type is consistent with the data disk. It is recommended to use the CreateCluster API.</p>
                     * @param _storageType <p>Valid values:<br>&quot;LOCAL_SSD&quot;   3     // Local SSD<br>&quot;CLOUD_SSD&quot;   4     // Cloud SSD<br>&quot;CLOUD_PREMIUM&quot;  5  // Premium Disk<br>&quot;CLOUD_HSSD&quot;   6    // Enhanced SSD<br>&quot;CLOUD_THROUGHPUT&quot; 11// Throughput-Optimized Cloud Disk<br>&quot;CLOUD_TSSD&quot;  12     // Tremendous SSD<br>&quot;CLOUD_BSSD&quot;    13   // Balanced SSD<br>&quot;CLOUD_BIGDATA&quot; 14   // Big Data Cloud Disk<br>&quot;CLOUD_HIGHIO&quot;  15   // High-IO Cloud Disk </p><p>This field is invalid. The actual system disk type is determined based on the data disk type and node type. If the node supports the selected data disk type, the system disk type is consistent with the data disk. It is recommended to use the CreateCluster API.</p>
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
                     * 获取<p>Data disk type. Valid values:</p><p>CLOUD_SSD: Cloud SSD</p><p>CLOUD_PREMIUM: Premium Disk</p><p>CLOUD_BASIC: Cloud Basic Disk</p><p>LOCAL_BASIC: Local Basic Disk</p><p>LOCAL_SSD: Local SSD</p><p>CLOUD_HSSD: Enhanced SSD</p><p>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</p><p>CLOUD_TSSD: Tremendous SSD</p><p>CLOUD_BIGDATA: Big Data Cloud Disk</p><p>CLOUD_HIGHIO: High-IO Cloud Disk</p><p>CLOUD_BSSD: Balanced SSD</p><p>REMOTE_SSD: Remote SSD Disk</p>
                     * @return DiskType <p>Data disk type. Valid values:</p><p>CLOUD_SSD: Cloud SSD</p><p>CLOUD_PREMIUM: Premium Disk</p><p>CLOUD_BASIC: Cloud Basic Disk</p><p>LOCAL_BASIC: Local Basic Disk</p><p>LOCAL_SSD: Local SSD</p><p>CLOUD_HSSD: Enhanced SSD</p><p>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</p><p>CLOUD_TSSD: Tremendous SSD</p><p>CLOUD_BIGDATA: Big Data Cloud Disk</p><p>CLOUD_HIGHIO: High-IO Cloud Disk</p><p>CLOUD_BSSD: Balanced SSD</p><p>REMOTE_SSD: Remote SSD Disk</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>Data disk type. Valid values:</p><p>CLOUD_SSD: Cloud SSD</p><p>CLOUD_PREMIUM: Premium Disk</p><p>CLOUD_BASIC: Cloud Basic Disk</p><p>LOCAL_BASIC: Local Basic Disk</p><p>LOCAL_SSD: Local SSD</p><p>CLOUD_HSSD: Enhanced SSD</p><p>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</p><p>CLOUD_TSSD: Tremendous SSD</p><p>CLOUD_BIGDATA: Big Data Cloud Disk</p><p>CLOUD_HIGHIO: High-IO Cloud Disk</p><p>CLOUD_BSSD: Balanced SSD</p><p>REMOTE_SSD: Remote SSD Disk</p>
                     * @param _diskType <p>Data disk type. Valid values:</p><p>CLOUD_SSD: Cloud SSD</p><p>CLOUD_PREMIUM: Premium Disk</p><p>CLOUD_BASIC: Cloud Basic Disk</p><p>LOCAL_BASIC: Local Basic Disk</p><p>LOCAL_SSD: Local SSD</p><p>CLOUD_HSSD: Enhanced SSD</p><p>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</p><p>CLOUD_TSSD: Tremendous SSD</p><p>CLOUD_BIGDATA: Big Data Cloud Disk</p><p>CLOUD_HIGHIO: High-IO Cloud Disk</p><p>CLOUD_BSSD: Balanced SSD</p><p>REMOTE_SSD: Remote SSD Disk</p>
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
                     * 获取<p>Memory capacity (MB).</p>
                     * @return MemSize <p>Memory capacity (MB).</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory capacity (MB).</p>
                     * @param _memSize <p>Memory capacity (MB).</p>
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
                     * 获取<p>Number of CPU cores.</p>
                     * @return Cpu <p>Number of CPU cores.</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Number of CPU cores.</p>
                     * @param _cpu <p>Number of CPU cores.</p>
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
                     * 获取<p>Data disk capacity.</p>
                     * @return DiskSize <p>Data disk capacity.</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Data disk capacity.</p>
                     * @param _diskSize <p>Data disk capacity.</p>
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
                     * 获取<p>System disk capacity.</p>
                     * @return RootSize <p>System disk capacity.</p>
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置<p>System disk capacity.</p>
                     * @param _rootSize <p>System disk capacity.</p>
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
                     * 获取<p>Cloud disk list. When the data disk is a single cloud disk, use the DiskType and DiskSize parameters directly. Use MultiDisks for extra disks.</p>
                     * @return MultiDisks <p>Cloud disk list. When the data disk is a single cloud disk, use the DiskType and DiskSize parameters directly. Use MultiDisks for extra disks.</p>
                     * 
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置<p>Cloud disk list. When the data disk is a single cloud disk, use the DiskType and DiskSize parameters directly. Use MultiDisks for extra disks.</p>
                     * @param _multiDisks <p>Cloud disk list. When the data disk is a single cloud disk, use the DiskType and DiskSize parameters directly. Use MultiDisks for extra disks.</p>
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
                     * 获取<p>List of tags to be bound.</p>
                     * @return Tags <p>List of tags to be bound.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tags to be bound.</p>
                     * @param _tags <p>List of tags to be bound.</p>
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
                     * 获取<p>Specifications type, such as S2.MEDIUM8.</p>
                     * @return InstanceType <p>Specifications type, such as S2.MEDIUM8.</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>Specifications type, such as S2.MEDIUM8.</p>
                     * @param _instanceType <p>Specifications type, such as S2.MEDIUM8.</p>
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
                     * 获取<p>Number of local disks. This field has been deprecated.</p>
                     * @return LocalDiskNum <p>Number of local disks. This field has been deprecated.</p>
                     * 
                     */
                    uint64_t GetLocalDiskNum() const;

                    /**
                     * 设置<p>Number of local disks. This field has been deprecated.</p>
                     * @param _localDiskNum <p>Number of local disks. This field has been deprecated.</p>
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
                     * 获取<p>Number of local disks, such as 2.</p>
                     * @return DiskNum <p>Number of local disks, such as 2.</p>
                     * 
                     */
                    uint64_t GetDiskNum() const;

                    /**
                     * 设置<p>Number of local disks, such as 2.</p>
                     * @param _diskNum <p>Number of local disks, such as 2.</p>
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
                     * 获取<p>GPU information.</p>
                     * @return GpuDesc <p>GPU information.</p>
                     * 
                     */
                    std::string GetGpuDesc() const;

                    /**
                     * 设置<p>GPU information.</p>
                     * @param _gpuDesc <p>GPU information.</p>
                     * 
                     */
                    void SetGpuDesc(const std::string& _gpuDesc);

                    /**
                     * 判断参数 GpuDesc 是否已赋值
                     * @return GpuDesc 是否已赋值
                     * 
                     */
                    bool GpuDescHasBeenSet() const;

                    /**
                     * 获取<p>Number of partitions in a placement group.</p>
                     * @return PartitionNumber <p>Number of partitions in a placement group.</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>Number of partitions in a placement group.</p>
                     * @param _partitionNumber <p>Number of partitions in a placement group.</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取<p>High-performance cluster ID.</p>
                     * @return HCCHpcClusterId <p>High-performance cluster ID.</p>
                     * 
                     */
                    std::string GetHCCHpcClusterId() const;

                    /**
                     * 设置<p>High-performance cluster ID.</p>
                     * @param _hCCHpcClusterId <p>High-performance cluster ID.</p>
                     * 
                     */
                    void SetHCCHpcClusterId(const std::string& _hCCHpcClusterId);

                    /**
                     * 判断参数 HCCHpcClusterId 是否已赋值
                     * @return HCCHpcClusterId 是否已赋值
                     * 
                     */
                    bool HCCHpcClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Custom hostname.</p>
                     * @return CustomNodeName <p>Custom hostname.</p>
                     * 
                     */
                    std::string GetCustomNodeName() const;

                    /**
                     * 设置<p>Custom hostname.</p>
                     * @param _customNodeName <p>Custom hostname.</p>
                     * 
                     */
                    void SetCustomNodeName(const std::string& _customNodeName);

                    /**
                     * 判断参数 CustomNodeName 是否已赋值
                     * @return CustomNodeName 是否已赋值
                     * 
                     */
                    bool CustomNodeNameHasBeenSet() const;

                    /**
                     * 获取<p>GPU image driver configuration.</p>
                     * @return GpuImageDriver <p>GPU image driver configuration.</p>
                     * 
                     */
                    GpuImageDriverSpec GetGpuImageDriver() const;

                    /**
                     * 设置<p>GPU image driver configuration.</p>
                     * @param _gpuImageDriver <p>GPU image driver configuration.</p>
                     * 
                     */
                    void SetGpuImageDriver(const GpuImageDriverSpec& _gpuImageDriver);

                    /**
                     * 判断参数 GpuImageDriver 是否已赋值
                     * @return GpuImageDriver 是否已赋值
                     * 
                     */
                    bool GpuImageDriverHasBeenSet() const;

                private:

                    /**
                     * <p>Node specification description, such as CVM.SA2.</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>Valid values:<br>&quot;LOCAL_SSD&quot;   3     // Local SSD<br>&quot;CLOUD_SSD&quot;   4     // Cloud SSD<br>&quot;CLOUD_PREMIUM&quot;  5  // Premium Disk<br>&quot;CLOUD_HSSD&quot;   6    // Enhanced SSD<br>&quot;CLOUD_THROUGHPUT&quot; 11// Throughput-Optimized Cloud Disk<br>&quot;CLOUD_TSSD&quot;  12     // Tremendous SSD<br>&quot;CLOUD_BSSD&quot;    13   // Balanced SSD<br>&quot;CLOUD_BIGDATA&quot; 14   // Big Data Cloud Disk<br>&quot;CLOUD_HIGHIO&quot;  15   // High-IO Cloud Disk </p><p>This field is invalid. The actual system disk type is determined based on the data disk type and node type. If the node supports the selected data disk type, the system disk type is consistent with the data disk. It is recommended to use the CreateCluster API.</p>
                     */
                    int64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Data disk type. Valid values:</p><p>CLOUD_SSD: Cloud SSD</p><p>CLOUD_PREMIUM: Premium Disk</p><p>CLOUD_BASIC: Cloud Basic Disk</p><p>LOCAL_BASIC: Local Basic Disk</p><p>LOCAL_SSD: Local SSD</p><p>CLOUD_HSSD: Enhanced SSD</p><p>CLOUD_THROUGHPUT: Throughput-Optimized Cloud Disk</p><p>CLOUD_TSSD: Tremendous SSD</p><p>CLOUD_BIGDATA: Big Data Cloud Disk</p><p>CLOUD_HIGHIO: High-IO Cloud Disk</p><p>CLOUD_BSSD: Balanced SSD</p><p>REMOTE_SSD: Remote SSD Disk</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>Memory capacity (MB).</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Number of CPU cores.</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Data disk capacity.</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>System disk capacity.</p>
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * <p>Cloud disk list. When the data disk is a single cloud disk, use the DiskType and DiskSize parameters directly. Use MultiDisks for extra disks.</p>
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                    /**
                     * <p>List of tags to be bound.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Specifications type, such as S2.MEDIUM8.</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>Number of local disks. This field has been deprecated.</p>
                     */
                    uint64_t m_localDiskNum;
                    bool m_localDiskNumHasBeenSet;

                    /**
                     * <p>Number of local disks, such as 2.</p>
                     */
                    uint64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * <p>GPU information.</p>
                     */
                    std::string m_gpuDesc;
                    bool m_gpuDescHasBeenSet;

                    /**
                     * <p>Number of partitions in a placement group.</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <p>High-performance cluster ID.</p>
                     */
                    std::string m_hCCHpcClusterId;
                    bool m_hCCHpcClusterIdHasBeenSet;

                    /**
                     * <p>Custom hostname.</p>
                     */
                    std::string m_customNodeName;
                    bool m_customNodeNameHasBeenSet;

                    /**
                     * <p>GPU image driver configuration.</p>
                     */
                    GpuImageDriverSpec m_gpuImageDriver;
                    bool m_gpuImageDriverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCE_H_
