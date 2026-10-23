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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDETAILREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisDetail request structure.
                */
                class DescribeLogAnalysisDetailRequest : public AbstractModel
                {
                public:
                    DescribeLogAnalysisDetailRequest();
                    ~DescribeLogAnalysisDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul>Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * @return Area <p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul>Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul>Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * @param _area <p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul>Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Start time, example value: 2020-04 29T00:00:00Z. The maximum span supported for query start time to this day varies by package version. For more details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     * @return StartTime <p>Start time, example value: 2020-04 29T00:00:00Z. The maximum span supported for query start time to this day varies by package version. For more details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time, example value: 2020-04 29T00:00:00Z. The maximum span supported for query start time to this day varies by package version. For more details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     * @param _startTime <p>Start time, example value: 2020-04 29T00:00:00Z. The maximum span supported for query start time to this day varies by package version. For more details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
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
                     * 获取<p>End time, example value: 2020-04-30T00:00:00Z. The maximum duration from the start time to the end time per request is 31 days.</p>
                     * @return EndTime <p>End time, example value: 2020-04-30T00:00:00Z. The maximum duration from the start time to the end time per request is 31 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time, example value: 2020-04-30T00:00:00Z. The maximum duration from the start time to the end time per request is 31 days.</p>
                     * @param _endTime <p>End time, example value: 2020-04-30T00:00:00Z. The maximum duration from the start time to the end time per request is 31 days.</p>
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
                     * 获取<p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * @return LogType <p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * @param _logType <p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * @return Condition <p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * @param _condition <p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * @return Limit <p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * @param _limit <p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query offset, defaults to 0.</p>
                     * @return Offset <p>Paginated query offset, defaults to 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset, defaults to 0.</p>
                     * @param _offset <p>Paginated query offset, defaults to 0.</p>
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
                     * 获取<p>Whether raw logs are returned in time sequence. Available values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul> Default is desc.</p>
                     * @return Sort <p>Whether raw logs are returned in time sequence. Available values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul> Default is desc.</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Whether raw logs are returned in time sequence. Available values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul> Default is desc.</p>
                     * @param _sort <p>Whether raw logs are returned in time sequence. Available values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul> Default is desc.</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Data service area. Available values:<ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding Mainland China).</li></ul>Note: If the site service area is "global availability zone", you need to query the data of mainland and overseas separately to obtain all data.</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Start time, example value: 2020-04 29T00:00:00Z. The maximum span supported for query start time to this day varies by package version. For more details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time, example value: 2020-04-30T00:00:00Z. The maximum duration from the start time to the end time per request is 31 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Log type. Available values: <ul><li> l7-access-logs: Layer 7 Access Logs;</li><li>web-attack: Managed Rule Logs.</li></ul>Defaults to l7-access-logs.</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p><a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">Log match condition</a>. Maximum length 12KB.</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>Paginated query limit. Default value: 20, maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paginated query offset, defaults to 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Whether raw logs are returned in time sequence. Available values: <ul><li>asc: ascending order;</li><li>desc: descending order.</li></ul> Default is desc.</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDETAILREQUEST_H_
