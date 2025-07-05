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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTPOLICIESREQUEST_H_

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
                * DescribeSnapshotPolicies request structure.
                */
                class DescribeSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotPoliciesRequest();
                    ~DescribeSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot policy IDs
                     * @return SnapshotPolicyIds Snapshot policy IDs
                     * 
                     */
                    std::vector<std::string> GetSnapshotPolicyIds() const;

                    /**
                     * 设置Snapshot policy IDs
                     * @param _snapshotPolicyIds Snapshot policy IDs
                     * 
                     */
                    void SetSnapshotPolicyIds(const std::vector<std::string>& _snapshotPolicyIds);

                    /**
                     * 判断参数 SnapshotPolicyIds 是否已赋值
                     * @return SnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions. `SnapshotPolicyIds` and `Filters` cannot be both specified.
<li>`snapshot-policy-id` - String - Snapshot policy ID</li>
<li>`snapshot-policy-name` - String - Snapshot policy name</li>
                     * @return Filters Filter conditions. `SnapshotPolicyIds` and `Filters` cannot be both specified.
<li>`snapshot-policy-id` - String - Snapshot policy ID</li>
<li>`snapshot-policy-name` - String - Snapshot policy name</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. `SnapshotPolicyIds` and `Filters` cannot be both specified.
<li>`snapshot-policy-id` - String - Snapshot policy ID</li>
<li>`snapshot-policy-name` - String - Snapshot policy name</li>
                     * @param _filters Filter conditions. `SnapshotPolicyIds` and `Filters` cannot be both specified.
<li>`snapshot-policy-id` - String - Snapshot policy ID</li>
<li>`snapshot-policy-name` - String - Snapshot policy name</li>
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
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 200.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 200.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 200.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 200.
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
                     * Snapshot policy IDs
                     */
                    std::vector<std::string> m_snapshotPolicyIds;
                    bool m_snapshotPolicyIdsHasBeenSet;

                    /**
                     * Filter conditions. `SnapshotPolicyIds` and `Filters` cannot be both specified.
<li>`snapshot-policy-id` - String - Snapshot policy ID</li>
<li>`snapshot-policy-name` - String - Snapshot policy name</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTPOLICIESREQUEST_H_
