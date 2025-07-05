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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SNAPSHOT_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Placement.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Snapshot details
                */
                class Snapshot : public AbstractModel
                {
                public:
                    Snapshot();
                    ~Snapshot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Snapshot location.
                     * @return Placement Snapshot location.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Snapshot location.
                     * @param _placement Snapshot location.
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
                     * 获取Whether the snapshot is replicated across regions. Valid values:<br><li>true: yes;<br><li>false: no.
                     * @return CopyFromRemote Whether the snapshot is replicated across regions. Valid values:<br><li>true: yes;<br><li>false: no.
                     * 
                     */
                    bool GetCopyFromRemote() const;

                    /**
                     * 设置Whether the snapshot is replicated across regions. Valid values:<br><li>true: yes;<br><li>false: no.
                     * @param _copyFromRemote Whether the snapshot is replicated across regions. Valid values:<br><li>true: yes;<br><li>false: no.
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
                     * 获取Whether the snapshot is a permanent snapshot. Valid values:<br><li>true: yes<br><li>false: no.
                     * @return IsPermanent Whether the snapshot is a permanent snapshot. Valid values:<br><li>true: yes<br><li>false: no.
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置Whether the snapshot is a permanent snapshot. Valid values:<br><li>true: yes<br><li>false: no.
                     * @param _isPermanent Whether the snapshot is a permanent snapshot. Valid values:<br><li>true: yes<br><li>false: no.
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
                     * 获取Snapshot name, i.e., the user-defined snapshot alias. You can call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * @return SnapshotName Snapshot name, i.e., the user-defined snapshot alias. You can call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name, i.e., the user-defined snapshot alias. You can call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     * @param _snapshotName Snapshot name, i.e., the user-defined snapshot alias. You can call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
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
                     * 获取Snapshot creation progress in percentage. This field will always be `100` once the snapshot is created successfully.
                     * @return Percent Snapshot creation progress in percentage. This field will always be `100` once the snapshot is created successfully.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Snapshot creation progress in percentage. This field will always be `100` once the snapshot is created successfully.
                     * @param _percent Snapshot creation progress in percentage. This field will always be `100` once the snapshot is created successfully.
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
                     * 获取List of images associated with the snapshot.
                     * @return Images List of images associated with the snapshot.
                     * 
                     */
                    std::vector<Image> GetImages() const;

                    /**
                     * 设置List of images associated with the snapshot.
                     * @param _images List of images associated with the snapshot.
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
                     * 获取Number of snapshots currently shared.
                     * @return ShareReference Number of snapshots currently shared.
                     * 
                     */
                    uint64_t GetShareReference() const;

                    /**
                     * 设置Number of snapshots currently shared.
                     * @param _shareReference Number of snapshots currently shared.
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
                     * 获取Snapshot type. Valid values: PRIVATE_SNAPSHOT, SHARED_SNAPSHOT
                     * @return SnapshotType Snapshot type. Valid values: PRIVATE_SNAPSHOT, SHARED_SNAPSHOT
                     * 
                     */
                    std::string GetSnapshotType() const;

                    /**
                     * 设置Snapshot type. Valid values: PRIVATE_SNAPSHOT, SHARED_SNAPSHOT
                     * @param _snapshotType Snapshot type. Valid values: PRIVATE_SNAPSHOT, SHARED_SNAPSHOT
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
                     * 获取Size in GB of the cloud disk for which the snapshot is created.
                     * @return DiskSize Size in GB of the cloud disk for which the snapshot is created.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Size in GB of the cloud disk for which the snapshot is created.
                     * @param _diskSize Size in GB of the cloud disk for which the snapshot is created.
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
                     * 获取ID of the cloud disk for which the snapshot is created.
                     * @return DiskId ID of the cloud disk for which the snapshot is created.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the cloud disk for which the snapshot is created.
                     * @param _diskId ID of the cloud disk for which the snapshot is created.
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
                     * 获取Destination region to which the snapshot is being replicated. Default value: [].
                     * @return CopyingToRegions Destination region to which the snapshot is being replicated. Default value: [].
                     * 
                     */
                    std::vector<std::string> GetCopyingToRegions() const;

                    /**
                     * 设置Destination region to which the snapshot is being replicated. Default value: [].
                     * @param _copyingToRegions Destination region to which the snapshot is being replicated. Default value: [].
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
                     * 获取Type of the cloud disk for which the snapshot is created. Valid values:<br><li>SYSTEM_DISK: system disk<br><li>DATA_DISK: data disk.
                     * @return DiskUsage Type of the cloud disk for which the snapshot is created. Valid values:<br><li>SYSTEM_DISK: system disk<br><li>DATA_DISK: data disk.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Type of the cloud disk for which the snapshot is created. Valid values:<br><li>SYSTEM_DISK: system disk<br><li>DATA_DISK: data disk.
                     * @param _diskUsage Type of the cloud disk for which the snapshot is created. Valid values:<br><li>SYSTEM_DISK: system disk<br><li>DATA_DISK: data disk.
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
                     * 获取Whether the snapshot is created from an encrypted disk. Valid values:<br><li>true: yes<br><li>false: no.
                     * @return Encrypt Whether the snapshot is created from an encrypted disk. Valid values:<br><li>true: yes<br><li>false: no.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether the snapshot is created from an encrypted disk. Valid values:<br><li>true: yes<br><li>false: no.
                     * @param _encrypt Whether the snapshot is created from an encrypted disk. Valid values:<br><li>true: yes<br><li>false: no.
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
                     * 获取Snapshot creation time.
                     * @return CreateTime Snapshot creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Snapshot creation time.
                     * @param _createTime Snapshot creation time.
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
                     * 获取Number of images associated with the snapshot.
                     * @return ImageCount Number of images associated with the snapshot.
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置Number of images associated with the snapshot.
                     * @param _imageCount Number of images associated with the snapshot.
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
                     * 获取Snapshot status. Valid values:<br><li>NORMAL: normal<br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<br><li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     * @return SnapshotState Snapshot status. Valid values:<br><li>NORMAL: normal<br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<br><li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置Snapshot status. Valid values:<br><li>NORMAL: normal<br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<br><li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     * @param _snapshotState Snapshot status. Valid values:<br><li>NORMAL: normal<br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<br><li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
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
                     * 获取Snapshot expiration time.
                     * @return DeadlineTime Snapshot expiration time.
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Snapshot expiration time.
                     * @param _deadlineTime Snapshot expiration time.
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
                     * 获取Time when snapshot sharing starts.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TimeStartShare Time when snapshot sharing starts.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeStartShare() const;

                    /**
                     * 设置Time when snapshot sharing starts.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _timeStartShare Time when snapshot sharing starts.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeStartShare(const std::string& _timeStartShare);

                    /**
                     * 判断参数 TimeStartShare 是否已赋值
                     * @return TimeStartShare 是否已赋值
                     * 
                     */
                    bool TimeStartShareHasBeenSet() const;

                private:

                    /**
                     * Snapshot location.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Whether the snapshot is replicated across regions. Valid values:<br><li>true: yes;<br><li>false: no.
                     */
                    bool m_copyFromRemote;
                    bool m_copyFromRemoteHasBeenSet;

                    /**
                     * Whether the snapshot is a permanent snapshot. Valid values:<br><li>true: yes<br><li>false: no.
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * Snapshot name, i.e., the user-defined snapshot alias. You can call [ModifySnapshotAttribute](https://intl.cloud.tencent.com/document/product/362/15650?from_cn_redirect=1) to modify this field.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Snapshot creation progress in percentage. This field will always be `100` once the snapshot is created successfully.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * List of images associated with the snapshot.
                     */
                    std::vector<Image> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * Number of snapshots currently shared.
                     */
                    uint64_t m_shareReference;
                    bool m_shareReferenceHasBeenSet;

                    /**
                     * Snapshot type. Valid values: PRIVATE_SNAPSHOT, SHARED_SNAPSHOT
                     */
                    std::string m_snapshotType;
                    bool m_snapshotTypeHasBeenSet;

                    /**
                     * Size in GB of the cloud disk for which the snapshot is created.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ID of the cloud disk for which the snapshot is created.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Destination region to which the snapshot is being replicated. Default value: [].
                     */
                    std::vector<std::string> m_copyingToRegions;
                    bool m_copyingToRegionsHasBeenSet;

                    /**
                     * Snapshot ID.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Type of the cloud disk for which the snapshot is created. Valid values:<br><li>SYSTEM_DISK: system disk<br><li>DATA_DISK: data disk.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Whether the snapshot is created from an encrypted disk. Valid values:<br><li>true: yes<br><li>false: no.
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Snapshot creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Number of images associated with the snapshot.
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * Snapshot status. Valid values:<br><li>NORMAL: normal<br><li>CREATING: creating<br><li>ROLLBACKING: rolling back<br><li>COPYING_FROM_REMOTE: cross-region replicating<br><li>CHECKING_COPIED: verifying the cross-region replicated data<br><li>TORECYCLE: to be repossessed.
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * Snapshot expiration time.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Time when snapshot sharing starts.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeStartShare;
                    bool m_timeStartShareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SNAPSHOT_H_
