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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRealServerStatistics request structure.
                */
                class DescribeRealServerStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeRealServerStatisticsRequest();
                    ~DescribeRealServerStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Origin server ID
                     * @return RealServerId Origin server ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置Origin server ID
                     * @param _realServerId Origin server ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取Listener ID
                     * @return ListenerId Listener ID
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
                     * @param _listenerId Listener ID
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Layer-7 rule ID
                     * @return RuleId Layer-7 rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Layer-7 rule ID
                     * @param _ruleId Layer-7 rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Statistics duration. Unit: hours. It only supports querying statistics for the past 1, 3, 6, 12, and 24 hours.
                     * @return WithinTime Statistics duration. Unit: hours. It only supports querying statistics for the past 1, 3, 6, 12, and 24 hours.
                     * 
                     */
                    uint64_t GetWithinTime() const;

                    /**
                     * 设置Statistics duration. Unit: hours. It only supports querying statistics for the past 1, 3, 6, 12, and 24 hours.
                     * @param _withinTime Statistics duration. Unit: hours. It only supports querying statistics for the past 1, 3, 6, 12, and 24 hours.
                     * 
                     */
                    void SetWithinTime(const uint64_t& _withinTime);

                    /**
                     * 判断参数 WithinTime 是否已赋值
                     * @return WithinTime 是否已赋值
                     * 
                     */
                    bool WithinTimeHasBeenSet() const;

                    /**
                     * 获取Statistics start time, such as `2020-08-19 00:00:00`
                     * @return StartTime Statistics start time, such as `2020-08-19 00:00:00`
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Statistics start time, such as `2020-08-19 00:00:00`
                     * @param _startTime Statistics start time, such as `2020-08-19 00:00:00`
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Statistics end time, such as `2020-08-19 23:59:59`
                     * @return EndTime Statistics end time, such as `2020-08-19 23:59:59`
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Statistics end time, such as `2020-08-19 23:59:59`
                     * @param _endTime Statistics end time, such as `2020-08-19 23:59:59`
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Statistics granularity in seconds. Only 1-minute (60-second) and 5-minute (300-second) granularities are supported.
                     * @return Granularity Statistics granularity in seconds. Only 1-minute (60-second) and 5-minute (300-second) granularities are supported.
                     * 
                     */
                    uint64_t GetGranularity() const;

                    /**
                     * 设置Statistics granularity in seconds. Only 1-minute (60-second) and 5-minute (300-second) granularities are supported.
                     * @param _granularity Statistics granularity in seconds. Only 1-minute (60-second) and 5-minute (300-second) granularities are supported.
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
                     * Origin server ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * Listener ID
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Layer-7 rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Statistics duration. Unit: hours. It only supports querying statistics for the past 1, 3, 6, 12, and 24 hours.
                     */
                    uint64_t m_withinTime;
                    bool m_withinTimeHasBeenSet;

                    /**
                     * Statistics start time, such as `2020-08-19 00:00:00`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Statistics end time, such as `2020-08-19 23:59:59`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statistics granularity in seconds. Only 1-minute (60-second) and 5-minute (300-second) granularities are supported.
                     */
                    uint64_t m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREALSERVERSTATISTICSREQUEST_H_
