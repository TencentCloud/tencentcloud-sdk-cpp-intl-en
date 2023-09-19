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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBACKUPREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
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
                     * 获取Backup policy (0: instance backup, 1: multi-database backup)
                     * @return Strategy Backup policy (0: instance backup, 1: multi-database backup)
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Backup policy (0: instance backup, 1: multi-database backup)
                     * @param _strategy Backup policy (0: instance backup, 1: multi-database backup)
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取List of names of databases to be backed up (required only for multi-database backup)
                     * @return DBNames List of names of databases to be backed up (required only for multi-database backup)
                     * 
                     */
                    std::vector<std::string> GetDBNames() const;

                    /**
                     * 设置List of names of databases to be backed up (required only for multi-database backup)
                     * @param _dBNames List of names of databases to be backed up (required only for multi-database backup)
                     * 
                     */
                    void SetDBNames(const std::vector<std::string>& _dBNames);

                    /**
                     * 判断参数 DBNames 是否已赋值
                     * @return DBNames 是否已赋值
                     * 
                     */
                    bool DBNamesHasBeenSet() const;

                    /**
                     * 获取(Required) Instance ID in the format of mssql-i1z41iwd
                     * @return InstanceId (Required) Instance ID in the format of mssql-i1z41iwd
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置(Required) Instance ID in the format of mssql-i1z41iwd
                     * @param _instanceId (Required) Instance ID in the format of mssql-i1z41iwd
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
                     * 获取Backup name. If this parameter is left empty, a backup name in the format of "[Instance ID]_[Backup start timestamp]" will be automatically generated.
                     * @return BackupName Backup name. If this parameter is left empty, a backup name in the format of "[Instance ID]_[Backup start timestamp]" will be automatically generated.
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置Backup name. If this parameter is left empty, a backup name in the format of "[Instance ID]_[Backup start timestamp]" will be automatically generated.
                     * @param _backupName Backup name. If this parameter is left empty, a backup name in the format of "[Instance ID]_[Backup start timestamp]" will be automatically generated.
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return StorageStrategy 
                     * 
                     */
                    int64_t GetStorageStrategy() const;

                    /**
                     * 设置
                     * @param _storageStrategy 
                     * 
                     */
                    void SetStorageStrategy(const int64_t& _storageStrategy);

                    /**
                     * 判断参数 StorageStrategy 是否已赋值
                     * @return StorageStrategy 是否已赋值
                     * 
                     */
                    bool StorageStrategyHasBeenSet() const;

                private:

                    /**
                     * Backup policy (0: instance backup, 1: multi-database backup)
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * List of names of databases to be backed up (required only for multi-database backup)
                     */
                    std::vector<std::string> m_dBNames;
                    bool m_dBNamesHasBeenSet;

                    /**
                     * (Required) Instance ID in the format of mssql-i1z41iwd
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup name. If this parameter is left empty, a backup name in the format of "[Instance ID]_[Backup start timestamp]" will be automatically generated.
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_storageStrategy;
                    bool m_storageStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBACKUPREQUEST_H_
