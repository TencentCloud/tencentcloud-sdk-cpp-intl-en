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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_METRICDATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_METRICDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TrendData.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Monitoring metrics
                */
                class MetricData : public AbstractModel
                {
                public:
                    MetricData();
                    ~MetricData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name

-ConcurrencyUsage --- concurrency usage rate.
-CpuCoreUsage --- cpu utilization.
-CpuLoad --- cpu load.
-DevelopQueueTask --- number of tasks in the queue.
-Number of running develop tasks.
-DevelopSchedulingTask --- number of development tasks being scheduled.
-DiskUsage --- disk usage.
-DiskUsed --- disk used amount.
-MaximumConcurrency --- maximum concurrency.
-MemoryLoad --- memory load.
-MemoryUsage --- memory usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricName Metric name

-ConcurrencyUsage --- concurrency usage rate.
-CpuCoreUsage --- cpu utilization.
-CpuLoad --- cpu load.
-DevelopQueueTask --- number of tasks in the queue.
-Number of running develop tasks.
-DevelopSchedulingTask --- number of development tasks being scheduled.
-DiskUsage --- disk usage.
-DiskUsed --- disk used amount.
-MaximumConcurrency --- maximum concurrency.
-MemoryLoad --- memory load.
-MemoryUsage --- memory usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name

-ConcurrencyUsage --- concurrency usage rate.
-CpuCoreUsage --- cpu utilization.
-CpuLoad --- cpu load.
-DevelopQueueTask --- number of tasks in the queue.
-Number of running develop tasks.
-DevelopSchedulingTask --- number of development tasks being scheduled.
-DiskUsage --- disk usage.
-DiskUsed --- disk used amount.
-MaximumConcurrency --- maximum concurrency.
-MemoryLoad --- memory load.
-MemoryUsage --- memory usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricName Metric name

-ConcurrencyUsage --- concurrency usage rate.
-CpuCoreUsage --- cpu utilization.
-CpuLoad --- cpu load.
-DevelopQueueTask --- number of tasks in the queue.
-Number of running develop tasks.
-DevelopSchedulingTask --- number of development tasks being scheduled.
-DiskUsage --- disk usage.
-DiskUsed --- disk used amount.
-MaximumConcurrency --- maximum concurrency.
-MemoryLoad --- memory load.
-MemoryUsage --- memory usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotValue Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSnapshotValue() const;

                    /**
                     * 设置Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotValue Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshotValue(const uint64_t& _snapshotValue);

                    /**
                     * 判断参数 SnapshotValue 是否已赋值
                     * @return SnapshotValue 是否已赋值
                     * 
                     */
                    bool SnapshotValueHasBeenSet() const;

                    /**
                     * 获取Metric trend.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TrendList Metric trend.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TrendData> GetTrendList() const;

                    /**
                     * 设置Metric trend.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _trendList Metric trend.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTrendList(const std::vector<TrendData>& _trendList);

                    /**
                     * 判断参数 TrendList 是否已赋值
                     * @return TrendList 是否已赋值
                     * 
                     */
                    bool TrendListHasBeenSet() const;

                private:

                    /**
                     * Metric name

-ConcurrencyUsage --- concurrency usage rate.
-CpuCoreUsage --- cpu utilization.
-CpuLoad --- cpu load.
-DevelopQueueTask --- number of tasks in the queue.
-Number of running develop tasks.
-DevelopSchedulingTask --- number of development tasks being scheduled.
-DiskUsage --- disk usage.
-DiskUsed --- disk used amount.
-MaximumConcurrency --- maximum concurrency.
-MemoryLoad --- memory load.
-MemoryUsage --- memory usage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_snapshotValue;
                    bool m_snapshotValueHasBeenSet;

                    /**
                     * Metric trend.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TrendData> m_trendList;
                    bool m_trendListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_METRICDATA_H_
