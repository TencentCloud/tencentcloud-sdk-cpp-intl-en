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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISK_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Tag.h>
#include <tencentcloud/cbs/v20170312/model/Placement.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The details of a cloud disk
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the cloud disk terminates along with the instance mounted to it. <br><li>true: Cloud disk will also be terminated when instance terminates, so only hourly postpaid cloud disk are supported.<br><li>false: Cloud disk does not terminate when instance terminates.
Note: This field may return null, indicating that no valid value was found.
                     * @return DeleteWithInstance Whether the cloud disk terminates along with the instance mounted to it. <br><li>true: Cloud disk will also be terminated when instance terminates, so only hourly postpaid cloud disk are supported.<br><li>false: Cloud disk does not terminate when instance terminates.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether the cloud disk terminates along with the instance mounted to it. <br><li>true: Cloud disk will also be terminated when instance terminates, so only hourly postpaid cloud disk are supported.<br><li>false: Cloud disk does not terminate when instance terminates.
Note: This field may return null, indicating that no valid value was found.
                     * @param DeleteWithInstance Whether the cloud disk terminates along with the instance mounted to it. <br><li>true: Cloud disk will also be terminated when instance terminates, so only hourly postpaid cloud disk are supported.<br><li>false: Cloud disk does not terminate when instance terminates.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Auto renewal flag. Supported values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically<br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but not renew automatically<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically.
Note: This field may return null, indicating that no valid value was found.
                     * @return RenewFlag Auto renewal flag. Supported values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically<br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but not renew automatically<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto renewal flag. Supported values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically<br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but not renew automatically<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically.
Note: This field may return null, indicating that no valid value was found.
                     * @param RenewFlag Auto renewal flag. Supported values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically<br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but not renew automatically<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Cloud disk types. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk <br><li>CLOUD_PREMIUM: Premium Cloud Disk <br><li>CLOUD_BSSD: General Purpose SSD <br><li>CLOUD_SSD: SSD <br><li>CLOUD_HSSD: Enhanced SSD <br><li>CLOUD_TSSD: Tremendous SSD
                     * @return DiskType Cloud disk types. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk <br><li>CLOUD_PREMIUM: Premium Cloud Disk <br><li>CLOUD_BSSD: General Purpose SSD <br><li>CLOUD_SSD: SSD <br><li>CLOUD_HSSD: Enhanced SSD <br><li>CLOUD_TSSD: Tremendous SSD
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Cloud disk types. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk <br><li>CLOUD_PREMIUM: Premium Cloud Disk <br><li>CLOUD_BSSD: General Purpose SSD <br><li>CLOUD_SSD: SSD <br><li>CLOUD_HSSD: Enhanced SSD <br><li>CLOUD_TSSD: Tremendous SSD
                     * @param DiskType Cloud disk types. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk <br><li>CLOUD_PREMIUM: Premium Cloud Disk <br><li>CLOUD_BSSD: General Purpose SSD <br><li>CLOUD_SSD: SSD <br><li>CLOUD_HSSD: Enhanced SSD <br><li>CLOUD_TSSD: Tremendous SSD
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取The state of the cloud disk. Value range: <br><li>UNATTACHED: Not mounted <br><li>ATTACHING: Mounting <br><li>ATTACHED: Mounted <br><li>DETACHING: Un-mounting <br><li>EXPANDING: Expanding <br><li>ROLLBACKING: Rolling back <br><li>TORECYCE: Pending recycling. <br><li>DUMPING: Copying the hard drive.
                     * @return DiskState The state of the cloud disk. Value range: <br><li>UNATTACHED: Not mounted <br><li>ATTACHING: Mounting <br><li>ATTACHED: Mounted <br><li>DETACHING: Un-mounting <br><li>EXPANDING: Expanding <br><li>ROLLBACKING: Rolling back <br><li>TORECYCE: Pending recycling. <br><li>DUMPING: Copying the hard drive.
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置The state of the cloud disk. Value range: <br><li>UNATTACHED: Not mounted <br><li>ATTACHING: Mounting <br><li>ATTACHED: Mounted <br><li>DETACHING: Un-mounting <br><li>EXPANDING: Expanding <br><li>ROLLBACKING: Rolling back <br><li>TORECYCE: Pending recycling. <br><li>DUMPING: Copying the hard drive.
                     * @param DiskState The state of the cloud disk. Value range: <br><li>UNATTACHED: Not mounted <br><li>ATTACHING: Mounting <br><li>ATTACHED: Mounted <br><li>DETACHING: Un-mounting <br><li>EXPANDING: Expanding <br><li>ROLLBACKING: Rolling back <br><li>TORECYCE: Pending recycling. <br><li>DUMPING: Copying the hard drive.
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取The total number of snapshots of the cloud disk.
                     * @return SnapshotCount The total number of snapshots of the cloud disk.
                     */
                    int64_t GetSnapshotCount() const;

                    /**
                     * 设置The total number of snapshots of the cloud disk.
                     * @param SnapshotCount The total number of snapshots of the cloud disk.
                     */
                    void SetSnapshotCount(const int64_t& _snapshotCount);

                    /**
                     * 判断参数 SnapshotCount 是否已赋值
                     * @return SnapshotCount 是否已赋值
                     */
                    bool SnapshotCountHasBeenSet() const;

                    /**
                     * 获取Cloud disk already mounted to CVM, and both CVM and cloud disk use monthly subscription.<br><li>true: CVM has auto-renewal flag set up, but cloud disk does not.<br><li>false: Cloud disk auto-renewal flag set up normally.
Note: This field may return null, indicating that no valid value was found.
                     * @return AutoRenewFlagError Cloud disk already mounted to CVM, and both CVM and cloud disk use monthly subscription.<br><li>true: CVM has auto-renewal flag set up, but cloud disk does not.<br><li>false: Cloud disk auto-renewal flag set up normally.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool GetAutoRenewFlagError() const;

                    /**
                     * 设置Cloud disk already mounted to CVM, and both CVM and cloud disk use monthly subscription.<br><li>true: CVM has auto-renewal flag set up, but cloud disk does not.<br><li>false: Cloud disk auto-renewal flag set up normally.
Note: This field may return null, indicating that no valid value was found.
                     * @param AutoRenewFlagError Cloud disk already mounted to CVM, and both CVM and cloud disk use monthly subscription.<br><li>true: CVM has auto-renewal flag set up, but cloud disk does not.<br><li>false: Cloud disk auto-renewal flag set up normally.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetAutoRenewFlagError(const bool& _autoRenewFlagError);

                    /**
                     * 判断参数 AutoRenewFlagError 是否已赋值
                     * @return AutoRenewFlagError 是否已赋值
                     */
                    bool AutoRenewFlagErrorHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk is in the status of snapshot rollback. Value range: <br><li>false: No <br><li>true: Yes
                     * @return Rollbacking Whether the cloud disk is in the status of snapshot rollback. Value range: <br><li>false: No <br><li>true: Yes
                     */
                    bool GetRollbacking() const;

                    /**
                     * 设置Whether the cloud disk is in the status of snapshot rollback. Value range: <br><li>false: No <br><li>true: Yes
                     * @param Rollbacking Whether the cloud disk is in the status of snapshot rollback. Value range: <br><li>false: No <br><li>true: Yes
                     */
                    void SetRollbacking(const bool& _rollbacking);

                    /**
                     * 判断参数 Rollbacking 是否已赋值
                     * @return Rollbacking 是否已赋值
                     */
                    bool RollbackingHasBeenSet() const;

                    /**
                     * 获取For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     * @return InstanceIdList For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     * @param InstanceIdList For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk is encrypted. Value range: <br><li>false: Not encrypted <br><li>true: Encrypted.
                     * @return Encrypt Whether the cloud disk is encrypted. Value range: <br><li>false: Not encrypted <br><li>true: Encrypted.
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether the cloud disk is encrypted. Value range: <br><li>false: Not encrypted <br><li>true: Encrypted.
                     * @param Encrypt Whether the cloud disk is encrypted. Value range: <br><li>false: Not encrypted <br><li>true: Encrypted.
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取Cloud disk name.
                     * @return DiskName Cloud disk name.
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Cloud disk name.
                     * @param DiskName Cloud disk name.
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     * @return BackupDisk Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     */
                    bool GetBackupDisk() const;

                    /**
                     * 设置Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     * @param BackupDisk Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     */
                    void SetBackupDisk(const bool& _backupDisk);

                    /**
                     * 判断参数 BackupDisk 是否已赋值
                     * @return BackupDisk 是否已赋值
                     */
                    bool BackupDiskHasBeenSet() const;

                    /**
                     * 获取The tag bound to the cloud disk. The value Null is used when no tag is bound to the cloud disk.
Note: This field may return null, indicating that no valid value was found.
                     * @return Tags The tag bound to the cloud disk. The value Null is used when no tag is bound to the cloud disk.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置The tag bound to the cloud disk. The value Null is used when no tag is bound to the cloud disk.
Note: This field may return null, indicating that no valid value was found.
                     * @param Tags The tag bound to the cloud disk. The value Null is used when no tag is bound to the cloud disk.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ID of the CVM to which the cloud disk is mounted.
                     * @return InstanceId ID of the CVM to which the cloud disk is mounted.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the CVM to which the cloud disk is mounted.
                     * @param InstanceId ID of the CVM to which the cloud disk is mounted.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Cloud disk mount method. Valid values: <br><li>PF: mount as a PF (Physical Function)<br><li>VF: mount as a VF (Virtual Function)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return AttachMode Cloud disk mount method. Valid values: <br><li>PF: mount as a PF (Physical Function)<br><li>VF: mount as a VF (Virtual Function)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string GetAttachMode() const;

                    /**
                     * 设置Cloud disk mount method. Valid values: <br><li>PF: mount as a PF (Physical Function)<br><li>VF: mount as a VF (Virtual Function)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param AttachMode Cloud disk mount method. Valid values: <br><li>PF: mount as a PF (Physical Function)<br><li>VF: mount as a VF (Virtual Function)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    void SetAttachMode(const std::string& _attachMode);

                    /**
                     * 判断参数 AttachMode 是否已赋值
                     * @return AttachMode 是否已赋值
                     */
                    bool AttachModeHasBeenSet() const;

                    /**
                     * 获取ID of the periodic snapshot associated to the cloud disk. This parameter is returned only if the value of parameter ReturnBindAutoSnapshotPolicy is TRUE when the API DescribeDisks is called.
Note: This field may return null, indicating that no valid value was found.
                     * @return AutoSnapshotPolicyIds ID of the periodic snapshot associated to the cloud disk. This parameter is returned only if the value of parameter ReturnBindAutoSnapshotPolicy is TRUE when the API DescribeDisks is called.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetAutoSnapshotPolicyIds() const;

                    /**
                     * 设置ID of the periodic snapshot associated to the cloud disk. This parameter is returned only if the value of parameter ReturnBindAutoSnapshotPolicy is TRUE when the API DescribeDisks is called.
Note: This field may return null, indicating that no valid value was found.
                     * @param AutoSnapshotPolicyIds ID of the periodic snapshot associated to the cloud disk. This parameter is returned only if the value of parameter ReturnBindAutoSnapshotPolicy is TRUE when the API DescribeDisks is called.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetAutoSnapshotPolicyIds(const std::vector<std::string>& _autoSnapshotPolicyIds);

                    /**
                     * 判断参数 AutoSnapshotPolicyIds 是否已赋值
                     * @return AutoSnapshotPolicyIds 是否已赋值
                     */
                    bool AutoSnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Extra performance for a cloud disk, in MB/sec.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ThroughputPerformance Extra performance for a cloud disk, in MB/sec.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Extra performance for a cloud disk, in MB/sec.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ThroughputPerformance Extra performance for a cloud disk, in MB/sec.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取Whether cloud disk is in process of type change. Value range: <br><li>false: Cloud disk not in process of type change. <br><li>true: Cloud disk type change has been launched, and migration is in process.
Note: This field may return null, indicating that no valid value was found.
                     * @return Migrating Whether cloud disk is in process of type change. Value range: <br><li>false: Cloud disk not in process of type change. <br><li>true: Cloud disk type change has been launched, and migration is in process.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool GetMigrating() const;

                    /**
                     * 设置Whether cloud disk is in process of type change. Value range: <br><li>false: Cloud disk not in process of type change. <br><li>true: Cloud disk type change has been launched, and migration is in process.
Note: This field may return null, indicating that no valid value was found.
                     * @param Migrating Whether cloud disk is in process of type change. Value range: <br><li>false: Cloud disk not in process of type change. <br><li>true: Cloud disk type change has been launched, and migration is in process.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetMigrating(const bool& _migrating);

                    /**
                     * 判断参数 Migrating 是否已赋值
                     * @return Migrating 是否已赋值
                     */
                    bool MigratingHasBeenSet() const;

                    /**
                     * 获取Cloud disk ID.
                     * @return DiskId Cloud disk ID.
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID.
                     * @param DiskId Cloud disk ID.
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取The total capacity of the snapshots of the cloud disk. Unit: MB.
                     * @return SnapshotSize The total capacity of the snapshots of the cloud disk. Unit: MB.
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 设置The total capacity of the snapshots of the cloud disk. Unit: MB.
                     * @param SnapshotSize The total capacity of the snapshots of the cloud disk. Unit: MB.
                     */
                    void SetSnapshotSize(const uint64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取Location of the cloud disk.
                     * @return Placement Location of the cloud disk.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the cloud disk.
                     * @param Placement Location of the cloud disk.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取Determines whether or not prepaid cloud disk supports active return. <br><li>true: Active return supported.<br><li>false: Active return not supported.
Note: This field may return null, indicating that no valid value was found.
                     * @return IsReturnable Determines whether or not prepaid cloud disk supports active return. <br><li>true: Active return supported.<br><li>false: Active return not supported.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 设置Determines whether or not prepaid cloud disk supports active return. <br><li>true: Active return supported.<br><li>false: Active return not supported.
Note: This field may return null, indicating that no valid value was found.
                     * @param IsReturnable Determines whether or not prepaid cloud disk supports active return. <br><li>true: Active return supported.<br><li>false: Active return not supported.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetIsReturnable(const bool& _isReturnable);

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取Expiration time of the cloud disk.
                     * @return DeadlineTime Expiration time of the cloud disk.
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Expiration time of the cloud disk.
                     * @param DeadlineTime Expiration time of the cloud disk.
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk is mounted to the CVM. Value range: <br><li>false: Unmounted <br><li>true: Mounted.
                     * @return Attached Whether the cloud disk is mounted to the CVM. Value range: <br><li>false: Unmounted <br><li>true: Mounted.
                     */
                    bool GetAttached() const;

                    /**
                     * 设置Whether the cloud disk is mounted to the CVM. Value range: <br><li>false: Unmounted <br><li>true: Mounted.
                     * @param Attached Whether the cloud disk is mounted to the CVM. Value range: <br><li>false: Unmounted <br><li>true: Mounted.
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取Cloud disk size (in GB).
                     * @return DiskSize Cloud disk size (in GB).
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size (in GB).
                     * @param DiskSize Cloud disk size (in GB).
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Migration progress of cloud disk type change, from 0 to 100.
Note: This field may return null, indicating that no valid value was found.
                     * @return MigratePercent Migration progress of cloud disk type change, from 0 to 100.
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t GetMigratePercent() const;

                    /**
                     * 设置Migration progress of cloud disk type change, from 0 to 100.
Note: This field may return null, indicating that no valid value was found.
                     * @param MigratePercent Migration progress of cloud disk type change, from 0 to 100.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetMigratePercent(const uint64_t& _migratePercent);

                    /**
                     * 判断参数 MigratePercent 是否已赋值
                     * @return MigratePercent 是否已赋值
                     */
                    bool MigratePercentHasBeenSet() const;

                    /**
                     * 获取Cloud disk type. Value range:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @return DiskUsage Cloud disk type. Value range:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Cloud disk type. Value range:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     * @param DiskUsage Cloud disk type. Value range:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     * @return DiskChargeType Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     * @param DiskChargeType Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     * @return Portable Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     */
                    bool GetPortable() const;

                    /**
                     * 设置Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     * @param Portable Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     */
                    void SetPortable(const bool& _portable);

                    /**
                     * 判断参数 Portable 是否已赋值
                     * @return Portable 是否已赋值
                     */
                    bool PortableHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk has the capability to create snapshots. Value range: <br><li>false: Cannot create snapshots. true: Can create snapshots.
                     * @return SnapshotAbility Whether the cloud disk has the capability to create snapshots. Value range: <br><li>false: Cannot create snapshots. true: Can create snapshots.
                     */
                    bool GetSnapshotAbility() const;

                    /**
                     * 设置Whether the cloud disk has the capability to create snapshots. Value range: <br><li>false: Cannot create snapshots. true: Can create snapshots.
                     * @param SnapshotAbility Whether the cloud disk has the capability to create snapshots. Value range: <br><li>false: Cannot create snapshots. true: Can create snapshots.
                     */
                    void SetSnapshotAbility(const bool& _snapshotAbility);

                    /**
                     * 判断参数 SnapshotAbility 是否已赋值
                     * @return SnapshotAbility 是否已赋值
                     */
                    bool SnapshotAbilityHasBeenSet() const;

                    /**
                     * 获取This field is only applicable when the instance is already mounted to the cloud disk, and both the instance and the cloud disk use monthly subscription. <br><li>true: Expiration time of cloud disk is earlier than that of the instance.<br><li>false:Expiration time of cloud disk is later than that of the instance.
Note: This field may return null, indicating that no valid value was found.
                     * @return DeadlineError This field is only applicable when the instance is already mounted to the cloud disk, and both the instance and the cloud disk use monthly subscription. <br><li>true: Expiration time of cloud disk is earlier than that of the instance.<br><li>false:Expiration time of cloud disk is later than that of the instance.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool GetDeadlineError() const;

                    /**
                     * 设置This field is only applicable when the instance is already mounted to the cloud disk, and both the instance and the cloud disk use monthly subscription. <br><li>true: Expiration time of cloud disk is earlier than that of the instance.<br><li>false:Expiration time of cloud disk is later than that of the instance.
Note: This field may return null, indicating that no valid value was found.
                     * @param DeadlineError This field is only applicable when the instance is already mounted to the cloud disk, and both the instance and the cloud disk use monthly subscription. <br><li>true: Expiration time of cloud disk is earlier than that of the instance.<br><li>false:Expiration time of cloud disk is later than that of the instance.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetDeadlineError(const bool& _deadlineError);

                    /**
                     * 判断参数 DeadlineError 是否已赋值
                     * @return DeadlineError 是否已赋值
                     */
                    bool DeadlineErrorHasBeenSet() const;

                    /**
                     * 获取Rollback progress of a cloud disk snapshot.
                     * @return RollbackPercent Rollback progress of a cloud disk snapshot.
                     */
                    uint64_t GetRollbackPercent() const;

                    /**
                     * 设置Rollback progress of a cloud disk snapshot.
                     * @param RollbackPercent Rollback progress of a cloud disk snapshot.
                     */
                    void SetRollbackPercent(const uint64_t& _rollbackPercent);

                    /**
                     * 判断参数 RollbackPercent 是否已赋值
                     * @return RollbackPercent 是否已赋值
                     */
                    bool RollbackPercentHasBeenSet() const;

                    /**
                     * 获取Number of days from current time until disk expiration (only applicable for prepaid disks).
Note: This field may return null, indicating that no valid value was found.
                     * @return DifferDaysOfDeadline Number of days from current time until disk expiration (only applicable for prepaid disks).
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetDifferDaysOfDeadline() const;

                    /**
                     * 设置Number of days from current time until disk expiration (only applicable for prepaid disks).
Note: This field may return null, indicating that no valid value was found.
                     * @param DifferDaysOfDeadline Number of days from current time until disk expiration (only applicable for prepaid disks).
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline);

                    /**
                     * 判断参数 DifferDaysOfDeadline 是否已赋值
                     * @return DifferDaysOfDeadline 是否已赋值
                     */
                    bool DifferDaysOfDeadlineHasBeenSet() const;

                    /**
                     * 获取In circumstances where the prepaid cloud disk does not support active return, this parameter indicates the reason that return is not supported. Value range: <br><li>1: The cloud disk has already been returned. <br><li>2: The cloud disk has already expired. <br><li>3: The cloud disk does not support return. <br><li> 8: The limit on the number of returns is exceeded.
Note: This field may return null, indicating that no valid value was found.
                     * @return ReturnFailCode In circumstances where the prepaid cloud disk does not support active return, this parameter indicates the reason that return is not supported. Value range: <br><li>1: The cloud disk has already been returned. <br><li>2: The cloud disk has already expired. <br><li>3: The cloud disk does not support return. <br><li> 8: The limit on the number of returns is exceeded.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t GetReturnFailCode() const;

                    /**
                     * 设置In circumstances where the prepaid cloud disk does not support active return, this parameter indicates the reason that return is not supported. Value range: <br><li>1: The cloud disk has already been returned. <br><li>2: The cloud disk has already expired. <br><li>3: The cloud disk does not support return. <br><li> 8: The limit on the number of returns is exceeded.
Note: This field may return null, indicating that no valid value was found.
                     * @param ReturnFailCode In circumstances where the prepaid cloud disk does not support active return, this parameter indicates the reason that return is not supported. Value range: <br><li>1: The cloud disk has already been returned. <br><li>2: The cloud disk has already expired. <br><li>3: The cloud disk does not support return. <br><li> 8: The limit on the number of returns is exceeded.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetReturnFailCode(const int64_t& _returnFailCode);

                    /**
                     * 判断参数 ReturnFailCode 是否已赋值
                     * @return ReturnFailCode 是否已赋值
                     */
                    bool ReturnFailCodeHasBeenSet() const;

                    /**
                     * 获取Whether or not cloud disk is shareable cloud disk.
                     * @return Shareable Whether or not cloud disk is shareable cloud disk.
                     */
                    bool GetShareable() const;

                    /**
                     * 设置Whether or not cloud disk is shareable cloud disk.
                     * @param Shareable Whether or not cloud disk is shareable cloud disk.
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取Creation time of the cloud disk.
                     * @return CreateTime Creation time of the cloud disk.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the cloud disk.
                     * @param CreateTime Creation time of the cloud disk.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     * @return DeleteSnapshot Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     * @param DeleteSnapshot Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     */
                    void SetDeleteSnapshot(const int64_t& _deleteSnapshot);

                    /**
                     * 判断参数 DeleteSnapshot 是否已赋值
                     * @return DeleteSnapshot 是否已赋值
                     */
                    bool DeleteSnapshotHasBeenSet() const;

                    /**
                     * 获取Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     * @return DiskBackupQuota Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     * @param DiskBackupQuota Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                    /**
                     * 获取Number of used cloud disk backups.
                     * @return DiskBackupCount Number of used cloud disk backups.
                     */
                    uint64_t GetDiskBackupCount() const;

                    /**
                     * 设置Number of used cloud disk backups.
                     * @param DiskBackupCount Number of used cloud disk backups.
                     */
                    void SetDiskBackupCount(const uint64_t& _diskBackupCount);

                    /**
                     * 判断参数 DiskBackupCount 是否已赋值
                     * @return DiskBackupCount 是否已赋值
                     */
                    bool DiskBackupCountHasBeenSet() const;

                    /**
                     * 获取Type of the instance mounted to the cloud disk. Valid values: <br><li>CVM<br><li>EKS
                     * @return InstanceType Type of the instance mounted to the cloud disk. Valid values: <br><li>CVM<br><li>EKS
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type of the instance mounted to the cloud disk. Valid values: <br><li>CVM<br><li>EKS
                     * @param InstanceType Type of the instance mounted to the cloud disk. Valid values: <br><li>CVM<br><li>EKS
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return LastAttachInsId 
                     */
                    std::string GetLastAttachInsId() const;

                    /**
                     * 设置
                     * @param LastAttachInsId 
                     */
                    void SetLastAttachInsId(const std::string& _lastAttachInsId);

                    /**
                     * 判断参数 LastAttachInsId 是否已赋值
                     * @return LastAttachInsId 是否已赋值
                     */
                    bool LastAttachInsIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ErrorPrompt 
                     */
                    std::string GetErrorPrompt() const;

                    /**
                     * 设置
                     * @param ErrorPrompt 
                     */
                    void SetErrorPrompt(const std::string& _errorPrompt);

                    /**
                     * 判断参数 ErrorPrompt 是否已赋值
                     * @return ErrorPrompt 是否已赋值
                     */
                    bool ErrorPromptHasBeenSet() const;

                private:

                    /**
                     * Whether the cloud disk terminates along with the instance mounted to it. <br><li>true: Cloud disk will also be terminated when instance terminates, so only hourly postpaid cloud disk are supported.<br><li>false: Cloud disk does not terminate when instance terminates.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Auto renewal flag. Supported values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify expiry and renew automatically<br><li>NOTIFY_AND_MANUAL_RENEW: Notify expiry but not renew automatically<br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Neither notify expiry nor renew automatically.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Cloud disk types. Valid values: <br><li>CLOUD_BASIC: HDD cloud disk <br><li>CLOUD_PREMIUM: Premium Cloud Disk <br><li>CLOUD_BSSD: General Purpose SSD <br><li>CLOUD_SSD: SSD <br><li>CLOUD_HSSD: Enhanced SSD <br><li>CLOUD_TSSD: Tremendous SSD
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * The state of the cloud disk. Value range: <br><li>UNATTACHED: Not mounted <br><li>ATTACHING: Mounting <br><li>ATTACHED: Mounted <br><li>DETACHING: Un-mounting <br><li>EXPANDING: Expanding <br><li>ROLLBACKING: Rolling back <br><li>TORECYCE: Pending recycling. <br><li>DUMPING: Copying the hard drive.
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * The total number of snapshots of the cloud disk.
                     */
                    int64_t m_snapshotCount;
                    bool m_snapshotCountHasBeenSet;

                    /**
                     * Cloud disk already mounted to CVM, and both CVM and cloud disk use monthly subscription.<br><li>true: CVM has auto-renewal flag set up, but cloud disk does not.<br><li>false: Cloud disk auto-renewal flag set up normally.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool m_autoRenewFlagError;
                    bool m_autoRenewFlagErrorHasBeenSet;

                    /**
                     * Whether the cloud disk is in the status of snapshot rollback. Value range: <br><li>false: No <br><li>true: Yes
                     */
                    bool m_rollbacking;
                    bool m_rollbackingHasBeenSet;

                    /**
                     * For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * Whether the cloud disk is encrypted. Value range: <br><li>false: Not encrypted <br><li>true: Encrypted.
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * Cloud disk name.
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     */
                    bool m_backupDisk;
                    bool m_backupDiskHasBeenSet;

                    /**
                     * The tag bound to the cloud disk. The value Null is used when no tag is bound to the cloud disk.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ID of the CVM to which the cloud disk is mounted.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cloud disk mount method. Valid values: <br><li>PF: mount as a PF (Physical Function)<br><li>VF: mount as a VF (Virtual Function)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_attachMode;
                    bool m_attachModeHasBeenSet;

                    /**
                     * ID of the periodic snapshot associated to the cloud disk. This parameter is returned only if the value of parameter ReturnBindAutoSnapshotPolicy is TRUE when the API DescribeDisks is called.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_autoSnapshotPolicyIds;
                    bool m_autoSnapshotPolicyIdsHasBeenSet;

                    /**
                     * Extra performance for a cloud disk, in MB/sec.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Whether cloud disk is in process of type change. Value range: <br><li>false: Cloud disk not in process of type change. <br><li>true: Cloud disk type change has been launched, and migration is in process.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool m_migrating;
                    bool m_migratingHasBeenSet;

                    /**
                     * Cloud disk ID.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * The total capacity of the snapshots of the cloud disk. Unit: MB.
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * Location of the cloud disk.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Determines whether or not prepaid cloud disk supports active return. <br><li>true: Active return supported.<br><li>false: Active return not supported.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * Expiration time of the cloud disk.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Whether the cloud disk is mounted to the CVM. Value range: <br><li>false: Unmounted <br><li>true: Mounted.
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * Cloud disk size (in GB).
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Migration progress of cloud disk type change, from 0 to 100.
Note: This field may return null, indicating that no valid value was found.
                     */
                    uint64_t m_migratePercent;
                    bool m_migratePercentHasBeenSet;

                    /**
                     * Cloud disk type. Value range:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Billing method. Value range: <br><li>PREPAID: Prepaid, that is, monthly subscription<br><li>POSTPAID_BY_HOUR: Postpaid, that is, pay as you go.
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     */
                    bool m_portable;
                    bool m_portableHasBeenSet;

                    /**
                     * Whether the cloud disk has the capability to create snapshots. Value range: <br><li>false: Cannot create snapshots. true: Can create snapshots.
                     */
                    bool m_snapshotAbility;
                    bool m_snapshotAbilityHasBeenSet;

                    /**
                     * This field is only applicable when the instance is already mounted to the cloud disk, and both the instance and the cloud disk use monthly subscription. <br><li>true: Expiration time of cloud disk is earlier than that of the instance.<br><li>false:Expiration time of cloud disk is later than that of the instance.
Note: This field may return null, indicating that no valid value was found.
                     */
                    bool m_deadlineError;
                    bool m_deadlineErrorHasBeenSet;

                    /**
                     * Rollback progress of a cloud disk snapshot.
                     */
                    uint64_t m_rollbackPercent;
                    bool m_rollbackPercentHasBeenSet;

                    /**
                     * Number of days from current time until disk expiration (only applicable for prepaid disks).
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_differDaysOfDeadline;
                    bool m_differDaysOfDeadlineHasBeenSet;

                    /**
                     * In circumstances where the prepaid cloud disk does not support active return, this parameter indicates the reason that return is not supported. Value range: <br><li>1: The cloud disk has already been returned. <br><li>2: The cloud disk has already expired. <br><li>3: The cloud disk does not support return. <br><li> 8: The limit on the number of returns is exceeded.
Note: This field may return null, indicating that no valid value was found.
                     */
                    int64_t m_returnFailCode;
                    bool m_returnFailCodeHasBeenSet;

                    /**
                     * Whether or not cloud disk is shareable cloud disk.
                     */
                    bool m_shareable;
                    bool m_shareableHasBeenSet;

                    /**
                     * Creation time of the cloud disk.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Delete the associated non-permanently reserved snapshots upon deletion of the source cloud disk. `0`: No (default). `1`: Yes. To check whether a snapshot is permanently reserved, refer to the `IsPermanent` field returned by the `DescribeSnapshots` API. 
                     */
                    int64_t m_deleteSnapshot;
                    bool m_deleteSnapshotHasBeenSet;

                    /**
                     * Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                    /**
                     * Number of used cloud disk backups.
                     */
                    uint64_t m_diskBackupCount;
                    bool m_diskBackupCountHasBeenSet;

                    /**
                     * Type of the instance mounted to the cloud disk. Valid values: <br><li>CVM<br><li>EKS
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_lastAttachInsId;
                    bool m_lastAttachInsIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_errorPrompt;
                    bool m_errorPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISK_H_
