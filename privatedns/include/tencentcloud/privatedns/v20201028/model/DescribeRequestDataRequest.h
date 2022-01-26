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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATAREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATAREQUEST_H_

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
                * DescribeRequestData request structure.
                */
                class DescribeRequestDataRequest : public AbstractModel
                {
                public:
                    DescribeRequestDataRequest();
                    ~DescribeRequestDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Request volume statistics start time in the format of 2020-11-22 00:00:00
                     * @return TimeRangeBegin Request volume statistics start time in the format of 2020-11-22 00:00:00
                     */
                    std::string GetTimeRangeBegin() const;

                    /**
                     * 设置Request volume statistics start time in the format of 2020-11-22 00:00:00
                     * @param TimeRangeBegin Request volume statistics start time in the format of 2020-11-22 00:00:00
                     */
                    void SetTimeRangeBegin(const std::string& _timeRangeBegin);

                    /**
                     * 判断参数 TimeRangeBegin 是否已赋值
                     * @return TimeRangeBegin 是否已赋值
                     */
                    bool TimeRangeBeginHasBeenSet() const;

                    /**
                     * 获取Filter parameter:
                     * @return Filters Filter parameter:
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter parameter:
                     * @param Filters Filter parameter:
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Request volume statistics end time in the format of 2020-11-22 23:59:59
                     * @return TimeRangeEnd Request volume statistics end time in the format of 2020-11-22 23:59:59
                     */
                    std::string GetTimeRangeEnd() const;

                    /**
                     * 设置Request volume statistics end time in the format of 2020-11-22 23:59:59
                     * @param TimeRangeEnd Request volume statistics end time in the format of 2020-11-22 23:59:59
                     */
                    void SetTimeRangeEnd(const std::string& _timeRangeEnd);

                    /**
                     * 判断参数 TimeRangeEnd 是否已赋值
                     * @return TimeRangeEnd 是否已赋值
                     */
                    bool TimeRangeEndHasBeenSet() const;

                private:

                    /**
                     * Request volume statistics start time in the format of 2020-11-22 00:00:00
                     */
                    std::string m_timeRangeBegin;
                    bool m_timeRangeBeginHasBeenSet;

                    /**
                     * Filter parameter:
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Request volume statistics end time in the format of 2020-11-22 23:59:59
                     */
                    std::string m_timeRangeEnd;
                    bool m_timeRangeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATAREQUEST_H_
