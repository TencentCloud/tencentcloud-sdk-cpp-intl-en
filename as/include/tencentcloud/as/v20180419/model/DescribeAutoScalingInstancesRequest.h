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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGINSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGINSTANCESREQUEST_H_

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
                * DescribeAutoScalingInstances request structure.
                */
                class DescribeAutoScalingInstancesRequest : public AbstractModel
                {
                public:
                    DescribeAutoScalingInstancesRequest();
                    ~DescribeAutoScalingInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of the CVM instances to query. the instance ID list has a length limit of 100. `InstanceIds` and `Filters` cannot be specified simultaneously.
You can get available instance ids in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Get the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.</li>.
                     * @return InstanceIds IDs of the CVM instances to query. the instance ID list has a length limit of 100. `InstanceIds` and `Filters` cannot be specified simultaneously.
You can get available instance ids in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Get the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.</li>.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置IDs of the CVM instances to query. the instance ID list has a length limit of 100. `InstanceIds` and `Filters` cannot be specified simultaneously.
You can get available instance ids in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Get the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.</li>.
                     * @param _instanceIds IDs of the CVM instances to query. the instance ID list has a length limit of 100. `InstanceIds` and `Filters` cannot be specified simultaneously.
You can get available instance ids in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Get the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.</li>.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria

<li> instance-id - String - required: no - (filter condition) filter by instance id. get the instance id by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1), and retrieve the `InstanceId` from the returned information.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or making an api call to [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. parameters do not support specifying both `InstanceIds` and `Filters`.
                     * @return Filters Filter criteria

<li> instance-id - String - required: no - (filter condition) filter by instance id. get the instance id by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1), and retrieve the `InstanceId` from the returned information.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or making an api call to [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. parameters do not support specifying both `InstanceIds` and `Filters`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria

<li> instance-id - String - required: no - (filter condition) filter by instance id. get the instance id by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1), and retrieve the `InstanceId` from the returned information.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or making an api call to [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. parameters do not support specifying both `InstanceIds` and `Filters`.
                     * @param _filters Filter criteria

<li> instance-id - String - required: no - (filter condition) filter by instance id. get the instance id by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1), and retrieve the `InstanceId` from the returned information.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or making an api call to [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. parameters do not support specifying both `InstanceIds` and `Filters`.
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
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
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
                     * 获取The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @return Limit The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * @param _limit The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * IDs of the CVM instances to query. the instance ID list has a length limit of 100. `InstanceIds` and `Filters` cannot be specified simultaneously.
You can get available instance ids in the following ways:.
<li>Query instance ID by logging in to the <a href="https://console.cloud.tencent.com/cvm/index">console</a>.</li>.
<li>Get the instance ID by calling the api [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.</li>.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filter criteria

<li> instance-id - String - required: no - (filter condition) filter by instance id. get the instance id by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1), and retrieve the `InstanceId` from the returned information.</li>.
<li> auto-scaling-group-id - String - required: no - (filter) filter by auto scaling group id. you can obtain the scaling group id by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or making an api call to [DescribeAutoScalingGroups](https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1) and retrieving the AutoScalingGroupId from the returned information.</li>.
The maximum number of `Filters` per request is 10, and the maximum number of `Filter.Values` is 5. parameters do not support specifying both `InstanceIds` and `Filters`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [overview](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of returned results. Default value: `20`. Maximum value: `100`. For more information on `Limit`, see the relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGINSTANCESREQUEST_H_
