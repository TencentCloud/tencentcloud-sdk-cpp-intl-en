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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKBACKUP_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Cloud disk backup point.
                */
                class DiskBackup : public AbstractModel
                {
                public:
                    DiskBackup();
                    ~DiskBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud disk backup point ID.
                     * @return DiskBackupId Cloud disk backup point ID.
                     * 
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置Cloud disk backup point ID.
                     * @param _diskBackupId Cloud disk backup point ID.
                     * 
                     */
                    void SetDiskBackupId(const std::string& _diskBackupId);

                    /**
                     * 判断参数 DiskBackupId 是否已赋值
                     * @return DiskBackupId 是否已赋值
                     * 
                     */
                    bool DiskBackupIdHasBeenSet() const;

                    /**
                     * 获取ID of the cloud disk with which the backup point is associated.
                     * @return DiskId ID of the cloud disk with which the backup point is associated.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the cloud disk with which the backup point is associated.
                     * @param _diskId ID of the cloud disk with which the backup point is associated.
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
                     * 获取Cloud disk size in GB.
                     * @return DiskSize Cloud disk size in GB.
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size in GB.
                     * @param _diskSize Cloud disk size in GB.
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
                     * 获取Cloud disk type. Valid values:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk
                     * @return DiskUsage Cloud disk type. Valid values:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置Cloud disk type. Valid values:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk
                     * @param _diskUsage Cloud disk type. Valid values:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk
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
                     * 获取Backup point name.
                     * @return DiskBackupName Backup point name.
                     * 
                     */
                    std::string GetDiskBackupName() const;

                    /**
                     * 设置Backup point name.
                     * @param _diskBackupName Backup point name.
                     * 
                     */
                    void SetDiskBackupName(const std::string& _diskBackupName);

                    /**
                     * 判断参数 DiskBackupName 是否已赋值
                     * @return DiskBackupName 是否已赋值
                     * 
                     */
                    bool DiskBackupNameHasBeenSet() const;

                    /**
                     * 获取Cloud disk backup point status. Valid values:<br><li>NORMAL: Normal<br><li>CREATING: Creating<br><li>ROLLBACKING: Rolling back
                     * @return DiskBackupState Cloud disk backup point status. Valid values:<br><li>NORMAL: Normal<br><li>CREATING: Creating<br><li>ROLLBACKING: Rolling back
                     * 
                     */
                    std::string GetDiskBackupState() const;

                    /**
                     * 设置Cloud disk backup point status. Valid values:<br><li>NORMAL: Normal<br><li>CREATING: Creating<br><li>ROLLBACKING: Rolling back
                     * @param _diskBackupState Cloud disk backup point status. Valid values:<br><li>NORMAL: Normal<br><li>CREATING: Creating<br><li>ROLLBACKING: Rolling back
                     * 
                     */
                    void SetDiskBackupState(const std::string& _diskBackupState);

                    /**
                     * 判断参数 DiskBackupState 是否已赋值
                     * @return DiskBackupState 是否已赋值
                     * 
                     */
                    bool DiskBackupStateHasBeenSet() const;

                    /**
                     * 获取Cloud disk creation progress in percentage.
                     * @return Percent Cloud disk creation progress in percentage.
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置Cloud disk creation progress in percentage.
                     * @param _percent Cloud disk creation progress in percentage.
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
                     * 获取Creation time of the cloud disk backup point.
                     * @return CreateTime Creation time of the cloud disk backup point.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the cloud disk backup point.
                     * @param _createTime Creation time of the cloud disk backup point.
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
                     * 获取Whether the cloud disk is encrypted. Valid values: <br><li>false: Not encrypted <br><li>true: Encrypted
                     * @return Encrypt Whether the cloud disk is encrypted. Valid values: <br><li>false: Not encrypted <br><li>true: Encrypted
                     * 
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置Whether the cloud disk is encrypted. Valid values: <br><li>false: Not encrypted <br><li>true: Encrypted
                     * @param _encrypt Whether the cloud disk is encrypted. Valid values: <br><li>false: Not encrypted <br><li>true: Encrypted
                     * 
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                private:

                    /**
                     * Cloud disk backup point ID.
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * ID of the cloud disk with which the backup point is associated.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Cloud disk size in GB.
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * Cloud disk type. Valid values:<br><li>SYSTEM_DISK: System disk <br><li>DATA_DISK: Data disk
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * Backup point name.
                     */
                    std::string m_diskBackupName;
                    bool m_diskBackupNameHasBeenSet;

                    /**
                     * Cloud disk backup point status. Valid values:<br><li>NORMAL: Normal<br><li>CREATING: Creating<br><li>ROLLBACKING: Rolling back
                     */
                    std::string m_diskBackupState;
                    bool m_diskBackupStateHasBeenSet;

                    /**
                     * Cloud disk creation progress in percentage.
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Creation time of the cloud disk backup point.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the cloud disk is encrypted. Valid values: <br><li>false: Not encrypted <br><li>true: Encrypted
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKBACKUP_H_
