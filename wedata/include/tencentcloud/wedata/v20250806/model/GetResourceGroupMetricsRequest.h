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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEGROUPMETRICSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEGROUPMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetResourceGroupMetrics request structure.
                */
                class GetResourceGroupMetricsRequest : public AbstractModel
                {
                public:
                    GetResourceGroupMetricsRequest();
                    ~GetResourceGroupMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Execution resource group id.
                     * @return ResourceGroupId Execution resource group id.
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置Execution resource group id.
                     * @param _resourceGroupId Execution resource group id.
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取Start time of usage trend (ms). default last hour.
                     * @return StartTime Start time of usage trend (ms). default last hour.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time of usage trend (ms). default last hour.
                     * @param _startTime Start time of usage trend (ms). default last hour.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Usage trend end time (ms), default current.
                     * @return EndTime Usage trend end time (ms), default current.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Usage trend end time (ms), default current.
                     * @param _endTime Usage trend end time (ms), default current.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Metrics and dimensions.

-all.
-task metrics.
-system metrics.
                     * @return MetricType Metrics and dimensions.

-all.
-task metrics.
-system metrics.
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置Metrics and dimensions.

-all.
-task metrics.
-system metrics.
                     * @param _metricType Metrics and dimensions.

-all.
-task metrics.
-system metrics.
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取Metric collection granularity, in minutes, default 1 minute.
                     * @return Granularity Metric collection granularity, in minutes, default 1 minute.
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Metric collection granularity, in minutes, default 1 minute.
                     * @param _granularity Metric collection granularity, in minutes, default 1 minute.
                     * 
                     */
                    void SetGranularity(const uint64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * Execution resource group id.
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * Start time of usage trend (ms). default last hour.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Usage trend end time (ms), default current.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metrics and dimensions.

-all.
-task metrics.
-system metrics.
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * Metric collection granularity, in minutes, default 1 minute.
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETRESOURCEGROUPMETRICSREQUEST_H_
