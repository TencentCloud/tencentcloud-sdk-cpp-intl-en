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
                     * 获取The start time.
                     * @return StartTime The start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param _startTime The start time.
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
                     * 获取End time. the query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @return EndTime End time. the query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. the query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @param _endTime End time. the query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
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
                     * 获取Site ID set. this parameter is required. a maximum of 100 site ids can be imported. use `*` to query data for all sites under the tencent cloud root account. querying account-level data requires permissions for all site resources in this api.
                     * @return ZoneIds Site ID set. this parameter is required. a maximum of 100 site ids can be imported. use `*` to query data for all sites under the tencent cloud root account. querying account-level data requires permissions for all site resources in this api.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. this parameter is required. a maximum of 100 site ids can be imported. use `*` to query data for all sites under the tencent cloud root account. querying account-level data requires permissions for all site resources in this api.
                     * @param _zoneIds Site ID set. this parameter is required. a maximum of 100 site ids can be imported. use `*` to query data for all sites under the tencent cloud root account. querying account-level data requires permissions for all site resources in this api.
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
                     * 获取Metric list. values as follows:.
<b>l4/l7 acceleration traffic:</b><li>acc_flux: specifies content acceleration traffic in bytes.</li><li>smt_flux: specifies smart acceleration traffic in bytes.</li><li>l4_flux: specifies layer 4 acceleration traffic in bytes.</li><li>sec_flux: specifies independent protection traffic in bytes.</li><li>zxctg_flux: specifies network optimization traffic in the chinese mainland in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: specifies content acceleration bandwidth in bps.</li><li>smt_bandwidth: specifies intelligent acceleration bandwidth in bps.</li><li>l4_bandwidth: specifies layer 4 acceleration bandwidth in bps.</li><li>sec_bandwidth: specifies exclusive protection bandwidth in bps.</li><li>zxctg_bandwidth: specifies network optimization bandwidth in the chinese mainland in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: specifies HTTP/HTTPS requests by count.</li><br><b>vas usage:</b><li>smt_request_clean: specifies intelligent acceleration requests by count.</li><li>quic_request: specifies quic requests by count.</li><li>bot_request_clean: specifies bot requests by count.</li><li>cls_count: specifies the number of real-time log pushes by count.</li><li>ddos_bandwidth: specifies elastic ddos protection bandwidth in bps.</li><br><b>edge computing usage:</b><li>edgefunction_request: specifies the number of edge function requests by count.</li><li>edgefunction_cpu_time: specifies edge function cpu processing time in milliseconds.</li>.
<b>Media processing usage:</b> <li>total_transcode: all specification audio, video jit transcoding, repackaging duration, in seconds;</li> <li>remux: repackaging duration, in seconds;</li> <li>transcode_audio: audio transcoding duration, in seconds;</li> <li>transcode_H264_SD: H.264 encoded standard-definition video (short side ≤ 480 px) duration, in seconds;</li> <li>transcode_H264_HD: H.264 encoded high-definition video (short side ≤ 720 px) duration, in seconds;</li> <li>transcode_H264_FHD: H.264 encoded full HD video (short side ≤ 1080 px) duration, in seconds;</li> <li>transcode_H264_2K: H.264 encoded 2K video (short side ≤ 1440 px) duration, in seconds.</li>.
                     * @return MetricName Metric list. values as follows:.
<b>l4/l7 acceleration traffic:</b><li>acc_flux: specifies content acceleration traffic in bytes.</li><li>smt_flux: specifies smart acceleration traffic in bytes.</li><li>l4_flux: specifies layer 4 acceleration traffic in bytes.</li><li>sec_flux: specifies independent protection traffic in bytes.</li><li>zxctg_flux: specifies network optimization traffic in the chinese mainland in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: specifies content acceleration bandwidth in bps.</li><li>smt_bandwidth: specifies intelligent acceleration bandwidth in bps.</li><li>l4_bandwidth: specifies layer 4 acceleration bandwidth in bps.</li><li>sec_bandwidth: specifies exclusive protection bandwidth in bps.</li><li>zxctg_bandwidth: specifies network optimization bandwidth in the chinese mainland in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: specifies HTTP/HTTPS requests by count.</li><br><b>vas usage:</b><li>smt_request_clean: specifies intelligent acceleration requests by count.</li><li>quic_request: specifies quic requests by count.</li><li>bot_request_clean: specifies bot requests by count.</li><li>cls_count: specifies the number of real-time log pushes by count.</li><li>ddos_bandwidth: specifies elastic ddos protection bandwidth in bps.</li><br><b>edge computing usage:</b><li>edgefunction_request: specifies the number of edge function requests by count.</li><li>edgefunction_cpu_time: specifies edge function cpu processing time in milliseconds.</li>.
<b>Media processing usage:</b> <li>total_transcode: all specification audio, video jit transcoding, repackaging duration, in seconds;</li> <li>remux: repackaging duration, in seconds;</li> <li>transcode_audio: audio transcoding duration, in seconds;</li> <li>transcode_H264_SD: H.264 encoded standard-definition video (short side ≤ 480 px) duration, in seconds;</li> <li>transcode_H264_HD: H.264 encoded high-definition video (short side ≤ 720 px) duration, in seconds;</li> <li>transcode_H264_FHD: H.264 encoded full HD video (short side ≤ 1080 px) duration, in seconds;</li> <li>transcode_H264_2K: H.264 encoded 2K video (short side ≤ 1440 px) duration, in seconds.</li>.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric list. values as follows:.
<b>l4/l7 acceleration traffic:</b><li>acc_flux: specifies content acceleration traffic in bytes.</li><li>smt_flux: specifies smart acceleration traffic in bytes.</li><li>l4_flux: specifies layer 4 acceleration traffic in bytes.</li><li>sec_flux: specifies independent protection traffic in bytes.</li><li>zxctg_flux: specifies network optimization traffic in the chinese mainland in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: specifies content acceleration bandwidth in bps.</li><li>smt_bandwidth: specifies intelligent acceleration bandwidth in bps.</li><li>l4_bandwidth: specifies layer 4 acceleration bandwidth in bps.</li><li>sec_bandwidth: specifies exclusive protection bandwidth in bps.</li><li>zxctg_bandwidth: specifies network optimization bandwidth in the chinese mainland in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: specifies HTTP/HTTPS requests by count.</li><br><b>vas usage:</b><li>smt_request_clean: specifies intelligent acceleration requests by count.</li><li>quic_request: specifies quic requests by count.</li><li>bot_request_clean: specifies bot requests by count.</li><li>cls_count: specifies the number of real-time log pushes by count.</li><li>ddos_bandwidth: specifies elastic ddos protection bandwidth in bps.</li><br><b>edge computing usage:</b><li>edgefunction_request: specifies the number of edge function requests by count.</li><li>edgefunction_cpu_time: specifies edge function cpu processing time in milliseconds.</li>.
<b>Media processing usage:</b> <li>total_transcode: all specification audio, video jit transcoding, repackaging duration, in seconds;</li> <li>remux: repackaging duration, in seconds;</li> <li>transcode_audio: audio transcoding duration, in seconds;</li> <li>transcode_H264_SD: H.264 encoded standard-definition video (short side ≤ 480 px) duration, in seconds;</li> <li>transcode_H264_HD: H.264 encoded high-definition video (short side ≤ 720 px) duration, in seconds;</li> <li>transcode_H264_FHD: H.264 encoded full HD video (short side ≤ 1080 px) duration, in seconds;</li> <li>transcode_H264_2K: H.264 encoded 2K video (short side ≤ 1440 px) duration, in seconds.</li>.
                     * @param _metricName Metric list. values as follows:.
<b>l4/l7 acceleration traffic:</b><li>acc_flux: specifies content acceleration traffic in bytes.</li><li>smt_flux: specifies smart acceleration traffic in bytes.</li><li>l4_flux: specifies layer 4 acceleration traffic in bytes.</li><li>sec_flux: specifies independent protection traffic in bytes.</li><li>zxctg_flux: specifies network optimization traffic in the chinese mainland in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: specifies content acceleration bandwidth in bps.</li><li>smt_bandwidth: specifies intelligent acceleration bandwidth in bps.</li><li>l4_bandwidth: specifies layer 4 acceleration bandwidth in bps.</li><li>sec_bandwidth: specifies exclusive protection bandwidth in bps.</li><li>zxctg_bandwidth: specifies network optimization bandwidth in the chinese mainland in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: specifies HTTP/HTTPS requests by count.</li><br><b>vas usage:</b><li>smt_request_clean: specifies intelligent acceleration requests by count.</li><li>quic_request: specifies quic requests by count.</li><li>bot_request_clean: specifies bot requests by count.</li><li>cls_count: specifies the number of real-time log pushes by count.</li><li>ddos_bandwidth: specifies elastic ddos protection bandwidth in bps.</li><br><b>edge computing usage:</b><li>edgefunction_request: specifies the number of edge function requests by count.</li><li>edgefunction_cpu_time: specifies edge function cpu processing time in milliseconds.</li>.
<b>Media processing usage:</b> <li>total_transcode: all specification audio, video jit transcoding, repackaging duration, in seconds;</li> <li>remux: repackaging duration, in seconds;</li> <li>transcode_audio: audio transcoding duration, in seconds;</li> <li>transcode_H264_SD: H.264 encoded standard-definition video (short side ≤ 480 px) duration, in seconds;</li> <li>transcode_H264_HD: H.264 encoded high-definition video (short side ≤ 720 px) duration, in seconds;</li> <li>transcode_H264_FHD: H.264 encoded full HD video (short side ≤ 1080 px) duration, in seconds;</li> <li>transcode_H264_2K: H.264 encoded 2K video (short side ≤ 1440 px) duration, in seconds.</li>.
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
                     * 获取Filter criteria. the detailed values of filter criteria are as follows:.
<li>host: specifies the domain name to filter by. example value: test.example.com.<br></li>.
<li>proxy-id: specifies the l4 proxy instance id for filtering. example value: sid-2rugn89bkla9.</li>.
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>

Specifies that `BillingDataFilter` with the same `Type` have an "or" relationship with each other, while those with different `Type` have an "and" relationship between them.
                     * @return Filters Filter criteria. the detailed values of filter criteria are as follows:.
<li>host: specifies the domain name to filter by. example value: test.example.com.<br></li>.
<li>proxy-id: specifies the l4 proxy instance id for filtering. example value: sid-2rugn89bkla9.</li>.
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>

Specifies that `BillingDataFilter` with the same `Type` have an "or" relationship with each other, while those with different `Type` have an "and" relationship between them.
                     * 
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. the detailed values of filter criteria are as follows:.
<li>host: specifies the domain name to filter by. example value: test.example.com.<br></li>.
<li>proxy-id: specifies the l4 proxy instance id for filtering. example value: sid-2rugn89bkla9.</li>.
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>

Specifies that `BillingDataFilter` with the same `Type` have an "or" relationship with each other, while those with different `Type` have an "and" relationship between them.
                     * @param _filters Filter criteria. the detailed values of filter criteria are as follows:.
<li>host: specifies the domain name to filter by. example value: test.example.com.<br></li>.
<li>proxy-id: specifies the l4 proxy instance id for filtering. example value: sid-2rugn89bkla9.</li>.
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>

Specifies that `BillingDataFilter` with the same `Type` have an "or" relationship with each other, while those with different `Type` have an "and" relationship between them.
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
                     * 获取Grouping aggregate dimension. a maximum of two dimensions can be grouped simultaneously. values are as follows: <li>zone-id: group by site id. if the content identifier functionality is used, priority is given to grouping by content identifier;<br></li> <li>host: group by domain name;<br></li> <li>proxy-id: group by layer 4 proxy instance id;<br></li> <li>region-id: group by billing region.</li>.
                     * @return GroupBy Grouping aggregate dimension. a maximum of two dimensions can be grouped simultaneously. values are as follows: <li>zone-id: group by site id. if the content identifier functionality is used, priority is given to grouping by content identifier;<br></li> <li>host: group by domain name;<br></li> <li>proxy-id: group by layer 4 proxy instance id;<br></li> <li>region-id: group by billing region.</li>.
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置Grouping aggregate dimension. a maximum of two dimensions can be grouped simultaneously. values are as follows: <li>zone-id: group by site id. if the content identifier functionality is used, priority is given to grouping by content identifier;<br></li> <li>host: group by domain name;<br></li> <li>proxy-id: group by layer 4 proxy instance id;<br></li> <li>region-id: group by billing region.</li>.
                     * @param _groupBy Grouping aggregate dimension. a maximum of two dimensions can be grouped simultaneously. values are as follows: <li>zone-id: group by site id. if the content identifier functionality is used, priority is given to grouping by content identifier;<br></li> <li>host: group by domain name;<br></li> <li>proxy-id: group by layer 4 proxy instance id;<br></li> <li>region-id: group by billing region.</li>.
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
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. the query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Site ID set. this parameter is required. a maximum of 100 site ids can be imported. use `*` to query data for all sites under the tencent cloud root account. querying account-level data requires permissions for all site resources in this api.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Metric list. values as follows:.
<b>l4/l7 acceleration traffic:</b><li>acc_flux: specifies content acceleration traffic in bytes.</li><li>smt_flux: specifies smart acceleration traffic in bytes.</li><li>l4_flux: specifies layer 4 acceleration traffic in bytes.</li><li>sec_flux: specifies independent protection traffic in bytes.</li><li>zxctg_flux: specifies network optimization traffic in the chinese mainland in bytes.</li><br><b>l4/l7 acceleration bandwidth:</b><li>acc_bandwidth: specifies content acceleration bandwidth in bps.</li><li>smt_bandwidth: specifies intelligent acceleration bandwidth in bps.</li><li>l4_bandwidth: specifies layer 4 acceleration bandwidth in bps.</li><li>sec_bandwidth: specifies exclusive protection bandwidth in bps.</li><li>zxctg_bandwidth: specifies network optimization bandwidth in the chinese mainland in bps.</li><br><b>HTTP/HTTPS security requests:</b><li>sec_request_clean: specifies HTTP/HTTPS requests by count.</li><br><b>vas usage:</b><li>smt_request_clean: specifies intelligent acceleration requests by count.</li><li>quic_request: specifies quic requests by count.</li><li>bot_request_clean: specifies bot requests by count.</li><li>cls_count: specifies the number of real-time log pushes by count.</li><li>ddos_bandwidth: specifies elastic ddos protection bandwidth in bps.</li><br><b>edge computing usage:</b><li>edgefunction_request: specifies the number of edge function requests by count.</li><li>edgefunction_cpu_time: specifies edge function cpu processing time in milliseconds.</li>.
<b>Media processing usage:</b> <li>total_transcode: all specification audio, video jit transcoding, repackaging duration, in seconds;</li> <li>remux: repackaging duration, in seconds;</li> <li>transcode_audio: audio transcoding duration, in seconds;</li> <li>transcode_H264_SD: H.264 encoded standard-definition video (short side ≤ 480 px) duration, in seconds;</li> <li>transcode_H264_HD: H.264 encoded high-definition video (short side ≤ 720 px) duration, in seconds;</li> <li>transcode_H264_FHD: H.264 encoded full HD video (short side ≤ 1080 px) duration, in seconds;</li> <li>transcode_H264_2K: H.264 encoded 2K video (short side ≤ 1440 px) duration, in seconds.</li>.
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
                     * Filter criteria. the detailed values of filter criteria are as follows:.
<li>host: specifies the domain name to filter by. example value: test.example.com.<br></li>.
<li>proxy-id: specifies the l4 proxy instance id for filtering. example value: sid-2rugn89bkla9.</li>.
<li>region-id: Filter by billing region. Options:<br>  CH: Chinese mainland<br>  AF: Africa<br>  AS1: Asia-Pacific Region 1<br>  AS2: Asia-Pacific Region 2<br>  AS3: Asia-Pacific Region 3<br>  EU: Europe<br>  MidEast: Middle East<br>  NA: North America<br>  SA: South America</li>

Specifies that `BillingDataFilter` with the same `Type` have an "or" relationship with each other, while those with different `Type` have an "and" relationship between them.
                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Grouping aggregate dimension. a maximum of two dimensions can be grouped simultaneously. values are as follows: <li>zone-id: group by site id. if the content identifier functionality is used, priority is given to grouping by content identifier;<br></li> <li>host: group by domain name;<br></li> <li>proxy-id: group by layer 4 proxy instance id;<br></li> <li>region-id: group by billing region.</li>.
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
