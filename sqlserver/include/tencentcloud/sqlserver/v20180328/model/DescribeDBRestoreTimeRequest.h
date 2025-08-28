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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBRESTORETIMEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBRESTORETIMEREQUEST_H_

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
                * DescribeDBRestoreTime request structure.
                */
                class DescribeDBRestoreTimeRequest : public AbstractModel
                {
                public:
                    DescribeDBRestoreTimeRequest();
                    ~DescribeDBRestoreTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Original instance ID.
                     * @return InstanceId Original instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Original instance ID.
                     * @param _instanceId Original instance ID.
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
                     * 获取ID of the target instance for rollback. If this parameter is left unspecified, roll back to the original instance by default.
                     * @return TargetInstanceId ID of the target instance for rollback. If this parameter is left unspecified, roll back to the original instance by default.
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置ID of the target instance for rollback. If this parameter is left unspecified, roll back to the original instance by default.
                     * @param _targetInstanceId ID of the target instance for rollback. If this parameter is left unspecified, roll back to the original instance by default.
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
                     * 获取Queries databases that can be rolled back by time point, with the time format of YYYY-MM-DD HH:MM:SS. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * @return Time Queries databases that can be rolled back by time point, with the time format of YYYY-MM-DD HH:MM:SS. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Queries databases that can be rolled back by time point, with the time format of YYYY-MM-DD HH:MM:SS. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * @param _time Queries databases that can be rolled back by time point, with the time format of YYYY-MM-DD HH:MM:SS. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Queries databases that can be rolled back by backup set ID, which can be obtained through the DescribeBackups API. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * @return BackupId Queries databases that can be rolled back by backup set ID, which can be obtained through the DescribeBackups API. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Queries databases that can be rolled back by backup set ID, which can be obtained through the DescribeBackups API. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     * @param _backupId Queries databases that can be rolled back by backup set ID, which can be obtained through the DescribeBackups API. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
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
                     * 获取Database name.
                     * @return DBName Database name.
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置Database name.
                     * @param _dBName Database name.
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                private:

                    /**
                     * Original instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ID of the target instance for rollback. If this parameter is left unspecified, roll back to the original instance by default.
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * Queries databases that can be rolled back by time point, with the time format of YYYY-MM-DD HH:MM:SS. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Queries databases that can be rolled back by backup set ID, which can be obtained through the DescribeBackups API. Either BackupId or Time should be specified, as they cannot be empty simultaneously.
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBRESTORETIMEREQUEST_H_
