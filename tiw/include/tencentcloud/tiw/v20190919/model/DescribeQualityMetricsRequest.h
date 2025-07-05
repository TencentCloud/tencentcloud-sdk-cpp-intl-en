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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEQUALITYMETRICSREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEQUALITYMETRICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeQualityMetrics request structure.
                */
                class DescribeQualityMetricsRequest : public AbstractModel
                {
                public:
                    DescribeQualityMetricsRequest();
                    ~DescribeQualityMetricsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Start time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * @return StartTime Start time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * @param _startTime Start time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * @return EndTime End time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * @param _endTime End time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Metrics to be queried. Valid values:
  - image_load_total_count: The number of image loads.
  - image_load_fail_count: The number of image load failures.
  - image_load_success_rate: The success rate of image loading, in percentage.
  - ppt_load_total_count: The number of PowerPoint file loads.
  - ppt_load_fail_count: The number of PowerPoint file load failures.
  - ppt_load_success_rate: The success rate of PowerPoint file loading, in percentage.
  - verify_sdk_total_count: The number of SDK verifications.
  - verify_sdk_fail_count: The number of SDK verification failures.
  - verify_sdk_success_rate: The success rate of SDK verification, in percentage.
  - verify_sdk_in_one_second_rate: The rate of SDK verification completed within one second, in percentage.
  - verify_sdk_cost_avg: The average time taken by each SDK verification, in milliseconds.
                     * @return Metric Metrics to be queried. Valid values:
  - image_load_total_count: The number of image loads.
  - image_load_fail_count: The number of image load failures.
  - image_load_success_rate: The success rate of image loading, in percentage.
  - ppt_load_total_count: The number of PowerPoint file loads.
  - ppt_load_fail_count: The number of PowerPoint file load failures.
  - ppt_load_success_rate: The success rate of PowerPoint file loading, in percentage.
  - verify_sdk_total_count: The number of SDK verifications.
  - verify_sdk_fail_count: The number of SDK verification failures.
  - verify_sdk_success_rate: The success rate of SDK verification, in percentage.
  - verify_sdk_in_one_second_rate: The rate of SDK verification completed within one second, in percentage.
  - verify_sdk_cost_avg: The average time taken by each SDK verification, in milliseconds.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Metrics to be queried. Valid values:
  - image_load_total_count: The number of image loads.
  - image_load_fail_count: The number of image load failures.
  - image_load_success_rate: The success rate of image loading, in percentage.
  - ppt_load_total_count: The number of PowerPoint file loads.
  - ppt_load_fail_count: The number of PowerPoint file load failures.
  - ppt_load_success_rate: The success rate of PowerPoint file loading, in percentage.
  - verify_sdk_total_count: The number of SDK verifications.
  - verify_sdk_fail_count: The number of SDK verification failures.
  - verify_sdk_success_rate: The success rate of SDK verification, in percentage.
  - verify_sdk_in_one_second_rate: The rate of SDK verification completed within one second, in percentage.
  - verify_sdk_cost_avg: The average time taken by each SDK verification, in milliseconds.
                     * @param _metric Metrics to be queried. Valid values:
  - image_load_total_count: The number of image loads.
  - image_load_fail_count: The number of image load failures.
  - image_load_success_rate: The success rate of image loading, in percentage.
  - ppt_load_total_count: The number of PowerPoint file loads.
  - ppt_load_fail_count: The number of PowerPoint file load failures.
  - ppt_load_success_rate: The success rate of PowerPoint file loading, in percentage.
  - verify_sdk_total_count: The number of SDK verifications.
  - verify_sdk_fail_count: The number of SDK verification failures.
  - verify_sdk_success_rate: The success rate of SDK verification, in percentage.
  - verify_sdk_in_one_second_rate: The rate of SDK verification completed within one second, in percentage.
  - verify_sdk_cost_avg: The average time taken by each SDK verification, in milliseconds.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Aggregation interval. Valid value: `1h`.
                     * @return Interval Aggregation interval. Valid value: `1h`.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Aggregation interval. Valid value: `1h`.
                     * @param _interval Aggregation interval. Valid value: `1h`.
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Start time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, which is a Unix timestamp in seconds. The time length cannot exceed seven days.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metrics to be queried. Valid values:
  - image_load_total_count: The number of image loads.
  - image_load_fail_count: The number of image load failures.
  - image_load_success_rate: The success rate of image loading, in percentage.
  - ppt_load_total_count: The number of PowerPoint file loads.
  - ppt_load_fail_count: The number of PowerPoint file load failures.
  - ppt_load_success_rate: The success rate of PowerPoint file loading, in percentage.
  - verify_sdk_total_count: The number of SDK verifications.
  - verify_sdk_fail_count: The number of SDK verification failures.
  - verify_sdk_success_rate: The success rate of SDK verification, in percentage.
  - verify_sdk_in_one_second_rate: The rate of SDK verification completed within one second, in percentage.
  - verify_sdk_cost_avg: The average time taken by each SDK verification, in milliseconds.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Aggregation interval. Valid value: `1h`.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEQUALITYMETRICSREQUEST_H_
