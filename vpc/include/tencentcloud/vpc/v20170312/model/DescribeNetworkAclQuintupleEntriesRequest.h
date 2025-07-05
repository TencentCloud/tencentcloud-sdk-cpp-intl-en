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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLQUINTUPLEENTRIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLQUINTUPLEENTRIESREQUEST_H_

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
                * DescribeNetworkAclQuintupleEntries request structure.
                */
                class DescribeNetworkAclQuintupleEntriesRequest : public AbstractModel
                {
                public:
                    DescribeNetworkAclQuintupleEntriesRequest();
                    ~DescribeNetworkAclQuintupleEntriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Network ACL instance ID, such as `acl-12345678`.
                     * @return NetworkAclId Network ACL instance ID, such as `acl-12345678`.
                     * 
                     */
                    std::string GetNetworkAclId() const;

                    /**
                     * 设置Network ACL instance ID, such as `acl-12345678`.
                     * @param _networkAclId Network ACL instance ID, such as `acl-12345678`.
                     * 
                     */
                    void SetNetworkAclId(const std::string& _networkAclId);

                    /**
                     * 判断参数 NetworkAclId 是否已赋值
                     * @return NetworkAclId 是否已赋值
                     * 
                     */
                    bool NetworkAclIdHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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

                    /**
                     * 获取Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>`protocol` - String - Such as `TCP`</li>
<li>`description` - String - Description</li>
<li>`destination-cidr` - String - Destination CIDR block, such as `192.168.0.0/24`</li>
<li>`source-cidr` - String - Source CIDR block, such as `192.168.0.0/24`</li>
<li>`action` - String - ·Values: `ACCEPT`, `DROP`</li>
<li>`network-acl-quintuple-entry-id` - String - Unique ID of the quintuple, such as `acli45-ahnu4rv5`</li>
<li>`network-acl-direction` - String - Direction of the policy. Values: `INGRESS` or `EGRESS`.</li>
                     * @return Filters Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>`protocol` - String - Such as `TCP`</li>
<li>`description` - String - Description</li>
<li>`destination-cidr` - String - Destination CIDR block, such as `192.168.0.0/24`</li>
<li>`source-cidr` - String - Source CIDR block, such as `192.168.0.0/24`</li>
<li>`action` - String - ·Values: `ACCEPT`, `DROP`</li>
<li>`network-acl-quintuple-entry-id` - String - Unique ID of the quintuple, such as `acli45-ahnu4rv5`</li>
<li>`network-acl-direction` - String - Direction of the policy. Values: `INGRESS` or `EGRESS`.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>`protocol` - String - Such as `TCP`</li>
<li>`description` - String - Description</li>
<li>`destination-cidr` - String - Destination CIDR block, such as `192.168.0.0/24`</li>
<li>`source-cidr` - String - Source CIDR block, such as `192.168.0.0/24`</li>
<li>`action` - String - ·Values: `ACCEPT`, `DROP`</li>
<li>`network-acl-quintuple-entry-id` - String - Unique ID of the quintuple, such as `acli45-ahnu4rv5`</li>
<li>`network-acl-direction` - String - Direction of the policy. Values: `INGRESS` or `EGRESS`.</li>
                     * @param _filters Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>`protocol` - String - Such as `TCP`</li>
<li>`description` - String - Description</li>
<li>`destination-cidr` - String - Destination CIDR block, such as `192.168.0.0/24`</li>
<li>`source-cidr` - String - Source CIDR block, such as `192.168.0.0/24`</li>
<li>`action` - String - ·Values: `ACCEPT`, `DROP`</li>
<li>`network-acl-quintuple-entry-id` - String - Unique ID of the quintuple, such as `acli45-ahnu4rv5`</li>
<li>`network-acl-direction` - String - Direction of the policy. Values: `INGRESS` or `EGRESS`.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Network ACL instance ID, such as `acl-12345678`.
                     */
                    std::string m_networkAclId;
                    bool m_networkAclIdHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Returned quantity. Default: 20. Value range: 1-100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>`protocol` - String - Such as `TCP`</li>
<li>`description` - String - Description</li>
<li>`destination-cidr` - String - Destination CIDR block, such as `192.168.0.0/24`</li>
<li>`source-cidr` - String - Source CIDR block, such as `192.168.0.0/24`</li>
<li>`action` - String - ·Values: `ACCEPT`, `DROP`</li>
<li>`network-acl-quintuple-entry-id` - String - Unique ID of the quintuple, such as `acli45-ahnu4rv5`</li>
<li>`network-acl-direction` - String - Direction of the policy. Values: `INGRESS` or `EGRESS`.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKACLQUINTUPLEENTRIESREQUEST_H_
