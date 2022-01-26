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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSREQUEST_H_

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
                * DescribeSnapshots request structure.
                */
                class DescribeSnapshotsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotsRequest();
                    ~DescribeSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of snapshots to be queried.
You cannot specify `SnapshotIds` and `Filters` at the same time.
                     * @return SnapshotIds List of IDs of snapshots to be queried.
You cannot specify `SnapshotIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置List of IDs of snapshots to be queried.
You cannot specify `SnapshotIds` and `Filters` at the same time.
                     * @param SnapshotIds List of IDs of snapshots to be queried.
You cannot specify `SnapshotIds` and `Filters` at the same time.
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取Filter list.
<li>snapshot-id</li>Filter by **snapshot ID**.
Type: String
Required: no
<li>disk-id</li>Filter by **disk ID**.
Type: String
Required: no
<li>snapshot-name</li>Filter by **snapshot name**.
Type: String
Required: no
<li>instance-id</li>Filter by **instance ID**.
Type: String
Required: no
Each request can contain up to 10 `Filters` and 5 `Filter.Values`. You cannot specify both `SnapshotIds` and `Filters` at the same time.
                     * @return Filters Filter list.
<li>snapshot-id</li>Filter by **snapshot ID**.
Type: String
Required: no
<li>disk-id</li>Filter by **disk ID**.
Type: String
Required: no
<li>snapshot-name</li>Filter by **snapshot name**.
Type: String
Required: no
<li>instance-id</li>Filter by **instance ID**.
Type: String
Required: no
Each request can contain up to 10 `Filters` and 5 `Filter.Values`. You cannot specify both `SnapshotIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list.
<li>snapshot-id</li>Filter by **snapshot ID**.
Type: String
Required: no
<li>disk-id</li>Filter by **disk ID**.
Type: String
Required: no
<li>snapshot-name</li>Filter by **snapshot name**.
Type: String
Required: no
<li>instance-id</li>Filter by **instance ID**.
Type: String
Required: no
Each request can contain up to 10 `Filters` and 5 `Filter.Values`. You cannot specify both `SnapshotIds` and `Filters` at the same time.
                     * @param Filters Filter list.
<li>snapshot-id</li>Filter by **snapshot ID**.
Type: String
Required: no
<li>disk-id</li>Filter by **disk ID**.
Type: String
Required: no
<li>snapshot-name</li>Filter by **snapshot name**.
Type: String
Required: no
<li>instance-id</li>Filter by **instance ID**.
Type: String
Required: no
Each request can contain up to 10 `Filters` and 5 `Filter.Values`. You cannot specify both `SnapshotIds` and `Filters` at the same time.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * List of IDs of snapshots to be queried.
You cannot specify `SnapshotIds` and `Filters` at the same time.
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * Filter list.
<li>snapshot-id</li>Filter by **snapshot ID**.
Type: String
Required: no
<li>disk-id</li>Filter by **disk ID**.
Type: String
Required: no
<li>snapshot-name</li>Filter by **snapshot name**.
Type: String
Required: no
<li>instance-id</li>Filter by **instance ID**.
Type: String
Required: no
Each request can contain up to 10 `Filters` and 5 `Filter.Values`. You cannot specify both `SnapshotIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSREQUEST_H_
