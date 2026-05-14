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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_AUTOPROFILINGCONFIG_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_AUTOPROFILINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Automated performance analysis configuration
                */
                class AutoProfilingConfig : public AbstractModel
                {
                public:
                    AutoProfilingConfig();
                    ~AutoProfilingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto CPU profiling task switch
                     * @return CpuProfilingEnable Auto CPU profiling task switch
                     * 
                     */
                    bool GetCpuProfilingEnable() const;

                    /**
                     * 设置Auto CPU profiling task switch
                     * @param _cpuProfilingEnable Auto CPU profiling task switch
                     * 
                     */
                    void SetCpuProfilingEnable(const bool& _cpuProfilingEnable);

                    /**
                     * 判断参数 CpuProfilingEnable 是否已赋值
                     * @return CpuProfilingEnable 是否已赋值
                     * 
                     */
                    bool CpuProfilingEnableHasBeenSet() const;

                    /**
                     * 获取Auto memory profiling task switch
                     * @return MemoryProfilingEnable Auto memory profiling task switch
                     * 
                     */
                    bool GetMemoryProfilingEnable() const;

                    /**
                     * 设置Auto memory profiling task switch
                     * @param _memoryProfilingEnable Auto memory profiling task switch
                     * 
                     */
                    void SetMemoryProfilingEnable(const bool& _memoryProfilingEnable);

                    /**
                     * 判断参数 MemoryProfilingEnable 是否已赋值
                     * @return MemoryProfilingEnable 是否已赋值
                     * 
                     */
                    bool MemoryProfilingEnableHasBeenSet() const;

                    /**
                     * 获取Auto CPU profiling task threshold
                     * @return CpuProfilingThreshold Auto CPU profiling task threshold
                     * 
                     */
                    int64_t GetCpuProfilingThreshold() const;

                    /**
                     * 设置Auto CPU profiling task threshold
                     * @param _cpuProfilingThreshold Auto CPU profiling task threshold
                     * 
                     */
                    void SetCpuProfilingThreshold(const int64_t& _cpuProfilingThreshold);

                    /**
                     * 判断参数 CpuProfilingThreshold 是否已赋值
                     * @return CpuProfilingThreshold 是否已赋值
                     * 
                     */
                    bool CpuProfilingThresholdHasBeenSet() const;

                    /**
                     * 获取Automated memory profiling task threshold
                     * @return MemoryProfilingThreshold Automated memory profiling task threshold
                     * 
                     */
                    int64_t GetMemoryProfilingThreshold() const;

                    /**
                     * 设置Automated memory profiling task threshold
                     * @param _memoryProfilingThreshold Automated memory profiling task threshold
                     * 
                     */
                    void SetMemoryProfilingThreshold(const int64_t& _memoryProfilingThreshold);

                    /**
                     * 判断参数 MemoryProfilingThreshold 是否已赋值
                     * @return MemoryProfilingThreshold 是否已赋值
                     * 
                     */
                    bool MemoryProfilingThresholdHasBeenSet() const;

                    /**
                     * 获取CPU auto profiling task duration
                     * @return CpuProfilingDuration CPU auto profiling task duration
                     * 
                     */
                    int64_t GetCpuProfilingDuration() const;

                    /**
                     * 设置CPU auto profiling task duration
                     * @param _cpuProfilingDuration CPU auto profiling task duration
                     * 
                     */
                    void SetCpuProfilingDuration(const int64_t& _cpuProfilingDuration);

                    /**
                     * 判断参数 CpuProfilingDuration 是否已赋值
                     * @return CpuProfilingDuration 是否已赋值
                     * 
                     */
                    bool CpuProfilingDurationHasBeenSet() const;

                    /**
                     * 获取Memory auto profiling task duration
                     * @return MemoryProfilingDuration Memory auto profiling task duration
                     * 
                     */
                    int64_t GetMemoryProfilingDuration() const;

                    /**
                     * 设置Memory auto profiling task duration
                     * @param _memoryProfilingDuration Memory auto profiling task duration
                     * 
                     */
                    void SetMemoryProfilingDuration(const int64_t& _memoryProfilingDuration);

                    /**
                     * 判断参数 MemoryProfilingDuration 是否已赋值
                     * @return MemoryProfilingDuration 是否已赋值
                     * 
                     */
                    bool MemoryProfilingDurationHasBeenSet() const;

                private:

                    /**
                     * Auto CPU profiling task switch
                     */
                    bool m_cpuProfilingEnable;
                    bool m_cpuProfilingEnableHasBeenSet;

                    /**
                     * Auto memory profiling task switch
                     */
                    bool m_memoryProfilingEnable;
                    bool m_memoryProfilingEnableHasBeenSet;

                    /**
                     * Auto CPU profiling task threshold
                     */
                    int64_t m_cpuProfilingThreshold;
                    bool m_cpuProfilingThresholdHasBeenSet;

                    /**
                     * Automated memory profiling task threshold
                     */
                    int64_t m_memoryProfilingThreshold;
                    bool m_memoryProfilingThresholdHasBeenSet;

                    /**
                     * CPU auto profiling task duration
                     */
                    int64_t m_cpuProfilingDuration;
                    bool m_cpuProfilingDurationHasBeenSet;

                    /**
                     * Memory auto profiling task duration
                     */
                    int64_t m_memoryProfilingDuration;
                    bool m_memoryProfilingDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_AUTOPROFILINGCONFIG_H_
