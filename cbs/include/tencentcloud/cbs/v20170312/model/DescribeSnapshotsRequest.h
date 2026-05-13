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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

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
                * DescribeSnapshots request structure.
                */
                class DescribeSnapshotsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotsRequest();
                    ~DescribeSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of snapshot IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     * @return SnapshotIds List of snapshot IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置List of snapshot IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     * @param _snapshotIds List of snapshot IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria. parameters `SnapshotIds` and `Filters` cannot be specified at the same time.<br><ul><li>snapshot-id<ul><li>filter by cloud disk snapshot id</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-name<ul><li>filter by cloud disk snapshot name</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-state<ul><li>filter by cloud disk snapshot status</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>NORMAL</code>: NORMAL</li><li><code>CREATING</code>: CREATING</li><li><code>ROLLBACKING</code>: rolling back</li><li><code>COPYING_FROM_REMOTE</code>: cross geo-replication in progress</li><li><code>CHECKING_COPIED</code>: COPYING check in progress</li><li><code>TORECYCLE</code>: pending recycling</li></ul></li></ul></li><li>disk-usage<ul><li>filter by cloud disk usage purpose</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SYSTEM_disk</code>: represent SYSTEM disk</li><li><code>DATA_disk</code>: represent DATA disk</li></ul></li></ul></li><li>project-id<ul><li>filter by cloud disk project id</li><li>type: String</li><li>required: no</li></ul></li><li>disk-id<ul><li>filter by cloud disk id. up to 10 values can be specified</li><li>type: String</li><li>required: no</li></ul></li><li>encrypt<ul><li>filter by whether encrypted or not</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-type<ul><li>query by snapshot ownership type</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SHARED_snapshot</code>: refer to SHARED snapshot</li><li><code>PRIVATE_snapshot</code>: refer to own PRIVATE snapshot</li></ul></li></ul></li></ul>.
                     * @return Filters Filter criteria. parameters `SnapshotIds` and `Filters` cannot be specified at the same time.<br><ul><li>snapshot-id<ul><li>filter by cloud disk snapshot id</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-name<ul><li>filter by cloud disk snapshot name</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-state<ul><li>filter by cloud disk snapshot status</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>NORMAL</code>: NORMAL</li><li><code>CREATING</code>: CREATING</li><li><code>ROLLBACKING</code>: rolling back</li><li><code>COPYING_FROM_REMOTE</code>: cross geo-replication in progress</li><li><code>CHECKING_COPIED</code>: COPYING check in progress</li><li><code>TORECYCLE</code>: pending recycling</li></ul></li></ul></li><li>disk-usage<ul><li>filter by cloud disk usage purpose</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SYSTEM_disk</code>: represent SYSTEM disk</li><li><code>DATA_disk</code>: represent DATA disk</li></ul></li></ul></li><li>project-id<ul><li>filter by cloud disk project id</li><li>type: String</li><li>required: no</li></ul></li><li>disk-id<ul><li>filter by cloud disk id. up to 10 values can be specified</li><li>type: String</li><li>required: no</li></ul></li><li>encrypt<ul><li>filter by whether encrypted or not</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-type<ul><li>query by snapshot ownership type</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SHARED_snapshot</code>: refer to SHARED snapshot</li><li><code>PRIVATE_snapshot</code>: refer to own PRIVATE snapshot</li></ul></li></ul></li></ul>.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. parameters `SnapshotIds` and `Filters` cannot be specified at the same time.<br><ul><li>snapshot-id<ul><li>filter by cloud disk snapshot id</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-name<ul><li>filter by cloud disk snapshot name</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-state<ul><li>filter by cloud disk snapshot status</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>NORMAL</code>: NORMAL</li><li><code>CREATING</code>: CREATING</li><li><code>ROLLBACKING</code>: rolling back</li><li><code>COPYING_FROM_REMOTE</code>: cross geo-replication in progress</li><li><code>CHECKING_COPIED</code>: COPYING check in progress</li><li><code>TORECYCLE</code>: pending recycling</li></ul></li></ul></li><li>disk-usage<ul><li>filter by cloud disk usage purpose</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SYSTEM_disk</code>: represent SYSTEM disk</li><li><code>DATA_disk</code>: represent DATA disk</li></ul></li></ul></li><li>project-id<ul><li>filter by cloud disk project id</li><li>type: String</li><li>required: no</li></ul></li><li>disk-id<ul><li>filter by cloud disk id. up to 10 values can be specified</li><li>type: String</li><li>required: no</li></ul></li><li>encrypt<ul><li>filter by whether encrypted or not</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-type<ul><li>query by snapshot ownership type</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SHARED_snapshot</code>: refer to SHARED snapshot</li><li><code>PRIVATE_snapshot</code>: refer to own PRIVATE snapshot</li></ul></li></ul></li></ul>.
                     * @param _filters Filter criteria. parameters `SnapshotIds` and `Filters` cannot be specified at the same time.<br><ul><li>snapshot-id<ul><li>filter by cloud disk snapshot id</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-name<ul><li>filter by cloud disk snapshot name</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-state<ul><li>filter by cloud disk snapshot status</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>NORMAL</code>: NORMAL</li><li><code>CREATING</code>: CREATING</li><li><code>ROLLBACKING</code>: rolling back</li><li><code>COPYING_FROM_REMOTE</code>: cross geo-replication in progress</li><li><code>CHECKING_COPIED</code>: COPYING check in progress</li><li><code>TORECYCLE</code>: pending recycling</li></ul></li></ul></li><li>disk-usage<ul><li>filter by cloud disk usage purpose</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SYSTEM_disk</code>: represent SYSTEM disk</li><li><code>DATA_disk</code>: represent DATA disk</li></ul></li></ul></li><li>project-id<ul><li>filter by cloud disk project id</li><li>type: String</li><li>required: no</li></ul></li><li>disk-id<ul><li>filter by cloud disk id. up to 10 values can be specified</li><li>type: String</li><li>required: no</li></ul></li><li>encrypt<ul><li>filter by whether encrypted or not</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-type<ul><li>query by snapshot ownership type</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SHARED_snapshot</code>: refer to SHARED snapshot</li><li><code>PRIVATE_snapshot</code>: refer to own PRIVATE snapshot</li></ul></li></ul></li></ul>.
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
                     * 获取Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @return Limit Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @param _limit Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
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
                     * 获取Field based on which the snapshot list is sorted. valid values:.
<ul>
<Li>CREATE_TIME: specifies to sort by snapshot creation time.</li>.
<Li>Sort by creation time by default.</li>.
</ul>
                     * @return OrderField Field based on which the snapshot list is sorted. valid values:.
<ul>
<Li>CREATE_TIME: specifies to sort by snapshot creation time.</li>.
<Li>Sort by creation time by default.</li>.
</ul>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Field based on which the snapshot list is sorted. valid values:.
<ul>
<Li>CREATE_TIME: specifies to sort by snapshot creation time.</li>.
<Li>Sort by creation time by default.</li>.
</ul>
                     * @param _orderField Field based on which the snapshot list is sorted. valid values:.
<ul>
<Li>CREATE_TIME: specifies to sort by snapshot creation time.</li>.
<Li>Sort by creation time by default.</li>.
</ul>
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
                     * 获取Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @return Offset Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     * @param _offset Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
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
                     * 获取Outputs the sorting order of the cloud disk list. valid values:.
<ul>
<Li>ASC: specifies ascending order.</li>.
<Li>DESC: specifies sorting in descending order.</li>.
</ul>

                     * @return Order Outputs the sorting order of the cloud disk list. valid values:.
<ul>
<Li>ASC: specifies ascending order.</li>.
<Li>DESC: specifies sorting in descending order.</li>.
</ul>

                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Outputs the sorting order of the cloud disk list. valid values:.
<ul>
<Li>ASC: specifies ascending order.</li>.
<Li>DESC: specifies sorting in descending order.</li>.
</ul>

                     * @param _order Outputs the sorting order of the cloud disk list. valid values:.
<ul>
<Li>ASC: specifies ascending order.</li>.
<Li>DESC: specifies sorting in descending order.</li>.
</ul>

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
                     * List of snapshot IDs to be queried. The parameter does not support specifying both `SnapshotIds` and `Filters`.
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * Filter criteria. parameters `SnapshotIds` and `Filters` cannot be specified at the same time.<br><ul><li>snapshot-id<ul><li>filter by cloud disk snapshot id</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-name<ul><li>filter by cloud disk snapshot name</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-state<ul><li>filter by cloud disk snapshot status</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>NORMAL</code>: NORMAL</li><li><code>CREATING</code>: CREATING</li><li><code>ROLLBACKING</code>: rolling back</li><li><code>COPYING_FROM_REMOTE</code>: cross geo-replication in progress</li><li><code>CHECKING_COPIED</code>: COPYING check in progress</li><li><code>TORECYCLE</code>: pending recycling</li></ul></li></ul></li><li>disk-usage<ul><li>filter by cloud disk usage purpose</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SYSTEM_disk</code>: represent SYSTEM disk</li><li><code>DATA_disk</code>: represent DATA disk</li></ul></li></ul></li><li>project-id<ul><li>filter by cloud disk project id</li><li>type: String</li><li>required: no</li></ul></li><li>disk-id<ul><li>filter by cloud disk id. up to 10 values can be specified</li><li>type: String</li><li>required: no</li></ul></li><li>encrypt<ul><li>filter by whether encrypted or not</li><li>type: String</li><li>required: no</li></ul></li><li>snapshot-type<ul><li>query by snapshot ownership type</li><li>type: String</li><li>required: no</li><li>value ranges FROM:<ul><li><code>SHARED_snapshot</code>: refer to SHARED snapshot</li><li><code>PRIVATE_snapshot</code>: refer to own PRIVATE snapshot</li></ul></li></ul></li></ul>.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default is 20. Maximum is 100. For more information on `Limit`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Field based on which the snapshot list is sorted. valid values:.
<ul>
<Li>CREATE_TIME: specifies to sort by snapshot creation time.</li>.
<Li>Sort by creation time by default.</li>.
</ul>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Offset. Default is 0. For more information on `Offset`, please see relevant sections in API [Introduction](https://intl.cloud.tencent.com/document/product/362/15633?from_cn_redirect=1).
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Outputs the sorting order of the cloud disk list. valid values:.
<ul>
<Li>ASC: specifies ascending order.</li>.
<Li>DESC: specifies sorting in descending order.</li>.
</ul>

                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
