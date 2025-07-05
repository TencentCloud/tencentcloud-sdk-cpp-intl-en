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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeOverviewL7Data request structure.
                */
                class DescribeOverviewL7DataRequest : public AbstractModel
                {
                public:
                    DescribeOverviewL7DataRequest();
                    ~DescribeOverviewL7DataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Client time in RFC 3339 format
                     * @return StartTime Client time in RFC 3339 format
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Client time in RFC 3339 format
                     * @param _startTime Client time in RFC 3339 format
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
                     * 获取Client time in RFC 3339 format
                     * @return EndTime Client time in RFC 3339 format
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Client time in RFC 3339 format
                     * @param _endTime Client time in RFC 3339 format
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
                     * 获取Supported metrics for data query:
`l7Flow_outFlux`: Access traffic
`l7Flow_request`: Access requests
`l7Flow_outBandwidth`: Access bandwidth
                     * @return MetricNames Supported metrics for data query:
`l7Flow_outFlux`: Access traffic
`l7Flow_request`: Access requests
`l7Flow_outBandwidth`: Access bandwidth
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Supported metrics for data query:
`l7Flow_outFlux`: Access traffic
`l7Flow_request`: Access requests
`l7Flow_outBandwidth`: Access bandwidth
                     * @param _metricNames Supported metrics for data query:
`l7Flow_outFlux`: Access traffic
`l7Flow_request`: Access requests
`l7Flow_outBandwidth`: Access bandwidth
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取Time interval. Valid values: {min, 5min, hour, day, week}
                     * @return Interval Time interval. Valid values: {min, 5min, hour, day, week}
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time interval. Valid values: {min, 5min, hour, day, week}
                     * @param _interval Time interval. Valid values: {min, 5min, hour, day, week}
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取List of `ZoneId` values. This parameter takes effect only when querying in the zone/domain dimension.
                     * @return ZoneIds List of `ZoneId` values. This parameter takes effect only when querying in the zone/domain dimension.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of `ZoneId` values. This parameter takes effect only when querying in the zone/domain dimension.
                     * @param _zoneIds List of `ZoneId` values. This parameter takes effect only when querying in the zone/domain dimension.
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取List of `Domain` values. This parameter takes effect only when querying in the domain dimension.
                     * @return Domains List of `Domain` values. This parameter takes effect only when querying in the domain dimension.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of `Domain` values. This parameter takes effect only when querying in the domain dimension.
                     * @param _domains List of `Domain` values. This parameter takes effect only when querying in the domain dimension.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Protocol type. Valid values: {http,http2,https,all}
                     * @return Protocol Protocol type. Valid values: {http,http2,https,all}
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type. Valid values: {http,http2,https,all}
                     * @param _protocol Protocol type. Valid values: {http,http2,https,all}
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Client time in RFC 3339 format
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Client time in RFC 3339 format
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Supported metrics for data query:
`l7Flow_outFlux`: Access traffic
`l7Flow_request`: Access requests
`l7Flow_outBandwidth`: Access bandwidth
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Time interval. Valid values: {min, 5min, hour, day, week}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * List of `ZoneId` values. This parameter takes effect only when querying in the zone/domain dimension.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * List of `Domain` values. This parameter takes effect only when querying in the domain dimension.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Protocol type. Valid values: {http,http2,https,all}
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
