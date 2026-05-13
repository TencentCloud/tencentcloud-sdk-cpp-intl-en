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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOT_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>
#include <tencentcloud/cbs/v20170312/model/Image.h>
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
                * The details of a snapshot
                */
                class Snapshot : public AbstractModel
                {
                public:
                    Snapshot();
                    ~Snapshot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Location of the snapshot.
                     * @return Placement Location of the snapshot.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the snapshot.
                     * @param _placement Location of the snapshot.
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Specifies whether the snapshot is for cross-region replication. value range:.
<ul>
<li>true: indicates a snapshot for cross-region replication.</li>.
<li>false: snapshot of the local region.</li>.
</ul>
                     * @return CopyFromRemote Specifies whether the snapshot is for cross-region replication. value range:.
<ul>
<li>true: indicates a snapshot for cross-region replication.</li>.
<li>false: snapshot of the local region.</li>.
</ul>
                     * 
                     */
                    bool GetCopyFromRemote() const;

                    /**
                     * 设置Specifies whether the snapshot is for cross-region replication. value range:.
<ul>
<li>true: indicates a snapshot for cross-region replication.</li>.
<li>false: snapshot of the local region.</li>.
</ul>
                     * @param _copyFromRemote Specifies whether the snapshot is for cross-region replication. value range:.
<ul>
<li>true: indicates a snapshot for cross-region replication.</li>.
<li>false: snapshot of the local region.</li>.
</ul>
                     * 
                     */
                    void SetCopyFromRemote(const bool& _copyFromRemote);

                    /**
                     * 判断参数 CopyFromRemote 是否已赋值
                     * @return CopyFromRemote 是否已赋值
                     * 
                     */
                    bool CopyFromRemoteHasBeenSet() const;

                    /**
                     * 获取Snapshot status. valid values:.
<ul>
<Li>NORMAL: specifies the scaling group is normal.</li>.
<Li>CREATING: creating</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
<Li>COPYING_FROM_REMOTE: cross geo-replication in progress.</li>.
<Li>CHECKING_COPIED: copying check in progress.</li>.
<Li>TORECYCLE: to be recycled.</li>.
</ul>
                     * @return SnapshotState Snapshot status. valid values:.
<ul>
<Li>NORMAL: specifies the scaling group is normal.</li>.
<Li>CREATING: creating</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
<Li>COPYING_FROM_REMOTE: cross geo-replication in progress.</li>.
<Li>CHECKING_COPIED: copying check in progress.</li>.
<Li>TORECYCLE: to be recycled.</li>.
</ul>
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置Snapshot status. valid values:.
<ul>
<Li>NORMAL: specifies the scaling group is normal.</li>.
<Li>CREATING: creating</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
<Li>COPYING_FROM_REMOTE: cross geo-replication in progress.</li>.
<Li>CHECKING_COPIED: copying check in progress.</li>.
<Li>TORECYCLE: to be recycled.</li>.
</ul>
                     * @param _snapshotState Snapshot status. valid values:.
<ul>
<Li>NORMAL: specifies the scaling group is normal.</li>.
<Li>CREATING: creating</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
<Li>COPYING_FROM_REMOTE: cross geo-replication in progress.</li>.
<Li>CHECKING_COPIED: copying check in progress.</li>.
<Li>TORECYCLE: to be recycled.</li>.
</ul>
                     * 
                     */
                    void SetSnapshotState(const std::string& _snapshotState);

                    /**
                     * 判断参数 SnapshotState 是否已赋值
                     * @return SnapshotState 是否已赋值
                     * 
                     */
                    bool SnapshotStateHasBeenSet() const;

                    /**
                     * 获取Whether it is a permanent snapshot. valid values:.
<ul>
<li>true: permanent snapshot.</li>.
<li>false: non-permanent snapshot.</li>.
</ul>
                     * @return IsPermanent Whether it is a permanent snapshot. valid values:.
<ul>
<li>true: permanent snapshot.</li>.
<li>false: non-permanent snapshot.</li>.
</ul>
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置Whether it is a permanent snapshot. valid values:.
<ul>
<li>true: permanent snapshot.</li>.
<li>false: non-permanent snapshot.</li>.
</ul>
                     * @param _isPermanent Whether it is a permanent snapshot. valid values:.
<ul>
<li>true: permanent snapshot.</li>.
<li>false: non-permanent snapshot.</li>.
</ul>
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取Snapshot name, the user-defined snapshot alias. Call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * @return SnapshotName Snapshot name, the user-defined snapshot alias. Call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name, the user-defined snapshot alias. Call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * @param _snapshotName Snapshot name, the user-defined snapshot alias. Call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取The expiration time of the snapshot. If the snapshot is permanently retained, this field is blank.
                     * @return DeadlineTime The expiration time of the snapshot. If the snapshot is permanently retained, this field is blank.
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置The expiration time of the snapshot. If the snapshot is permanently retained, this field is blank.
                     * @param _deadlineTime The expiration time of the snapshot. If the snapshot is permanently retained, this field is blank.
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取The progress percentage for snapshot creation. This field is always 100 after the snapshot is created successfully.
                     * @return Percent The progress percentage for snapshot creation. This field is always 100 after the snapshot is created successfully.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置The progress percentage for snapshot creation. This field is always 100 after the snapshot is created successfully.
                     * @param _percent The progress percentage for snapshot creation. This field is always 100 after the snapshot is created successfully.
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取List of images associated with snapshot.
                     * @return Images List of images associated with snapshot.
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置List of images associated with snapshot.
                     * @param _images List of images associated with snapshot.
                     * 
                     */
                    void SetImages(const std::vector<Image>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取Number of snapshots currently shared
                     * @return ShareReference Number of snapshots currently shared
                     * 
                     */
                    uint64_t GetShareReference() const;

                    /**
                     * 设置Number of snapshots currently shared
                     * @param _shareReference Number of snapshots currently shared
                     * 
                     */
                    void SetShareReference(const uint64_t& _shareReference);

                    /**
                     * 判断参数 ShareReference 是否已赋值
                     * @return ShareReference 是否已赋值
                     * 
                     */
                    bool ShareReferenceHasBeenSet() const;

                    /**
                     * 获取Specifies the SNAPSHOT type. valid values: `PRIVATE_SNAPSHOT` (PRIVATE SNAPSHOT) or `SHARED_SNAPSHOT` (SHARED SNAPSHOT).
                     * @return SnapshotType Specifies the SNAPSHOT type. valid values: `PRIVATE_SNAPSHOT` (PRIVATE SNAPSHOT) or `SHARED_SNAPSHOT` (SHARED SNAPSHOT).
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置Specifies the SNAPSHOT type. valid values: `PRIVATE_SNAPSHOT` (PRIVATE SNAPSHOT) or `SHARED_SNAPSHOT` (SHARED SNAPSHOT).
                     * @param _snapshotType Specifies the SNAPSHOT type. valid values: `PRIVATE_SNAPSHOT` (PRIVATE SNAPSHOT) or `SHARED_SNAPSHOT` (SHARED SNAPSHOT).
                     * 
                     */
                    void SetSnapshotType(const std::string& _snapshotType);

                    /**
                     * 判断参数 SnapshotType 是否已赋值
                     * @return SnapshotType 是否已赋值
                     * 
                     */
                    bool SnapshotTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the disk capacity of the CBS for creating this snapshot, in GiB.
                     * @return DiskSize Specifies the disk capacity of the CBS for creating this snapshot, in GiB.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the disk capacity of the CBS for creating this snapshot, in GiB.
                     * @param _diskSize Specifies the disk capacity of the CBS for creating this snapshot, in GiB.
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ID of the cloud disk used to create this snapshot.
                     * @return DiskId ID of the cloud disk used to create this snapshot.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the cloud disk used to create this snapshot.
                     * @param _diskId ID of the cloud disk used to create this snapshot.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Destination region of the snapshot currently under cross region replication. if not, return `[]`.
                     * @return CopyingToRegions Destination region of the snapshot currently under cross region replication. if not, return `[]`.
                     * 
                     */
                    std::vector<std::string> GetCopyingToRegions() const;

                    /**
                     * 设置Destination region of the snapshot currently under cross region replication. if not, return `[]`.
                     * @param _copyingToRegions Destination region of the snapshot currently under cross region replication. if not, return `[]`.
                     * 
                     */
                    void SetCopyingToRegions(const std::vector<std::string>& _copyingToRegions);

                    /**
                     * 判断参数 CopyingToRegions 是否已赋值
                     * @return CopyingToRegions 是否已赋值
                     * 
                     */
                    bool CopyingToRegionsHasBeenSet() const;

                    /**
                     * 获取Indicates whether the snapshot is created for an encrypted disk. valid values:.
<ul>
<li>true: specifies the snapshot is created by encrypted disks.</li>.
<li>false: snapshot created for non-encrypted disk.</li>.
</ul>
                     * @return Encrypt Indicates whether the snapshot is created for an encrypted disk. valid values:.
<ul>
<li>true: specifies the snapshot is created by encrypted disks.</li>.
<li>false: snapshot created for non-encrypted disk.</li>.
</ul>
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Indicates whether the snapshot is created for an encrypted disk. valid values:.
<ul>
<li>true: specifies the snapshot is created by encrypted disks.</li>.
<li>false: snapshot created for non-encrypted disk.</li>.
</ul>
                     * @param _encrypt Indicates whether the snapshot is created for an encrypted disk. valid values:.
<ul>
<li>true: specifies the snapshot is created by encrypted disks.</li>.
<li>false: snapshot created for non-encrypted disk.</li>.
</ul>
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Creation time of the snapshot.
                     * @return CreateTime Creation time of the snapshot.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the snapshot.
                     * @param _createTime Creation time of the snapshot.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Number of images associated with snapshot.
                     * @return ImageCount Number of images associated with snapshot.
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置Number of images associated with snapshot.
                     * @param _imageCount Number of images associated with snapshot.
                     * 
                     */
                    void SetImageCount(const uint64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取Specifies the cloud disk type of the CBS for creating this snapshot. valid values:.
<ul>
<Li>SYSTEM_DISK: system disk</li>.
<Li>DATA_DISK: specifies the data disk.</li>.
</ul>

                     * @return DiskUsage Specifies the cloud disk type of the CBS for creating this snapshot. valid values:.
<ul>
<Li>SYSTEM_DISK: system disk</li>.
<Li>DATA_DISK: specifies the data disk.</li>.
</ul>

                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Specifies the cloud disk type of the CBS for creating this snapshot. valid values:.
<ul>
<Li>SYSTEM_DISK: system disk</li>.
<Li>DATA_DISK: specifies the data disk.</li>.
</ul>

                     * @param _diskUsage Specifies the cloud disk type of the CBS for creating this snapshot. valid values:.
<ul>
<Li>SYSTEM_DISK: system disk</li>.
<Li>DATA_DISK: specifies the data disk.</li>.
</ul>

                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Snapshot ID.
                     * @return SnapshotId Snapshot ID.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID.
                     * @param _snapshotId Snapshot ID.
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取The time when the snapshot sharing starts
                     * @return TimeStartShare The time when the snapshot sharing starts
                     * 
                     */
                    std::string GetTimeStartShare() const;

                    /**
                     * 设置The time when the snapshot sharing starts
                     * @param _timeStartShare The time when the snapshot sharing starts
                     * 
                     */
                    void SetTimeStartShare(const std::string& _timeStartShare);

                    /**
                     * 判断参数 TimeStartShare 是否已赋值
                     * @return TimeStartShare 是否已赋值
                     * 
                     */
                    bool TimeStartShareHasBeenSet() const;

                    /**
                     * 获取List of tags associated with the snapshot.
                     * @return Tags List of tags associated with the snapshot.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags associated with the snapshot.
                     * @param _tags List of tags associated with the snapshot.
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
                     * Location of the snapshot.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Specifies whether the snapshot is for cross-region replication. value range:.
<ul>
<li>true: indicates a snapshot for cross-region replication.</li>.
<li>false: snapshot of the local region.</li>.
</ul>
                     */
                    bool m_copyFromRemote;
                    bool m_copyFromRemoteHasBeenSet;

                    /**
                     * Snapshot status. valid values:.
<ul>
<Li>NORMAL: specifies the scaling group is normal.</li>.
<Li>CREATING: creating</li>.
<Li>ROLLBACKING: indicates the rollback is in progress.</li>.
<Li>COPYING_FROM_REMOTE: cross geo-replication in progress.</li>.
<Li>CHECKING_COPIED: copying check in progress.</li>.
<Li>TORECYCLE: to be recycled.</li>.
</ul>
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * Whether it is a permanent snapshot. valid values:.
<ul>
<li>true: permanent snapshot.</li>.
<li>false: non-permanent snapshot.</li>.
</ul>
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * Snapshot name, the user-defined snapshot alias. Call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * The expiration time of the snapshot. If the snapshot is permanently retained, this field is blank.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * The progress percentage for snapshot creation. This field is always 100 after the snapshot is created successfully.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * List of images associated with snapshot.
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Number of snapshots currently shared
                     */
                    uint64_t m_shareReference;
                    bool m_shareReferenceHasBeenSet;

                    /**
                     * Specifies the SNAPSHOT type. valid values: `PRIVATE_SNAPSHOT` (PRIVATE SNAPSHOT) or `SHARED_SNAPSHOT` (SHARED SNAPSHOT).
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * Specifies the disk capacity of the CBS for creating this snapshot, in GiB.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ID of the cloud disk used to create this snapshot.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Destination region of the snapshot currently under cross region replication. if not, return `[]`.
                     */
                    std::vector<std::string> m_copyingToRegions;
                    bool m_copyingToRegionsHasBeenSet;

                    /**
                     * Indicates whether the snapshot is created for an encrypted disk. valid values:.
<ul>
<li>true: specifies the snapshot is created by encrypted disks.</li>.
<li>false: snapshot created for non-encrypted disk.</li>.
</ul>
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Creation time of the snapshot.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of images associated with snapshot.
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * Specifies the cloud disk type of the CBS for creating this snapshot. valid values:.
<ul>
<Li>SYSTEM_DISK: system disk</li>.
<Li>DATA_DISK: specifies the data disk.</li>.
</ul>

                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Snapshot ID.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * The time when the snapshot sharing starts
                     */
                    std::string m_timeStartShare;
                    bool m_timeStartShareHasBeenSet;

                    /**
                     * List of tags associated with the snapshot.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SNAPSHOT_H_
