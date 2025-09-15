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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class ResourceDetail : public AbstractModel
                {
                public:
                    ResourceDetail();
                    ~ResourceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifications.
                     * @return Spec Specifications.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Specifications.
                     * @param _spec Specifications.
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
                     * 获取Specifications name.
                     * @return SpecName Specifications name.
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置Specifications name.
                     * @param _specName Specifications name.
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取Hard disk type.
                     * @return StorageType Hard disk type.
                     * 
                     */
                    int64_t GetStorageType() const;

                    /**
                     * 设置Hard disk type.
                     * @param _storageType Hard disk type.
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
                     * 获取Number of CPUs.
                     * @return Cpu Number of CPUs.
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Number of CPUs.
                     * @param _cpu Number of CPUs.
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

                private:

                    /**
                     * Specifications.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Specifications name.
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * Hard disk type.
                     */
                    int64_t m_storageType;
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
                     * Number of CPUs.
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Hard disk size.
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Specifications.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RESOURCEDETAIL_H_
