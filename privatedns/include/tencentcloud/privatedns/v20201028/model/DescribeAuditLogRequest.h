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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEAUDITLOGREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEAUDITLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeAuditLog request structure.
                */
                class DescribeAuditLogRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogRequest();
                    ~DescribeAuditLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Request volume statistics start time
                     * @return TimeRangeBegin Request volume statistics start time
                     * 
                     */
                    std::string GetTimeRangeBegin() const;

                    /**
                     * 设置Request volume statistics start time
                     * @param _timeRangeBegin Request volume statistics start time
                     * 
                     */
                    void SetTimeRangeBegin(const std::string& _timeRangeBegin);

                    /**
                     * 判断参数 TimeRangeBegin 是否已赋值
                     * @return TimeRangeBegin 是否已赋值
                     * 
                     */
                    bool TimeRangeBeginHasBeenSet() const;

                    /**
                     * 获取Filter parameter. Valid values: ZoneId (private domain ID), Domain (private domain), OperatorUin (operator account ID)
                     * @return Filters Filter parameter. Valid values: ZoneId (private domain ID), Domain (private domain), OperatorUin (operator account ID)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter parameter. Valid values: ZoneId (private domain ID), Domain (private domain), OperatorUin (operator account ID)
                     * @param _filters Filter parameter. Valid values: ZoneId (private domain ID), Domain (private domain), OperatorUin (operator account ID)
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
                     * 获取Request volume statistics end time
                     * @return TimeRangeEnd Request volume statistics end time
                     * 
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置Request volume statistics end time
                     * @param _timeRangeEnd Request volume statistics end time
                     * 
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     * 
                     */
                    bool TimeRangeEndHasBeenSet() const;

                    /**
                     * 获取Pagination offset, starting from 0
                     * @return Offset Pagination offset, starting from 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from 0
                     * @param _offset Pagination offset, starting from 0
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
                     * 获取Number of entries per page. Maximum value: 100. Default value: 20
                     * @return Limit Number of entries per page. Maximum value: 100. Default value: 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Maximum value: 100. Default value: 20
                     * @param _limit Number of entries per page. Maximum value: 100. Default value: 20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Request volume statistics start time
                     */
                    std::string m_timeRangeBegin;
                    bool m_timeRangeBeginHasBeenSet;

                    /**
                     * Filter parameter. Valid values: ZoneId (private domain ID), Domain (private domain), OperatorUin (operator account ID)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Request volume statistics end time
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                    /**
                     * Pagination offset, starting from 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Maximum value: 100. Default value: 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEAUDITLOGREQUEST_H_
