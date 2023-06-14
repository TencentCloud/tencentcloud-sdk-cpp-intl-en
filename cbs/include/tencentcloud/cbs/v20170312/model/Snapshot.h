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
                     * 获取Whether the snapshot is replicated across regions. Value range: <br><li>true: Indicates that the snapshot is replicated across regions. <br><li>false: Indicates that the snapshot belongs to the local region.
                     * @return CopyFromRemote Whether the snapshot is replicated across regions. Value range: <br><li>true: Indicates that the snapshot is replicated across regions. <br><li>false: Indicates that the snapshot belongs to the local region.
                     * 
                     */
                    bool GetCopyFromRemote() const;

                    /**
                     * 设置Whether the snapshot is replicated across regions. Value range: <br><li>true: Indicates that the snapshot is replicated across regions. <br><li>false: Indicates that the snapshot belongs to the local region.
                     * @param _copyFromRemote Whether the snapshot is replicated across regions. Value range: <br><li>true: Indicates that the snapshot is replicated across regions. <br><li>false: Indicates that the snapshot belongs to the local region.
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
                     * 获取Snapshot status. Valid values: <br><li>NORMAL: normal <br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     * @return SnapshotState Snapshot status. Valid values: <br><li>NORMAL: normal <br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置Snapshot status. Valid values: <br><li>NORMAL: normal <br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     * @param _snapshotState Snapshot status. Valid values: <br><li>NORMAL: normal <br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
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
                     * 获取Whether it is a permanent snapshot. Value range: <br><li>true: Permanent snapshot <br><li>false: Non-permanent snapshot.
                     * @return IsPermanent Whether it is a permanent snapshot. Value range: <br><li>true: Permanent snapshot <br><li>false: Non-permanent snapshot.
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置Whether it is a permanent snapshot. Value range: <br><li>true: Permanent snapshot <br><li>false: Non-permanent snapshot.
                     * @param _isPermanent Whether it is a permanent snapshot. Value range: <br><li>true: Permanent snapshot <br><li>false: Non-permanent snapshot.
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
                     * 获取Snapshot type. This value can currently be either PRIVATE_SNAPSHOT or SHARED_SNAPSHOT.
                     * @return SnapshotType Snapshot type. This value can currently be either PRIVATE_SNAPSHOT or SHARED_SNAPSHOT.
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置Snapshot type. This value can currently be either PRIVATE_SNAPSHOT or SHARED_SNAPSHOT.
                     * @param _snapshotType Snapshot type. This value can currently be either PRIVATE_SNAPSHOT or SHARED_SNAPSHOT.
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
                     * 获取Size of the cloud disk used to create this snapshot (in GB).
                     * @return DiskSize Size of the cloud disk used to create this snapshot (in GB).
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Size of the cloud disk used to create this snapshot (in GB).
                     * @param _diskSize Size of the cloud disk used to create this snapshot (in GB).
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
                     * 获取The destination region to which the snapshot is being replicated. Default value is [ ].
                     * @return CopyingToRegions The destination region to which the snapshot is being replicated. Default value is [ ].
                     * 
                     */
                    std::vector<std::string> GetCopyingToRegions() const;

                    /**
                     * 设置The destination region to which the snapshot is being replicated. Default value is [ ].
                     * @param _copyingToRegions The destination region to which the snapshot is being replicated. Default value is [ ].
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
                     * 获取Whether the snapshot is created from an encrypted disk. Value range: <br><li>true: Yes <br><li>false: No.
                     * @return Encrypt Whether the snapshot is created from an encrypted disk. Value range: <br><li>true: Yes <br><li>false: No.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether the snapshot is created from an encrypted disk. Value range: <br><li>true: Yes <br><li>false: No.
                     * @param _encrypt Whether the snapshot is created from an encrypted disk. Value range: <br><li>true: Yes <br><li>false: No.
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
                     * 获取The type of the cloud disk used to create the snapshot. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @return DiskUsage The type of the cloud disk used to create the snapshot. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置The type of the cloud disk used to create the snapshot. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @param _diskUsage The type of the cloud disk used to create the snapshot. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
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
                     * Whether the snapshot is replicated across regions. Value range: <br><li>true: Indicates that the snapshot is replicated across regions. <br><li>false: Indicates that the snapshot belongs to the local region.
                     */
                    bool m_copyFromRemote;
                    bool m_copyFromRemoteHasBeenSet;

                    /**
                     * Snapshot status. Valid values: <br><li>NORMAL: normal <br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * Whether it is a permanent snapshot. Value range: <br><li>true: Permanent snapshot <br><li>false: Non-permanent snapshot.
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
                     * Snapshot type. This value can currently be either PRIVATE_SNAPSHOT or SHARED_SNAPSHOT.
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * Size of the cloud disk used to create this snapshot (in GB).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ID of the cloud disk used to create this snapshot.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * The destination region to which the snapshot is being replicated. Default value is [ ].
                     */
                    std::vector<std::string> m_copyingToRegions;
                    bool m_copyingToRegionsHasBeenSet;

                    /**
                     * Whether the snapshot is created from an encrypted disk. Value range: <br><li>true: Yes <br><li>false: No.
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
                     * The type of the cloud disk used to create the snapshot. Value range: <br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
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
