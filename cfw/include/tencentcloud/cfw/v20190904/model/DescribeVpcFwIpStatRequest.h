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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWIPSTATREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWIPSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeVpcFwIpStat request structure.
                */
                class DescribeVpcFwIpStatRequest : public AbstractModel
                {
                public:
                    DescribeVpcFwIpStatRequest();
                    ~DescribeVpcFwIpStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Entries per page</p>
                     * @return Limit <p>Entries per page</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Entries per page</p>
                     * @param _limit <p>Entries per page</p>
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
                     * 获取<p>Offset value</p>
                     * @return Offset <p>Offset value</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset value</p>
                     * @param _offset <p>Offset value</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Firewall group ID</p>
                     * @return FwGroupId <p>Firewall group ID</p>
                     * 
                     */
                    std::string GetFwGroupId() const;

                    /**
                     * 设置<p>Firewall group ID</p>
                     * @param _fwGroupId <p>Firewall group ID</p>
                     * 
                     */
                    void SetFwGroupId(const std::string& _fwGroupId);

                    /**
                     * 判断参数 FwGroupId 是否已赋值
                     * @return FwGroupId 是否已赋值
                     * 
                     */
                    bool FwGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance id of the firewall</p>
                     * @return FwInsId <p>Instance id of the firewall</p>
                     * 
                     */
                    std::string GetFwInsId() const;

                    /**
                     * 设置<p>Instance id of the firewall</p>
                     * @param _fwInsId <p>Instance id of the firewall</p>
                     * 
                     */
                    void SetFwInsId(const std::string& _fwInsId);

                    /**
                     * 判断参数 FwInsId 是否已赋值
                     * @return FwInsId 是否已赋值
                     * 
                     */
                    bool FwInsIdHasBeenSet() const;

                    /**
                     * 获取<p>Selected time interval 1: within an hour, 2: 24 hours, 3: 7 days, 4: 1 month</p>
                     * @return TimeType <p>Selected time interval 1: within an hour, 2: 24 hours, 3: 7 days, 4: 1 month</p>
                     * 
                     */
                    int64_t GetTimeType() const;

                    /**
                     * 设置<p>Selected time interval 1: within an hour, 2: 24 hours, 3: 7 days, 4: 1 month</p>
                     * @param _timeType <p>Selected time interval 1: within an hour, 2: 24 hours, 3: 7 days, 4: 1 month</p>
                     * 
                     */
                    void SetTimeType(const int64_t& _timeType);

                    /**
                     * 判断参数 TimeType 是否已赋值
                     * @return TimeType 是否已赋值
                     * 
                     */
                    bool TimeTypeHasBeenSet() const;

                    /**
                     * 获取<p>Filter condition composite</p>
                     * @return Filters <p>Filter condition composite</p>
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter condition composite</p>
                     * @param _filters <p>Filter condition composite</p>
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Start time of retrieval. Can be omitted.</p>
                     * @return StartTime <p>Start time of retrieval. Can be omitted.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time of retrieval. Can be omitted.</p>
                     * @param _startTime <p>Start time of retrieval. Can be omitted.</p>
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
                     * 获取<p>End time of retrieval. Can be omitted.</p>
                     * @return EndTime <p>End time of retrieval. Can be omitted.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time of retrieval. Can be omitted.</p>
                     * @param _endTime <p>End time of retrieval. Can be omitted.</p>
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
                     * 获取<p>desc: descending order; asc: ascending order. Sort by the value of the By field. If any parameters are loaded, by must have a value.</p>
                     * @return Order <p>desc: descending order; asc: ascending order. Sort by the value of the By field. If any parameters are loaded, by must have a value.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>desc: descending order; asc: ascending order. Sort by the value of the By field. If any parameters are loaded, by must have a value.</p>
                     * @param _order <p>desc: descending order; asc: ascending order. Sort by the value of the By field. If any parameters are loaded, by must have a value.</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Fields used for sorting</p>
                     * @return By <p>Fields used for sorting</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Fields used for sorting</p>
                     * @param _by <p>Fields used for sorting</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>Entries per page</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset value</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Firewall group ID</p>
                     */
                    std::string m_fwGroupId;
                    bool m_fwGroupIdHasBeenSet;

                    /**
                     * <p>Instance id of the firewall</p>
                     */
                    std::string m_fwInsId;
                    bool m_fwInsIdHasBeenSet;

                    /**
                     * <p>Selected time interval 1: within an hour, 2: 24 hours, 3: 7 days, 4: 1 month</p>
                     */
                    int64_t m_timeType;
                    bool m_timeTypeHasBeenSet;

                    /**
                     * <p>Filter condition composite</p>
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Start time of retrieval. Can be omitted.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of retrieval. Can be omitted.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>desc: descending order; asc: ascending order. Sort by the value of the By field. If any parameters are loaded, by must have a value.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Fields used for sorting</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCFWIPSTATREQUEST_H_
