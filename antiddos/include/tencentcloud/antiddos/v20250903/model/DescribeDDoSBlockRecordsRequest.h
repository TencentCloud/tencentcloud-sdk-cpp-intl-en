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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSBLOCKRECORDSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSBLOCKRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20250903/model/Filter.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DescribeDDoSBlockRecords request structure.
                */
                class DescribeDDoSBlockRecordsRequest : public AbstractModel
                {
                public:
                    DescribeDDoSBlockRecordsRequest();
                    ~DescribeDDoSBlockRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Start time of the query. Support up to data query for the past one year.</p><p>Parameter format: 2026-02-04T11:30:00+08:00.</p>
                     * @return StartTime <p>Start time of the query. Support up to data query for the past one year.</p><p>Parameter format: 2026-02-04T11:30:00+08:00.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time of the query. Support up to data query for the past one year.</p><p>Parameter format: 2026-02-04T11:30:00+08:00.</p>
                     * @param _startTime <p>Start time of the query. Support up to data query for the past one year.</p><p>Parameter format: 2026-02-04T11:30:00+08:00.</p>
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
                     * 获取<p>End time of query. The query time range (EndTime - StartTime) must be less than or equal to 31 days.</p><p>Parameter format: 2026-03-04T11:30:00+08:00.</p>
                     * @return EndTime <p>End time of query. The query time range (EndTime - StartTime) must be less than or equal to 31 days.</p><p>Parameter format: 2026-03-04T11:30:00+08:00.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time of query. The query time range (EndTime - StartTime) must be less than or equal to 31 days.</p><p>Parameter format: 2026-03-04T11:30:00+08:00.</p>
                     * @param _endTime <p>End time of query. The query time range (EndTime - StartTime) must be less than or equal to 31 days.</p><p>Parameter format: 2026-03-04T11:30:00+08:00.</p>
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
                     * 获取<p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, return the current list of resources blocked under the appid. Detailed filter criteria:</p><ul><li> Resource: Filter by blocked IP or six-segment resource format;</li><li> Status: Filter by blocked resource status.</li></ul><p>When Filters.Name value is Status, Filters.Values valid values:</p><ul><li>Blocked: blocked;</li><li>Unblocking: unblocking;</li><li>Unblocked: unblocked.</li></ul>
                     * @return Filters <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, return the current list of resources blocked under the appid. Detailed filter criteria:</p><ul><li> Resource: Filter by blocked IP or six-segment resource format;</li><li> Status: Filter by blocked resource status.</li></ul><p>When Filters.Name value is Status, Filters.Values valid values:</p><ul><li>Blocked: blocked;</li><li>Unblocking: unblocking;</li><li>Unblocked: unblocked.</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, return the current list of resources blocked under the appid. Detailed filter criteria:</p><ul><li> Resource: Filter by blocked IP or six-segment resource format;</li><li> Status: Filter by blocked resource status.</li></ul><p>When Filters.Name value is Status, Filters.Values valid values:</p><ul><li>Blocked: blocked;</li><li>Unblocking: unblocking;</li><li>Unblocked: unblocked.</li></ul>
                     * @param _filters <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, return the current list of resources blocked under the appid. Detailed filter criteria:</p><ul><li> Resource: Filter by blocked IP or six-segment resource format;</li><li> Status: Filter by blocked resource status.</li></ul><p>When Filters.Name value is Status, Filters.Values valid values:</p><ul><li>Blocked: blocked;</li><li>Unblocking: unblocking;</li><li>Unblocked: unblocked.</li></ul>
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
                     * 获取<p>Paginated query limit count. Maximum value: 100.</p><p>Default value: 20</p>
                     * @return Limit <p>Paginated query limit count. Maximum value: 100.</p><p>Default value: 20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Paginated query limit count. Maximum value: 100.</p><p>Default value: 20</p>
                     * @param _limit <p>Paginated query limit count. Maximum value: 100.</p><p>Default value: 20</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Paginated query offset.</p><p>Default value: 0.</p>
                     * @return Offset <p>Paginated query offset.</p><p>Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset.</p><p>Default value: 0.</p>
                     * @param _offset <p>Paginated query offset.</p><p>Default value: 0.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Start time of the query. Support up to data query for the past one year.</p><p>Parameter format: 2026-02-04T11:30:00+08:00.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of query. The query time range (EndTime - StartTime) must be less than or equal to 31 days.</p><p>Parameter format: 2026-03-04T11:30:00+08:00.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Filter criteria. The maximum number of Filters.Values is 20. If this parameter is left empty, return the current list of resources blocked under the appid. Detailed filter criteria:</p><ul><li> Resource: Filter by blocked IP or six-segment resource format;</li><li> Status: Filter by blocked resource status.</li></ul><p>When Filters.Name value is Status, Filters.Values valid values:</p><ul><li>Blocked: blocked;</li><li>Unblocking: unblocking;</li><li>Unblocked: unblocked.</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Paginated query limit count. Maximum value: 100.</p><p>Default value: 20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paginated query offset.</p><p>Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSBLOCKRECORDSREQUEST_H_
