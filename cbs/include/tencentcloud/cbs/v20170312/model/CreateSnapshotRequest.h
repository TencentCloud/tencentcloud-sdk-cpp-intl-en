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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_

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
                * CreateSnapshot request structure.
                */
                class CreateSnapshotRequest : public AbstractModel
                {
                public:
                    CreateSnapshotRequest();
                    ~CreateSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cloud disk, for which a snapshot needs to be created. It can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     * @return DiskId ID of the cloud disk, for which a snapshot needs to be created. It can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the cloud disk, for which a snapshot needs to be created. It can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     * @param DiskId ID of the cloud disk, for which a snapshot needs to be created. It can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Snapshot name. If it is left empty, the new snapshot name is "Not named" by default.
                     * @return SnapshotName Snapshot name. If it is left empty, the new snapshot name is "Not named" by default.
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name. If it is left empty, the new snapshot name is "Not named" by default.
                     * @param SnapshotName Snapshot name. If it is left empty, the new snapshot name is "Not named" by default.
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取Expiration time of the snapshot. It must be in UTC ISO-8601 format, eg. 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires
                     * @return Deadline Expiration time of the snapshot. It must be in UTC ISO-8601 format, eg. 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置Expiration time of the snapshot. It must be in UTC ISO-8601 format, eg. 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires
                     * @param Deadline Expiration time of the snapshot. It must be in UTC ISO-8601 format, eg. 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * ID of the cloud disk, for which a snapshot needs to be created. It can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Snapshot name. If it is left empty, the new snapshot name is "Not named" by default.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Expiration time of the snapshot. It must be in UTC ISO-8601 format, eg. 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
