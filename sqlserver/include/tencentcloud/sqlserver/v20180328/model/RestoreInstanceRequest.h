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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RestoreInstance request structure.
                */
                class RestoreInstanceRequest : public AbstractModel
                {
                public:
                    RestoreInstanceRequest();
                    ~RestoreInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of mssql-j8kv137v
                     * @return InstanceId Instance ID in the format of mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of mssql-j8kv137v
                     * @param _instanceId Instance ID in the format of mssql-j8kv137v
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
                     * 获取Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     * @return BackupId Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     * @param _backupId Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     * @return TargetInstanceId ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     * @param _targetInstanceId ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取Restore the databases listed in `ReNameRestoreDatabase` and rename them after restoration. If this parameter is left empty, all databases will be restored and renamed in the default format.
                     * @return RenameRestore Restore the databases listed in `ReNameRestoreDatabase` and rename them after restoration. If this parameter is left empty, all databases will be restored and renamed in the default format.
                     * 
                     */
                    std::vector<RenameRestoreDatabase> GetRenameRestore() const;

                    /**
                     * 设置Restore the databases listed in `ReNameRestoreDatabase` and rename them after restoration. If this parameter is left empty, all databases will be restored and renamed in the default format.
                     * @param _renameRestore Restore the databases listed in `ReNameRestoreDatabase` and rename them after restoration. If this parameter is left empty, all databases will be restored and renamed in the default format.
                     * 
                     */
                    void SetRenameRestore(const std::vector<RenameRestoreDatabase>& _renameRestore);

                    /**
                     * 判断参数 RenameRestore 是否已赋值
                     * @return RenameRestore 是否已赋值
                     * 
                     */
                    bool RenameRestoreHasBeenSet() const;

                    /**
                     * 获取Rollback type. Valid values: `0` (overwriting), `1` (renaming).
                     * @return Type Rollback type. Valid values: `0` (overwriting), `1` (renaming).
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Rollback type. Valid values: `0` (overwriting), `1` (renaming).
                     * @param _type Rollback type. Valid values: `0` (overwriting), `1` (renaming).
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Database to be overwritten, which is required when overwriting a rollback database.
                     * @return DBList Database to be overwritten, which is required when overwriting a rollback database.
                     * 
                     */
                    std::vector<std::string> GetDBList() const;

                    /**
                     * 设置Database to be overwritten, which is required when overwriting a rollback database.
                     * @param _dBList Database to be overwritten, which is required when overwriting a rollback database.
                     * 
                     */
                    void SetDBList(const std::vector<std::string>& _dBList);

                    /**
                     * 判断参数 DBList 是否已赋值
                     * @return DBList 是否已赋值
                     * 
                     */
                    bool DBListHasBeenSet() const;

                    /**
                     * 获取Group ID of unarchived backup files grouped by backup task
                     * @return GroupId Group ID of unarchived backup files grouped by backup task
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Group ID of unarchived backup files grouped by backup task
                     * @param _groupId Group ID of unarchived backup files grouped by backup task
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup file ID, which can be obtained through the `Id` field in the returned value of the `DescribeBackups` API
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * ID of the target instance to which the backup is restored. The target instance should be under the same `APPID`. If this parameter is left empty, ID of the source instance will be used.
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * Restore the databases listed in `ReNameRestoreDatabase` and rename them after restoration. If this parameter is left empty, all databases will be restored and renamed in the default format.
                     */
                    std::vector<RenameRestoreDatabase> m_renameRestore;
                    bool m_renameRestoreHasBeenSet;

                    /**
                     * Rollback type. Valid values: `0` (overwriting), `1` (renaming).
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Database to be overwritten, which is required when overwriting a rollback database.
                     */
                    std::vector<std::string> m_dBList;
                    bool m_dBListHasBeenSet;

                    /**
                     * Group ID of unarchived backup files grouped by backup task
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_
