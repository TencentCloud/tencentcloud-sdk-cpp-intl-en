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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATION_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrationDetail.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrationAction.h>
#include <tencentcloud/sqlserver/v20180328/model/DBRenameRes.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Cold backup migration import
                */
                class Migration : public AbstractModel
                {
                public:
                    Migration();
                    ~Migration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup import task ID or incremental import task ID
                     * @return MigrationId Backup import task ID or incremental import task ID
                     * 
                     */
                    std::string GetMigrationId() const;

                    /**
                     * 设置Backup import task ID or incremental import task ID
                     * @param _migrationId Backup import task ID or incremental import task ID
                     * 
                     */
                    void SetMigrationId(const std::string& _migrationId);

                    /**
                     * 判断参数 MigrationId 是否已赋值
                     * @return MigrationId 是否已赋值
                     * 
                     */
                    bool MigrationIdHasBeenSet() const;

                    /**
                     * 获取Backup import task name. For an incremental import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * @return MigrationName Backup import task name. For an incremental import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMigrationName() const;

                    /**
                     * 设置Backup import task name. For an incremental import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * @param _migrationName Backup import task name. For an incremental import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMigrationName(const std::string& _migrationName);

                    /**
                     * 判断参数 MigrationName 是否已赋值
                     * @return MigrationName 是否已赋值
                     * 
                     */
                    bool MigrationNameHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取ID of migrated target instance
                     * @return InstanceId ID of migrated target instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of migrated target instance
                     * @param _instanceId ID of migrated target instance
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
                     * 获取Migration task restoration type
                     * @return RecoveryType Migration task restoration type
                     * 
                     */
                    std::string GetRecoveryType() const;

                    /**
                     * 设置Migration task restoration type
                     * @param _recoveryType Migration task restoration type
                     * 
                     */
                    void SetRecoveryType(const std::string& _recoveryType);

                    /**
                     * 判断参数 RecoveryType 是否已赋值
                     * @return RecoveryType 是否已赋值
                     * 
                     */
                    bool RecoveryTypeHasBeenSet() const;

                    /**
                     * 获取Backup user upload type. COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * @return UploadType Backup user upload type. COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * 
                     */
                    std::string GetUploadType() const;

                    /**
                     * 设置Backup user upload type. COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * @param _uploadType Backup user upload type. COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     * 
                     */
                    void SetUploadType(const std::string& _uploadType);

                    /**
                     * 判断参数 UploadType 是否已赋值
                     * @return UploadType 是否已赋值
                     * 
                     */
                    bool UploadTypeHasBeenSet() const;

                    /**
                     * 获取Backup file list, which is determined by UploadType. If the upload type is COS_URL, URL will be saved. If the upload type is COS_UPLOAD, the backup name will be saved.
                     * @return BackupFiles Backup file list, which is determined by UploadType. If the upload type is COS_URL, URL will be saved. If the upload type is COS_UPLOAD, the backup name will be saved.
                     * 
                     */
                    std::vector<std::string> GetBackupFiles() const;

                    /**
                     * 设置Backup file list, which is determined by UploadType. If the upload type is COS_URL, URL will be saved. If the upload type is COS_UPLOAD, the backup name will be saved.
                     * @param _backupFiles Backup file list, which is determined by UploadType. If the upload type is COS_URL, URL will be saved. If the upload type is COS_UPLOAD, the backup name will be saved.
                     * 
                     */
                    void SetBackupFiles(const std::vector<std::string>& _backupFiles);

                    /**
                     * 判断参数 BackupFiles 是否已赋值
                     * @return BackupFiles 是否已赋值
                     * 
                     */
                    bool BackupFilesHasBeenSet() const;

                    /**
                     * 获取Migration task status. Valid values: `2` (Creation completed), `7` (Importing full backups), `8` (Waiting for incremental backups), `9` (Import success), `10` (Import failure), `12` (Importing incremental backups).
                     * @return Status Migration task status. Valid values: `2` (Creation completed), `7` (Importing full backups), `8` (Waiting for incremental backups), `9` (Import success), `10` (Import failure), `12` (Importing incremental backups).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Migration task status. Valid values: `2` (Creation completed), `7` (Importing full backups), `8` (Waiting for incremental backups), `9` (Import success), `10` (Import failure), `12` (Importing incremental backups).
                     * @param _status Migration task status. Valid values: `2` (Creation completed), `7` (Importing full backups), `8` (Waiting for incremental backups), `9` (Import success), `10` (Import failure), `12` (Importing incremental backups).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Migration task creation time
                     * @return CreateTime Migration task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Migration task creation time
                     * @param _createTime Migration task creation time
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
                     * 获取Migration task start time
                     * @return StartTime Migration task start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Migration task start time
                     * @param _startTime Migration task start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Migration task end time
                     * @return EndTime Migration task end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Migration task end time
                     * @param _endTime Migration task end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取More information
                     * @return Message More information
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置More information
                     * @param _message More information
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Migration detail
                     * @return Detail Migration detail
                     * 
                     */
                    MigrationDetail GetDetail() const;

                    /**
                     * 设置Migration detail
                     * @param _detail Migration detail
                     * 
                     */
                    void SetDetail(const MigrationDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Operation allowed in the current status
                     * @return Action Operation allowed in the current status
                     * 
                     */
                    MigrationAction GetAction() const;

                    /**
                     * 设置Operation allowed in the current status
                     * @param _action Operation allowed in the current status
                     * 
                     */
                    void SetAction(const MigrationAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Whether this is the final restoration. For a full import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * @return IsRecovery Whether this is the final restoration. For a full import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIsRecovery() const;

                    /**
                     * 设置Whether this is the final restoration. For a full import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * @param _isRecovery Whether this is the final restoration. For a full import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsRecovery(const std::string& _isRecovery);

                    /**
                     * 判断参数 IsRecovery 是否已赋值
                     * @return IsRecovery 是否已赋值
                     * 
                     */
                    bool IsRecoveryHasBeenSet() const;

                    /**
                     * 获取Name set of renamed databases
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBRename Name set of renamed databases
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DBRenameRes> GetDBRename() const;

                    /**
                     * 设置Name set of renamed databases
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBRename Name set of renamed databases
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBRename(const std::vector<DBRenameRes>& _dBRename);

                    /**
                     * 判断参数 DBRename 是否已赋值
                     * @return DBRename 是否已赋值
                     * 
                     */
                    bool DBRenameHasBeenSet() const;

                private:

                    /**
                     * Backup import task ID or incremental import task ID
                     */
                    std::string m_migrationId;
                    bool m_migrationIdHasBeenSet;

                    /**
                     * Backup import task name. For an incremental import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     */
                    std::string m_migrationName;
                    bool m_migrationNameHasBeenSet;

                    /**
                     * Application ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * ID of migrated target instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Migration task restoration type
                     */
                    std::string m_recoveryType;
                    bool m_recoveryTypeHasBeenSet;

                    /**
                     * Backup user upload type. COS_URL: the backup is stored in user’s Cloud Object Storage, with URL provided. COS_UPLOAD: the backup is stored in the application’s Cloud Object Storage and needs to be uploaded by the user.
                     */
                    std::string m_uploadType;
                    bool m_uploadTypeHasBeenSet;

                    /**
                     * Backup file list, which is determined by UploadType. If the upload type is COS_URL, URL will be saved. If the upload type is COS_UPLOAD, the backup name will be saved.
                     */
                    std::vector<std::string> m_backupFiles;
                    bool m_backupFilesHasBeenSet;

                    /**
                     * Migration task status. Valid values: `2` (Creation completed), `7` (Importing full backups), `8` (Waiting for incremental backups), `9` (Import success), `10` (Import failure), `12` (Importing incremental backups).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Migration task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Migration task start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Migration task end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * More information
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Migration detail
                     */
                    MigrationDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Operation allowed in the current status
                     */
                    MigrationAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Whether this is the final restoration. For a full import task, this field will be left empty.
Note: this field may return ‘null’, indicating that no valid values can be obtained.
                     */
                    std::string m_isRecovery;
                    bool m_isRecoveryHasBeenSet;

                    /**
                     * Name set of renamed databases
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DBRenameRes> m_dBRename;
                    bool m_dBRenameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MIGRATION_H_
