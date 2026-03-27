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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeRegisterInstances request structure.
                */
                class DescribeRegisterInstancesRequest : public AbstractModel
                {
                public:
                    DescribeRegisterInstancesRequest();
                    ~DescribeRegisterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Managed instance id.

The maximum per request is 100.

Parameters must not be specified simultaneously `InstanceIds` and `Filters`.

                     * @return InstanceIds Managed instance id.

The maximum per request is 100.

Parameters must not be specified simultaneously `InstanceIds` and `Filters`.

                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Managed instance id.

The maximum per request is 100.

Parameters must not be specified simultaneously `InstanceIds` and `Filters`.

                     * @param _instanceIds Managed instance id.

The maximum per request is 100.

Parameters must not be specified simultaneously `InstanceIds` and `Filters`.

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
                     * 获取Filter list. the maximum number of `Filters` is 10 per request, and the maximum number of `Filter.Values` is 5. parameters must not be specified simultaneously for `InstanceIds` and `Filters`.


- instance-name

Filter by [managed instance name].
Type: String.
Required: No

- instance-id

Filter by [managed instance ID].
Type: String.
Required: No

- register-status

Filter by [managed instance status]. valid values: Online | Offline.
Type: String.
Required: No

- local-ip

Filter by [managed instance nic IP].
Type: String.
Required: No

- register-code-id

Filter by [managed instance registration code ID]. call the [DescribeRegisterCodes](https://www.tencentcloud.com/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
Type: String.
Required: No

- sys-name

Filter by [operating system type]. valid values: Linux | Windows.
Type: String.
Required: No

- tag-key

Filter by [tag key].
Type: String.
Required: No

- tag-value

Filter by [tag value].
Type: String.
Required: No

- tag:tag-key

Filter by [tag key-value pair]. replace tag-key with a specific Tag key.
Type: String.
Required: No

For example, the Filter is {"Name": "tag:key1", "Values": ["v1", "v2"] }, which queries all resources belonging to tag key1:v1 or key1:v2.


                     * @return Filters Filter list. the maximum number of `Filters` is 10 per request, and the maximum number of `Filter.Values` is 5. parameters must not be specified simultaneously for `InstanceIds` and `Filters`.


- instance-name

Filter by [managed instance name].
Type: String.
Required: No

- instance-id

Filter by [managed instance ID].
Type: String.
Required: No

- register-status

Filter by [managed instance status]. valid values: Online | Offline.
Type: String.
Required: No

- local-ip

Filter by [managed instance nic IP].
Type: String.
Required: No

- register-code-id

Filter by [managed instance registration code ID]. call the [DescribeRegisterCodes](https://www.tencentcloud.com/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
Type: String.
Required: No

- sys-name

Filter by [operating system type]. valid values: Linux | Windows.
Type: String.
Required: No

- tag-key

Filter by [tag key].
Type: String.
Required: No

- tag-value

Filter by [tag value].
Type: String.
Required: No

- tag:tag-key

Filter by [tag key-value pair]. replace tag-key with a specific Tag key.
Type: String.
Required: No

For example, the Filter is {"Name": "tag:key1", "Values": ["v1", "v2"] }, which queries all resources belonging to tag key1:v1 or key1:v2.


                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list. the maximum number of `Filters` is 10 per request, and the maximum number of `Filter.Values` is 5. parameters must not be specified simultaneously for `InstanceIds` and `Filters`.


- instance-name

Filter by [managed instance name].
Type: String.
Required: No

- instance-id

Filter by [managed instance ID].
Type: String.
Required: No

- register-status

Filter by [managed instance status]. valid values: Online | Offline.
Type: String.
Required: No

- local-ip

Filter by [managed instance nic IP].
Type: String.
Required: No

- register-code-id

Filter by [managed instance registration code ID]. call the [DescribeRegisterCodes](https://www.tencentcloud.com/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
Type: String.
Required: No

- sys-name

Filter by [operating system type]. valid values: Linux | Windows.
Type: String.
Required: No

- tag-key

Filter by [tag key].
Type: String.
Required: No

- tag-value

Filter by [tag value].
Type: String.
Required: No

- tag:tag-key

Filter by [tag key-value pair]. replace tag-key with a specific Tag key.
Type: String.
Required: No

For example, the Filter is {"Name": "tag:key1", "Values": ["v1", "v2"] }, which queries all resources belonging to tag key1:v1 or key1:v2.


                     * @param _filters Filter list. the maximum number of `Filters` is 10 per request, and the maximum number of `Filter.Values` is 5. parameters must not be specified simultaneously for `InstanceIds` and `Filters`.


- instance-name

Filter by [managed instance name].
Type: String.
Required: No

- instance-id

Filter by [managed instance ID].
Type: String.
Required: No

- register-status

Filter by [managed instance status]. valid values: Online | Offline.
Type: String.
Required: No

- local-ip

Filter by [managed instance nic IP].
Type: String.
Required: No

- register-code-id

Filter by [managed instance registration code ID]. call the [DescribeRegisterCodes](https://www.tencentcloud.com/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
Type: String.
Required: No

- sys-name

Filter by [operating system type]. valid values: Linux | Windows.
Type: String.
Required: No

- tag-key

Filter by [tag key].
Type: String.
Required: No

- tag-value

Filter by [tag value].
Type: String.
Required: No

- tag:tag-key

Filter by [tag key-value pair]. replace tag-key with a specific Tag key.
Type: String.
Required: No

For example, the Filter is {"Name": "tag:key1", "Values": ["v1", "v2"] }, which queries all resources belonging to tag key1:v1 or key1:v2.


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
                     * 获取Offset. default value: 0.
                     * @return Offset Offset. default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. default value: 0.
                     * @param _offset Offset. default value: 0.
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
                     * 获取Number of returned results, defaults to 20, maximum value is 100.
                     * @return Limit Number of returned results, defaults to 20, maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results, defaults to 20, maximum value is 100.
                     * @param _limit Number of returned results, defaults to 20, maximum value is 100.
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
                     * Managed instance id.

The maximum per request is 100.

Parameters must not be specified simultaneously `InstanceIds` and `Filters`.

                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filter list. the maximum number of `Filters` is 10 per request, and the maximum number of `Filter.Values` is 5. parameters must not be specified simultaneously for `InstanceIds` and `Filters`.


- instance-name

Filter by [managed instance name].
Type: String.
Required: No

- instance-id

Filter by [managed instance ID].
Type: String.
Required: No

- register-status

Filter by [managed instance status]. valid values: Online | Offline.
Type: String.
Required: No

- local-ip

Filter by [managed instance nic IP].
Type: String.
Required: No

- register-code-id

Filter by [managed instance registration code ID]. call the [DescribeRegisterCodes](https://www.tencentcloud.com/document/api/1340/96925?from_cn_redirect=1) api to query registration codes.
Type: String.
Required: No

- sys-name

Filter by [operating system type]. valid values: Linux | Windows.
Type: String.
Required: No

- tag-key

Filter by [tag key].
Type: String.
Required: No

- tag-value

Filter by [tag value].
Type: String.
Required: No

- tag:tag-key

Filter by [tag key-value pair]. replace tag-key with a specific Tag key.
Type: String.
Required: No

For example, the Filter is {"Name": "tag:key1", "Values": ["v1", "v2"] }, which queries all resources belonging to tag key1:v1 or key1:v2.


                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results, defaults to 20, maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESREQUEST_H_
