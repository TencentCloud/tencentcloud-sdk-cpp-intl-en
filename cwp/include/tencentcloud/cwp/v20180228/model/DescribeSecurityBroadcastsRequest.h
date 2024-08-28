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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYBROADCASTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYBROADCASTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityBroadcasts request structure.
                */
                class DescribeSecurityBroadcastsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityBroadcastsRequest();
                    ~DescribeSecurityBroadcastsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, which defaults to 0
                     * @return Offset Offset, which defaults to 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which defaults to 0
                     * @param _offset Offset, which defaults to 0
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
                     * 获取Number of records to return, which is 10 by default, and 0 = all.
                     * @return Limit Number of records to return, which is 10 by default, and 0 = all.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of records to return, which is 10 by default, and 0 = all.
                     * @param _limit Number of records to return, which is 10 by default, and 0 = all.
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
                     * 获取Filter release date: start time
                     * @return BeginDate Filter release date: start time
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置Filter release date: start time
                     * @param _beginDate Filter release date: start time
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取Filter release date: end time
                     * @return EndDate Filter release date: end time
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置Filter release date: end time
                     * @param _endDate Filter release date: end time
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Filter security report type: 0 - emergency notification; 1 - feature update; 2 - industry honor; 3 - version release
                     * @return BroadcastType Filter security report type: 0 - emergency notification; 1 - feature update; 2 - industry honor; 3 - version release
                     * 
                     */
                    std::string GetBroadcastType() const;

                    /**
                     * 设置Filter security report type: 0 - emergency notification; 1 - feature update; 2 - industry honor; 3 - version release
                     * @param _broadcastType Filter security report type: 0 - emergency notification; 1 - feature update; 2 - industry honor; 3 - version release
                     * 
                     */
                    void SetBroadcastType(const std::string& _broadcastType);

                    /**
                     * 判断参数 BroadcastType 是否已赋值
                     * @return BroadcastType 是否已赋值
                     * 
                     */
                    bool BroadcastTypeHasBeenSet() const;

                private:

                    /**
                     * Offset, which defaults to 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of records to return, which is 10 by default, and 0 = all.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter release date: start time
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * Filter release date: end time
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Filter security report type: 0 - emergency notification; 1 - feature update; 2 - industry honor; 3 - version release
                     */
                    std::string m_broadcastType;
                    bool m_broadcastTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYBROADCASTSREQUEST_H_
