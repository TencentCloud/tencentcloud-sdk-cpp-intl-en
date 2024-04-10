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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSHIELDSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSHIELDSREQUEST_H_

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
                * DescribeAlarmShields request structure.
                */
                class DescribeAlarmShieldsRequest : public AbstractModel
                {
                public:
                    DescribeAlarmShieldsRequest();
                    ~DescribeAlarmShieldsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notification Channel Group ID
                     * @return AlarmNoticeId Notification Channel Group ID
                     * 
                     */
                    std::string GetAlarmNoticeId() const;

                    /**
                     * 设置Notification Channel Group ID
                     * @param _alarmNoticeId Notification Channel Group ID
                     * 
                     */
                    void SetAlarmNoticeId(const std::string& _alarmNoticeId);

                    /**
                     * 判断参数 AlarmNoticeId 是否已赋值
                     * @return AlarmNoticeId 是否已赋值
                     * 
                     */
                    bool AlarmNoticeIdHasBeenSet() const;

                    /**
                     * 获取- taskId: Filter by [Rule ID]. Type: String. Optional: No
- status: Filter by [Rule Status]. Type: String. Supports 0: Not yet effective, 1: In Effect, 2: Expired. Optional: No
Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @return Filters - taskId: Filter by [Rule ID]. Type: String. Optional: No
- status: Filter by [Rule Status]. Type: String. Supports 0: Not yet effective, 1: In Effect, 2: Expired. Optional: No
Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置- taskId: Filter by [Rule ID]. Type: String. Optional: No
- status: Filter by [Rule Status]. Type: String. Supports 0: Not yet effective, 1: In Effect, 2: Expired. Optional: No
Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     * @param _filters - taskId: Filter by [Rule ID]. Type: String. Optional: No
- status: Filter by [Rule Status]. Type: String. Supports 0: Not yet effective, 1: In Effect, 2: Expired. Optional: No
Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
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
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
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
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Notification Channel Group ID
                     */
                    std::string m_alarmNoticeId;
                    bool m_alarmNoticeIdHasBeenSet;

                    /**
                     * - taskId: Filter by [Rule ID]. Type: String. Optional: No
- status: Filter by [Rule Status]. Type: String. Supports 0: Not yet effective, 1: In Effect, 2: Expired. Optional: No
Each request can have up to 10 Filters. The upper limit of Filter.Values is 100.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALARMSHIELDSREQUEST_H_
