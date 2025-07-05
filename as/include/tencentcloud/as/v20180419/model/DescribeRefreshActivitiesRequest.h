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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Filter.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeRefreshActivities request structure.
                */
                class DescribeRefreshActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeRefreshActivitiesRequest();
                    ~DescribeRefreshActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of refresh activity IDs. IDs are formatted like: 'asr-5l2ejpfo'. The upper limit per request is 100. Parameters do not support specifying both RefreshActivityIds and Filters simultaneously.
                     * @return RefreshActivityIds List of refresh activity IDs. IDs are formatted like: 'asr-5l2ejpfo'. The upper limit per request is 100. Parameters do not support specifying both RefreshActivityIds and Filters simultaneously.
                     * 
                     */
                    std::vector<std::string> GetRefreshActivityIds() const;

                    /**
                     * 设置List of refresh activity IDs. IDs are formatted like: 'asr-5l2ejpfo'. The upper limit per request is 100. Parameters do not support specifying both RefreshActivityIds and Filters simultaneously.
                     * @param _refreshActivityIds List of refresh activity IDs. IDs are formatted like: 'asr-5l2ejpfo'. The upper limit per request is 100. Parameters do not support specifying both RefreshActivityIds and Filters simultaneously.
                     * 
                     */
                    void SetRefreshActivityIds(const std::vector<std::string>& _refreshActivityIds);

                    /**
                     * 判断参数 RefreshActivityIds 是否已赋值
                     * @return RefreshActivityIds 是否已赋值
                     * 
                     */
                    bool RefreshActivityIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria

<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
<li> refresh-activity-status-code - String - Required: No - (Filter)Filter based on refresh activity status. (INIT: Initialization | RUNNING:Running | SUCCESSFUL: Successful Activity | FAILED_PAUSE: Failed & Paused | AUTO_PAUSE: Auto Paused | MANUAL_PAUSE: Manually Paused | CANCELLED: Activity Cancelled | FAILED: Activity Failed)</li>
<li> refresh-activity-type - String - Required: No - (Filter) Filter by refresh activity types. (NORMAL: Regular Refresh Activity | ROLLBACK: Rollback Refresh Activity)</li>
<li> refresh-activity-id - String - Required: No - (Filter) Filter by refresh activity ID.</li>
<li>The upper limit of Filters per request is 10, and that of Filter.Values is 5. The RefreshActivityIds and Filters parameters cannot be specified at the same time.</li>
                     * @return Filters Filter criteria

<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
<li> refresh-activity-status-code - String - Required: No - (Filter)Filter based on refresh activity status. (INIT: Initialization | RUNNING:Running | SUCCESSFUL: Successful Activity | FAILED_PAUSE: Failed & Paused | AUTO_PAUSE: Auto Paused | MANUAL_PAUSE: Manually Paused | CANCELLED: Activity Cancelled | FAILED: Activity Failed)</li>
<li> refresh-activity-type - String - Required: No - (Filter) Filter by refresh activity types. (NORMAL: Regular Refresh Activity | ROLLBACK: Rollback Refresh Activity)</li>
<li> refresh-activity-id - String - Required: No - (Filter) Filter by refresh activity ID.</li>
<li>The upper limit of Filters per request is 10, and that of Filter.Values is 5. The RefreshActivityIds and Filters parameters cannot be specified at the same time.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria

<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
<li> refresh-activity-status-code - String - Required: No - (Filter)Filter based on refresh activity status. (INIT: Initialization | RUNNING:Running | SUCCESSFUL: Successful Activity | FAILED_PAUSE: Failed & Paused | AUTO_PAUSE: Auto Paused | MANUAL_PAUSE: Manually Paused | CANCELLED: Activity Cancelled | FAILED: Activity Failed)</li>
<li> refresh-activity-type - String - Required: No - (Filter) Filter by refresh activity types. (NORMAL: Regular Refresh Activity | ROLLBACK: Rollback Refresh Activity)</li>
<li> refresh-activity-id - String - Required: No - (Filter) Filter by refresh activity ID.</li>
<li>The upper limit of Filters per request is 10, and that of Filter.Values is 5. The RefreshActivityIds and Filters parameters cannot be specified at the same time.</li>
                     * @param _filters Filter criteria

<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
<li> refresh-activity-status-code - String - Required: No - (Filter)Filter based on refresh activity status. (INIT: Initialization | RUNNING:Running | SUCCESSFUL: Successful Activity | FAILED_PAUSE: Failed & Paused | AUTO_PAUSE: Auto Paused | MANUAL_PAUSE: Manually Paused | CANCELLED: Activity Cancelled | FAILED: Activity Failed)</li>
<li> refresh-activity-type - String - Required: No - (Filter) Filter by refresh activity types. (NORMAL: Regular Refresh Activity | ROLLBACK: Rollback Refresh Activity)</li>
<li> refresh-activity-id - String - Required: No - (Filter) Filter by refresh activity ID.</li>
<li>The upper limit of Filters per request is 10, and that of Filter.Values is 5. The RefreshActivityIds and Filters parameters cannot be specified at the same time.</li>
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
                     * 获取Number of returned pieces. Default value: 20. Maximum value: 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned pieces. Default value: 20. Maximum value: 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned pieces. Default value: 20. Maximum value: 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned pieces. Default value: 20. Maximum value: 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Offset, 0 by default. For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset, 0 by default. For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, 0 by default. For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset, 0 by default. For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * List of refresh activity IDs. IDs are formatted like: 'asr-5l2ejpfo'. The upper limit per request is 100. Parameters do not support specifying both RefreshActivityIds and Filters simultaneously.
                     */
                    std::vector<std::string> m_refreshActivityIds;
                    bool m_refreshActivityIdsHasBeenSet;

                    /**
                     * Filter criteria

<li> auto-scaling-group-id - String - Required: No - (Filter) Filter by auto scaling group ID.</li>
<li> refresh-activity-status-code - String - Required: No - (Filter)Filter based on refresh activity status. (INIT: Initialization | RUNNING:Running | SUCCESSFUL: Successful Activity | FAILED_PAUSE: Failed & Paused | AUTO_PAUSE: Auto Paused | MANUAL_PAUSE: Manually Paused | CANCELLED: Activity Cancelled | FAILED: Activity Failed)</li>
<li> refresh-activity-type - String - Required: No - (Filter) Filter by refresh activity types. (NORMAL: Regular Refresh Activity | ROLLBACK: Rollback Refresh Activity)</li>
<li> refresh-activity-id - String - Required: No - (Filter) Filter by refresh activity ID.</li>
<li>The upper limit of Filters per request is 10, and that of Filter.Values is 5. The RefreshActivityIds and Filters parameters cannot be specified at the same time.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned pieces. Default value: 20. Maximum value: 100. For further information on Limit, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, 0 by default. For further information on Offset, please refer to relevant sections in API [Overview] (https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESREQUEST_H_
