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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESOURCE_H_

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
                * Resource queried for price
                */
                class PriceResource : public AbstractModel
                {
                public:
                    PriceResource();
                    ~PriceResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Required specifications.
                     * @return Spec Required specifications.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Required specifications.
                     * @param _spec Required specifications.
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
                     * 获取Hard disk type.
                     * @return StorageType Hard disk type.
                     * 
                     */
                    uint64_t GetStorageType() const;

                    /**
                     * 设置Hard disk type.
                     * @param _storageType Hard disk type.
                     * 
                     */
                    void SetStorageType(const uint64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Hard disk type.
                     * @return DiskType Hard disk type.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Hard disk type.
                     * @param _diskType Hard disk type.
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
                     * 获取System disk size.
                     * @return RootSize System disk size.
                     * 
                     */
                    int64_t GetRootSize() const;

                    /**
                     * 设置System disk size.
                     * @param _rootSize System disk size.
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
                     * 获取Memory size.
                     * @return MemSize Memory size.
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Memory size.
                     * @param _memSize Memory size.
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
                     * 获取Number of cores.
                     * @return Cpu Number of cores.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of cores.
                     * @param _cpu Number of cores.
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
                     * 获取Hard disk size.
                     * @return DiskSize Hard disk size.
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Hard disk size.
                     * @param _diskSize Hard disk size.
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
                     * 获取List of cloud disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MultiDisks List of cloud disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MultiDisk> GetMultiDisks() const;

                    /**
                     * 设置List of cloud disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _multiDisks List of cloud disks.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of disks.
                     * @return DiskCnt Number of disks.
                     * 
                     */
                    int64_t GetDiskCnt() const;

                    /**
                     * 设置Number of disks.
                     * @param _diskCnt Number of disks.
                     * 
                     */
                    void SetDiskCnt(const int64_t& _diskCnt);

                    /**
                     * 判断参数 DiskCnt 是否已赋值
                     * @return DiskCnt 是否已赋值
                     * 
                     */
                    bool DiskCntHasBeenSet() const;

                    /**
                     * 获取Specifications.
                     * @return InstanceType Specifications.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Specifications.
                     * @param _instanceType Specifications.
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
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of disks.
                     * @return DiskNum Number of disks.
                     * 
                     */
                    int64_t GetDiskNum() const;

                    /**
                     * 设置Number of disks.
                     * @param _diskNum Number of disks.
                     * 
                     */
                    void SetDiskNum(const int64_t& _diskNum);

                    /**
                     * 判断参数 DiskNum 是否已赋值
                     * @return DiskNum 是否已赋值
                     * 
                     */
                    bool DiskNumHasBeenSet() const;

                    /**
                     * 获取Number of local disks.
                     * @return LocalDiskNum Number of local disks.
                     * 
                     */
                    int64_t GetLocalDiskNum() const;

                    /**
                     * 设置Number of local disks.
                     * @param _localDiskNum Number of local disks.
                     * 
                     */
                    void SetLocalDiskNum(const int64_t& _localDiskNum);

                    /**
                     * 判断参数 LocalDiskNum 是否已赋值
                     * @return LocalDiskNum 是否已赋值
                     * 
                     */
                    bool LocalDiskNumHasBeenSet() const;

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
                     * Required specifications.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Hard disk type.
                     */
                    uint64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Hard disk type.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * System disk size.
                     */
                    int64_t m_rootSize;
                    bool m_rootSizeHasBeenSet;

                    /**
                     * Memory size.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Number of cores.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Hard disk size.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * List of cloud disks.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MultiDisk> m_multiDisks;
                    bool m_multiDisksHasBeenSet;

                    /**
                     * Number of disks.
                     */
                    int64_t m_diskCnt;
                    bool m_diskCntHasBeenSet;

                    /**
                     * Specifications.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Number of disks.
                     */
                    int64_t m_diskNum;
                    bool m_diskNumHasBeenSet;

                    /**
                     * Number of local disks.
                     */
                    int64_t m_localDiskNum;
                    bool m_localDiskNumHasBeenSet;

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

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PRICERESOURCE_H_
