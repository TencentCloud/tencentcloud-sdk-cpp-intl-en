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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeInstances request structure.
                */
                class DescribeInstancesRequest : public AbstractModel
                {
                public:
                    DescribeInstancesRequest();
                    ~DescribeInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs. The maximum number of instances in each request is 100. You can obtain the instance IDs from the `InstanceId` field in the response of the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * @return InstanceIds List of instance IDs. The maximum number of instances in each request is 100. You can obtain the instance IDs from the `InstanceId` field in the response of the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs. The maximum number of instances in each request is 100. You can obtain the instance IDs from the `InstanceId` field in the response of the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * @param _instanceIds List of instance IDs. The maximum number of instances in each request is 100. You can obtain the instance IDs from the `InstanceId` field in the response of the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API.
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
                     * 获取List of filters.
<li>instance-name</li>Filters by instance name.
Type: String
Required: No
<li>private-ip-address</li>Filters by the private IP of the primary ENI of the instance.
Type: String
Required: No
<li>public-ip-address</li>Filters by the public IP of the primary ENI of the instance.
Type: String
Required: No
<li>zone</li>Filters by AZ.
Type: String
Required: No
<li>instance-state</li>Filters by instance state.
Type: String
Required: No
<li>tag-key</li>Filters by tag key.
Type: String
Required: No
<li>tag-value</li>Filters by tag value.
Type: String
Required: No
<li> tag:tag-key</li>Filters by tag key-value pair. Replace tag-key with the specific tag key.
Type: String
Required: No
<li>bundle-id</li>Filters by bundle ID.
Type: String
Required: No

The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100. You cannot specify both InstanceIds and Filters at the same time.
                     * @return Filters List of filters.
<li>instance-name</li>Filters by instance name.
Type: String
Required: No
<li>private-ip-address</li>Filters by the private IP of the primary ENI of the instance.
Type: String
Required: No
<li>public-ip-address</li>Filters by the public IP of the primary ENI of the instance.
Type: String
Required: No
<li>zone</li>Filters by AZ.
Type: String
Required: No
<li>instance-state</li>Filters by instance state.
Type: String
Required: No
<li>tag-key</li>Filters by tag key.
Type: String
Required: No
<li>tag-value</li>Filters by tag value.
Type: String
Required: No
<li> tag:tag-key</li>Filters by tag key-value pair. Replace tag-key with the specific tag key.
Type: String
Required: No
<li>bundle-id</li>Filters by bundle ID.
Type: String
Required: No

The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100. You cannot specify both InstanceIds and Filters at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置List of filters.
<li>instance-name</li>Filters by instance name.
Type: String
Required: No
<li>private-ip-address</li>Filters by the private IP of the primary ENI of the instance.
Type: String
Required: No
<li>public-ip-address</li>Filters by the public IP of the primary ENI of the instance.
Type: String
Required: No
<li>zone</li>Filters by AZ.
Type: String
Required: No
<li>instance-state</li>Filters by instance state.
Type: String
Required: No
<li>tag-key</li>Filters by tag key.
Type: String
Required: No
<li>tag-value</li>Filters by tag value.
Type: String
Required: No
<li> tag:tag-key</li>Filters by tag key-value pair. Replace tag-key with the specific tag key.
Type: String
Required: No
<li>bundle-id</li>Filters by bundle ID.
Type: String
Required: No

The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100. You cannot specify both InstanceIds and Filters at the same time.
                     * @param _filters List of filters.
<li>instance-name</li>Filters by instance name.
Type: String
Required: No
<li>private-ip-address</li>Filters by the private IP of the primary ENI of the instance.
Type: String
Required: No
<li>public-ip-address</li>Filters by the public IP of the primary ENI of the instance.
Type: String
Required: No
<li>zone</li>Filters by AZ.
Type: String
Required: No
<li>instance-state</li>Filters by instance state.
Type: String
Required: No
<li>tag-key</li>Filters by tag key.
Type: String
Required: No
<li>tag-value</li>Filters by tag value.
Type: String
Required: No
<li> tag:tag-key</li>Filters by tag key-value pair. Replace tag-key with the specific tag key.
Type: String
Required: No
<li>bundle-id</li>Filters by bundle ID.
Type: String
Required: No

The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100. You cannot specify both InstanceIds and Filters at the same time.
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
                     * 获取Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
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
                     * 获取Specifies the field by which to sort. Valid values: "EXPIRED_TIME": Sorts by the expiration time of the instance. 
 If this field is not passed in, instances with the status of "pending reclamation" are returned first, and the remaining instances are returned in descending order by creation time.
                     * @return OrderField Specifies the field by which to sort. Valid values: "EXPIRED_TIME": Sorts by the expiration time of the instance. 
 If this field is not passed in, instances with the status of "pending reclamation" are returned first, and the remaining instances are returned in descending order by creation time.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Specifies the field by which to sort. Valid values: "EXPIRED_TIME": Sorts by the expiration time of the instance. 
 If this field is not passed in, instances with the status of "pending reclamation" are returned first, and the remaining instances are returned in descending order by creation time.
                     * @param _orderField Specifies the field by which to sort. Valid values: "EXPIRED_TIME": Sorts by the expiration time of the instance. 
 If this field is not passed in, instances with the status of "pending reclamation" are returned first, and the remaining instances are returned in descending order by creation time.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取The order in which the output instance list is sorted. Valid values:
"ASC": Sorts in ascending order.
"DESC": Sorts in descending order.
By default, the list is sorted in ascending order. If this field is passed in, OrderField must be specified.
                     * @return Order The order in which the output instance list is sorted. Valid values:
"ASC": Sorts in ascending order.
"DESC": Sorts in descending order.
By default, the list is sorted in ascending order. If this field is passed in, OrderField must be specified.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置The order in which the output instance list is sorted. Valid values:
"ASC": Sorts in ascending order.
"DESC": Sorts in descending order.
By default, the list is sorted in ascending order. If this field is passed in, OrderField must be specified.
                     * @param _order The order in which the output instance list is sorted. Valid values:
"ASC": Sorts in ascending order.
"DESC": Sorts in descending order.
By default, the list is sorted in ascending order. If this field is passed in, OrderField must be specified.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * List of instance IDs. The maximum number of instances in each request is 100. You can obtain the instance IDs from the `InstanceId` field in the response of the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of filters.
<li>instance-name</li>Filters by instance name.
Type: String
Required: No
<li>private-ip-address</li>Filters by the private IP of the primary ENI of the instance.
Type: String
Required: No
<li>public-ip-address</li>Filters by the public IP of the primary ENI of the instance.
Type: String
Required: No
<li>zone</li>Filters by AZ.
Type: String
Required: No
<li>instance-state</li>Filters by instance state.
Type: String
Required: No
<li>tag-key</li>Filters by tag key.
Type: String
Required: No
<li>tag-value</li>Filters by tag value.
Type: String
Required: No
<li> tag:tag-key</li>Filters by tag key-value pair. Replace tag-key with the specific tag key.
Type: String
Required: No
<li>bundle-id</li>Filters by bundle ID.
Type: String
Required: No

The maximum number of Filters per request is 10, and the maximum number of Filter.Values is 100. You cannot specify both InstanceIds and Filters at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, see the relevant section in the API [Introduction](https://www.tencentcloud.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the field by which to sort. Valid values: "EXPIRED_TIME": Sorts by the expiration time of the instance. 
 If this field is not passed in, instances with the status of "pending reclamation" are returned first, and the remaining instances are returned in descending order by creation time.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * The order in which the output instance list is sorted. Valid values:
"ASC": Sorts in ascending order.
"DESC": Sorts in descending order.
By default, the list is sorted in ascending order. If this field is passed in, OrderField must be specified.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_
