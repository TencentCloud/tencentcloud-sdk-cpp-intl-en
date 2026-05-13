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
                     * 获取Specifies whether the cloud disk is destroyed along with the mounted instance.<br><li>true: destroy the cloud disk along with the instance. only hourly postpaid cloud disk is supported.</li><li>false: destroying instance without destroying cloud disk.</li>.
                     * @return DeleteWithInstance Specifies whether the cloud disk is destroyed along with the mounted instance.<br><li>true: destroy the cloud disk along with the instance. only hourly postpaid cloud disk is supported.</li><li>false: destroying instance without destroying cloud disk.</li>.
                     * 
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Specifies whether the cloud disk is destroyed along with the mounted instance.<br><li>true: destroy the cloud disk along with the instance. only hourly postpaid cloud disk is supported.</li><li>false: destroying instance without destroying cloud disk.</li>.
                     * @param _deleteWithInstance Specifies whether the cloud disk is destroyed along with the mounted instance.<br><li>true: destroy the cloud disk along with the instance. only hourly postpaid cloud disk is supported.</li><li>false: destroying instance without destroying cloud disk.</li>.
                     * 
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     * 
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取AUTO renewal flag. supported values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY expiry AND RENEW automatically</li><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiry but not RENEW automatically</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: neither NOTIFY expiry nor RENEW automatically.</li>.
                     * @return RenewFlag AUTO renewal flag. supported values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY expiry AND RENEW automatically</li><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiry but not RENEW automatically</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: neither NOTIFY expiry nor RENEW automatically.</li>.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置AUTO renewal flag. supported values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY expiry AND RENEW automatically</li><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiry but not RENEW automatically</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: neither NOTIFY expiry nor RENEW automatically.</li>.
                     * @param _renewFlag AUTO renewal flag. supported values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY expiry AND RENEW automatically</li><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiry but not RENEW automatically</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: neither NOTIFY expiry nor RENEW automatically.</li>.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Hard disk media type. valid values:<br><li>CLOUD_BASIC: BASIC CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_BSSD: universal type SSD CLOUD disk</li><li>CLOUD_SSD: SSD CLOUD disk</li><li>CLOUD_HSSD: enhanced SSD CLOUD disk</li><li>CLOUD_TSSD: ultra-fast SSD cbs.</li>.
                     * @return DiskType Hard disk media type. valid values:<br><li>CLOUD_BASIC: BASIC CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_BSSD: universal type SSD CLOUD disk</li><li>CLOUD_SSD: SSD CLOUD disk</li><li>CLOUD_HSSD: enhanced SSD CLOUD disk</li><li>CLOUD_TSSD: ultra-fast SSD cbs.</li>.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Hard disk media type. valid values:<br><li>CLOUD_BASIC: BASIC CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_BSSD: universal type SSD CLOUD disk</li><li>CLOUD_SSD: SSD CLOUD disk</li><li>CLOUD_HSSD: enhanced SSD CLOUD disk</li><li>CLOUD_TSSD: ultra-fast SSD cbs.</li>.
                     * @param _diskType Hard disk media type. valid values:<br><li>CLOUD_BASIC: BASIC CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_BSSD: universal type SSD CLOUD disk</li><li>CLOUD_SSD: SSD CLOUD disk</li><li>CLOUD_HSSD: enhanced SSD CLOUD disk</li><li>CLOUD_TSSD: ultra-fast SSD cbs.</li>.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk state. valid values:<br><li>UNATTACHED: unmounted</li><li>ATTACHING: mounting</li><li>ATTACHED: mounted</li><li>DETACHING: unmounting</li><li>EXPANDING: EXPANDING</li><li>ROLLBACKING: rolling back</li><li>TORECYCLE: to be recycled</li><li>DUMPING: copying hard drive.</li>.
                     * @return DiskState Cloud disk state. valid values:<br><li>UNATTACHED: unmounted</li><li>ATTACHING: mounting</li><li>ATTACHED: mounted</li><li>DETACHING: unmounting</li><li>EXPANDING: EXPANDING</li><li>ROLLBACKING: rolling back</li><li>TORECYCLE: to be recycled</li><li>DUMPING: copying hard drive.</li>.
                     * 
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置Cloud disk state. valid values:<br><li>UNATTACHED: unmounted</li><li>ATTACHING: mounting</li><li>ATTACHED: mounted</li><li>DETACHING: unmounting</li><li>EXPANDING: EXPANDING</li><li>ROLLBACKING: rolling back</li><li>TORECYCLE: to be recycled</li><li>DUMPING: copying hard drive.</li>.
                     * @param _diskState Cloud disk state. valid values:<br><li>UNATTACHED: unmounted</li><li>ATTACHING: mounting</li><li>ATTACHED: mounted</li><li>DETACHING: unmounting</li><li>EXPANDING: EXPANDING</li><li>ROLLBACKING: rolling back</li><li>TORECYCLE: to be recycled</li><li>DUMPING: copying hard drive.</li>.
                     * 
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     * 
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取The total number of snapshots of the cloud disk.
                     * @return SnapshotCount The total number of snapshots of the cloud disk.
                     * 
                     */
                    int64_t GetSnapshotCount() const;

                    /**
                     * 设置The total number of snapshots of the cloud disk.
                     * @param _snapshotCount The total number of snapshots of the cloud disk.
                     * 
                     */
                    void SetSnapshotCount(const int64_t& _snapshotCount);

                    /**
                     * 判断参数 SnapshotCount 是否已赋值
                     * @return SnapshotCount 是否已赋值
                     * 
                     */
                    bool SnapshotCountHasBeenSet() const;

                    /**
                     * 获取Cloud disk mounted to child machine, and both child machine and cloud disk are on a monthly subscription basis.<br><li>true: auto renewal flag is set for child machine, but cloud disk not set</li><li>false: cloud disk auto-renewal flag normal</li>.
                     * @return AutoRenewFlagError Cloud disk mounted to child machine, and both child machine and cloud disk are on a monthly subscription basis.<br><li>true: auto renewal flag is set for child machine, but cloud disk not set</li><li>false: cloud disk auto-renewal flag normal</li>.
                     * 
                     */
                    bool GetAutoRenewFlagError() const;

                    /**
                     * 设置Cloud disk mounted to child machine, and both child machine and cloud disk are on a monthly subscription basis.<br><li>true: auto renewal flag is set for child machine, but cloud disk not set</li><li>false: cloud disk auto-renewal flag normal</li>.
                     * @param _autoRenewFlagError Cloud disk mounted to child machine, and both child machine and cloud disk are on a monthly subscription basis.<br><li>true: auto renewal flag is set for child machine, but cloud disk not set</li><li>false: cloud disk auto-renewal flag normal</li>.
                     * 
                     */
                    void SetAutoRenewFlagError(const bool& _autoRenewFlagError);

                    /**
                     * 判断参数 AutoRenewFlagError 是否已赋值
                     * @return AutoRenewFlagError 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagErrorHasBeenSet() const;

                    /**
                     * 获取Indicates if the cloud disk is in snapshot rollback status. valid values: <br><li>false: means not in snapshot rollback status</li><li>true: means in snapshot rollback status.</li>.
                     * @return Rollbacking Indicates if the cloud disk is in snapshot rollback status. valid values: <br><li>false: means not in snapshot rollback status</li><li>true: means in snapshot rollback status.</li>.
                     * 
                     */
                    bool GetRollbacking() const;

                    /**
                     * 设置Indicates if the cloud disk is in snapshot rollback status. valid values: <br><li>false: means not in snapshot rollback status</li><li>true: means in snapshot rollback status.</li>.
                     * @param _rollbacking Indicates if the cloud disk is in snapshot rollback status. valid values: <br><li>false: means not in snapshot rollback status</li><li>true: means in snapshot rollback status.</li>.
                     * 
                     */
                    void SetRollbacking(const bool& _rollbacking);

                    /**
                     * 判断参数 Rollbacking 是否已赋值
                     * @return Rollbacking 是否已赋值
                     * 
                     */
                    bool RollbackingHasBeenSet() const;

                    /**
                     * 获取For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     * @return InstanceIdList For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     * @param _instanceIdList For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取Indicates whether the cloud disk is encrypted. valid values:<br><li>false: non-encrypted disk</li><li>true: encrypted disk</li>.
                     * @return Encrypt Indicates whether the cloud disk is encrypted. valid values:<br><li>false: non-encrypted disk</li><li>true: encrypted disk</li>.
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Indicates whether the cloud disk is encrypted. valid values:<br><li>false: non-encrypted disk</li><li>true: encrypted disk</li>.
                     * @param _encrypt Indicates whether the cloud disk is encrypted. valid values:<br><li>false: non-encrypted disk</li><li>true: encrypted disk</li>.
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
                     * 获取Cloud disk name.
                     * @return DiskName Cloud disk name.
                     * 
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Cloud disk name.
                     * @param _diskName Cloud disk name.
                     * 
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     * 
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     * @return BackupDisk Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     * 
                     */
                    bool GetBackupDisk() const;

                    /**
                     * 设置Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     * @param _backupDisk Specifies whether to create a snapshot when the cloud disk is terminated due to overdue payment or expiration. `true`: create snapshot; `false`: do not create snapshot.
                     * 
                     */
                    void SetBackupDisk(const bool& _backupDisk);

                    /**
                     * 判断参数 BackupDisk 是否已赋值
                     * @return BackupDisk 是否已赋值
                     * 
                     */
                    bool BackupDiskHasBeenSet() const;

                    /**
                     * 获取It indicates the tag bound to the cloud disk. If the cloud disk is not bound to any tag, the value is empty.
                     * @return Tags It indicates the tag bound to the cloud disk. If the cloud disk is not bound to any tag, the value is empty.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置It indicates the tag bound to the cloud disk. If the cloud disk is not bound to any tag, the value is empty.
                     * @param _tags It indicates the tag bound to the cloud disk. If the cloud disk is not bound to any tag, the value is empty.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取ID of the CVM to which the cloud disk is mounted.
                     * @return InstanceId ID of the CVM to which the cloud disk is mounted.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the CVM to which the cloud disk is mounted.
                     * @param _instanceId ID of the CVM to which the cloud disk is mounted.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The mount type of the cloud disk. valid values: <br><li>PF: PF mount</li><li>VF: VF mount</li>.
                     * @return AttachMode The mount type of the cloud disk. valid values: <br><li>PF: PF mount</li><li>VF: VF mount</li>.
                     * 
                     */
                    std::string GetAttachMode() const;

                    /**
                     * 设置The mount type of the cloud disk. valid values: <br><li>PF: PF mount</li><li>VF: VF mount</li>.
                     * @param _attachMode The mount type of the cloud disk. valid values: <br><li>PF: PF mount</li><li>VF: VF mount</li>.
                     * 
                     */
                    void SetAttachMode(const std::string& _attachMode);

                    /**
                     * 判断参数 AttachMode 是否已赋值
                     * @return AttachMode 是否已赋值
                     * 
                     */
                    bool AttachModeHasBeenSet() const;

                    /**
                     * 获取Regular snapshot ID associated with the cloud disk. return this parameter only when calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API with ReturnBindAutoSnapshotPolicy set to TRUE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoSnapshotPolicyIds Regular snapshot ID associated with the cloud disk. return this parameter only when calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API with ReturnBindAutoSnapshotPolicy set to TRUE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAutoSnapshotPolicyIds() const;

                    /**
                     * 设置Regular snapshot ID associated with the cloud disk. return this parameter only when calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API with ReturnBindAutoSnapshotPolicy set to TRUE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoSnapshotPolicyIds Regular snapshot ID associated with the cloud disk. return this parameter only when calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API with ReturnBindAutoSnapshotPolicy set to TRUE.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoSnapshotPolicyIds(const std::vector<std::string>& _autoSnapshotPolicyIds);

                    /**
                     * 判断参数 AutoSnapshotPolicyIds 是否已赋值
                     * @return AutoSnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Specifies the additional performance value of the CBS in MiB/s.
                     * @return ThroughputPerformance Specifies the additional performance value of the CBS in MiB/s.
                     * 
                     */
                    uint64_t GetThroughputPerformance() const;

                    /**
                     * 设置Specifies the additional performance value of the CBS in MiB/s.
                     * @param _throughputPerformance Specifies the additional performance value of the CBS in MiB/s.
                     * 
                     */
                    void SetThroughputPerformance(const uint64_t& _throughputPerformance);

                    /**
                     * 判断参数 ThroughputPerformance 是否已赋值
                     * @return ThroughputPerformance 是否已赋值
                     * 
                     */
                    bool ThroughputPerformanceHasBeenSet() const;

                    /**
                     * 获取Indicates if the cloud disk is in type change. valid values: <br><li>false: means the cloud disk is not in type change</li><li>true: means the cloud disk has initiated type change and is migrating.</li>.
                     * @return Migrating Indicates if the cloud disk is in type change. valid values: <br><li>false: means the cloud disk is not in type change</li><li>true: means the cloud disk has initiated type change and is migrating.</li>.
                     * 
                     */
                    bool GetMigrating() const;

                    /**
                     * 设置Indicates if the cloud disk is in type change. valid values: <br><li>false: means the cloud disk is not in type change</li><li>true: means the cloud disk has initiated type change and is migrating.</li>.
                     * @param _migrating Indicates if the cloud disk is in type change. valid values: <br><li>false: means the cloud disk is not in type change</li><li>true: means the cloud disk has initiated type change and is migrating.</li>.
                     * 
                     */
                    void SetMigrating(const bool& _migrating);

                    /**
                     * 判断参数 Migrating 是否已赋值
                     * @return Migrating 是否已赋值
                     * 
                     */
                    bool MigratingHasBeenSet() const;

                    /**
                     * 获取Cloud disk ID.
                     * @return DiskId Cloud disk ID.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID.
                     * @param _diskId Cloud disk ID.
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
                     * 获取Total snapshot capacity of the cloud disk. unit: MiB.
                     * @return SnapshotSize Total snapshot capacity of the cloud disk. unit: MiB.
                     * 
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 设置Total snapshot capacity of the cloud disk. unit: MiB.
                     * @param _snapshotSize Total snapshot capacity of the cloud disk. unit: MiB.
                     * 
                     */
                    void SetSnapshotSize(const uint64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取Location of the cloud disk.
                     * @return Placement Location of the cloud disk.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the cloud disk.
                     * @param _placement Location of the cloud disk.
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
                     * 获取Determines if a prepaid cloud disk supports proactive return.<br><li>true: supports proactive return</li><li>false: does not support proactive return.</li>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsReturnable Determines if a prepaid cloud disk supports proactive return.<br><li>true: supports proactive return</li><li>false: does not support proactive return.</li>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 设置Determines if a prepaid cloud disk supports proactive return.<br><li>true: supports proactive return</li><li>false: does not support proactive return.</li>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isReturnable Determines if a prepaid cloud disk supports proactive return.<br><li>true: supports proactive return</li><li>false: does not support proactive return.</li>.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsReturnable(const bool& _isReturnable);

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     * 
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取Expiration time of the cloud disk.
                     * @return DeadlineTime Expiration time of the cloud disk.
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置Expiration time of the cloud disk.
                     * @param _deadlineTime Expiration time of the cloud disk.
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
                     * 获取Indicates whether the cloud disk is mounted to the cvm. valid values: <br><li>false: means not mounted</li><li>true: means mounted.</li>.
                     * @return Attached Indicates whether the cloud disk is mounted to the cvm. valid values: <br><li>false: means not mounted</li><li>true: means mounted.</li>.
                     * 
                     */
                    bool GetAttached() const;

                    /**
                     * 设置Indicates whether the cloud disk is mounted to the cvm. valid values: <br><li>false: means not mounted</li><li>true: means mounted.</li>.
                     * @param _attached Indicates whether the cloud disk is mounted to the cvm. valid values: <br><li>false: means not mounted</li><li>true: means mounted.</li>.
                     * 
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     * 
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取Specifies the disk capacity in GiB.
                     * @return DiskSize Specifies the disk capacity in GiB.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Specifies the disk capacity in GiB.
                     * @param _diskSize Specifies the disk capacity in GiB.
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
                     * 获取It indicates the migration progress of cloud disk type change. The value range is 0 to 100.
                     * @return MigratePercent It indicates the migration progress of cloud disk type change. The value range is 0 to 100.
                     * 
                     */
                    uint64_t GetMigratePercent() const;

                    /**
                     * 设置It indicates the migration progress of cloud disk type change. The value range is 0 to 100.
                     * @param _migratePercent It indicates the migration progress of cloud disk type change. The value range is 0 to 100.
                     * 
                     */
                    void SetMigratePercent(const uint64_t& _migratePercent);

                    /**
                     * 判断参数 MigratePercent 是否已赋值
                     * @return MigratePercent 是否已赋值
                     * 
                     */
                    bool MigratePercentHasBeenSet() const;

                    /**
                     * 获取Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><li>DATA_DISK: DATA DISK.</li>.
                     * @return DiskUsage Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><li>DATA_DISK: DATA DISK.</li>.
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><li>DATA_DISK: DATA DISK.</li>.
                     * @param _diskUsage Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><li>DATA_DISK: DATA DISK.</li>.
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
                     * 获取Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * @return DiskChargeType Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * 
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * @param _diskChargeType Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     * 
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     * 
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     * @return Portable Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     * 
                     */
                    bool GetPortable() const;

                    /**
                     * 设置Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     * @param _portable Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     * 
                     */
                    void SetPortable(const bool& _portable);

                    /**
                     * 判断参数 Portable 是否已赋值
                     * @return Portable 是否已赋值
                     * 
                     */
                    bool PortableHasBeenSet() const;

                    /**
                     * 获取Specifies whether the cloud disk has the capability to create snapshots. valid values:<br><li>false: cannot create snapshots</li><li>true: can create snapshots.</li>.
                     * @return SnapshotAbility Specifies whether the cloud disk has the capability to create snapshots. valid values:<br><li>false: cannot create snapshots</li><li>true: can create snapshots.</li>.
                     * 
                     */
                    bool GetSnapshotAbility() const;

                    /**
                     * 设置Specifies whether the cloud disk has the capability to create snapshots. valid values:<br><li>false: cannot create snapshots</li><li>true: can create snapshots.</li>.
                     * @param _snapshotAbility Specifies whether the cloud disk has the capability to create snapshots. valid values:<br><li>false: cannot create snapshots</li><li>true: can create snapshots.</li>.
                     * 
                     */
                    void SetSnapshotAbility(const bool& _snapshotAbility);

                    /**
                     * 判断参数 SnapshotAbility 是否已赋值
                     * @return SnapshotAbility 是否已赋值
                     * 
                     */
                    bool SnapshotAbilityHasBeenSet() const;

                    /**
                     * 获取Indicates whether the cloud disk expiration time is earlier than that of the instance. this field is valid only when the cloud disk is mounted to the instance and both the instance and the cloud disk are on a monthly subscription basis.<br><li>true: the expiration time of the cloud disk is earlier than that of the instance.</li><li>false: cloud disk expiration time later than instance.</li>.
                     * @return DeadlineError Indicates whether the cloud disk expiration time is earlier than that of the instance. this field is valid only when the cloud disk is mounted to the instance and both the instance and the cloud disk are on a monthly subscription basis.<br><li>true: the expiration time of the cloud disk is earlier than that of the instance.</li><li>false: cloud disk expiration time later than instance.</li>.
                     * 
                     */
                    bool GetDeadlineError() const;

                    /**
                     * 设置Indicates whether the cloud disk expiration time is earlier than that of the instance. this field is valid only when the cloud disk is mounted to the instance and both the instance and the cloud disk are on a monthly subscription basis.<br><li>true: the expiration time of the cloud disk is earlier than that of the instance.</li><li>false: cloud disk expiration time later than instance.</li>.
                     * @param _deadlineError Indicates whether the cloud disk expiration time is earlier than that of the instance. this field is valid only when the cloud disk is mounted to the instance and both the instance and the cloud disk are on a monthly subscription basis.<br><li>true: the expiration time of the cloud disk is earlier than that of the instance.</li><li>false: cloud disk expiration time later than instance.</li>.
                     * 
                     */
                    void SetDeadlineError(const bool& _deadlineError);

                    /**
                     * 判断参数 DeadlineError 是否已赋值
                     * @return DeadlineError 是否已赋值
                     * 
                     */
                    bool DeadlineErrorHasBeenSet() const;

                    /**
                     * 获取Rollback progress of a cloud disk snapshot.
                     * @return RollbackPercent Rollback progress of a cloud disk snapshot.
                     * 
                     */
                    uint64_t GetRollbackPercent() const;

                    /**
                     * 设置Rollback progress of a cloud disk snapshot.
                     * @param _rollbackPercent Rollback progress of a cloud disk snapshot.
                     * 
                     */
                    void SetRollbackPercent(const uint64_t& _rollbackPercent);

                    /**
                     * 判断参数 RollbackPercent 是否已赋值
                     * @return RollbackPercent 是否已赋值
                     * 
                     */
                    bool RollbackPercentHasBeenSet() const;

                    /**
                     * 获取The number of days from the current time to disk expiration (only applicable to prepaid cbs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DifferDaysOfDeadline The number of days from the current time to disk expiration (only applicable to prepaid cbs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDifferDaysOfDeadline() const;

                    /**
                     * 设置The number of days from the current time to disk expiration (only applicable to prepaid cbs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _differDaysOfDeadline The number of days from the current time to disk expiration (only applicable to prepaid cbs).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDifferDaysOfDeadline(const int64_t& _differDaysOfDeadline);

                    /**
                     * 判断参数 DifferDaysOfDeadline 是否已赋值
                     * @return DifferDaysOfDeadline 是否已赋值
                     * 
                     */
                    bool DifferDaysOfDeadlineHasBeenSet() const;

                    /**
                     * 获取For prepaid cloud disks that do not support proactive return, this parameter indicates the specific reason for not supporting refund. value range: <br><li>1: the cloud disk has already been returned.</li><li>2: the cloud disk has expired.</li><li>3: the cloud disk does not support return.</li><li>8: the maximum returnable quantity is exceeded.</li><li>10: non-elastic cloud disks, system disks, and pay-as-you-go cloud disks do not support return.</li>.
                     * @return ReturnFailCode For prepaid cloud disks that do not support proactive return, this parameter indicates the specific reason for not supporting refund. value range: <br><li>1: the cloud disk has already been returned.</li><li>2: the cloud disk has expired.</li><li>3: the cloud disk does not support return.</li><li>8: the maximum returnable quantity is exceeded.</li><li>10: non-elastic cloud disks, system disks, and pay-as-you-go cloud disks do not support return.</li>.
                     * 
                     */
                    int64_t GetReturnFailCode() const;

                    /**
                     * 设置For prepaid cloud disks that do not support proactive return, this parameter indicates the specific reason for not supporting refund. value range: <br><li>1: the cloud disk has already been returned.</li><li>2: the cloud disk has expired.</li><li>3: the cloud disk does not support return.</li><li>8: the maximum returnable quantity is exceeded.</li><li>10: non-elastic cloud disks, system disks, and pay-as-you-go cloud disks do not support return.</li>.
                     * @param _returnFailCode For prepaid cloud disks that do not support proactive return, this parameter indicates the specific reason for not supporting refund. value range: <br><li>1: the cloud disk has already been returned.</li><li>2: the cloud disk has expired.</li><li>3: the cloud disk does not support return.</li><li>8: the maximum returnable quantity is exceeded.</li><li>10: non-elastic cloud disks, system disks, and pay-as-you-go cloud disks do not support return.</li>.
                     * 
                     */
                    void SetReturnFailCode(const int64_t& _returnFailCode);

                    /**
                     * 判断参数 ReturnFailCode 是否已赋值
                     * @return ReturnFailCode 是否已赋值
                     * 
                     */
                    bool ReturnFailCodeHasBeenSet() const;

                    /**
                     * 获取Whether or not cloud disk is shareable cloud disk.
                     * @return Shareable Whether or not cloud disk is shareable cloud disk.
                     * 
                     */
                    bool GetShareable() const;

                    /**
                     * 设置Whether or not cloud disk is shareable cloud disk.
                     * @param _shareable Whether or not cloud disk is shareable cloud disk.
                     * 
                     */
                    void SetShareable(const bool& _shareable);

                    /**
                     * 判断参数 Shareable 是否已赋值
                     * @return Shareable 是否已赋值
                     * 
                     */
                    bool ShareableHasBeenSet() const;

                    /**
                     * 获取Creation time of the cloud disk.
                     * @return CreateTime Creation time of the cloud disk.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the cloud disk.
                     * @param _createTime Creation time of the cloud disk.
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
                     * 获取Specifies whether to delete associated non-permanently retained snapshots when destroying the cloud disk. 0 indicates non-permanent snapshots are not deleted with cloud disk destruction, 1 indicates non-permanent snapshots are deleted with cloud disk destruction. default value: 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the DescribeSnapshots API (https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1). true indicates permanent snapshot, false indicates non-permanent snapshot.
                     * @return DeleteSnapshot Specifies whether to delete associated non-permanently retained snapshots when destroying the cloud disk. 0 indicates non-permanent snapshots are not deleted with cloud disk destruction, 1 indicates non-permanent snapshots are deleted with cloud disk destruction. default value: 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the DescribeSnapshots API (https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1). true indicates permanent snapshot, false indicates non-permanent snapshot.
                     * 
                     */
                    int64_t GetDeleteSnapshot() const;

                    /**
                     * 设置Specifies whether to delete associated non-permanently retained snapshots when destroying the cloud disk. 0 indicates non-permanent snapshots are not deleted with cloud disk destruction, 1 indicates non-permanent snapshots are deleted with cloud disk destruction. default value: 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the DescribeSnapshots API (https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1). true indicates permanent snapshot, false indicates non-permanent snapshot.
                     * @param _deleteSnapshot Specifies whether to delete associated non-permanently retained snapshots when destroying the cloud disk. 0 indicates non-permanent snapshots are not deleted with cloud disk destruction, 1 indicates non-permanent snapshots are deleted with cloud disk destruction. default value: 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the DescribeSnapshots API (https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1). true indicates permanent snapshot, false indicates non-permanent snapshot.
                     * 
                     */
                    void SetDeleteSnapshot(const int64_t& _deleteSnapshot);

                    /**
                     * 判断参数 DeleteSnapshot 是否已赋值
                     * @return DeleteSnapshot 是否已赋值
                     * 
                     */
                    bool DeleteSnapshotHasBeenSet() const;

                    /**
                     * 获取Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     * @return DiskBackupQuota Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     * 
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     * @param _diskBackupQuota Quota of cloud disk backup points, i.e., the maximum number of backup points that a cloud disk can have.
                     * 
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                    /**
                     * 获取Number of used cloud disk backups.
                     * @return DiskBackupCount Number of used cloud disk backups.
                     * 
                     */
                    uint64_t GetDiskBackupCount() const;

                    /**
                     * 设置Number of used cloud disk backups.
                     * @param _diskBackupCount Number of used cloud disk backups.
                     * 
                     */
                    void SetDiskBackupCount(const uint64_t& _diskBackupCount);

                    /**
                     * 判断参数 DiskBackupCount 是否已赋值
                     * @return DiskBackupCount 是否已赋值
                     * 
                     */
                    bool DiskBackupCountHasBeenSet() const;

                    /**
                     * 获取The type of the CBS mounting instance. valid values: <br><li>CVM</li><li>EKS</li>.
                     * @return InstanceType The type of the CBS mounting instance. valid values: <br><li>CVM</li><li>EKS</li>.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置The type of the CBS mounting instance. valid values: <br><li>CVM</li><li>EKS</li>.
                     * @param _instanceType The type of the CBS mounting instance. valid values: <br><li>CVM</li><li>EKS</li>.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取ID of the last instance to which the cloud disk is attached
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastAttachInsId ID of the last instance to which the cloud disk is attached
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastAttachInsId() const;

                    /**
                     * 设置ID of the last instance to which the cloud disk is attached
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastAttachInsId ID of the last instance to which the cloud disk is attached
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastAttachInsId(const std::string& _lastAttachInsId);

                    /**
                     * 判断参数 LastAttachInsId 是否已赋值
                     * @return LastAttachInsId 是否已赋值
                     * 
                     */
                    bool LastAttachInsIdHasBeenSet() const;

                    /**
                     * 获取Error prompt for the last operation on cbs.
                     * @return ErrorPrompt Error prompt for the last operation on cbs.
                     * 
                     */
                    std::string GetErrorPrompt() const;

                    /**
                     * 设置Error prompt for the last operation on cbs.
                     * @param _errorPrompt Error prompt for the last operation on cbs.
                     * 
                     */
                    void SetErrorPrompt(const std::string& _errorPrompt);

                    /**
                     * 判断参数 ErrorPrompt 是否已赋值
                     * @return ErrorPrompt 是否已赋值
                     * 
                     */
                    bool ErrorPromptHasBeenSet() const;

                    /**
                     * 获取Whether performance burst is enabled for the cloud disk.
                     * @return BurstPerformance Whether performance burst is enabled for the cloud disk.
                     * 
                     */
                    bool GetBurstPerformance() const;

                    /**
                     * 设置Whether performance burst is enabled for the cloud disk.
                     * @param _burstPerformance Whether performance burst is enabled for the cloud disk.
                     * 
                     */
                    void SetBurstPerformance(const bool& _burstPerformance);

                    /**
                     * 判断参数 BurstPerformance 是否已赋值
                     * @return BurstPerformance 是否已赋值
                     * 
                     */
                    bool BurstPerformanceHasBeenSet() const;

                    /**
                     * 获取Encryption type of cbs. valid values: ENCRYPT_V1 and ENCRYPT_V2, which indicate first generation and second generation encryption technology respectively. the two kinds are incompatible.
                     * @return EncryptType Encryption type of cbs. valid values: ENCRYPT_V1 and ENCRYPT_V2, which indicate first generation and second generation encryption technology respectively. the two kinds are incompatible.
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置Encryption type of cbs. valid values: ENCRYPT_V1 and ENCRYPT_V2, which indicate first generation and second generation encryption technology respectively. the two kinds are incompatible.
                     * @param _encryptType Encryption type of cbs. valid values: ENCRYPT_V1 and ENCRYPT_V2, which indicate first generation and second generation encryption technology respectively. the two kinds are incompatible.
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取Key ID of the encrypted disk.
                     * @return KmsKeyId Key ID of the encrypted disk.
                     * 
                     */
                    std::string GetKmsKeyId() const;

                    /**
                     * 设置Key ID of the encrypted disk.
                     * @param _kmsKeyId Key ID of the encrypted disk.
                     * 
                     */
                    void SetKmsKeyId(const std::string& _kmsKeyId);

                    /**
                     * 判断参数 KmsKeyId 是否已赋值
                     * @return KmsKeyId 是否已赋值
                     * 
                     */
                    bool KmsKeyIdHasBeenSet() const;

                private:

                    /**
                     * Specifies whether the cloud disk is destroyed along with the mounted instance.<br><li>true: destroy the cloud disk along with the instance. only hourly postpaid cloud disk is supported.</li><li>false: destroying instance without destroying cloud disk.</li>.
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * AUTO renewal flag. supported values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY expiry AND RENEW automatically</li><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiry but not RENEW automatically</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: neither NOTIFY expiry nor RENEW automatically.</li>.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Hard disk media type. valid values:<br><li>CLOUD_BASIC: BASIC CLOUD disk</li><li>CLOUD_PREMIUM: high-performance CLOUD block storage</li><li>CLOUD_BSSD: universal type SSD CLOUD disk</li><li>CLOUD_SSD: SSD CLOUD disk</li><li>CLOUD_HSSD: enhanced SSD CLOUD disk</li><li>CLOUD_TSSD: ultra-fast SSD cbs.</li>.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Cloud disk state. valid values:<br><li>UNATTACHED: unmounted</li><li>ATTACHING: mounting</li><li>ATTACHED: mounted</li><li>DETACHING: unmounting</li><li>EXPANDING: EXPANDING</li><li>ROLLBACKING: rolling back</li><li>TORECYCLE: to be recycled</li><li>DUMPING: copying hard drive.</li>.
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * The total number of snapshots of the cloud disk.
                     */
                    int64_t m_snapshotCount;
                    bool m_snapshotCountHasBeenSet;

                    /**
                     * Cloud disk mounted to child machine, and both child machine and cloud disk are on a monthly subscription basis.<br><li>true: auto renewal flag is set for child machine, but cloud disk not set</li><li>false: cloud disk auto-renewal flag normal</li>.
                     */
                    bool m_autoRenewFlagError;
                    bool m_autoRenewFlagErrorHasBeenSet;

                    /**
                     * Indicates if the cloud disk is in snapshot rollback status. valid values: <br><li>false: means not in snapshot rollback status</li><li>true: means in snapshot rollback status.</li>.
                     */
                    bool m_rollbacking;
                    bool m_rollbackingHasBeenSet;

                    /**
                     * For non-shareable cloud disks, this parameter is null. For shareable cloud disks, this parameters indicates this cloud disk's Instance IDs currently mounted to the CVM.
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * Indicates whether the cloud disk is encrypted. valid values:<br><li>false: non-encrypted disk</li><li>true: encrypted disk</li>.
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
                     * It indicates the tag bound to the cloud disk. If the cloud disk is not bound to any tag, the value is empty.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * ID of the CVM to which the cloud disk is mounted.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The mount type of the cloud disk. valid values: <br><li>PF: PF mount</li><li>VF: VF mount</li>.
                     */
                    std::string m_attachMode;
                    bool m_attachModeHasBeenSet;

                    /**
                     * Regular snapshot ID associated with the cloud disk. return this parameter only when calling the [DescribeDisks](https://www.tencentcloud.com/document/product/362/16315?from_cn_redirect=1) API with ReturnBindAutoSnapshotPolicy set to TRUE.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_autoSnapshotPolicyIds;
                    bool m_autoSnapshotPolicyIdsHasBeenSet;

                    /**
                     * Specifies the additional performance value of the CBS in MiB/s.
                     */
                    uint64_t m_throughputPerformance;
                    bool m_throughputPerformanceHasBeenSet;

                    /**
                     * Indicates if the cloud disk is in type change. valid values: <br><li>false: means the cloud disk is not in type change</li><li>true: means the cloud disk has initiated type change and is migrating.</li>.
                     */
                    bool m_migrating;
                    bool m_migratingHasBeenSet;

                    /**
                     * Cloud disk ID.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Total snapshot capacity of the cloud disk. unit: MiB.
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * Location of the cloud disk.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * Determines if a prepaid cloud disk supports proactive return.<br><li>true: supports proactive return</li><li>false: does not support proactive return.</li>.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * Expiration time of the cloud disk.
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * Indicates whether the cloud disk is mounted to the cvm. valid values: <br><li>false: means not mounted</li><li>true: means mounted.</li>.
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * Specifies the disk capacity in GiB.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * It indicates the migration progress of cloud disk type change. The value range is 0 to 100.
                     */
                    uint64_t m_migratePercent;
                    bool m_migratePercentHasBeenSet;

                    /**
                     * Cloud DISK type. valid values:<br><li>SYSTEM_DISK: SYSTEM DISK</li><li>DATA_DISK: DATA DISK.</li>.
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Payment mode. valid values: <br><li>PREPAID: PREPAID, i.e. monthly subscription</li><li>POSTPAID_BY_HOUR: POSTPAID, i.e. pay-as-you-go.</li>.
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Whether it is an elastic cloud disk. false: Non-elastic cloud disk; true: Elastic cloud disk.
                     */
                    bool m_portable;
                    bool m_portableHasBeenSet;

                    /**
                     * Specifies whether the cloud disk has the capability to create snapshots. valid values:<br><li>false: cannot create snapshots</li><li>true: can create snapshots.</li>.
                     */
                    bool m_snapshotAbility;
                    bool m_snapshotAbilityHasBeenSet;

                    /**
                     * Indicates whether the cloud disk expiration time is earlier than that of the instance. this field is valid only when the cloud disk is mounted to the instance and both the instance and the cloud disk are on a monthly subscription basis.<br><li>true: the expiration time of the cloud disk is earlier than that of the instance.</li><li>false: cloud disk expiration time later than instance.</li>.
                     */
                    bool m_deadlineError;
                    bool m_deadlineErrorHasBeenSet;

                    /**
                     * Rollback progress of a cloud disk snapshot.
                     */
                    uint64_t m_rollbackPercent;
                    bool m_rollbackPercentHasBeenSet;

                    /**
                     * The number of days from the current time to disk expiration (only applicable to prepaid cbs).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_differDaysOfDeadline;
                    bool m_differDaysOfDeadlineHasBeenSet;

                    /**
                     * For prepaid cloud disks that do not support proactive return, this parameter indicates the specific reason for not supporting refund. value range: <br><li>1: the cloud disk has already been returned.</li><li>2: the cloud disk has expired.</li><li>3: the cloud disk does not support return.</li><li>8: the maximum returnable quantity is exceeded.</li><li>10: non-elastic cloud disks, system disks, and pay-as-you-go cloud disks do not support return.</li>.
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
                     * Specifies whether to delete associated non-permanently retained snapshots when destroying the cloud disk. 0 indicates non-permanent snapshots are not deleted with cloud disk destruction, 1 indicates non-permanent snapshots are deleted with cloud disk destruction. default value: 0. whether a snapshot is permanently retained can be determined through the IsPermanent field in the snapshot description returned by the DescribeSnapshots API (https://www.tencentcloud.com/document/product/362/15647?from_cn_redirect=1). true indicates permanent snapshot, false indicates non-permanent snapshot.
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
                     * The type of the CBS mounting instance. valid values: <br><li>CVM</li><li>EKS</li>.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * ID of the last instance to which the cloud disk is attached
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastAttachInsId;
                    bool m_lastAttachInsIdHasBeenSet;

                    /**
                     * Error prompt for the last operation on cbs.
                     */
                    std::string m_errorPrompt;
                    bool m_errorPromptHasBeenSet;

                    /**
                     * Whether performance burst is enabled for the cloud disk.
                     */
                    bool m_burstPerformance;
                    bool m_burstPerformanceHasBeenSet;

                    /**
                     * Encryption type of cbs. valid values: ENCRYPT_V1 and ENCRYPT_V2, which indicate first generation and second generation encryption technology respectively. the two kinds are incompatible.
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * Key ID of the encrypted disk.
                     */
                    std::string m_kmsKeyId;
                    bool m_kmsKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISK_H_
