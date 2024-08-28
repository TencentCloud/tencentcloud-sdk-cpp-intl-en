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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKSOURCEEVENTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKSOURCEEVENTSREQUEST_H_

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
                * DescribeAttackSourceEvents request structure.
                */
                class DescribeAttackSourceEventsRequest : public AbstractModel
                {
                public:
                    DescribeAttackSourceEventsRequest();
                    ~DescribeAttackSourceEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Start date
                     * @return BeginDate Start date
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置Start date
                     * @param _beginDate Start date
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
                     * 获取End date
                     * @return EndDate End date
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End date
                     * @param _endDate End date
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
                     * 获取EventInfoParam returned by DescribeAttackSource API
                     * @return EventInfoParam EventInfoParam returned by DescribeAttackSource API
                     * 
                     */
                    std::string GetEventInfoParam() const;

                    /**
                     * 设置EventInfoParam returned by DescribeAttackSource API
                     * @param _eventInfoParam EventInfoParam returned by DescribeAttackSource API
                     * 
                     */
                    void SetEventInfoParam(const std::string& _eventInfoParam);

                    /**
                     * 判断参数 EventInfoParam 是否已赋值
                     * @return EventInfoParam 是否已赋值
                     * 
                     */
                    bool EventInfoParamHasBeenSet() const;

                    /**
                     * 获取Maximum number of paginations, which is 10 by default.
                     * @return Limit Maximum number of paginations, which is 10 by default.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of paginations, which is 10 by default.
                     * @param _limit Maximum number of paginations, which is 10 by default.
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
                     * 获取Starting step size, which is 0 by default.
                     * @return Offset Starting step size, which is 0 by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting step size, which is 0 by default.
                     * @param _offset Starting step size, which is 0 by default.
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
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Start date
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * End date
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * EventInfoParam returned by DescribeAttackSource API
                     */
                    std::string m_eventInfoParam;
                    bool m_eventInfoParamHasBeenSet;

                    /**
                     * Maximum number of paginations, which is 10 by default.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting step size, which is 0 by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEATTACKSOURCEEVENTSREQUEST_H_
