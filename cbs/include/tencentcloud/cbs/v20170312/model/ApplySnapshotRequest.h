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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_

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
                * ApplySnapshot request structure.
                */
                class ApplySnapshotRequest : public AbstractModel
                {
                public:
                    ApplySnapshotRequest();
                    ~ApplySnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     * @return SnapshotId Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     * @param SnapshotId Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](/document/product/362/16315).
                     * @return DiskId ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](/document/product/362/16315).
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](/document/product/362/16315).
                     * @param DiskId ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](/document/product/362/16315).
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](/document/product/362/16315).
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_
