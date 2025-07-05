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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeTimingL4Data request structure.
                */
                class DescribeTimingL4DataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL4DataRequest();
                    ~DescribeTimingL4DataRequest() = default;
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
`l4Flow_connections`: Access connections
`l4Flow_flux`: Access traffic
`l4Flow_inFlux`: Inbound traffic
`l4Flow_outFlux`: Outbound traffic
                     * @return MetricNames Supported metrics for data query:
`l4Flow_connections`: Access connections
`l4Flow_flux`: Access traffic
`l4Flow_inFlux`: Inbound traffic
`l4Flow_outFlux`: Outbound traffic
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Supported metrics for data query:
`l4Flow_connections`: Access connections
`l4Flow_flux`: Access traffic
`l4Flow_inFlux`: Inbound traffic
`l4Flow_outFlux`: Outbound traffic
                     * @param _metricNames Supported metrics for data query:
`l4Flow_connections`: Access connections
`l4Flow_flux`: Access traffic
`l4Flow_inFlux`: Inbound traffic
`l4Flow_outFlux`: Outbound traffic
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
                     * 获取List of site IDs
                     * @return ZoneIds List of site IDs
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of site IDs
                     * @param _zoneIds List of site IDs
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
                     * 获取This field has been disused. Use `ProxyIds` instead.
                     * @return InstanceIds This field has been disused. Use `ProxyIds` instead.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置This field has been disused. Use `ProxyIds` instead.
                     * @param _instanceIds This field has been disused. Use `ProxyIds` instead.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取This field is not supported currently.
                     * @return Protocol This field is not supported currently.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置This field is not supported currently.
                     * @param _protocol This field is not supported currently.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Time interval. Valid values: {min, 5min, hour, day}
                     * @return Interval Time interval. Valid values: {min, 5min, hour, day}
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time interval. Valid values: {min, 5min, hour, day}
                     * @param _interval Time interval. Valid values: {min, 5min, hour, day}
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
                     * 获取This field is not supported currently. Use `Filter` instead.
                     * @return RuleId This field is not supported currently. Use `Filter` instead.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置This field is not supported currently. Use `Filter` instead.
                     * @param _ruleId This field is not supported currently. Use `Filter` instead.
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
                     * 获取Supported filters: `proxyd`, `ruleId`
                     * @return Filters Supported filters: `proxyd`, `ruleId`
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Supported filters: `proxyd`, `ruleId`
                     * @param _filters Supported filters: `proxyd`, `ruleId`
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取List of layer-4 proxies
                     * @return ProxyIds List of layer-4 proxies
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置List of layer-4 proxies
                     * @param _proxyIds List of layer-4 proxies
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

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
`l4Flow_connections`: Access connections
`l4Flow_flux`: Access traffic
`l4Flow_inFlux`: Inbound traffic
`l4Flow_outFlux`: Outbound traffic
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * List of site IDs
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * This field has been disused. Use `ProxyIds` instead.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * This field is not supported currently.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Time interval. Valid values: {min, 5min, hour, day}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * This field is not supported currently. Use `Filter` instead.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Supported filters: `proxyd`, `ruleId`
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * List of layer-4 proxies
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
