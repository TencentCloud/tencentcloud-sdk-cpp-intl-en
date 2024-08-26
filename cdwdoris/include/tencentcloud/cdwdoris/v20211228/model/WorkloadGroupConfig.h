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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Resource group configuration
                */
                class WorkloadGroupConfig : public AbstractModel
                {
                public:
                    WorkloadGroupConfig();
                    ~WorkloadGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkloadGroupName Resource group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkloadGroupName() const;

                    /**
                     * 设置Resource group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workloadGroupName Resource group name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkloadGroupName(const std::string& _workloadGroupName);

                    /**
                     * 判断参数 WorkloadGroupName 是否已赋值
                     * @return WorkloadGroupName 是否已赋值
                     * 
                     */
                    bool WorkloadGroupNameHasBeenSet() const;

                    /**
                     * 获取CPU weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuShare CPU weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCpuShare() const;

                    /**
                     * 设置CPU weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpuShare CPU weight
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpuShare(const int64_t& _cpuShare);

                    /**
                     * 判断参数 CpuShare 是否已赋值
                     * @return CpuShare 是否已赋值
                     * 
                     */
                    bool CpuShareHasBeenSet() const;

                    /**
                     * 获取Memory limit. The sum of memory limit values of all resource groups should be less than or equal to 100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemoryLimit Memory limit. The sum of memory limit values of all resource groups should be less than or equal to 100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemoryLimit() const;

                    /**
                     * 设置Memory limit. The sum of memory limit values of all resource groups should be less than or equal to 100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memoryLimit Memory limit. The sum of memory limit values of all resource groups should be less than or equal to 100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemoryLimit(const int64_t& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取Whether to allow over-allocation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnableMemoryOverCommit Whether to allow over-allocation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnableMemoryOverCommit() const;

                    /**
                     * 设置Whether to allow over-allocation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enableMemoryOverCommit Whether to allow over-allocation
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnableMemoryOverCommit(const bool& _enableMemoryOverCommit);

                    /**
                     * 判断参数 EnableMemoryOverCommit 是否已赋值
                     * @return EnableMemoryOverCommit 是否已赋值
                     * 
                     */
                    bool EnableMemoryOverCommitHasBeenSet() const;

                    /**
                     * 获取CPU hard limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuHardLimit CPU hard limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCpuHardLimit() const;

                    /**
                     * 设置CPU hard limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpuHardLimit CPU hard limit
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpuHardLimit(const std::string& _cpuHardLimit);

                    /**
                     * 判断参数 CpuHardLimit 是否已赋值
                     * @return CpuHardLimit 是否已赋值
                     * 
                     */
                    bool CpuHardLimitHasBeenSet() const;

                private:

                    /**
                     * Resource group name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workloadGroupName;
                    bool m_workloadGroupNameHasBeenSet;

                    /**
                     * CPU weight
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cpuShare;
                    bool m_cpuShareHasBeenSet;

                    /**
                     * Memory limit. The sum of memory limit values of all resource groups should be less than or equal to 100.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * Whether to allow over-allocation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableMemoryOverCommit;
                    bool m_enableMemoryOverCommitHasBeenSet;

                    /**
                     * CPU hard limit
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cpuHardLimit;
                    bool m_cpuHardLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_WORKLOADGROUPCONFIG_H_
