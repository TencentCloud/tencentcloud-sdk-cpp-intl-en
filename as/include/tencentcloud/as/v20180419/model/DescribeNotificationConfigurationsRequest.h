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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_H_

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
                * DescribeNotificationConfigurations request structure.
                */
                class DescribeNotificationConfigurationsRequest : public AbstractModel
                {
                public:
                    DescribeNotificationConfigurationsRequest();
                    ~DescribeNotificationConfigurationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query by one or more notification ids. the list length limit is 100. you can obtain the notification ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). parameters AutoScalingNotificationIds and Filters must not be specified simultaneously.
                     * @return AutoScalingNotificationIds Query by one or more notification ids. the list length limit is 100. you can obtain the notification ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). parameters AutoScalingNotificationIds and Filters must not be specified simultaneously.
                     * 
                     */
                    std::vector<std::string> GetAutoScalingNotificationIds() const;

                    /**
                     * 设置Query by one or more notification ids. the list length limit is 100. you can obtain the notification ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). parameters AutoScalingNotificationIds and Filters must not be specified simultaneously.
                     * @param _autoScalingNotificationIds Query by one or more notification ids. the list length limit is 100. you can obtain the notification ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). parameters AutoScalingNotificationIds and Filters must not be specified simultaneously.
                     * 
                     */
                    void SetAutoScalingNotificationIds(const std::vector<std::string>& _autoScalingNotificationIds);

                    /**
                     * 判断参数 AutoScalingNotificationIds 是否已赋值
                     * @return AutoScalingNotificationIds 是否已赋值
                     * 
                     */
                    bool AutoScalingNotificationIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria

<li> auto-scaling-notification-id - String - required: no - (filter) filter by notification id.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingNotificationIds` and `Filters` parameters cannot be specified simultaneously.
                     * @return Filters Filter criteria

<li> auto-scaling-notification-id - String - required: no - (filter) filter by notification id.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingNotificationIds` and `Filters` parameters cannot be specified simultaneously.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria

<li> auto-scaling-notification-id - String - required: no - (filter) filter by notification id.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingNotificationIds` and `Filters` parameters cannot be specified simultaneously.
                     * @param _filters Filter criteria

<li> auto-scaling-notification-id - String - required: no - (filter) filter by notification id.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingNotificationIds` and `Filters` parameters cannot be specified simultaneously.
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

                private:

                    /**
                     * Query by one or more notification ids. the list length limit is 100. you can obtain the notification ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group). parameters AutoScalingNotificationIds and Filters must not be specified simultaneously.
                     */
                    std::vector<std::string> m_autoScalingNotificationIds;
                    bool m_autoScalingNotificationIdsHasBeenSet;

                    /**
                     * Filter criteria

<li> auto-scaling-notification-id - String - required: no - (filter) filter by notification id.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingNotificationIds` and `Filters` parameters cannot be specified simultaneously.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBENOTIFICATIONCONFIGURATIONSREQUEST_H_
