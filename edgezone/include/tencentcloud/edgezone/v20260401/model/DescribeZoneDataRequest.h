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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEZONEDATAREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEZONEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribeZoneData request structure.
                */
                class DescribeZoneDataRequest : public AbstractModel
                {
                public:
                    DescribeZoneDataRequest();
                    ~DescribeZoneDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Availability zone id
                     * @return Zone Availability zone id
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone id
                     * @param _zone Availability zone id
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Metric name (inbw: inbound bandwidth, outbw: outbound bandwidth)
                     * @return MetricName Metric name (inbw: inbound bandwidth, outbw: outbound bandwidth)
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name (inbw: inbound bandwidth, outbw: outbound bandwidth)
                     * @param _metricName Metric name (inbw: inbound bandwidth, outbw: outbound bandwidth)
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
                     * 获取Start time (UTC time)
                     * @return StartTime Start time (UTC time)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (UTC time)
                     * @param _startTime Start time (UTC time)
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
                     * 获取End time (UTC time), query up to 2 days.
                     * @return EndTime End time (UTC time), query up to 2 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (UTC time), query up to 2 days.
                     * @param _endTime End time (UTC time), query up to 2 days.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Availability zone id
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Metric name (inbw: inbound bandwidth, outbw: outbound bandwidth)
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Start time (UTC time)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (UTC time), query up to 2 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEZONEDATAREQUEST_H_
