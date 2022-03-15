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
                     * 获取Instance ID list. Each request can contain up to 100 instances at a time.
                     * @return InstanceIds Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. Each request can contain up to 100 instances at a time.
                     * @param InstanceIds Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Filter list
<li>instance-name</li>Filter by the instance name
Type: String
Required: no
<li>private-ip-address</li>Filter by the private IP of instance primary ENI
Type: String
Required: no
<li>public-ip-address</li>Filter by the public IP of instance primary ENI
Type: String
Required: no
<li>zone</li>Filter by the availability zone
Type: String
Required: no
<li>instance-state</li>Filter by **instance status**.
Type: String
Required: no
Each request can contain up to 10 filters, each of which can have 100 values. You cannot specify both `InstanceIds` and `Filters` at the same time.
                     * @return Filters Filter list
<li>instance-name</li>Filter by the instance name
Type: String
Required: no
<li>private-ip-address</li>Filter by the private IP of instance primary ENI
Type: String
Required: no
<li>public-ip-address</li>Filter by the public IP of instance primary ENI
Type: String
Required: no
<li>zone</li>Filter by the availability zone
Type: String
Required: no
<li>instance-state</li>Filter by **instance status**.
Type: String
Required: no
Each request can contain up to 10 filters, each of which can have 100 values. You cannot specify both `InstanceIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list
<li>instance-name</li>Filter by the instance name
Type: String
Required: no
<li>private-ip-address</li>Filter by the private IP of instance primary ENI
Type: String
Required: no
<li>public-ip-address</li>Filter by the public IP of instance primary ENI
Type: String
Required: no
<li>zone</li>Filter by the availability zone
Type: String
Required: no
<li>instance-state</li>Filter by **instance status**.
Type: String
Required: no
Each request can contain up to 10 filters, each of which can have 100 values. You cannot specify both `InstanceIds` and `Filters` at the same time.
                     * @param Filters Filter list
<li>instance-name</li>Filter by the instance name
Type: String
Required: no
<li>private-ip-address</li>Filter by the private IP of instance primary ENI
Type: String
Required: no
<li>public-ip-address</li>Filter by the public IP of instance primary ENI
Type: String
Required: no
<li>zone</li>Filter by the availability zone
Type: String
Required: no
<li>instance-state</li>Filter by **instance status**.
Type: String
Required: no
Each request can contain up to 10 filters, each of which can have 100 values. You cannot specify both `InstanceIds` and `Filters` at the same time.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param Offset Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Instance ID list. Each request can contain up to 100 instances at a time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Filter list
<li>instance-name</li>Filter by the instance name
Type: String
Required: no
<li>private-ip-address</li>Filter by the private IP of instance primary ENI
Type: String
Required: no
<li>public-ip-address</li>Filter by the public IP of instance primary ENI
Type: String
Required: no
<li>zone</li>Filter by the availability zone
Type: String
Required: no
<li>instance-state</li>Filter by **instance status**.
Type: String
Required: no
Each request can contain up to 10 filters, each of which can have 100 values. You cannot specify both `InstanceIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEINSTANCESREQUEST_H_
