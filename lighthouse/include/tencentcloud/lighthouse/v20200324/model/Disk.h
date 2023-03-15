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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISK_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Disk information
                */
                class Disk : public AbstractModel
                {
                public:
                    Disk();
                    ~Disk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disk ID
                     * @return DiskId Disk ID
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Disk ID
                     * @param DiskId Disk ID
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Availability zone
                     * @return Zone Availability zone
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone
                     * @param Zone Availability zone
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Disk name
                     * @return DiskName Disk name
                     */
                    std::string GetDiskName() const;

                    /**
                     * 设置Disk name
                     * @param DiskName Disk name
                     */
                    void SetDiskName(const std::string& _diskName);

                    /**
                     * 判断参数 DiskName 是否已赋值
                     * @return DiskName 是否已赋值
                     */
                    bool DiskNameHasBeenSet() const;

                    /**
                     * 获取Disk type
                     * @return DiskUsage Disk type
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Disk type
                     * @param DiskUsage Disk type
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取Disk media type
                     * @return DiskType Disk media type
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Disk media type
                     * @param DiskType Disk media type
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Disk payment type
                     * @return DiskChargeType Disk payment type
                     */
                    std::string GetDiskChargeType() const;

                    /**
                     * 设置Disk payment type
                     * @param DiskChargeType Disk payment type
                     */
                    void SetDiskChargeType(const std::string& _diskChargeType);

                    /**
                     * 判断参数 DiskChargeType 是否已赋值
                     * @return DiskChargeType 是否已赋值
                     */
                    bool DiskChargeTypeHasBeenSet() const;

                    /**
                     * 获取Disk size
                     * @return DiskSize Disk size
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置Disk size
                     * @param DiskSize Disk size
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取Renewal flag
                     * @return RenewFlag Renewal flag
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Renewal flag
                     * @param RenewFlag Renewal flag
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Disk status. Values: 
<li>`PENDING`: Creating</li>
<li>`UNATTACHED`: Not attached</li>
<li>`ATTACHING`: Attaching</li>
<li>`ATTACHED`: Attached</li>
<li>`DETACHING`: Detaching</li>
<li>`SHUTDOWN`: Isolated</li>
<li>`CREATED_FAILED`: Failed to create</li>
<li>`TERMINATING`: Terminating</li>
<li>`DELETING`: Deleting</li>
<li>`FREEZING`: Freezing</li>
                     * @return DiskState Disk status. Values: 
<li>`PENDING`: Creating</li>
<li>`UNATTACHED`: Not attached</li>
<li>`ATTACHING`: Attaching</li>
<li>`ATTACHED`: Attached</li>
<li>`DETACHING`: Detaching</li>
<li>`SHUTDOWN`: Isolated</li>
<li>`CREATED_FAILED`: Failed to create</li>
<li>`TERMINATING`: Terminating</li>
<li>`DELETING`: Deleting</li>
<li>`FREEZING`: Freezing</li>
                     */
                    std::string GetDiskState() const;

                    /**
                     * 设置Disk status. Values: 
<li>`PENDING`: Creating</li>
<li>`UNATTACHED`: Not attached</li>
<li>`ATTACHING`: Attaching</li>
<li>`ATTACHED`: Attached</li>
<li>`DETACHING`: Detaching</li>
<li>`SHUTDOWN`: Isolated</li>
<li>`CREATED_FAILED`: Failed to create</li>
<li>`TERMINATING`: Terminating</li>
<li>`DELETING`: Deleting</li>
<li>`FREEZING`: Freezing</li>
                     * @param DiskState Disk status. Values: 
<li>`PENDING`: Creating</li>
<li>`UNATTACHED`: Not attached</li>
<li>`ATTACHING`: Attaching</li>
<li>`ATTACHED`: Attached</li>
<li>`DETACHING`: Detaching</li>
<li>`SHUTDOWN`: Isolated</li>
<li>`CREATED_FAILED`: Failed to create</li>
<li>`TERMINATING`: Terminating</li>
<li>`DELETING`: Deleting</li>
<li>`FREEZING`: Freezing</li>
                     */
                    void SetDiskState(const std::string& _diskState);

                    /**
                     * 判断参数 DiskState 是否已赋值
                     * @return DiskState 是否已赋值
                     */
                    bool DiskStateHasBeenSet() const;

                    /**
                     * 获取Whether the disk is attached to an instance
                     * @return Attached Whether the disk is attached to an instance
                     */
                    bool GetAttached() const;

                    /**
                     * 设置Whether the disk is attached to an instance
                     * @param Attached Whether the disk is attached to an instance
                     */
                    void SetAttached(const bool& _attached);

                    /**
                     * 判断参数 Attached 是否已赋值
                     * @return Attached 是否已赋值
                     */
                    bool AttachedHasBeenSet() const;

                    /**
                     * 获取Whether to release the disk along with the instance
                     * @return DeleteWithInstance Whether to release the disk along with the instance
                     */
                    bool GetDeleteWithInstance() const;

                    /**
                     * 设置Whether to release the disk along with the instance
                     * @param DeleteWithInstance Whether to release the disk along with the instance
                     */
                    void SetDeleteWithInstance(const bool& _deleteWithInstance);

                    /**
                     * 判断参数 DeleteWithInstance 是否已赋值
                     * @return DeleteWithInstance 是否已赋值
                     */
                    bool DeleteWithInstanceHasBeenSet() const;

                    /**
                     * 获取Last operation
                     * @return LatestOperation Last operation
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置Last operation
                     * @param LatestOperation Last operation
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取Last operation status
                     * @return LatestOperationState Last operation status
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置Last operation status
                     * @param LatestOperationState Last operation status
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取Last request ID
                     * @return LatestOperationRequestId Last request ID
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置Last request ID
                     * @param LatestOperationRequestId Last request ID
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiredTime Expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExpiredTime Expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Isolation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsolatedTime Isolation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置Isolation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IsolatedTime Isolation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Total disk backups
                     * @return DiskBackupCount Total disk backups
                     */
                    int64_t GetDiskBackupCount() const;

                    /**
                     * 设置Total disk backups
                     * @param DiskBackupCount Total disk backups
                     */
                    void SetDiskBackupCount(const int64_t& _diskBackupCount);

                    /**
                     * 判断参数 DiskBackupCount 是否已赋值
                     * @return DiskBackupCount 是否已赋值
                     */
                    bool DiskBackupCountHasBeenSet() const;

                    /**
                     * 获取Disk backup quota
                     * @return DiskBackupQuota Disk backup quota
                     */
                    int64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Disk backup quota
                     * @param DiskBackupQuota Disk backup quota
                     */
                    void SetDiskBackupQuota(const int64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * Disk ID
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Availability zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Disk name
                     */
                    std::string m_diskName;
                    bool m_diskNameHasBeenSet;

                    /**
                     * Disk type
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Disk media type
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Disk payment type
                     */
                    std::string m_diskChargeType;
                    bool m_diskChargeTypeHasBeenSet;

                    /**
                     * Disk size
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Renewal flag
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Disk status. Values: 
<li>`PENDING`: Creating</li>
<li>`UNATTACHED`: Not attached</li>
<li>`ATTACHING`: Attaching</li>
<li>`ATTACHED`: Attached</li>
<li>`DETACHING`: Detaching</li>
<li>`SHUTDOWN`: Isolated</li>
<li>`CREATED_FAILED`: Failed to create</li>
<li>`TERMINATING`: Terminating</li>
<li>`DELETING`: Deleting</li>
<li>`FREEZING`: Freezing</li>
                     */
                    std::string m_diskState;
                    bool m_diskStateHasBeenSet;

                    /**
                     * Whether the disk is attached to an instance
                     */
                    bool m_attached;
                    bool m_attachedHasBeenSet;

                    /**
                     * Whether to release the disk along with the instance
                     */
                    bool m_deleteWithInstance;
                    bool m_deleteWithInstanceHasBeenSet;

                    /**
                     * Last operation
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * Last operation status
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * Last request ID
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Isolation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Total disk backups
                     */
                    int64_t m_diskBackupCount;
                    bool m_diskBackupCountHasBeenSet;

                    /**
                     * Disk backup quota
                     */
                    int64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISK_H_
