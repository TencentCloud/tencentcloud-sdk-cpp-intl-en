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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEGROUPMETRICS_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEGROUPMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/MetricData.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Resource group monitoring metrics.
                */
                class ResourceGroupMetrics : public AbstractModel
                {
                public:
                    ResourceGroupMetrics();
                    ~ResourceGroupMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource group specification, indicates the number of cpus.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CpuNum Resource group specification, indicates the number of cpus.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCpuNum() const;

                    /**
                     * 设置Resource group specification, indicates the number of cpus.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cpuNum Resource group specification, indicates the number of cpus.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCpuNum(const uint64_t& _cpuNum);

                    /**
                     * 判断参数 CpuNum 是否已赋值
                     * @return CpuNum 是否已赋值
                     * 
                     */
                    bool CpuNumHasBeenSet() const;

                    /**
                     * 获取Resource group specification related to disk specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskVolume Resource group specification related to disk specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDiskVolume() const;

                    /**
                     * 设置Resource group specification related to disk specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskVolume Resource group specification related to disk specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskVolume(const uint64_t& _diskVolume);

                    /**
                     * 判断参数 DiskVolume 是否已赋值
                     * @return DiskVolume 是否已赋值
                     * 
                     */
                    bool DiskVolumeHasBeenSet() const;

                    /**
                     * 获取Resource group specification related to memory size. unit: gb.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemSize Resource group specification related to memory size. unit: gb.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置Resource group specification related to memory size. unit: gb.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memSize Resource group specification related to memory size. unit: gb.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Resource group lifecycle. unit: day.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LifeCycle Resource group lifecycle. unit: day.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLifeCycle() const;

                    /**
                     * 设置Resource group lifecycle. unit: day.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lifeCycle Resource group lifecycle. unit: day.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLifeCycle(const uint64_t& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取Resource group specification related to highest concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaximumConcurrency Resource group specification related to highest concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaximumConcurrency() const;

                    /**
                     * 设置Resource group specification related to highest concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maximumConcurrency Resource group specification related to highest concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaximumConcurrency(const uint64_t& _maximumConcurrency);

                    /**
                     * 判断参数 MaximumConcurrency 是否已赋值
                     * @return MaximumConcurrency 是否已赋值
                     * 
                     */
                    bool MaximumConcurrencyHasBeenSet() const;

                    /**
                     * 获取Resource group status

-0 - initializing.
-1. running.
-2 --- operation exception.
-Releasing.
-4 --- released.
-Creating.
-6 --- creation failed.
-7 --- updating.
-8 --- update failed.
-9 --- expired.
- 10 --- release failed.
-11 --- in use.
-12 --- inactive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Resource group status

-0 - initializing.
-1. running.
-2 --- operation exception.
-Releasing.
-4 --- released.
-Creating.
-6 --- creation failed.
-7 --- updating.
-8 --- update failed.
-9 --- expired.
- 10 --- release failed.
-11 --- in use.
-12 --- inactive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Resource group status

-0 - initializing.
-1. running.
-2 --- operation exception.
-Releasing.
-4 --- released.
-Creating.
-6 --- creation failed.
-7 --- updating.
-8 --- update failed.
-9 --- expired.
- 10 --- release failed.
-11 --- in use.
-12 --- inactive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Resource group status

-0 - initializing.
-1. running.
-2 --- operation exception.
-Releasing.
-4 --- released.
-Creating.
-6 --- creation failed.
-7 --- updating.
-8 --- update failed.
-9 --- expired.
- 10 --- release failed.
-11 --- in use.
-12 --- inactive.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Metric detail.
                     * @return MetricSnapshots Metric detail.
                     * 
                     */
                    std::vector<MetricData> GetMetricSnapshots() const;

                    /**
                     * 设置Metric detail.
                     * @param _metricSnapshots Metric detail.
                     * 
                     */
                    void SetMetricSnapshots(const std::vector<MetricData>& _metricSnapshots);

                    /**
                     * 判断参数 MetricSnapshots 是否已赋值
                     * @return MetricSnapshots 是否已赋值
                     * 
                     */
                    bool MetricSnapshotsHasBeenSet() const;

                private:

                    /**
                     * Resource group specification, indicates the number of cpus.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cpuNum;
                    bool m_cpuNumHasBeenSet;

                    /**
                     * Resource group specification related to disk specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_diskVolume;
                    bool m_diskVolumeHasBeenSet;

                    /**
                     * Resource group specification related to memory size. unit: gb.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Resource group lifecycle. unit: day.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * Resource group specification related to highest concurrency.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maximumConcurrency;
                    bool m_maximumConcurrencyHasBeenSet;

                    /**
                     * Resource group status

-0 - initializing.
-1. running.
-2 --- operation exception.
-Releasing.
-4 --- released.
-Creating.
-6 --- creation failed.
-7 --- updating.
-8 --- update failed.
-9 --- expired.
- 10 --- release failed.
-11 --- in use.
-12 --- inactive.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Metric detail.
                     */
                    std::vector<MetricData> m_metricSnapshots;
                    bool m_metricSnapshotsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_RESOURCEGROUPMETRICS_H_
