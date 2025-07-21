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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPSREQUEST_H_

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
                * DescribeAutoScalingGroups request structure.
                */
                class DescribeAutoScalingGroupsRequest : public AbstractModel
                {
                public:
                    DescribeAutoScalingGroupsRequest();
                    ~DescribeAutoScalingGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Queries by one or more auto scaling group IDs in the format of `asg-nkdwoui0`. The maximum quantity per request is 100. This parameter does not support specifying both `AutoScalingGroupIds` and `Filters` at the same time.
                     * @return AutoScalingGroupIds Queries by one or more auto scaling group IDs in the format of `asg-nkdwoui0`. The maximum quantity per request is 100. This parameter does not support specifying both `AutoScalingGroupIds` and `Filters` at the same time.
                     * 
                     */
                    std::vector<std::string> GetAutoScalingGroupIds() const;

                    /**
                     * 设置Queries by one or more auto scaling group IDs in the format of `asg-nkdwoui0`. The maximum quantity per request is 100. This parameter does not support specifying both `AutoScalingGroupIds` and `Filters` at the same time.
                     * @param _autoScalingGroupIds Queries by one or more auto scaling group IDs in the format of `asg-nkdwoui0`. The maximum quantity per request is 100. This parameter does not support specifying both `AutoScalingGroupIds` and `Filters` at the same time.
                     * 
                     */
                    void SetAutoScalingGroupIds(const std::vector<std::string>& _autoScalingGroupIds);

                    /**
                     * 判断参数 AutoScalingGroupIds 是否已赋值
                     * @return AutoScalingGroupIds 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria

<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
Specifies the scaling group ID obtained by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.
<li> auto-scaling-group-name - String - required: no - (filter) filter by auto scaling group name.</li>.
<li> vague-auto-scaling-group-name - String - required: no - (filter) filter by scaling group name fuzzy search.</li>.
<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration id. you can obtain the launch configuration id by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
<li> `tag-key` - String - optional - filter by the tag key. you can call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the tag key from the returned information.</li>.
<li>tag-value - String - required: no - (filter condition) filter by tag value. you can obtain the tag value by calling the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) and retrieving the TagValue from the returned information.</li>.
<li>tag:tag-key - String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key. see example 2 for reference. call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the TagKey from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingGroupIds` and `Filters` parameters cannot be specified simultaneously.
                     * @return Filters Filter criteria

<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
Specifies the scaling group ID obtained by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.
<li> auto-scaling-group-name - String - required: no - (filter) filter by auto scaling group name.</li>.
<li> vague-auto-scaling-group-name - String - required: no - (filter) filter by scaling group name fuzzy search.</li>.
<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration id. you can obtain the launch configuration id by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
<li> `tag-key` - String - optional - filter by the tag key. you can call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the tag key from the returned information.</li>.
<li>tag-value - String - required: no - (filter condition) filter by tag value. you can obtain the tag value by calling the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) and retrieving the TagValue from the returned information.</li>.
<li>tag:tag-key - String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key. see example 2 for reference. call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the TagKey from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingGroupIds` and `Filters` parameters cannot be specified simultaneously.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria

<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
Specifies the scaling group ID obtained by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.
<li> auto-scaling-group-name - String - required: no - (filter) filter by auto scaling group name.</li>.
<li> vague-auto-scaling-group-name - String - required: no - (filter) filter by scaling group name fuzzy search.</li>.
<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration id. you can obtain the launch configuration id by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
<li> `tag-key` - String - optional - filter by the tag key. you can call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the tag key from the returned information.</li>.
<li>tag-value - String - required: no - (filter condition) filter by tag value. you can obtain the tag value by calling the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) and retrieving the TagValue from the returned information.</li>.
<li>tag:tag-key - String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key. see example 2 for reference. call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the TagKey from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingGroupIds` and `Filters` parameters cannot be specified simultaneously.
                     * @param _filters Filter criteria

<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
Specifies the scaling group ID obtained by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.
<li> auto-scaling-group-name - String - required: no - (filter) filter by auto scaling group name.</li>.
<li> vague-auto-scaling-group-name - String - required: no - (filter) filter by scaling group name fuzzy search.</li>.
<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration id. you can obtain the launch configuration id by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
<li> `tag-key` - String - optional - filter by the tag key. you can call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the tag key from the returned information.</li>.
<li>tag-value - String - required: no - (filter condition) filter by tag value. you can obtain the tag value by calling the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) and retrieving the TagValue from the returned information.</li>.
<li>tag:tag-key - String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key. see example 2 for reference. call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the TagKey from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingGroupIds` and `Filters` parameters cannot be specified simultaneously.
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
                     * Queries by one or more auto scaling group IDs in the format of `asg-nkdwoui0`. The maximum quantity per request is 100. This parameter does not support specifying both `AutoScalingGroupIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> m_autoScalingGroupIds;
                    bool m_autoScalingGroupIdsHasBeenSet;

                    /**
                     * Filter criteria

<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id.</li>.
Specifies the scaling group ID obtained by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the return information.
<li> auto-scaling-group-name - String - required: no - (filter) filter by auto scaling group name.</li>.
<li> vague-auto-scaling-group-name - String - required: no - (filter) filter by scaling group name fuzzy search.</li>.
<li>launch-configuration-id - String - required: no - (filter condition) filter by launch configuration id. you can obtain the launch configuration id by logging in to the console (https://console.cloud.tencent.com/autoscaling/config) or calling the api DescribeLaunchConfigurations (https://intl.cloud.tencent.com/document/api/377/20445?from_cn_redirect=1) and retrieving the LaunchConfigurationId from the returned information.</li>.
<li> `tag-key` - String - optional - filter by the tag key. you can call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the tag key from the returned information.</li>.
<li>tag-value - String - required: no - (filter condition) filter by tag value. you can obtain the tag value by calling the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) and retrieving the TagValue from the returned information.</li>.
<li>tag:tag-key - String - required: no - (filter condition) filter by tag key-value pair. replace tag-key with a specific tag key. see example 2 for reference. call the API [GetTags](https://intl.cloud.tencent.com/document/product/651/72275?from_cn_redirect=1) to obtain the TagKey from the returned information.</li>.
The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `AutoScalingGroupIds` and `Filters` parameters cannot be specified simultaneously.
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

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPSREQUEST_H_
