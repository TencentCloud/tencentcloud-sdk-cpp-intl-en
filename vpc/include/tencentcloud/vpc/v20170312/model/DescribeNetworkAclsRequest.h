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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNetworkAcls request structure.
                */
                class DescribeNetworkAclsRequest : public AbstractModel
                {
                public:
                    DescribeNetworkAclsRequest();
                    ~DescribeNetworkAclsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of network ACL instance IDs, such as [acl-12345678]. Up to 100 instances are allowed for each request. This parameter does not support specifying `NetworkAclIds` and `Filters` at the same time.
                     * @return NetworkAclIds Array of network ACL instance IDs, such as [acl-12345678]. Up to 100 instances are allowed for each request. This parameter does not support specifying `NetworkAclIds` and `Filters` at the same time.
                     * 
                     */
                    std::vector<std::string> GetNetworkAclIds() const;

                    /**
                     * 设置Array of network ACL instance IDs, such as [acl-12345678]. Up to 100 instances are allowed for each request. This parameter does not support specifying `NetworkAclIds` and `Filters` at the same time.
                     * @param _networkAclIds Array of network ACL instance IDs, such as [acl-12345678]. Up to 100 instances are allowed for each request. This parameter does not support specifying `NetworkAclIds` and `Filters` at the same time.
                     * 
                     */
                    void SetNetworkAclIds(const std::vector<std::string>& _networkAclIds);

                    /**
                     * 判断参数 NetworkAclIds 是否已赋值
                     * @return NetworkAclIds 是否已赋值
                     * 
                     */
                    bool NetworkAclIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition. `NetworkAclIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) VPC instance ID, such as vpc-12345678.</li>
<li>network-acl-id - String - (Filter condition) Network ACL instance ID, such as acl-12345678.</li>
<li>network-acl-name - String - (Filter condition) Network ACL instance name.</li>
                     * @return Filters Filter condition. `NetworkAclIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) VPC instance ID, such as vpc-12345678.</li>
<li>network-acl-id - String - (Filter condition) Network ACL instance ID, such as acl-12345678.</li>
<li>network-acl-name - String - (Filter condition) Network ACL instance name.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `NetworkAclIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) VPC instance ID, such as vpc-12345678.</li>
<li>network-acl-id - String - (Filter condition) Network ACL instance ID, such as acl-12345678.</li>
<li>network-acl-name - String - (Filter condition) Network ACL instance name.</li>
                     * @param _filters Filter condition. `NetworkAclIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) VPC instance ID, such as vpc-12345678.</li>
<li>network-acl-id - String - (Filter condition) Network ACL instance ID, such as acl-12345678.</li>
<li>network-acl-name - String - (Filter condition) Network ACL instance name.</li>
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
                     * 获取Offset. Default: 0.
                     * @return Offset Offset. Default: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default: 0.
                     * @param _offset Offset. Default: 0.
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
                     * 获取Returned quantity. Default: 20. Value range: 1-100.
                     * @return Limit Returned quantity. Default: 20. Value range: 1-100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Returned quantity. Default: 20. Value range: 1-100.
                     * @param _limit Returned quantity. Default: 20. Value range: 1-100.
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
                     * Array of network ACL instance IDs, such as [acl-12345678]. Up to 100 instances are allowed for each request. This parameter does not support specifying `NetworkAclIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> m_networkAclIds;
                    bool m_networkAclIdsHasBeenSet;

                    /**
                     * Filter condition. `NetworkAclIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) VPC instance ID, such as vpc-12345678.</li>
<li>network-acl-id - String - (Filter condition) Network ACL instance ID, such as acl-12345678.</li>
<li>network-acl-name - String - (Filter condition) Network ACL instance name.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Returned quantity. Default: 20. Value range: 1-100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLSREQUEST_H_
