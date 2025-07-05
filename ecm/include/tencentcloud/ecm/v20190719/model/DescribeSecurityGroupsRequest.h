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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroups request structure.
                */
                class DescribeSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupsRequest();
                    ~DescribeSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/1108/47697?from_cn_redirect=1). Each request supports a maximum of 100 instances. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
                     * @return SecurityGroupIds Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/1108/47697?from_cn_redirect=1). Each request supports a maximum of 100 instances. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/1108/47697?from_cn_redirect=1). Each request supports a maximum of 100 instances. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
                     * @param _securityGroupIds Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/1108/47697?from_cn_redirect=1). Each request supports a maximum of 100 instances. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取Filter. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
security-group-id - String - (Filter) Security group ID.
security-group-name - String - (Filter) Security group name.
tag-key - String - Required: no - (Filter) Filter by tag key.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key.
                     * @return Filters Filter. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
security-group-id - String - (Filter) Security group ID.
security-group-name - String - (Filter) Security group name.
tag-key - String - Required: no - (Filter) Filter by tag key.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
security-group-id - String - (Filter) Security group ID.
security-group-name - String - (Filter) Security group name.
tag-key - String - Required: no - (Filter) Filter by tag key.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key.
                     * @param _filters Filter. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
security-group-id - String - (Filter) Security group ID.
security-group-name - String - (Filter) Security group name.
tag-key - String - Required: no - (Filter) Filter by tag key.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 20. Maximum value: 100.
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
                     * Security group instance ID, such as `esg-33ocnj9n`, which can be obtained through [DescribeSecurityGroups](https://intl.cloud.tencent.com/document/product/1108/47697?from_cn_redirect=1). Each request supports a maximum of 100 instances. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * Filter. `SecurityGroupIds` and `Filters` cannot be specified at the same time.
security-group-id - String - (Filter) Security group ID.
security-group-name - String - (Filter) Security group name.
tag-key - String - Required: no - (Filter) Filter by tag key.
tag:tag-key - String - Required: no - (Filter) Filter by tag key-value pair. Replace `tag-key` with the specific tag key.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
