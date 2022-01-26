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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backup method of target instance. Value range: logical (logical cold backup), physical (physical cold backup).
                     * @return BackupMethod Backup method of target instance. Value range: logical (logical cold backup), physical (physical cold backup).
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Backup method of target instance. Value range: logical (logical cold backup), physical (physical cold backup).
                     * @param BackupMethod Backup method of target instance. Value range: logical (logical cold backup), physical (physical cold backup).
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取Information of the table to be backed up. If this parameter is not set, the entire instance will be backed up by default. It can be set only in logical backup (i.e., BackupMethod = logical). The specified table must exist; otherwise, backup may fail.
For example, if you want to backup tb1 and tb2 in db1 and the entire db2, you should set the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"} ].
                     * @return BackupDBTableList Information of the table to be backed up. If this parameter is not set, the entire instance will be backed up by default. It can be set only in logical backup (i.e., BackupMethod = logical). The specified table must exist; otherwise, backup may fail.
For example, if you want to backup tb1 and tb2 in db1 and the entire db2, you should set the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"} ].
                     */
                    std::vector<BackupItem> GetBackupDBTableList() const;

                    /**
                     * 设置Information of the table to be backed up. If this parameter is not set, the entire instance will be backed up by default. It can be set only in logical backup (i.e., BackupMethod = logical). The specified table must exist; otherwise, backup may fail.
For example, if you want to backup tb1 and tb2 in db1 and the entire db2, you should set the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"} ].
                     * @param BackupDBTableList Information of the table to be backed up. If this parameter is not set, the entire instance will be backed up by default. It can be set only in logical backup (i.e., BackupMethod = logical). The specified table must exist; otherwise, backup may fail.
For example, if you want to backup tb1 and tb2 in db1 and the entire db2, you should set the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"} ].
                     */
                    void SetBackupDBTableList(const std::vector<BackupItem>& _backupDBTableList);

                    /**
                     * 判断参数 BackupDBTableList 是否已赋值
                     * @return BackupDBTableList 是否已赋值
                     */
                    bool BackupDBTableListHasBeenSet() const;

                    /**
                     * 获取Manual backup alias
                     * @return ManualBackupName Manual backup alias
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置Manual backup alias
                     * @param ManualBackupName Manual backup alias
                     */
                    void SetManualBackupName(const std::string& _manualBackupName);

                    /**
                     * 判断参数 ManualBackupName 是否已赋值
                     * @return ManualBackupName 是否已赋值
                     */
                    bool ManualBackupNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup method of target instance. Value range: logical (logical cold backup), physical (physical cold backup).
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Information of the table to be backed up. If this parameter is not set, the entire instance will be backed up by default. It can be set only in logical backup (i.e., BackupMethod = logical). The specified table must exist; otherwise, backup may fail.
For example, if you want to backup tb1 and tb2 in db1 and the entire db2, you should set the parameter as [{"Db": "db1", "Table": "tb1"}, {"Db": "db1", "Table": "tb2"}, {"Db": "db2"} ].
                     */
                    std::vector<BackupItem> m_backupDBTableList;
                    bool m_backupDBTableListHasBeenSet;

                    /**
                     * Manual backup alias
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEBACKUPREQUEST_H_
