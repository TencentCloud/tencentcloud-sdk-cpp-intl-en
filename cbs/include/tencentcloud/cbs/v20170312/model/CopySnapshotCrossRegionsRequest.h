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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CopySnapshotCrossRegions request structure.
                */
                class CopySnapshotCrossRegionsRequest : public AbstractModel
                {
                public:
                    CopySnapshotCrossRegionsRequest();
                    ~CopySnapshotCrossRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Destination regions of the replication task. You can query the value of regions by calling [DescribeRegions](https://intl.cloud.tencent.com/document/product/213/9456?from_cn_redirect=1) API. Note that you can only specify regions that support snapshots.
                     * @return DestinationRegions Destination regions of the replication task. You can query the value of regions by calling [DescribeRegions](https://intl.cloud.tencent.com/document/product/213/9456?from_cn_redirect=1) API. Note that you can only specify regions that support snapshots.
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置Destination regions of the replication task. You can query the value of regions by calling [DescribeRegions](https://intl.cloud.tencent.com/document/product/213/9456?from_cn_redirect=1) API. Note that you can only specify regions that support snapshots.
                     * @param DestinationRegions Destination regions of the replication task. You can query the value of regions by calling [DescribeRegions](https://intl.cloud.tencent.com/document/product/213/9456?from_cn_redirect=1) API. Note that you can only specify regions that support snapshots.
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     */
                    bool DestinationRegionsHasBeenSet() const;

                    /**
                     * 获取Snapshot ID, which can be queried via the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API.
                     * @return SnapshotId Snapshot ID, which can be queried via the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API.
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID, which can be queried via the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API.
                     * @param SnapshotId Snapshot ID, which can be queried via the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API.
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Name of the snapshot replica. If it’s not specified, it defaults to “Copied [source snapshot ID from [region name]”
                     * @return SnapshotName Name of the snapshot replica. If it’s not specified, it defaults to “Copied [source snapshot ID from [region name]”
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Name of the snapshot replica. If it’s not specified, it defaults to “Copied [source snapshot ID from [region name]”
                     * @param SnapshotName Name of the snapshot replica. If it’s not specified, it defaults to “Copied [source snapshot ID from [region name]”
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                private:

                    /**
                     * Destination regions of the replication task. You can query the value of regions by calling [DescribeRegions](https://intl.cloud.tencent.com/document/product/213/9456?from_cn_redirect=1) API. Note that you can only specify regions that support snapshots.
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                    /**
                     * Snapshot ID, which can be queried via the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Name of the snapshot replica. If it’s not specified, it defaults to “Copied [source snapshot ID from [region name]”
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSREQUEST_H_
