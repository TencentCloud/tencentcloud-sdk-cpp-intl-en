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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BillingDataFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeBillingData request structure.
                */
                class DescribeBillingDataRequest : public AbstractModel
                {
                public:
                    DescribeBillingDataRequest();
                    ~DescribeBillingDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
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
                     * 获取Site ID set. This parameter is required.
                     * @return ZoneIds Site ID set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter is required.
                     * @param _zoneIds Site ID set. This parameter is required.
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
                     * 获取Metric list. Valid values:
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: L4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes;</li>
<li>acc_bandwidth: content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: L4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps;</li>
<li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps;</li>
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>
<li>smt_request_clean: number of smart acceleration requests;</li>
<li>quic_request: number of QUIC requests;</li>
<li>bot_request_clean: number of Bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic DDoS protection bandwidth, in bps.</li>
                     * @return MetricName Metric list. Valid values:
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: L4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes;</li>
<li>acc_bandwidth: content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: L4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps;</li>
<li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps;</li>
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>
<li>smt_request_clean: number of smart acceleration requests;</li>
<li>quic_request: number of QUIC requests;</li>
<li>bot_request_clean: number of Bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic DDoS protection bandwidth, in bps.</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric list. Valid values:
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: L4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes;</li>
<li>acc_bandwidth: content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: L4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps;</li>
<li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps;</li>
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>
<li>smt_request_clean: number of smart acceleration requests;</li>
<li>quic_request: number of QUIC requests;</li>
<li>bot_request_clean: number of Bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic DDoS protection bandwidth, in bps.</li>
                     * @param _metricName Metric list. Valid values:
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: L4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes;</li>
<li>acc_bandwidth: content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: L4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps;</li>
<li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps;</li>
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>
<li>smt_request_clean: number of smart acceleration requests;</li>
<li>quic_request: number of QUIC requests;</li>
<li>bot_request_clean: number of Bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic DDoS protection bandwidth, in bps.</li>
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
                     * 获取Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>
                     * @return Interval Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>
                     * @param _interval Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>
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
                     * 获取Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
                     * @return Filters Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
                     * 
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
                     * @param _filters Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
                     * 
                     */
                    void SetFilters(const std::vector<BillingDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Site ID set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Metric list. Valid values:
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: L4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes;</li>
<li>acc_bandwidth: content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: L4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps;</li>
<li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps;</li>
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>
<li>smt_request_clean: number of smart acceleration requests;</li>
<li>quic_request: number of QUIC requests;</li>
<li>bot_request_clean: number of Bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic DDoS protection bandwidth, in bps.</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
