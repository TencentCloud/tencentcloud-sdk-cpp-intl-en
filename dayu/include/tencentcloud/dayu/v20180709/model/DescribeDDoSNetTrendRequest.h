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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETTRENDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSNetTrend request structure.
                */
                class DescribeDDoSNetTrendRequest : public AbstractModel
                {
                public:
                    DescribeDDoSNetTrendRequest();
                    ~DescribeDDoSNetTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     * @return Business Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     * @param Business Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID
                     * @return Id Anti-DDoS instance ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID
                     * @param Id Anti-DDoS instance ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Metric. Valid values: [bps (attack traffic bandwidth), pps (attack packet rate)]
                     * @return MetricName Metric. Valid values: [bps (attack traffic bandwidth), pps (attack packet rate)]
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric. Valid values: [bps (attack traffic bandwidth), pps (attack packet rate)]
                     * @param MetricName Metric. Valid values: [bps (attack traffic bandwidth), pps (attack packet rate)]
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     * @return Period Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     * @param Period Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Statistics start time
                     * @return StartTime Statistics start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Statistics start time
                     * @param StartTime Statistics start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Statistics end time
                     * @return EndTime Statistics end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Statistics end time
                     * @param EndTime Statistics end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`net`: Anti-DDoS Ultimate)
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Metric. Valid values: [bps (attack traffic bandwidth), pps (attack packet rate)]
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Statistical granularity. Valid values: [300 (5-minute), 3600 (hourly), 86400 (daily)]
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Statistics start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Statistics end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSNETTRENDREQUEST_H_
