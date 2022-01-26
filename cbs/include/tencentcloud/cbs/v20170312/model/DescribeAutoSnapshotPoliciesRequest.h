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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAutoSnapshotPolicies request structure.
                */
                class DescribeAutoSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAutoSnapshotPoliciesRequest();
                    ~DescribeAutoSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of scheduled snapshot policy IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     * @return AutoSnapshotPolicyIds List of scheduled snapshot policy IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     */
                    std::vector<std::string> GetAutoSnapshotPolicyIds() const;

                    /**
                     * 设置List of scheduled snapshot policy IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     * @param AutoSnapshotPolicyIds List of scheduled snapshot policy IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     */
                    void SetAutoSnapshotPolicyIds(const std::vector<std::string>& _autoSnapshotPolicyIds);

                    /**
                     * 判断参数 AutoSnapshotPolicyIds 是否已赋值
                     * @return AutoSnapshotPolicyIds 是否已赋值
                     */
                    bool AutoSnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions. Specification of both the `AutoSnapshotPolicyIds` and `Filters` parameters is not supported.<br><li>auto-snapshot-policy-id - Array of String - Required or not: No - (Filter condition) Filters according to the scheduled snapshot policy ID. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. <br><li>auto-snapshot-policy-state - Array of String - Required or not: No - (Filter condition) Filters according to the status of the scheduled snapshot policy. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. (NORMAL: normal | ISOLATED: isolated)<br><li>auto-snapshot-policy-name - Array of String - Required or not: No - (Filter condition) Filters according to the name of the scheduled snapshot policy.
                     * @return Filters Filter conditions. Specification of both the `AutoSnapshotPolicyIds` and `Filters` parameters is not supported.<br><li>auto-snapshot-policy-id - Array of String - Required or not: No - (Filter condition) Filters according to the scheduled snapshot policy ID. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. <br><li>auto-snapshot-policy-state - Array of String - Required or not: No - (Filter condition) Filters according to the status of the scheduled snapshot policy. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. (NORMAL: normal | ISOLATED: isolated)<br><li>auto-snapshot-policy-name - Array of String - Required or not: No - (Filter condition) Filters according to the name of the scheduled snapshot policy.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. Specification of both the `AutoSnapshotPolicyIds` and `Filters` parameters is not supported.<br><li>auto-snapshot-policy-id - Array of String - Required or not: No - (Filter condition) Filters according to the scheduled snapshot policy ID. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. <br><li>auto-snapshot-policy-state - Array of String - Required or not: No - (Filter condition) Filters according to the status of the scheduled snapshot policy. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. (NORMAL: normal | ISOLATED: isolated)<br><li>auto-snapshot-policy-name - Array of String - Required or not: No - (Filter condition) Filters according to the name of the scheduled snapshot policy.
                     * @param Filters Filter conditions. Specification of both the `AutoSnapshotPolicyIds` and `Filters` parameters is not supported.<br><li>auto-snapshot-policy-id - Array of String - Required or not: No - (Filter condition) Filters according to the scheduled snapshot policy ID. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. <br><li>auto-snapshot-policy-state - Array of String - Required or not: No - (Filter condition) Filters according to the status of the scheduled snapshot policy. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. (NORMAL: normal | ISOLATED: isolated)<br><li>auto-snapshot-policy-name - Array of String - Required or not: No - (Filter condition) Filters according to the name of the scheduled snapshot policy.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @return Limit Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @param Limit Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @return Offset Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @param Offset Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Outputs the ordering of the scheduled snapshot lists. Value range: <br><li>ASC: Ascending order <br><li>DESC: Descending order.
                     * @return Order Outputs the ordering of the scheduled snapshot lists. Value range: <br><li>ASC: Ascending order <br><li>DESC: Descending order.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Outputs the ordering of the scheduled snapshot lists. Value range: <br><li>ASC: Ascending order <br><li>DESC: Descending order.
                     * @param Order Outputs the ordering of the scheduled snapshot lists. Value range: <br><li>ASC: Ascending order <br><li>DESC: Descending order.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取The sorting filter applied to the scheduled snapshot list. Value range: <Sort by creation time of scheduled snapshot. By default, this is sorted by creation time.
                     * @return OrderField The sorting filter applied to the scheduled snapshot list. Value range: <Sort by creation time of scheduled snapshot. By default, this is sorted by creation time.
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置The sorting filter applied to the scheduled snapshot list. Value range: <Sort by creation time of scheduled snapshot. By default, this is sorted by creation time.
                     * @param OrderField The sorting filter applied to the scheduled snapshot list. Value range: <Sort by creation time of scheduled snapshot. By default, this is sorted by creation time.
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * List of scheduled snapshot policy IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     */
                    std::vector<std::string> m_autoSnapshotPolicyIds;
                    bool m_autoSnapshotPolicyIdsHasBeenSet;

                    /**
                     * Filter conditions. Specification of both the `AutoSnapshotPolicyIds` and `Filters` parameters is not supported.<br><li>auto-snapshot-policy-id - Array of String - Required or not: No - (Filter condition) Filters according to the scheduled snapshot policy ID. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. <br><li>auto-snapshot-policy-state - Array of String - Required or not: No - (Filter condition) Filters according to the status of the scheduled snapshot policy. The format of the scheduled snapshot policy ID is as follows: `asp-11112222`. (NORMAL: normal | ISOLATED: isolated)<br><li>auto-snapshot-policy-name - Array of String - Required or not: No - (Filter condition) Filters according to the name of the scheduled snapshot policy.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Outputs the ordering of the scheduled snapshot lists. Value range: <br><li>ASC: Ascending order <br><li>DESC: Descending order.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * The sorting filter applied to the scheduled snapshot list. Value range: <Sort by creation time of scheduled snapshot. By default, this is sorted by creation time.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESREQUEST_H_
