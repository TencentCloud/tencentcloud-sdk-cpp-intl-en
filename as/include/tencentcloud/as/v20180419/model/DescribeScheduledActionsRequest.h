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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_

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
                * DescribeScheduledActions request structure.
                */
                class DescribeScheduledActionsRequest : public AbstractModel
                {
                public:
                    DescribeScheduledActionsRequest();
                    ~DescribeScheduledActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by one or more scheduled task ids. you can obtain the scheduled task ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). the maximum number of instances per request is 100. parameters ScheduledActionIds and Filters must not be specified simultaneously.
                     * @return ScheduledActionIds Query by one or more scheduled task ids. you can obtain the scheduled task ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). the maximum number of instances per request is 100. parameters ScheduledActionIds and Filters must not be specified simultaneously.
                     * 
                     */
                    std::vector<std::string> GetScheduledActionIds() const;

                    /**
                     * 设置Query by one or more scheduled task ids. you can obtain the scheduled task ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). the maximum number of instances per request is 100. parameters ScheduledActionIds and Filters must not be specified simultaneously.
                     * @param _scheduledActionIds Query by one or more scheduled task ids. you can obtain the scheduled task ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). the maximum number of instances per request is 100. parameters ScheduledActionIds and Filters must not be specified simultaneously.
                     * 
                     */
                    void SetScheduledActionIds(const std::vector<std::string>& _scheduledActionIds);

                    /**
                     * 判断参数 ScheduledActionIds 是否已赋值
                     * @return ScheduledActionIds 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria. obtain the scheduled task ID, scheduled task name, and scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group).
<li> scheduled-action-id - String - required: no - (filter) filter by scheduled task id.</li>.
<li> scheduled-action-name - String - required: no - (filter criteria) filters by scheduled task name.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
                     * @return Filters Filter criteria. obtain the scheduled task ID, scheduled task name, and scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group).
<li> scheduled-action-id - String - required: no - (filter) filter by scheduled task id.</li>.
<li> scheduled-action-name - String - required: no - (filter criteria) filters by scheduled task name.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. obtain the scheduled task ID, scheduled task name, and scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group).
<li> scheduled-action-id - String - required: no - (filter) filter by scheduled task id.</li>.
<li> scheduled-action-name - String - required: no - (filter criteria) filters by scheduled task name.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
                     * @param _filters Filter criteria. obtain the scheduled task ID, scheduled task name, and scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group).
<li> scheduled-action-id - String - required: no - (filter) filter by scheduled task id.</li>.
<li> scheduled-action-name - String - required: no - (filter criteria) filters by scheduled task name.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
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
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * Query by one or more scheduled task ids. you can obtain the scheduled task ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). the maximum number of instances per request is 100. parameters ScheduledActionIds and Filters must not be specified simultaneously.
                     */
                    std::vector<std::string> m_scheduledActionIds;
                    bool m_scheduledActionIdsHasBeenSet;

                    /**
                     * Filter criteria. obtain the scheduled task ID, scheduled task name, and scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group).
<li> scheduled-action-id - String - required: no - (filter) filter by scheduled task id.</li>.
<li> scheduled-action-name - String - required: no - (filter criteria) filters by scheduled task name.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_
