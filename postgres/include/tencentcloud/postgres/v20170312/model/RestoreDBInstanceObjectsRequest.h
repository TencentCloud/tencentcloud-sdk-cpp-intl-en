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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESTOREDBINSTANCEOBJECTSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESTOREDBINSTANCEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RestoreDBInstanceObjects request structure.
                */
                class RestoreDBInstanceObjectsRequest : public AbstractModel
                {
                public:
                    RestoreDBInstanceObjectsRequest();
                    ~RestoreDBInstanceObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return DBInstanceId Instance ID.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _dBInstanceId Instance ID.
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取List of objects to be restored. If the object to be restored is named test, the restored name will be `test_bak_${LinuxTime}`. `${LinuxTime}` cannot be specified and is set by the system based on the Linux time at task initiation.
                     * @return RestoreObjects List of objects to be restored. If the object to be restored is named test, the restored name will be `test_bak_${LinuxTime}`. `${LinuxTime}` cannot be specified and is set by the system based on the Linux time at task initiation.
                     * 
                     */
                    std::vector<std::string> GetRestoreObjects() const;

                    /**
                     * 设置List of objects to be restored. If the object to be restored is named test, the restored name will be `test_bak_${LinuxTime}`. `${LinuxTime}` cannot be specified and is set by the system based on the Linux time at task initiation.
                     * @param _restoreObjects List of objects to be restored. If the object to be restored is named test, the restored name will be `test_bak_${LinuxTime}`. `${LinuxTime}` cannot be specified and is set by the system based on the Linux time at task initiation.
                     * 
                     */
                    void SetRestoreObjects(const std::vector<std::string>& _restoreObjects);

                    /**
                     * 判断参数 RestoreObjects 是否已赋值
                     * @return RestoreObjects 是否已赋值
                     * 
                     */
                    bool RestoreObjectsHasBeenSet() const;

                    /**
                     * 获取Backup set used for recovery. Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * @return BackupSetId Backup set used for recovery. Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置Backup set used for recovery. Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * @param _backupSetId Backup set used for recovery. Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取Recovery target time, Beijing Time (UTC+8). Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * @return RestoreTargetTime Recovery target time, Beijing Time (UTC+8). Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * 
                     */
                    std::string GetRestoreTargetTime() const;

                    /**
                     * 设置Recovery target time, Beijing Time (UTC+8). Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * @param _restoreTargetTime Recovery target time, Beijing Time (UTC+8). Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     * 
                     */
                    void SetRestoreTargetTime(const std::string& _restoreTargetTime);

                    /**
                     * 判断参数 RestoreTargetTime 是否已赋值
                     * @return RestoreTargetTime 是否已赋值
                     * 
                     */
                    bool RestoreTargetTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * List of objects to be restored. If the object to be restored is named test, the restored name will be `test_bak_${LinuxTime}`. `${LinuxTime}` cannot be specified and is set by the system based on the Linux time at task initiation.
                     */
                    std::vector<std::string> m_restoreObjects;
                    bool m_restoreObjectsHasBeenSet;

                    /**
                     * Backup set used for recovery. Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * Recovery target time, Beijing Time (UTC+8). Either `BackupSetId` or `RestoreTargetTime` must be provided, and only one can be passed.
                     */
                    std::string m_restoreTargetTime;
                    bool m_restoreTargetTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESTOREDBINSTANCEOBJECTSREQUEST_H_
