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
                     * 获取The end time. The query time range (EndTime - StartTime) must be less than or equal to 31 days.
                     * @return EndTime The end time. The query time range (EndTime - StartTime) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time. The query time range (EndTime - StartTime) must be less than or equal to 31 days.
                     * @param _endTime The end time. The query time range (EndTime - StartTime) must be less than or equal to 31 days.
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
                     * 获取Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     * @return ZoneIds Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     * @param _zoneIds Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
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
                     * 获取Metric name. Valid values:
**Layer 4/7 Acceleration Traffic (Unit: Byte):**
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the chinese mainland, in bytes;</li>

**Layer 4/7 Acceleration Bandwidth (Unit: bps):**
<Li>acc_bandwidth: content acceleration bandwidth, in bps.</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<Li>l4_bandwidth: layer 4 acceleration bandwidth, in bps.</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps.</li>
<li>zxctg_bandwidth: network optimization bandwidth in the chinese mainland, in bps;</li>

**HTTP/HTTPS Security Requests (Unit: counts):**
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>

**Value-added Service Usage:**
<li>smt_request_clean: number of smart acceleration requests, in counts;</li>
<li>quic_request: number of quic requests;</li>
<Li>bot_request_clean: number of bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li>

**Edge Computing Usage:**
<li>edgefunction_request: number of edge function executions, in counts</li>
<li>edgefunction_cpu_time: edge function CPU processing time, in milliseconds</li>

**Media Processing Usage (Unit: seconds):**
<li>total_transcode: duration of jit transcoding and transmuxing for all specifications of audio and video, in seconds;</li>
<li>remux: transmuxing duration, in seconds;</li>
<li>transcode_audio: audio transcoding duration, in seconds;</li>
<li>transcode_H264_SD: specifies the duration of standard-definition videos encoded in H.264 (short side <= 480 px), in seconds;</li>
<li>transcode_H264_HD: specifies the duration of high-definition video (short side <= 720 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_FHD: specifies the duration of a full hd video (short side <= 1080 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_2K: specifies the duration of a 2K video (short side <= 1440 px) encoded in H.264, expressed in seconds.</li>


                     * @return MetricName Metric name. Valid values:
**Layer 4/7 Acceleration Traffic (Unit: Byte):**
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the chinese mainland, in bytes;</li>

**Layer 4/7 Acceleration Bandwidth (Unit: bps):**
<Li>acc_bandwidth: content acceleration bandwidth, in bps.</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<Li>l4_bandwidth: layer 4 acceleration bandwidth, in bps.</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps.</li>
<li>zxctg_bandwidth: network optimization bandwidth in the chinese mainland, in bps;</li>

**HTTP/HTTPS Security Requests (Unit: counts):**
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>

**Value-added Service Usage:**
<li>smt_request_clean: number of smart acceleration requests, in counts;</li>
<li>quic_request: number of quic requests;</li>
<Li>bot_request_clean: number of bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li>

**Edge Computing Usage:**
<li>edgefunction_request: number of edge function executions, in counts</li>
<li>edgefunction_cpu_time: edge function CPU processing time, in milliseconds</li>

**Media Processing Usage (Unit: seconds):**
<li>total_transcode: duration of jit transcoding and transmuxing for all specifications of audio and video, in seconds;</li>
<li>remux: transmuxing duration, in seconds;</li>
<li>transcode_audio: audio transcoding duration, in seconds;</li>
<li>transcode_H264_SD: specifies the duration of standard-definition videos encoded in H.264 (short side <= 480 px), in seconds;</li>
<li>transcode_H264_HD: specifies the duration of high-definition video (short side <= 720 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_FHD: specifies the duration of a full hd video (short side <= 1080 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_2K: specifies the duration of a 2K video (short side <= 1440 px) encoded in H.264, expressed in seconds.</li>


                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. Valid values:
**Layer 4/7 Acceleration Traffic (Unit: Byte):**
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the chinese mainland, in bytes;</li>

**Layer 4/7 Acceleration Bandwidth (Unit: bps):**
<Li>acc_bandwidth: content acceleration bandwidth, in bps.</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<Li>l4_bandwidth: layer 4 acceleration bandwidth, in bps.</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps.</li>
<li>zxctg_bandwidth: network optimization bandwidth in the chinese mainland, in bps;</li>

**HTTP/HTTPS Security Requests (Unit: counts):**
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>

**Value-added Service Usage:**
<li>smt_request_clean: number of smart acceleration requests, in counts;</li>
<li>quic_request: number of quic requests;</li>
<Li>bot_request_clean: number of bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li>

**Edge Computing Usage:**
<li>edgefunction_request: number of edge function executions, in counts</li>
<li>edgefunction_cpu_time: edge function CPU processing time, in milliseconds</li>

**Media Processing Usage (Unit: seconds):**
<li>total_transcode: duration of jit transcoding and transmuxing for all specifications of audio and video, in seconds;</li>
<li>remux: transmuxing duration, in seconds;</li>
<li>transcode_audio: audio transcoding duration, in seconds;</li>
<li>transcode_H264_SD: specifies the duration of standard-definition videos encoded in H.264 (short side <= 480 px), in seconds;</li>
<li>transcode_H264_HD: specifies the duration of high-definition video (short side <= 720 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_FHD: specifies the duration of a full hd video (short side <= 1080 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_2K: specifies the duration of a 2K video (short side <= 1440 px) encoded in H.264, expressed in seconds.</li>


                     * @param _metricName Metric name. Valid values:
**Layer 4/7 Acceleration Traffic (Unit: Byte):**
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the chinese mainland, in bytes;</li>

**Layer 4/7 Acceleration Bandwidth (Unit: bps):**
<Li>acc_bandwidth: content acceleration bandwidth, in bps.</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<Li>l4_bandwidth: layer 4 acceleration bandwidth, in bps.</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps.</li>
<li>zxctg_bandwidth: network optimization bandwidth in the chinese mainland, in bps;</li>

**HTTP/HTTPS Security Requests (Unit: counts):**
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>

**Value-added Service Usage:**
<li>smt_request_clean: number of smart acceleration requests, in counts;</li>
<li>quic_request: number of quic requests;</li>
<Li>bot_request_clean: number of bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li>

**Edge Computing Usage:**
<li>edgefunction_request: number of edge function executions, in counts</li>
<li>edgefunction_cpu_time: edge function CPU processing time, in milliseconds</li>

**Media Processing Usage (Unit: seconds):**
<li>total_transcode: duration of jit transcoding and transmuxing for all specifications of audio and video, in seconds;</li>
<li>remux: transmuxing duration, in seconds;</li>
<li>transcode_audio: audio transcoding duration, in seconds;</li>
<li>transcode_H264_SD: specifies the duration of standard-definition videos encoded in H.264 (short side <= 480 px), in seconds;</li>
<li>transcode_H264_HD: specifies the duration of high-definition video (short side <= 720 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_FHD: specifies the duration of a full hd video (short side <= 1080 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_2K: specifies the duration of a 2K video (short side <= 1440 px) encoded in H.264, expressed in seconds.</li>


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
<ul>
  <li>host: Filter by domain name, such as test.example.com.</li>
  <li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.</li>
  <li>region-id: Filter by billing region. Options:
    <ul>
      <li>CH: Chinese mainland</li>
      <li>AF: Africa</li>
      <li>AS1: Asia-Pacific Region 1</li>
      <li>AS2: Asia-Pacific Region 2</li>
      <li>AS3: Asia-Pacific Region 3</li>
      <li>EU: Europe</li>
      <li>MidEast: Middle East</li>
      <li>NA: North America</li>
      <li>SA: South America</li>
    </ul>
  </li>
</ul>
<p>Note: Filters of the same `Type` use OR logic, while filters of different `Type` use AND logic.</p>

                     * @return Filters Filter criteria. The detailed values of filter criteria are as follows:
<ul>
  <li>host: Filter by domain name, such as test.example.com.</li>
  <li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.</li>
  <li>region-id: Filter by billing region. Options:
    <ul>
      <li>CH: Chinese mainland</li>
      <li>AF: Africa</li>
      <li>AS1: Asia-Pacific Region 1</li>
      <li>AS2: Asia-Pacific Region 2</li>
      <li>AS3: Asia-Pacific Region 3</li>
      <li>EU: Europe</li>
      <li>MidEast: Middle East</li>
      <li>NA: North America</li>
      <li>SA: South America</li>
    </ul>
  </li>
</ul>
<p>Note: Filters of the same `Type` use OR logic, while filters of different `Type` use AND logic.</p>

                     * 
                     */
                    std::vector<BillingDataFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed values of filter criteria are as follows:
<ul>
  <li>host: Filter by domain name, such as test.example.com.</li>
  <li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.</li>
  <li>region-id: Filter by billing region. Options:
    <ul>
      <li>CH: Chinese mainland</li>
      <li>AF: Africa</li>
      <li>AS1: Asia-Pacific Region 1</li>
      <li>AS2: Asia-Pacific Region 2</li>
      <li>AS3: Asia-Pacific Region 3</li>
      <li>EU: Europe</li>
      <li>MidEast: Middle East</li>
      <li>NA: North America</li>
      <li>SA: South America</li>
    </ul>
  </li>
</ul>
<p>Note: Filters of the same `Type` use OR logic, while filters of different `Type` use AND logic.</p>

                     * @param _filters Filter criteria. The detailed values of filter criteria are as follows:
<ul>
  <li>host: Filter by domain name, such as test.example.com.</li>
  <li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.</li>
  <li>region-id: Filter by billing region. Options:
    <ul>
      <li>CH: Chinese mainland</li>
      <li>AF: Africa</li>
      <li>AS1: Asia-Pacific Region 1</li>
      <li>AS2: Asia-Pacific Region 2</li>
      <li>AS3: Asia-Pacific Region 3</li>
      <li>EU: Europe</li>
      <li>MidEast: Middle East</li>
      <li>NA: North America</li>
      <li>SA: South America</li>
    </ul>
  </li>
</ul>
<p>Note: Filters of the same `Type` use OR logic, while filters of different `Type` use AND logic.</p>

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
                     * 获取<p>Grouping aggregation dimensions. A maximum of two dimensions can be used for grouping simultaneously. The values are as follows:</p>
  <ul>
    <li>zone-id: Group by zone ID. If content identifiers are used, grouping by content identifier takes priority.</li>
    <li>host: Group by domain name.</li>
    <li>proxy-id: Group by layer-4 proxy instance ID.</li>
    <li>region-id: Group by billing region.</li>
  </ul>
                     * @return GroupBy <p>Grouping aggregation dimensions. A maximum of two dimensions can be used for grouping simultaneously. The values are as follows:</p>
  <ul>
    <li>zone-id: Group by zone ID. If content identifiers are used, grouping by content identifier takes priority.</li>
    <li>host: Group by domain name.</li>
    <li>proxy-id: Group by layer-4 proxy instance ID.</li>
    <li>region-id: Group by billing region.</li>
  </ul>
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置<p>Grouping aggregation dimensions. A maximum of two dimensions can be used for grouping simultaneously. The values are as follows:</p>
  <ul>
    <li>zone-id: Group by zone ID. If content identifiers are used, grouping by content identifier takes priority.</li>
    <li>host: Group by domain name.</li>
    <li>proxy-id: Group by layer-4 proxy instance ID.</li>
    <li>region-id: Group by billing region.</li>
  </ul>
                     * @param _groupBy <p>Grouping aggregation dimensions. A maximum of two dimensions can be used for grouping simultaneously. The values are as follows:</p>
  <ul>
    <li>zone-id: Group by zone ID. If content identifiers are used, grouping by content identifier takes priority.</li>
    <li>host: Group by domain name.</li>
    <li>proxy-id: Group by layer-4 proxy instance ID.</li>
    <li>region-id: Group by billing region.</li>
  </ul>
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
                     * The end time. The query time range (EndTime - StartTime) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Metric name. Valid values:
**Layer 4/7 Acceleration Traffic (Unit: Byte):**
<li>acc_flux: content acceleration traffic, in bytes;</li>
<li>smt_flux: smart acceleration traffic, in bytes;</li>
<li>l4_flux: layer 4 acceleration traffic, in bytes;</li>
<li>sec_flux: exclusive protection traffic, in bytes;</li>
<li>zxctg_flux: network optimization traffic in the chinese mainland, in bytes;</li>

**Layer 4/7 Acceleration Bandwidth (Unit: bps):**
<Li>acc_bandwidth: content acceleration bandwidth, in bps.</li>
<li>smt_bandwidth: smart acceleration bandwidth, in bps;</li>
<Li>l4_bandwidth: layer 4 acceleration bandwidth, in bps.</li>
<li>sec_bandwidth: exclusive protection bandwidth, in bps.</li>
<li>zxctg_bandwidth: network optimization bandwidth in the chinese mainland, in bps;</li>

**HTTP/HTTPS Security Requests (Unit: counts):**
<li>sec_request_clean: number of HTTP/HTTPS requests;</li>

**Value-added Service Usage:**
<li>smt_request_clean: number of smart acceleration requests, in counts;</li>
<li>quic_request: number of quic requests;</li>
<Li>bot_request_clean: number of bot requests;</li>
<li>cls_count: number of real-time log entries pushed;</li>
<li>ddos_bandwidth: elastic ddos protection bandwidth, in bps.</li>

**Edge Computing Usage:**
<li>edgefunction_request: number of edge function executions, in counts</li>
<li>edgefunction_cpu_time: edge function CPU processing time, in milliseconds</li>

**Media Processing Usage (Unit: seconds):**
<li>total_transcode: duration of jit transcoding and transmuxing for all specifications of audio and video, in seconds;</li>
<li>remux: transmuxing duration, in seconds;</li>
<li>transcode_audio: audio transcoding duration, in seconds;</li>
<li>transcode_H264_SD: specifies the duration of standard-definition videos encoded in H.264 (short side <= 480 px), in seconds;</li>
<li>transcode_H264_HD: specifies the duration of high-definition video (short side <= 720 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_FHD: specifies the duration of a full hd video (short side <= 1080 px) encoded in H.264, in seconds;</li>
<li>transcode_H264_2K: specifies the duration of a 2K video (short side <= 1440 px) encoded in H.264, expressed in seconds.</li>


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
<ul>
  <li>host: Filter by domain name, such as test.example.com.</li>
  <li>proxy-id: Filter by L4 proxy instance ID, such as sid-2rugn89bkla9.</li>
  <li>region-id: Filter by billing region. Options:
    <ul>
      <li>CH: Chinese mainland</li>
      <li>AF: Africa</li>
      <li>AS1: Asia-Pacific Region 1</li>
      <li>AS2: Asia-Pacific Region 2</li>
      <li>AS3: Asia-Pacific Region 3</li>
      <li>EU: Europe</li>
      <li>MidEast: Middle East</li>
      <li>NA: North America</li>
      <li>SA: South America</li>
    </ul>
  </li>
</ul>
<p>Note: Filters of the same `Type` use OR logic, while filters of different `Type` use AND logic.</p>

                     */
                    std::vector<BillingDataFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Grouping aggregation dimensions. A maximum of two dimensions can be used for grouping simultaneously. The values are as follows:</p>
  <ul>
    <li>zone-id: Group by zone ID. If content identifiers are used, grouping by content identifier takes priority.</li>
    <li>host: Group by domain name.</li>
    <li>proxy-id: Group by layer-4 proxy instance ID.</li>
    <li>region-id: Group by billing region.</li>
  </ul>
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEBILLINGDATAREQUEST_H_
