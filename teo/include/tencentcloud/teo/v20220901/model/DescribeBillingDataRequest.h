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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
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
                     * 获取Site ID set. This parameter is required. You can import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permission for all site resources of this interface.
                     * @return ZoneIds Site ID set. This parameter is required. You can import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permission for all site resources of this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter is required. You can import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permission for all site resources of this interface.
                     * @param _zoneIds Site ID set. This parameter is required. You can import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permission for all site resources of this interface.
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
<b>l4/l7 acceleration traffic:</b><li>acc_flux: content acceleration traffic, in bytes;</li><li>smt_flux: smart acceleration traffic, in bytes;</li><li>l4_flux: Layer 4 acceleration traffic, in bytes;</li><li>sec_flux: independent protection traffic, in bytes;</li><li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: content acceleration bandwidth, in bps;</li><li>smt_bandwidth: intelligent acceleration bandwidth, in bps;</li><li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li><li>sec_bandwidth: exclusive protection bandwidth, in bps;</li><li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: HTTP/HTTPS requests, count.</li><b><br>VAS usage:</b><li>smt_request_clean: smart acceleration requests, count;</li><li>quic_request: quic requests, count;</li><li>bot_request_clean: bot requests, count;</li><li>cls_count: number of real-time log pushes, count;</li><li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li><br><b>Edge computing usage:</b><li>edgefunction_request: number of edge function requests, count;</li><li>edgefunction_cpu_time: edge function cpu processing time, in milliseconds.</li>
<b>Media processing usage:</b><li>total_transcode: duration of audio, video JIT transcoding, and remuxing for all specifications, in seconds;</li><li>remux: remuxing duration, in seconds;</li><li>transcode_audio: audio transcoding duration, in seconds;</li><li>transcode_H264_SD: duration of standard definition video (short side <= 480 px) in H.264, in seconds;</li><li>transcode_H264_HD: duration of high-definition video (short side <= 720 px) in H.264, in seconds;</li><li>transcode_H264_FHD: duration of Full HD video (short side <= 1080 px) in H.264, in seconds;</li><li>transcode_H264_2K: duration of 2K video (short side <= 1440 px) in H.264, in seconds.</li>
                     * @return MetricName Metric list. Valid values:
<b>l4/l7 acceleration traffic:</b><li>acc_flux: content acceleration traffic, in bytes;</li><li>smt_flux: smart acceleration traffic, in bytes;</li><li>l4_flux: Layer 4 acceleration traffic, in bytes;</li><li>sec_flux: independent protection traffic, in bytes;</li><li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: content acceleration bandwidth, in bps;</li><li>smt_bandwidth: intelligent acceleration bandwidth, in bps;</li><li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li><li>sec_bandwidth: exclusive protection bandwidth, in bps;</li><li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: HTTP/HTTPS requests, count.</li><b><br>VAS usage:</b><li>smt_request_clean: smart acceleration requests, count;</li><li>quic_request: quic requests, count;</li><li>bot_request_clean: bot requests, count;</li><li>cls_count: number of real-time log pushes, count;</li><li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li><br><b>Edge computing usage:</b><li>edgefunction_request: number of edge function requests, count;</li><li>edgefunction_cpu_time: edge function cpu processing time, in milliseconds.</li>
<b>Media processing usage:</b><li>total_transcode: duration of audio, video JIT transcoding, and remuxing for all specifications, in seconds;</li><li>remux: remuxing duration, in seconds;</li><li>transcode_audio: audio transcoding duration, in seconds;</li><li>transcode_H264_SD: duration of standard definition video (short side <= 480 px) in H.264, in seconds;</li><li>transcode_H264_HD: duration of high-definition video (short side <= 720 px) in H.264, in seconds;</li><li>transcode_H264_FHD: duration of Full HD video (short side <= 1080 px) in H.264, in seconds;</li><li>transcode_H264_2K: duration of 2K video (short side <= 1440 px) in H.264, in seconds.</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric list. Valid values:
<b>l4/l7 acceleration traffic:</b><li>acc_flux: content acceleration traffic, in bytes;</li><li>smt_flux: smart acceleration traffic, in bytes;</li><li>l4_flux: Layer 4 acceleration traffic, in bytes;</li><li>sec_flux: independent protection traffic, in bytes;</li><li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: content acceleration bandwidth, in bps;</li><li>smt_bandwidth: intelligent acceleration bandwidth, in bps;</li><li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li><li>sec_bandwidth: exclusive protection bandwidth, in bps;</li><li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: HTTP/HTTPS requests, count.</li><b><br>VAS usage:</b><li>smt_request_clean: smart acceleration requests, count;</li><li>quic_request: quic requests, count;</li><li>bot_request_clean: bot requests, count;</li><li>cls_count: number of real-time log pushes, count;</li><li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li><br><b>Edge computing usage:</b><li>edgefunction_request: number of edge function requests, count;</li><li>edgefunction_cpu_time: edge function cpu processing time, in milliseconds.</li>
<b>Media processing usage:</b><li>total_transcode: duration of audio, video JIT transcoding, and remuxing for all specifications, in seconds;</li><li>remux: remuxing duration, in seconds;</li><li>transcode_audio: audio transcoding duration, in seconds;</li><li>transcode_H264_SD: duration of standard definition video (short side <= 480 px) in H.264, in seconds;</li><li>transcode_H264_HD: duration of high-definition video (short side <= 720 px) in H.264, in seconds;</li><li>transcode_H264_FHD: duration of Full HD video (short side <= 1080 px) in H.264, in seconds;</li><li>transcode_H264_2K: duration of 2K video (short side <= 1440 px) in H.264, in seconds.</li>
                     * @param _metricName Metric list. Valid values:
<b>l4/l7 acceleration traffic:</b><li>acc_flux: content acceleration traffic, in bytes;</li><li>smt_flux: smart acceleration traffic, in bytes;</li><li>l4_flux: Layer 4 acceleration traffic, in bytes;</li><li>sec_flux: independent protection traffic, in bytes;</li><li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: content acceleration bandwidth, in bps;</li><li>smt_bandwidth: intelligent acceleration bandwidth, in bps;</li><li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li><li>sec_bandwidth: exclusive protection bandwidth, in bps;</li><li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: HTTP/HTTPS requests, count.</li><b><br>VAS usage:</b><li>smt_request_clean: smart acceleration requests, count;</li><li>quic_request: quic requests, count;</li><li>bot_request_clean: bot requests, count;</li><li>cls_count: number of real-time log pushes, count;</li><li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li><br><b>Edge computing usage:</b><li>edgefunction_request: number of edge function requests, count;</li><li>edgefunction_cpu_time: edge function cpu processing time, in milliseconds.</li>
<b>Media processing usage:</b><li>total_transcode: duration of audio, video JIT transcoding, and remuxing for all specifications, in seconds;</li><li>remux: remuxing duration, in seconds;</li><li>transcode_audio: audio transcoding duration, in seconds;</li><li>transcode_H264_SD: duration of standard definition video (short side <= 480 px) in H.264, in seconds;</li><li>transcode_H264_HD: duration of high-definition video (short side <= 720 px) in H.264, in seconds;</li><li>transcode_H264_FHD: duration of Full HD video (short side <= 1080 px) in H.264, in seconds;</li><li>transcode_H264_2K: duration of 2K video (short side <= 1440 px) in H.264, in seconds.</li>
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
<li>hour: 1-hour granularity;</li>
<li>day: 1 day.</li>
                     * @return Interval Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1 day.</li>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1 day.</li>
                     * @param _interval Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1-hour granularity;</li>
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
<li>proxy-id: filter by L4 proxy instance ID. Example value: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
Description: `BillingDataFilter` with the same `Type` has an "OR" relationship with each other, while those with different `Type` have an "AND" relationship with each other.
                     * @return Filters Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: filter by L4 proxy instance ID. Example value: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
Description: `BillingDataFilter` with the same `Type` has an "OR" relationship with each other, while those with different `Type` have an "AND" relationship with each other.
                     * 
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: filter by L4 proxy instance ID. Example value: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
Description: `BillingDataFilter` with the same `Type` has an "OR" relationship with each other, while those with different `Type` have an "AND" relationship with each other.
                     * @param _filters Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: filter by L4 proxy instance ID. Example value: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
Description: `BillingDataFilter` with the same `Type` has an "OR" relationship with each other, while those with different `Type` have an "AND" relationship with each other.
                     * 
                     */
                    void SetFilters(const std::vector<BillingDataFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Aggregate dimension for grouping. Allows up to two dimensions for grouping at the same time. Values are as follows: <li>zone-id: Group by site ID. If the content identifier feature is used, priority is given to grouping by content identifier.<br></li><li>host: Group by domain name.<br></li><li>proxy-id: Group by Layer 4 Proxy Instance ID.<br></li><li>region-id: Group by billing region.</li>
                     * @return GroupBy Aggregate dimension for grouping. Allows up to two dimensions for grouping at the same time. Values are as follows: <li>zone-id: Group by site ID. If the content identifier feature is used, priority is given to grouping by content identifier.<br></li><li>host: Group by domain name.<br></li><li>proxy-id: Group by Layer 4 Proxy Instance ID.<br></li><li>region-id: Group by billing region.</li>
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Aggregate dimension for grouping. Allows up to two dimensions for grouping at the same time. Values are as follows: <li>zone-id: Group by site ID. If the content identifier feature is used, priority is given to grouping by content identifier.<br></li><li>host: Group by domain name.<br></li><li>proxy-id: Group by Layer 4 Proxy Instance ID.<br></li><li>region-id: Group by billing region.</li>
                     * @param _groupBy Aggregate dimension for grouping. Allows up to two dimensions for grouping at the same time. Values are as follows: <li>zone-id: Group by site ID. If the content identifier feature is used, priority is given to grouping by content identifier.<br></li><li>host: Group by domain name.<br></li><li>proxy-id: Group by Layer 4 Proxy Instance ID.<br></li><li>region-id: Group by billing region.</li>
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Site ID set. This parameter is required. You can import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permission for all site resources of this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Metric list. Valid values:
<b>l4/l7 acceleration traffic:</b><li>acc_flux: content acceleration traffic, in bytes;</li><li>smt_flux: smart acceleration traffic, in bytes;</li><li>l4_flux: Layer 4 acceleration traffic, in bytes;</li><li>sec_flux: independent protection traffic, in bytes;</li><li>zxctg_flux: network optimization traffic in the Chinese mainland, in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: content acceleration bandwidth, in bps;</li><li>smt_bandwidth: intelligent acceleration bandwidth, in bps;</li><li>l4_bandwidth: Layer 4 acceleration bandwidth, in bps;</li><li>sec_bandwidth: exclusive protection bandwidth, in bps;</li><li>zxctg_bandwidth: network optimization bandwidth in the Chinese mainland, in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: HTTP/HTTPS requests, count.</li><b><br>VAS usage:</b><li>smt_request_clean: smart acceleration requests, count;</li><li>quic_request: quic requests, count;</li><li>bot_request_clean: bot requests, count;</li><li>cls_count: number of real-time log pushes, count;</li><li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li><br><b>Edge computing usage:</b><li>edgefunction_request: number of edge function requests, count;</li><li>edgefunction_cpu_time: edge function cpu processing time, in milliseconds.</li>
<b>Media processing usage:</b><li>total_transcode: duration of audio, video JIT transcoding, and remuxing for all specifications, in seconds;</li><li>remux: remuxing duration, in seconds;</li><li>transcode_audio: audio transcoding duration, in seconds;</li><li>transcode_H264_SD: duration of standard definition video (short side <= 480 px) in H.264, in seconds;</li><li>transcode_H264_HD: duration of high-definition video (short side <= 720 px) in H.264, in seconds;</li><li>transcode_H264_FHD: duration of Full HD video (short side <= 1080 px) in H.264, in seconds;</li><li>transcode_H264_2K: duration of 2K video (short side <= 1440 px) in H.264, in seconds.</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Time granularity of the query. Valid values:
<li>5min: 5 minutes;</li>
<li>hour: 1-hour granularity;</li>
<li>day: 1 day.</li>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed values of filter criteria are as follows:
<li>host: Filter by domain name, such as test.example.com.<br></li>
<li>proxy-id: filter by L4 proxy instance ID. Example value: sid-2rugn89bkla9.<br></li>
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>
Description: `BillingDataFilter` with the same `Type` has an "OR" relationship with each other, while those with different `Type` have an "AND" relationship with each other.
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Aggregate dimension for grouping. Allows up to two dimensions for grouping at the same time. Values are as follows: <li>zone-id: Group by site ID. If the content identifier feature is used, priority is given to grouping by content identifier.<br></li><li>host: Group by domain name.<br></li><li>proxy-id: Group by Layer 4 Proxy Instance ID.<br></li><li>region-id: Group by billing region.</li>
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
