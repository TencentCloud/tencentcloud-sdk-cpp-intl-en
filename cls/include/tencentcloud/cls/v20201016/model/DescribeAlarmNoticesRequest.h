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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotices request structure.
                */
                class DescribeAlarmNoticesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmNoticesRequest();
                    ~DescribeAlarmNoticesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取name
Filter by [notification channel group name].
Type: String
"Filters":[{"Key":"name","Values":["test-notice"]}]
Required: No
alarmNoticeId
Filter by [notification channel group ID].
Type: String
"Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
Required: No
uid
Filter by [recipient user ID].
Type: String
"Filters": [{Key: "uid", Values: ["1137546"]}]
Required: No
groupId
Filter by [recipient user group ID].
Type: String
"Filters": [{Key: "groupId", Values: ["344098"]}]
Required: No

deliverFlag
Filter by [delivery status].
Type: String
Required: No
Available values: "1": disabled, "2": enabled, "3": delivery exception
"Filters":[{"Key":"deliverFlag","Values":["2"]}]
The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * @return Filters name
Filter by [notification channel group name].
Type: String
"Filters":[{"Key":"name","Values":["test-notice"]}]
Required: No
alarmNoticeId
Filter by [notification channel group ID].
Type: String
"Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
Required: No
uid
Filter by [recipient user ID].
Type: String
"Filters": [{Key: "uid", Values: ["1137546"]}]
Required: No
groupId
Filter by [recipient user group ID].
Type: String
"Filters": [{Key: "groupId", Values: ["344098"]}]
Required: No

deliverFlag
Filter by [delivery status].
Type: String
Required: No
Available values: "1": disabled, "2": enabled, "3": delivery exception
"Filters":[{"Key":"deliverFlag","Values":["2"]}]
The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置name
Filter by [notification channel group name].
Type: String
"Filters":[{"Key":"name","Values":["test-notice"]}]
Required: No
alarmNoticeId
Filter by [notification channel group ID].
Type: String
"Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
Required: No
uid
Filter by [recipient user ID].
Type: String
"Filters": [{Key: "uid", Values: ["1137546"]}]
Required: No
groupId
Filter by [recipient user group ID].
Type: String
"Filters": [{Key: "groupId", Values: ["344098"]}]
Required: No

deliverFlag
Filter by [delivery status].
Type: String
Required: No
Available values: "1": disabled, "2": enabled, "3": delivery exception
"Filters":[{"Key":"deliverFlag","Values":["2"]}]
The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     * @param _filters name
Filter by [notification channel group name].
Type: String
"Filters":[{"Key":"name","Values":["test-notice"]}]
Required: No
alarmNoticeId
Filter by [notification channel group ID].
Type: String
"Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
Required: No
uid
Filter by [recipient user ID].
Type: String
"Filters": [{Key: "uid", Values: ["1137546"]}]
Required: No
groupId
Filter by [recipient user group ID].
Type: String
"Filters": [{Key: "groupId", Values: ["344098"]}]
Required: No

deliverFlag
Filter by [delivery status].
Type: String
Required: No
Available values: "1": disabled, "2": enabled, "3": delivery exception
"Filters":[{"Key":"deliverFlag","Values":["2"]}]
The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
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
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
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
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
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
                     * 获取Whether to return the quantity information of alarm silence statistics status in the configured notification channel group.
- true: Need to return.
- false: do not return (default false).
                     * @return HasAlarmShieldCount Whether to return the quantity information of alarm silence statistics status in the configured notification channel group.
- true: Need to return.
- false: do not return (default false).
                     * 
                     */
                    bool GetHasAlarmShieldCount() const;

                    /**
                     * 设置Whether to return the quantity information of alarm silence statistics status in the configured notification channel group.
- true: Need to return.
- false: do not return (default false).
                     * @param _hasAlarmShieldCount Whether to return the quantity information of alarm silence statistics status in the configured notification channel group.
- true: Need to return.
- false: do not return (default false).
                     * 
                     */
                    void SetHasAlarmShieldCount(const bool& _hasAlarmShieldCount);

                    /**
                     * 判断参数 HasAlarmShieldCount 是否已赋值
                     * @return HasAlarmShieldCount 是否已赋值
                     * 
                     */
                    bool HasAlarmShieldCountHasBeenSet() const;

                private:

                    /**
                     * name
Filter by [notification channel group name].
Type: String
"Filters":[{"Key":"name","Values":["test-notice"]}]
Required: No
alarmNoticeId
Filter by [notification channel group ID].
Type: String
"Filters": [{Key: "alarmNoticeId", Values: ["notice-5281f1d2-6275-4e56-9ec3-a1eb19d8bc2f"]}]
Required: No
uid
Filter by [recipient user ID].
Type: String
"Filters": [{Key: "uid", Values: ["1137546"]}]
Required: No
groupId
Filter by [recipient user group ID].
Type: String
"Filters": [{Key: "groupId", Values: ["344098"]}]
Required: No

deliverFlag
Filter by [delivery status].
Type: String
Required: No
Available values: "1": disabled, "2": enabled, "3": delivery exception
"Filters":[{"Key":"deliverFlag","Values":["2"]}]
The maximum number of Filters per request is 10, and the maximum for Filter.Values is 5.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether to return the quantity information of alarm silence statistics status in the configured notification channel group.
- true: Need to return.
- false: do not return (default false).
                     */
                    bool m_hasAlarmShieldCount;
                    bool m_hasAlarmShieldCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
