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
#include <tencentcloud/cbs/v20170312/model/Tag.h>


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
                     * 获取ID of the cloud disk for which to create a snapshot, which can be queried through the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API.
                     * @return DiskId ID of the cloud disk for which to create a snapshot, which can be queried through the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API.
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the cloud disk for which to create a snapshot, which can be queried through the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API.
                     * @param DiskId ID of the cloud disk for which to create a snapshot, which can be queried through the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API.
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Snapshot name. If it is not specified, "Unnamed" will be used by default.
                     * @return SnapshotName Snapshot name. If it is not specified, "Unnamed" will be used by default.
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name. If it is not specified, "Unnamed" will be used by default.
                     * @param SnapshotName Snapshot name. If it is not specified, "Unnamed" will be used by default.
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取Expiration time of the snapshot. It must be in UTC ISO-8601 format, such as 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires.
                     * @return Deadline Expiration time of the snapshot. It must be in UTC ISO-8601 format, such as 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires.
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置Expiration time of the snapshot. It must be in UTC ISO-8601 format, such as 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires.
                     * @param Deadline Expiration time of the snapshot. It must be in UTC ISO-8601 format, such as 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires.
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取ID of the cloud disk backup point. When this parameter is specified, the snapshot will be created from the backup point.
                     * @return DiskBackupId ID of the cloud disk backup point. When this parameter is specified, the snapshot will be created from the backup point.
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置ID of the cloud disk backup point. When this parameter is specified, the snapshot will be created from the backup point.
                     * @param DiskBackupId ID of the cloud disk backup point. When this parameter is specified, the snapshot will be created from the backup point.
                     */
                    void SetDiskBackupId(const std::string& _diskBackupId);

                    /**
                     * 判断参数 DiskBackupId 是否已赋值
                     * @return DiskBackupId 是否已赋值
                     */
                    bool DiskBackupIdHasBeenSet() const;

                    /**
                     * 获取Tags bound to the snapshot.
                     * @return Tags Tags bound to the snapshot.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags bound to the snapshot.
                     * @param Tags Tags bound to the snapshot.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * ID of the cloud disk for which to create a snapshot, which can be queried through the [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1) API.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Snapshot name. If it is not specified, "Unnamed" will be used by default.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Expiration time of the snapshot. It must be in UTC ISO-8601 format, such as 2022-01-08T09:47:55+00:00. The snapshot will be automatically deleted when it expires.
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * ID of the cloud disk backup point. When this parameter is specified, the snapshot will be created from the backup point.
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * Tags bound to the snapshot.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
