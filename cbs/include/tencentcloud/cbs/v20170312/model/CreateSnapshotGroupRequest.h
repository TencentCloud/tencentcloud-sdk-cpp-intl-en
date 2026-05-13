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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTGROUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTGROUPREQUEST_H_

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
                * CreateSnapshotGroup request structure.
                */
                class CreateSnapshotGroupRequest : public AbstractModel
                {
                public:
                    CreateSnapshotGroupRequest();
                    ~CreateSnapshotGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the cloud disk ID list for creating snapshot groups. disks mounted on the same instance must be selected.
                     * @return DiskIds Specifies the cloud disk ID list for creating snapshot groups. disks mounted on the same instance must be selected.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置Specifies the cloud disk ID list for creating snapshot groups. disks mounted on the same instance must be selected.
                     * @param _diskIds Specifies the cloud disk ID list for creating snapshot groups. disks mounted on the same instance must be selected.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Snapshot group name. snapshots associated with the snapshot group inherit the snapshot group name. example: if the snapshot group name is testSnapshotGroup and the snapshot group is associated with two snapshots, the snapshot names are testSnapshotGroup_0 and testSnapshotGroup_1 respectively.
                     * @return SnapshotGroupName Snapshot group name. snapshots associated with the snapshot group inherit the snapshot group name. example: if the snapshot group name is testSnapshotGroup and the snapshot group is associated with two snapshots, the snapshot names are testSnapshotGroup_0 and testSnapshotGroup_1 respectively.
                     * 
                     */
                    std::string GetSnapshotGroupName() const;

                    /**
                     * 设置Snapshot group name. snapshots associated with the snapshot group inherit the snapshot group name. example: if the snapshot group name is testSnapshotGroup and the snapshot group is associated with two snapshots, the snapshot names are testSnapshotGroup_0 and testSnapshotGroup_1 respectively.
                     * @param _snapshotGroupName Snapshot group name. snapshots associated with the snapshot group inherit the snapshot group name. example: if the snapshot group name is testSnapshotGroup and the snapshot group is associated with two snapshots, the snapshot names are testSnapshotGroup_0 and testSnapshotGroup_1 respectively.
                     * 
                     */
                    void SetSnapshotGroupName(const std::string& _snapshotGroupName);

                    /**
                     * 判断参数 SnapshotGroupName 是否已赋值
                     * @return SnapshotGroupName 是否已赋值
                     * 
                     */
                    bool SnapshotGroupNameHasBeenSet() const;

                    /**
                     * 获取Specifies the Tag list that should be bound to the snapshot group.
                     * @return Tags Specifies the Tag list that should be bound to the snapshot group.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Specifies the Tag list that should be bound to the snapshot group.
                     * @param _tags Specifies the Tag list that should be bound to the snapshot group.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Specifies the cloud disk ID list for creating snapshot groups. disks mounted on the same instance must be selected.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Snapshot group name. snapshots associated with the snapshot group inherit the snapshot group name. example: if the snapshot group name is testSnapshotGroup and the snapshot group is associated with two snapshots, the snapshot names are testSnapshotGroup_0 and testSnapshotGroup_1 respectively.
                     */
                    std::string m_snapshotGroupName;
                    bool m_snapshotGroupNameHasBeenSet;

                    /**
                     * Specifies the Tag list that should be bound to the snapshot group.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTGROUPREQUEST_H_
