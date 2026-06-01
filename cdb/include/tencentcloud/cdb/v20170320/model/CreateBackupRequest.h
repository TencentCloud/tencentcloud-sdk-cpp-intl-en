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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEBACKUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BackupItem.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateBackup request structure.
                */
                class CreateBackupRequest : public AbstractModel
                {
                public:
                    CreateBackupRequest();
                    ~CreateBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
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
                     * 获取Target backup method. Valid values: `logical` (logical cold backup), `physical` (physical cold backup), `snapshot` (snapshot backup). Basic Edition instances only support snapshot backups.
                     * @return BackupMethod Target backup method. Valid values: `logical` (logical cold backup), `physical` (physical cold backup), `snapshot` (snapshot backup). Basic Edition instances only support snapshot backups.
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Target backup method. Valid values: `logical` (logical cold backup), `physical` (physical cold backup), `snapshot` (snapshot backup). Basic Edition instances only support snapshot backups.
                     * @param _backupMethod Target backup method. Valid values: `logical` (logical cold backup), `physical` (physical cold backup), `snapshot` (snapshot backup). Basic Edition instances only support snapshot backups.
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Database table information to be backed up. If this parameter is not set, the whole instance is backed up by default. This parameter can only be set when BackupMethod=logical. The specified database and tables must exist. Otherwise, backup may fail.
If necessary to back up tables tb1 and tb2 in database db1 and database db2, configure the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"}].
                     * @return BackupDBTableList Database table information to be backed up. If this parameter is not set, the whole instance is backed up by default. This parameter can only be set when BackupMethod=logical. The specified database and tables must exist. Otherwise, backup may fail.
If necessary to back up tables tb1 and tb2 in database db1 and database db2, configure the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"}].
                     * 
                     */
                    std::vector<BackupItem> GetBackupDBTableList() const;

                    /**
                     * 设置Database table information to be backed up. If this parameter is not set, the whole instance is backed up by default. This parameter can only be set when BackupMethod=logical. The specified database and tables must exist. Otherwise, backup may fail.
If necessary to back up tables tb1 and tb2 in database db1 and database db2, configure the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"}].
                     * @param _backupDBTableList Database table information to be backed up. If this parameter is not set, the whole instance is backed up by default. This parameter can only be set when BackupMethod=logical. The specified database and tables must exist. Otherwise, backup may fail.
If necessary to back up tables tb1 and tb2 in database db1 and database db2, configure the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"}].
                     * 
                     */
                    void SetBackupDBTableList(const std::vector<BackupItem>& _backupDBTableList);

                    /**
                     * 判断参数 BackupDBTableList 是否已赋值
                     * @return BackupDBTableList 是否已赋值
                     * 
                     */
                    bool BackupDBTableListHasBeenSet() const;

                    /**
                     * 获取Manually back up the alias. Keep the input length within 60 characters.
                     * @return ManualBackupName Manually back up the alias. Keep the input length within 60 characters.
                     * 
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置Manually back up the alias. Keep the input length within 60 characters.
                     * @param _manualBackupName Manually back up the alias. Keep the input length within 60 characters.
                     * 
                     */
                    void SetManualBackupName(const std::string& _manualBackupName);

                    /**
                     * 判断参数 ManualBackupName 是否已赋值
                     * @return ManualBackupName 是否已赋值
                     * 
                     */
                    bool ManualBackupNameHasBeenSet() const;

                    /**
                     * 获取Whether the physical backup needs encryption, optional values: on - yes, off - no. This value is meaningful only when BackupMethod is physical. If not specified, use the default encryption policy of instance backup. Here, the default encryption policy refers to the current instance encryption policy queried via the api for the query [DescribeBackupEncryptionStatus](https://www.tencentcloud.com/document/product/236/86508?from_cn_redirect=1).
                     * @return EncryptionFlag Whether the physical backup needs encryption, optional values: on - yes, off - no. This value is meaningful only when BackupMethod is physical. If not specified, use the default encryption policy of instance backup. Here, the default encryption policy refers to the current instance encryption policy queried via the api for the query [DescribeBackupEncryptionStatus](https://www.tencentcloud.com/document/product/236/86508?from_cn_redirect=1).
                     * 
                     */
                    std::string GetEncryptionFlag() const;

                    /**
                     * 设置Whether the physical backup needs encryption, optional values: on - yes, off - no. This value is meaningful only when BackupMethod is physical. If not specified, use the default encryption policy of instance backup. Here, the default encryption policy refers to the current instance encryption policy queried via the api for the query [DescribeBackupEncryptionStatus](https://www.tencentcloud.com/document/product/236/86508?from_cn_redirect=1).
                     * @param _encryptionFlag Whether the physical backup needs encryption, optional values: on - yes, off - no. This value is meaningful only when BackupMethod is physical. If not specified, use the default encryption policy of instance backup. Here, the default encryption policy refers to the current instance encryption policy queried via the api for the query [DescribeBackupEncryptionStatus](https://www.tencentcloud.com/document/product/236/86508?from_cn_redirect=1).
                     * 
                     */
                    void SetEncryptionFlag(const std::string& _encryptionFlag);

                    /**
                     * 判断参数 EncryptionFlag 是否已赋值
                     * @return EncryptionFlag 是否已赋值
                     * 
                     */
                    bool EncryptionFlagHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Target backup method. Valid values: `logical` (logical cold backup), `physical` (physical cold backup), `snapshot` (snapshot backup). Basic Edition instances only support snapshot backups.
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Database table information to be backed up. If this parameter is not set, the whole instance is backed up by default. This parameter can only be set when BackupMethod=logical. The specified database and tables must exist. Otherwise, backup may fail.
If necessary to back up tables tb1 and tb2 in database db1 and database db2, configure the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"}].
                     */
                    std::vector<BackupItem> m_backupDBTableList;
                    bool m_backupDBTableListHasBeenSet;

                    /**
                     * Manually back up the alias. Keep the input length within 60 characters.
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                    /**
                     * Whether the physical backup needs encryption, optional values: on - yes, off - no. This value is meaningful only when BackupMethod is physical. If not specified, use the default encryption policy of instance backup. Here, the default encryption policy refers to the current instance encryption policy queried via the api for the query [DescribeBackupEncryptionStatus](https://www.tencentcloud.com/document/product/236/86508?from_cn_redirect=1).
                     */
                    std::string m_encryptionFlag;
                    bool m_encryptionFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEBACKUPREQUEST_H_
