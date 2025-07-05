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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BASEBACKUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BASEBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Database data backup information
                */
                class BaseBackup : public AbstractModel
                {
                public:
                    BaseBackup();
                    ~BaseBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _dBInstanceId Instance ID
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
                     * 获取Unique ID of a backup file
                     * @return Id Unique ID of a backup file
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique ID of a backup file
                     * @param _id Unique ID of a backup file
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Backup file name.
                     * @return Name Backup file name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Backup file name.
                     * @param _name Backup file name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Backup method, including physical and logical.
                     * @return BackupMethod Backup method, including physical and logical.
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Backup method, including physical and logical.
                     * @param _backupMethod Backup method, including physical and logical.
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
                     * 获取Backup mode, including automatic and manual.
                     * @return BackupMode Backup mode, including automatic and manual.
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置Backup mode, including automatic and manual.
                     * @param _backupMode Backup mode, including automatic and manual.
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                    /**
                     * 获取Backup task status
                     * @return State Backup task status
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Backup task status
                     * @param _state Backup task status
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Backup set size in bytes
                     * @return Size Backup set size in bytes
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Backup set size in bytes
                     * @param _size Backup set size in bytes
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Backup start time
                     * @return StartTime Backup start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Backup start time
                     * @param _startTime Backup start time
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
                     * 获取Backup end time
                     * @return FinishTime Backup end time
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置Backup end time
                     * @param _finishTime Backup end time
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取Backup expiration time
                     * @return ExpireTime Backup expiration time
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Backup expiration time
                     * @param _expireTime Backup expiration time
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Unique ID of a backup file
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Backup file name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backup method, including physical and logical.
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * Backup mode, including automatic and manual.
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                    /**
                     * Backup task status
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Backup set size in bytes
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Backup start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Backup end time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Backup expiration time
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BASEBACKUP_H_
