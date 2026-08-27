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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageRankItem.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageStats.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeUsageRankList response structure.
                */
                class DescribeUsageRankListResponse : public AbstractModel
                {
                public:
                    DescribeUsageRankListResponse();
                    ~DescribeUsageRankListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Statistical dimension of the backfill request.</p>
                     * @return Dimension <p>Statistical dimension of the backfill request.</p>
                     * 
                     */
                    std::string GetDimension() const;

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                    /**
                     * 获取<p>Metrics family of the backfill request: tokens / search.</p>
                     * @return MetricType <p>Metrics family of the backfill request: tokens / search.</p>
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of metric keys actually included in Stats / Series / PageStats / TotalStats in this response, case-sensitive by MetricType: tokens=[Total,Input,Output,Cache], search=[SearchRequestCount,SearchCount]</p>
                     * @return MetricKeys <p>List of metric keys actually included in Stats / Series / PageStats / TotalStats in this response, case-sensitive by MetricType: tokens=[Total,Input,Output,Cache], search=[SearchRequestCount,SearchCount]</p>
                     * 
                     */
                    std::vector<std::string> GetMetricKeys() const;

                    /**
                     * 判断参数 MetricKeys 是否已赋值
                     * @return MetricKeys 是否已赋值
                     * 
                     */
                    bool MetricKeysHasBeenSet() const;

                    /**
                     * 获取<p>View (data source)</p>
                     * @return ViewName <p>View (data source)</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取<p>Statistical granularity (in seconds) of the backfill request. It is 0 when ShowAll=true.</p>
                     * @return Period <p>Statistical granularity (in seconds) of the backfill request. It is 0 when ShowAll=true.</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>Backfill the start time of the request.</p>
                     * @return StartTime <p>Backfill the start time of the request.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time of the backfill request.</p>
                     * @return EndTime <p>End time of the backfill request.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of objects.</p>
                     * @return Total <p>Total number of objects.</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>Backfill the pagination starting point of the request. It is 0 when ShowAll=true.</p>
                     * @return Offset <p>Backfill the pagination starting point of the request. It is 0 when ShowAll=true.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Page size. It is always 10. When ShowAll=true, it is Total.</p>
                     * @return Limit <p>Page size. It is always 10. When ShowAll=true, it is Total.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Timestamp sequence corresponding to the Series array (Unix seconds). Empty array when ShowAll=true.</p>
                     * @return Timestamps <p>Timestamp sequence corresponding to the Series array (Unix seconds). Empty array when ShowAll=true.</p>
                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取<p>Object ranking list, sorted by <code>MetricKeys[0]</code> in descending order. When ShowAll=false, it is the 10 objects on the current page (including Series); when ShowAll=true, it is all objects (excluding Series, used for CSV export).</p>
                     * @return TopList <p>Object ranking list, sorted by <code>MetricKeys[0]</code> in descending order. When ShowAll=false, it is the 10 objects on the current page (including Series); when ShowAll=true, it is all objects (excluding Series, used for CSV export).</p>
                     * 
                     */
                    std::vector<UsageRankItem> GetTopList() const;

                    /**
                     * 判断参数 TopList 是否已赋值
                     * @return TopList 是否已赋值
                     * 
                     */
                    bool TopListHasBeenSet() const;

                    /**
                     * 获取<p>Pagination statistics result</p>
                     * @return PageStats <p>Pagination statistics result</p>
                     * 
                     */
                    UsageStats GetPageStats() const;

                    /**
                     * 判断参数 PageStats 是否已赋值
                     * @return PageStats 是否已赋值
                     * 
                     */
                    bool PageStatsHasBeenSet() const;

                    /**
                     * 获取<p>Total statistics result</p>
                     * @return TotalStats <p>Total statistics result</p>
                     * 
                     */
                    UsageStats GetTotalStats() const;

                    /**
                     * 判断参数 TotalStats 是否已赋值
                     * @return TotalStats 是否已赋值
                     * 
                     */
                    bool TotalStatsHasBeenSet() const;

                private:

                    /**
                     * <p>Statistical dimension of the backfill request.</p>
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * <p>Metrics family of the backfill request: tokens / search.</p>
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * <p>List of metric keys actually included in Stats / Series / PageStats / TotalStats in this response, case-sensitive by MetricType: tokens=[Total,Input,Output,Cache], search=[SearchRequestCount,SearchCount]</p>
                     */
                    std::vector<std::string> m_metricKeys;
                    bool m_metricKeysHasBeenSet;

                    /**
                     * <p>View (data source)</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>Statistical granularity (in seconds) of the backfill request. It is 0 when ShowAll=true.</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>Backfill the start time of the request.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of the backfill request.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Total number of objects.</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Backfill the pagination starting point of the request. It is 0 when ShowAll=true.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Page size. It is always 10. When ShowAll=true, it is Total.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Timestamp sequence corresponding to the Series array (Unix seconds). Empty array when ShowAll=true.</p>
                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * <p>Object ranking list, sorted by <code>MetricKeys[0]</code> in descending order. When ShowAll=false, it is the 10 objects on the current page (including Series); when ShowAll=true, it is all objects (excluding Series, used for CSV export).</p>
                     */
                    std::vector<UsageRankItem> m_topList;
                    bool m_topListHasBeenSet;

                    /**
                     * <p>Pagination statistics result</p>
                     */
                    UsageStats m_pageStats;
                    bool m_pageStatsHasBeenSet;

                    /**
                     * <p>Total statistics result</p>
                     */
                    UsageStats m_totalStats;
                    bool m_totalStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBEUSAGERANKLISTRESPONSE_H_
