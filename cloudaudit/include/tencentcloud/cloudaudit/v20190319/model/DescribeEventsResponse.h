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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Event.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeEvents response structure.
                */
                class DescribeEventsResponse : public AbstractModel
                {
                public:
                    DescribeEventsResponse();
                    ~DescribeEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the log list has come to an end. `true`: Yes. Pagination is not required.
                     * @return ListOver Whether the log list has come to an end. `true`: Yes. Pagination is not required.
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取Credential for viewing more logs.
                     * @return NextToken Credential for viewing more logs.
                     * 
                     */
                    uint64_t GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Logset.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Events Logset.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Event> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated. Please use `ListOver` and `NextToken` for pagination, and read data of the next page when the value of `ListOver` is `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount This parameter has been deprecated. Please use `ListOver` and `NextToken` for pagination, and read data of the next page when the value of `ListOver` is `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Whether the log list has come to an end. `true`: Yes. Pagination is not required.
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * Credential for viewing more logs.
                     */
                    uint64_t m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Logset.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<Event> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * This parameter has been deprecated. Please use `ListOver` and `NextToken` for pagination, and read data of the next page when the value of `ListOver` is `false`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEEVENTSRESPONSE_H_
