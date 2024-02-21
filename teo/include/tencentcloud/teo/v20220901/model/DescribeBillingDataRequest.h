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
                     * 获取Start time of the query.
                     * @return StartTime Start time of the query.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query.
                     * @param _startTime Start time of the query.
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
                     * 获取End time of the query.
                     * @return EndTime End time of the query.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query.
                     * @param _endTime End time of the query.
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
                     * 获取Zone ID set. This parameter is required.
                     * @return ZoneIds Zone ID set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Zone ID set. This parameter is required.
                     * @param _zoneIds Zone ID set. This parameter is required.
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
                     * 获取Indicator list. Valid values:<li>acc_flux: Content acceleration traffic, in bytes;</li>
<li>smt_flux: Smart acceleration traffic, in bytes;</li>
<li>l4_flux: Layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: Exclusive DDoS mitigation traffic, in bytes;</li>
<li>zxctg_flux: Cross-MLC-border acceleration traffic, in bytes;</li>
<li>acc_bandwidth: Content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: Smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: Exclusive DDoS mitigation bandwidth, in bps;</li>
<li>zxctg_bandwidth: Cross-MLC-border acceleration bandwidth, in bps;</li><li>sec_request_clean: HTTP/HTTPS requests, in count;</li>
<li>smt_request_clean: Smart acceleration requests, in count;</li>
<li>quic_request: QUIC requests, in count;</li>
<li>bot_request_clean: Bot requests, in count;</li>
<li>cls_count: Real-time log delivery log counts, in count;</li>
<li>ddos_bandwidth: Exclusive DDoS mitigation elastic bandwidth, in bps.</li>
                     * @return MetricName Indicator list. Valid values:<li>acc_flux: Content acceleration traffic, in bytes;</li>
<li>smt_flux: Smart acceleration traffic, in bytes;</li>
<li>l4_flux: Layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: Exclusive DDoS mitigation traffic, in bytes;</li>
<li>zxctg_flux: Cross-MLC-border acceleration traffic, in bytes;</li>
<li>acc_bandwidth: Content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: Smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: Exclusive DDoS mitigation bandwidth, in bps;</li>
<li>zxctg_bandwidth: Cross-MLC-border acceleration bandwidth, in bps;</li><li>sec_request_clean: HTTP/HTTPS requests, in count;</li>
<li>smt_request_clean: Smart acceleration requests, in count;</li>
<li>quic_request: QUIC requests, in count;</li>
<li>bot_request_clean: Bot requests, in count;</li>
<li>cls_count: Real-time log delivery log counts, in count;</li>
<li>ddos_bandwidth: Exclusive DDoS mitigation elastic bandwidth, in bps.</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Indicator list. Valid values:<li>acc_flux: Content acceleration traffic, in bytes;</li>
<li>smt_flux: Smart acceleration traffic, in bytes;</li>
<li>l4_flux: Layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: Exclusive DDoS mitigation traffic, in bytes;</li>
<li>zxctg_flux: Cross-MLC-border acceleration traffic, in bytes;</li>
<li>acc_bandwidth: Content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: Smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: Exclusive DDoS mitigation bandwidth, in bps;</li>
<li>zxctg_bandwidth: Cross-MLC-border acceleration bandwidth, in bps;</li><li>sec_request_clean: HTTP/HTTPS requests, in count;</li>
<li>smt_request_clean: Smart acceleration requests, in count;</li>
<li>quic_request: QUIC requests, in count;</li>
<li>bot_request_clean: Bot requests, in count;</li>
<li>cls_count: Real-time log delivery log counts, in count;</li>
<li>ddos_bandwidth: Exclusive DDoS mitigation elastic bandwidth, in bps.</li>
                     * @param _metricName Indicator list. Valid values:<li>acc_flux: Content acceleration traffic, in bytes;</li>
<li>smt_flux: Smart acceleration traffic, in bytes;</li>
<li>l4_flux: Layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: Exclusive DDoS mitigation traffic, in bytes;</li>
<li>zxctg_flux: Cross-MLC-border acceleration traffic, in bytes;</li>
<li>acc_bandwidth: Content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: Smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: Exclusive DDoS mitigation bandwidth, in bps;</li>
<li>zxctg_bandwidth: Cross-MLC-border acceleration bandwidth, in bps;</li><li>sec_request_clean: HTTP/HTTPS requests, in count;</li>
<li>smt_request_clean: Smart acceleration requests, in count;</li>
<li>quic_request: QUIC requests, in count;</li>
<li>bot_request_clean: Bot requests, in count;</li>
<li>cls_count: Real-time log delivery log counts, in count;</li>
<li>ddos_bandwidth: Exclusive DDoS mitigation elastic bandwidth, in bps.</li>
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
                     * 获取Query granularity. Valid values:<li>5min: 5-minute granularity;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1-day granularity.</li>
                     * @return Interval Query granularity. Valid values:<li>5min: 5-minute granularity;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1-day granularity.</li>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Query granularity. Valid values:<li>5min: 5-minute granularity;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1-day granularity.</li>
                     * @param _interval Query granularity. Valid values:<li>5min: 5-minute granularity;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1-day granularity.</li>
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
                     * 获取Filter. The detailed filters are as follows:
<li>host: Filter by Domain Name. Example: test.example.com.<br></li>
<li>proxy-id: Filter by Layer 4 Proxy Instance ID. Example: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by Billing Region.Options are:<br>   CH: Chinese mainland<br>   AF: Africa<br>   AS1: Asia-Pacific Region 1<br>   AS2: Asia-Pacific Region 2<br>   AS3: Asia-Pacific Region 3<br>  EU: Europe<br>   MidEast: Middle East<br>   NA: North America<br>   SA: South America</li>
                     * @return Filters Filter. The detailed filters are as follows:
<li>host: Filter by Domain Name. Example: test.example.com.<br></li>
<li>proxy-id: Filter by Layer 4 Proxy Instance ID. Example: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by Billing Region.Options are:<br>   CH: Chinese mainland<br>   AF: Africa<br>   AS1: Asia-Pacific Region 1<br>   AS2: Asia-Pacific Region 2<br>   AS3: Asia-Pacific Region 3<br>  EU: Europe<br>   MidEast: Middle East<br>   NA: North America<br>   SA: South America</li>
                     * 
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置Filter. The detailed filters are as follows:
<li>host: Filter by Domain Name. Example: test.example.com.<br></li>
<li>proxy-id: Filter by Layer 4 Proxy Instance ID. Example: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by Billing Region.Options are:<br>   CH: Chinese mainland<br>   AF: Africa<br>   AS1: Asia-Pacific Region 1<br>   AS2: Asia-Pacific Region 2<br>   AS3: Asia-Pacific Region 3<br>  EU: Europe<br>   MidEast: Middle East<br>   NA: North America<br>   SA: South America</li>
                     * @param _filters Filter. The detailed filters are as follows:
<li>host: Filter by Domain Name. Example: test.example.com.<br></li>
<li>proxy-id: Filter by Layer 4 Proxy Instance ID. Example: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by Billing Region.Options are:<br>   CH: Chinese mainland<br>   AF: Africa<br>   AS1: Asia-Pacific Region 1<br>   AS2: Asia-Pacific Region 2<br>   AS3: Asia-Pacific Region 3<br>  EU: Europe<br>   MidEast: Middle East<br>   NA: North America<br>   SA: South America</li>
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
                     * Start time of the query.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Zone ID set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Indicator list. Valid values:<li>acc_flux: Content acceleration traffic, in bytes;</li>
<li>smt_flux: Smart acceleration traffic, in bytes;</li>
<li>l4_flux: Layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: Exclusive DDoS mitigation traffic, in bytes;</li>
<li>zxctg_flux: Cross-MLC-border acceleration traffic, in bytes;</li>
<li>acc_bandwidth: Content acceleration bandwidth, in bps;</li>
<li>smt_bandwidth: Smart acceleration bandwidth, in bps;</li>
<li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li>
<li>sec_bandwidth: Exclusive DDoS mitigation bandwidth, in bps;</li>
<li>zxctg_bandwidth: Cross-MLC-border acceleration bandwidth, in bps;</li><li>sec_request_clean: HTTP/HTTPS requests, in count;</li>
<li>smt_request_clean: Smart acceleration requests, in count;</li>
<li>quic_request: QUIC requests, in count;</li>
<li>bot_request_clean: Bot requests, in count;</li>
<li>cls_count: Real-time log delivery log counts, in count;</li>
<li>ddos_bandwidth: Exclusive DDoS mitigation elastic bandwidth, in bps.</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Query granularity. Valid values:<li>5min: 5-minute granularity;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1-day granularity.</li>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter. The detailed filters are as follows:
<li>host: Filter by Domain Name. Example: test.example.com.<br></li>
<li>proxy-id: Filter by Layer 4 Proxy Instance ID. Example: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by Billing Region.Options are:<br>   CH: Chinese mainland<br>   AF: Africa<br>   AS1: Asia-Pacific Region 1<br>   AS2: Asia-Pacific Region 2<br>   AS3: Asia-Pacific Region 3<br>  EU: Europe<br>   MidEast: Middle East<br>   NA: North America<br>   SA: South America</li>
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
