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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTGROUPSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTGROUPSREQUEST_H_

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
                * DescribeSnapshotGroups request structure.
                */
                class DescribeSnapshotGroupsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotGroupsRequest();
                    ~DescribeSnapshotGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria.<br><li>snapshot-group-id - Array of String - Required: No - (Filter criteria) Filter by snapshot group ID.<br><li>snapshot-group-state - Array of String - Required: No - (Filter criteria) Filter by snapshot group state. (NORMAL: Normal | CREATING: Creating | ROLLBACKING: Rolling back)<br><li>snapshot-group-name - Array of String - Required: No - (Filter criteria) Filter by snapshot group name.<br><li>snapshot-id - Array of String - Required: No - (Filter criteria) Filter by snapshot ID within the snapshot group.
                     * @return Filters Filter criteria.<br><li>snapshot-group-id - Array of String - Required: No - (Filter criteria) Filter by snapshot group ID.<br><li>snapshot-group-state - Array of String - Required: No - (Filter criteria) Filter by snapshot group state. (NORMAL: Normal | CREATING: Creating | ROLLBACKING: Rolling back)<br><li>snapshot-group-name - Array of String - Required: No - (Filter criteria) Filter by snapshot group name.<br><li>snapshot-id - Array of String - Required: No - (Filter criteria) Filter by snapshot ID within the snapshot group.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria.<br><li>snapshot-group-id - Array of String - Required: No - (Filter criteria) Filter by snapshot group ID.<br><li>snapshot-group-state - Array of String - Required: No - (Filter criteria) Filter by snapshot group state. (NORMAL: Normal | CREATING: Creating | ROLLBACKING: Rolling back)<br><li>snapshot-group-name - Array of String - Required: No - (Filter criteria) Filter by snapshot group name.<br><li>snapshot-id - Array of String - Required: No - (Filter criteria) Filter by snapshot ID within the snapshot group.
                     * @param _filters Filter criteria.<br><li>snapshot-group-id - Array of String - Required: No - (Filter criteria) Filter by snapshot group ID.<br><li>snapshot-group-state - Array of String - Required: No - (Filter criteria) Filter by snapshot group state. (NORMAL: Normal | CREATING: Creating | ROLLBACKING: Rolling back)<br><li>snapshot-group-name - Array of String - Required: No - (Filter criteria) Filter by snapshot group name.<br><li>snapshot-id - Array of String - Required: No - (Filter criteria) Filter by snapshot ID within the snapshot group.
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
                     * 获取Number of returns, with a default value of 20, and a maximum value of 100.
                     * @return Limit Number of returns, with a default value of 20, and a maximum value of 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns, with a default value of 20, and a maximum value of 100.
                     * @param _limit Number of returns, with a default value of 20, and a maximum value of 100.
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
                     * Filter criteria.<br><li>snapshot-group-id - Array of String - Required: No - (Filter criteria) Filter by snapshot group ID.<br><li>snapshot-group-state - Array of String - Required: No - (Filter criteria) Filter by snapshot group state. (NORMAL: Normal | CREATING: Creating | ROLLBACKING: Rolling back)<br><li>snapshot-group-name - Array of String - Required: No - (Filter criteria) Filter by snapshot group name.<br><li>snapshot-id - Array of String - Required: No - (Filter criteria) Filter by snapshot ID within the snapshot group.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns, with a default value of 20, and a maximum value of 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTGROUPSREQUEST_H_
