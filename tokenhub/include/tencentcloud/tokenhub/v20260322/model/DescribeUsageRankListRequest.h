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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeUsageRankList request structure.
                */
                class DescribeUsageRankListRequest : public AbstractModel
                {
                public:
                    DescribeUsageRankListRequest();
                    ~DescribeUsageRankListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Statistical dimension. Values: apikey (statistics by APIKey), endpoint (statistics by access point), model (statistics by model).</p>
                     * @return Dimension <p>Statistical dimension. Values: apikey (statistics by APIKey), endpoint (statistics by access point), model (statistics by model).</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置<p>Statistical dimension. Values: apikey (statistics by APIKey), endpoint (statistics by access point), model (statistics by model).</p>
                     * @param _dimension <p>Statistical dimension. Values: apikey (statistics by APIKey), endpoint (statistics by access point), model (statistics by model).</p>
                     * 
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>Start time (inclusive interval), in RFC3339 format.</p>
                     * @return StartTime <p>Start time (inclusive interval), in RFC3339 format.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time (inclusive interval), in RFC3339 format.</p>
                     * @param _startTime <p>Start time (inclusive interval), in RFC3339 format.</p>
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
                     * 获取<p>End time (open interval) in RFC3339 format. The maximum span from StartTime is 90 days.</p>
                     * @return EndTime <p>End time (open interval) in RFC3339 format. The maximum span from StartTime is 90 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time (open interval) in RFC3339 format. The maximum span from StartTime is 90 days.</p>
                     * @param _endTime <p>End time (open interval) in RFC3339 format. The maximum span from StartTime is 90 days.</p>
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
                     * 获取<p>Metric family switch field.</p><ul><li>tokens (default): Token consumption chart (statistics=sum), supports Dimension = apikey/endpoint/model</li><li>search [to be launched]: Online search call count (statistics=sum), only supports Dimension = model</li><li>Other values return InvalidParameter.</li></ul><p>Enum values:</p><ul><li>tokens: tokens</li></ul>
                     * @return MetricType <p>Metric family switch field.</p><ul><li>tokens (default): Token consumption chart (statistics=sum), supports Dimension = apikey/endpoint/model</li><li>search [to be launched]: Online search call count (statistics=sum), only supports Dimension = model</li><li>Other values return InvalidParameter.</li></ul><p>Enum values:</p><ul><li>tokens: tokens</li></ul>
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置<p>Metric family switch field.</p><ul><li>tokens (default): Token consumption chart (statistics=sum), supports Dimension = apikey/endpoint/model</li><li>search [to be launched]: Online search call count (statistics=sum), only supports Dimension = model</li><li>Other values return InvalidParameter.</li></ul><p>Enum values:</p><ul><li>tokens: tokens</li></ul>
                     * @param _metricType <p>Metric family switch field.</p><ul><li>tokens (default): Token consumption chart (statistics=sum), supports Dimension = apikey/endpoint/model</li><li>search [to be launched]: Online search call count (statistics=sum), only supports Dimension = model</li><li>Other values return InvalidParameter.</li></ul><p>Enum values:</p><ul><li>tokens: tokens</li></ul>
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取<p>Dimension filtering value. An empty string indicates querying all objects; a non-empty string indicates querying only the specified single object (for example, a designated APIKey ID). Maximum 256 characters.</p>
                     * @return Target <p>Dimension filtering value. An empty string indicates querying all objects; a non-empty string indicates querying only the specified single object (for example, a designated APIKey ID). Maximum 256 characters.</p>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置<p>Dimension filtering value. An empty string indicates querying all objects; a non-empty string indicates querying only the specified single object (for example, a designated APIKey ID). Maximum 256 characters.</p>
                     * @param _target <p>Dimension filtering value. An empty string indicates querying all objects; a non-empty string indicates querying only the specified single object (for example, a designated APIKey ID). Maximum 256 characters.</p>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>Statistical granularity (seconds). Value: 60, 300, 3600, 86400. Must not be less than the lower limit corresponding to the span: span ≤ 1 day → 60; 1–5 days → 300; 5–10 days → 3600; &gt; 10 days → 86400. Used only when ShowAll=false.</p>
                     * @return Period <p>Statistical granularity (seconds). Value: 60, 300, 3600, 86400. Must not be less than the lower limit corresponding to the span: span ≤ 1 day → 60; 1–5 days → 300; 5–10 days → 3600; &gt; 10 days → 86400. Used only when ShowAll=false.</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>Statistical granularity (seconds). Value: 60, 300, 3600, 86400. Must not be less than the lower limit corresponding to the span: span ≤ 1 day → 60; 1–5 days → 300; 5–10 days → 3600; &gt; 10 days → 86400. Used only when ShowAll=false.</p>
                     * @param _period <p>Statistical granularity (seconds). Value: 60, 300, 3600, 86400. Must not be less than the lower limit corresponding to the span: span ≤ 1 day → 60; 1–5 days → 300; 5–10 days → 3600; &gt; 10 days → 86400. Used only when ShowAll=false.</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Pagination starting point, starting from 0, default 0. Ignore timing when ShowAll=true. Page size fixed as 10.</p>
                     * @return Offset <p>Pagination starting point, starting from 0, default 0. Ignore timing when ShowAll=true. Page size fixed as 10.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination starting point, starting from 0, default 0. Ignore timing when ShowAll=true. Page size fixed as 10.</p>
                     * @param _offset <p>Pagination starting point, starting from 0, default 0. Ignore timing when ShowAll=true. Page size fixed as 10.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return full result.</p><ul><li>false (default): Return TopList in pages by Offset (10 items per page). Each object contains <br>Series time series points for drawing curves.</li><li>true: Ignore Offset and return the full object list without Series (CSV export scenario).</li></ul>
                     * @return ShowAll <p>Whether to return full result.</p><ul><li>false (default): Return TopList in pages by Offset (10 items per page). Each object contains <br>Series time series points for drawing curves.</li><li>true: Ignore Offset and return the full object list without Series (CSV export scenario).</li></ul>
                     * 
                     */
                    bool GetShowAll() const;

                    /**
                     * 设置<p>Whether to return full result.</p><ul><li>false (default): Return TopList in pages by Offset (10 items per page). Each object contains <br>Series time series points for drawing curves.</li><li>true: Ignore Offset and return the full object list without Series (CSV export scenario).</li></ul>
                     * @param _showAll <p>Whether to return full result.</p><ul><li>false (default): Return TopList in pages by Offset (10 items per page). Each object contains <br>Series time series points for drawing curves.</li><li>true: Ignore Offset and return the full object list without Series (CSV export scenario).</li></ul>
                     * 
                     */
                    void SetShowAll(const bool& _showAll);

                    /**
                     * 判断参数 ShowAll 是否已赋值
                     * @return ShowAll 是否已赋值
                     * 
                     */
                    bool ShowAllHasBeenSet() const;

                private:

                    /**
                     * <p>Statistical dimension. Values: apikey (statistics by APIKey), endpoint (statistics by access point), model (statistics by model).</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>Start time (inclusive interval), in RFC3339 format.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time (open interval) in RFC3339 format. The maximum span from StartTime is 90 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Metric family switch field.</p><ul><li>tokens (default): Token consumption chart (statistics=sum), supports Dimension = apikey/endpoint/model</li><li>search [to be launched]: Online search call count (statistics=sum), only supports Dimension = model</li><li>Other values return InvalidParameter.</li></ul><p>Enum values:</p><ul><li>tokens: tokens</li></ul>
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * <p>Dimension filtering value. An empty string indicates querying all objects; a non-empty string indicates querying only the specified single object (for example, a designated APIKey ID). Maximum 256 characters.</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>Statistical granularity (seconds). Value: 60, 300, 3600, 86400. Must not be less than the lower limit corresponding to the span: span ≤ 1 day → 60; 1–5 days → 300; 5–10 days → 3600; &gt; 10 days → 86400. Used only when ShowAll=false.</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Pagination starting point, starting from 0, default 0. Ignore timing when ShowAll=true. Page size fixed as 10.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Whether to return full result.</p><ul><li>false (default): Return TopList in pages by Offset (10 items per page). Each object contains <br>Series time series points for drawing curves.</li><li>true: Ignore Offset and return the full object list without Series (CSV export scenario).</li></ul>
                     */
                    bool m_showAll;
                    bool m_showAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTREQUEST_H_
