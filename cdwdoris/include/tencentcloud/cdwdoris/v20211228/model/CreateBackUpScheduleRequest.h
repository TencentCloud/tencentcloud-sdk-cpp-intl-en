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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupTableContent.h>
#include <tencentcloud/cdwdoris/v20211228/model/DorisSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/CosSourceInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * CreateBackUpSchedule request structure.
                */
                class CreateBackUpScheduleRequest : public AbstractModel
                {
                public:
                    CreateBackUpScheduleRequest();
                    ~CreateBackUpScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Required to be uploaded when editing
                     * @return ScheduleId Required to be uploaded when editing
                     * 
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置Required to be uploaded when editing
                     * @param _scheduleId Required to be uploaded when editing
                     * 
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     * 
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取Selected weeks, separated by commas.
Discarded: Use ScheduleInfo.
                     * @return WeekDays Selected weeks, separated by commas.
Discarded: Use ScheduleInfo.
                     * 
                     */
                    std::string GetWeekDays() const;

                    /**
                     * 设置Selected weeks, separated by commas.
Discarded: Use ScheduleInfo.
                     * @param _weekDays Selected weeks, separated by commas.
Discarded: Use ScheduleInfo.
                     * 
                     */
                    void SetWeekDays(const std::string& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取Hour for executing the backup taskDiscarded: Use ScheduleInfo.
                     * @return ExecuteHour Hour for executing the backup taskDiscarded: Use ScheduleInfo.
                     * 
                     */
                    int64_t GetExecuteHour() const;

                    /**
                     * 设置Hour for executing the backup taskDiscarded: Use ScheduleInfo.
                     * @param _executeHour Hour for executing the backup taskDiscarded: Use ScheduleInfo.
                     * 
                     */
                    void SetExecuteHour(const int64_t& _executeHour);

                    /**
                     * 判断参数 ExecuteHour 是否已赋值
                     * @return ExecuteHour 是否已赋值
                     * 
                     */
                    bool ExecuteHourHasBeenSet() const;

                    /**
                     * 获取Backup table list
                     * @return BackUpTables Backup table list
                     * 
                     */
                    std::vector<BackupTableContent> GetBackUpTables() const;

                    /**
                     * 设置Backup table list
                     * @param _backUpTables Backup table list
                     * 
                     */
                    void SetBackUpTables(const std::vector<BackupTableContent>& _backUpTables);

                    /**
                     * 判断参数 BackUpTables 是否已赋值
                     * @return BackUpTables 是否已赋值
                     * 
                     */
                    bool BackUpTablesHasBeenSet() const;

                    /**
                     * 获取0: default; 1: one-time backup for the remote Doris
                     * @return BackupType 0: default; 1: one-time backup for the remote Doris
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置0: default; 1: one-time backup for the remote Doris
                     * @param _backupType 0: default; 1: one-time backup for the remote Doris
                     * 
                     */
                    void SetBackupType(const int64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Connection information of the remote doris cluster
                     * @return DorisSourceInfo Connection information of the remote doris cluster
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置Connection information of the remote doris cluster
                     * @param _dorisSourceInfo Connection information of the remote doris cluster
                     * 
                     */
                    void SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取0: default; 1: one-time backup; 2: remote backup
                     * @return BackupTimeType 0: default; 1: one-time backup; 2: remote backup
                     * 
                     */
                    int64_t GetBackupTimeType() const;

                    /**
                     * 设置0: default; 1: one-time backup; 2: remote backup
                     * @param _backupTimeType 0: default; 1: one-time backup; 2: remote backup
                     * 
                     */
                    void SetBackupTimeType(const int64_t& _backupTimeType);

                    /**
                     * 判断参数 BackupTimeType 是否已赋值
                     * @return BackupTimeType 是否已赋值
                     * 
                     */
                    bool BackupTimeTypeHasBeenSet() const;

                    /**
                     * 获取0: default; 1: immediate recovery after the backup is completed.
                     * @return RestoreType 0: default; 1: immediate recovery after the backup is completed.
                     * 
                     */
                    int64_t GetRestoreType() const;

                    /**
                     * 设置0: default; 1: immediate recovery after the backup is completed.
                     * @param _restoreType 0: default; 1: immediate recovery after the backup is completed.
                     * 
                     */
                    void SetRestoreType(const int64_t& _restoreType);

                    /**
                     * 判断参数 RestoreType 是否已赋值
                     * @return RestoreType 是否已赋值
                     * 
                     */
                    bool RestoreTypeHasBeenSet() const;

                    /**
                     * 获取0: default; 1: connecting to COS using a custom key.
                     * @return AuthType 0: default; 1: connecting to COS using a custom key.
                     * 
                     */
                    int64_t GetAuthType() const;

                    /**
                     * 设置0: default; 1: connecting to COS using a custom key.
                     * @param _authType 0: default; 1: connecting to COS using a custom key.
                     * 
                     */
                    void SetAuthType(const int64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取Cos certification information
                     * @return CosSourceInfo Cos certification information
                     * 
                     */
                    CosSourceInfo GetCosSourceInfo() const;

                    /**
                     * 设置Cos certification information
                     * @param _cosSourceInfo Cos certification information
                     * 
                     */
                    void SetCosSourceInfo(const CosSourceInfo& _cosSourceInfo);

                    /**
                     * 判断参数 CosSourceInfo 是否已赋值
                     * @return CosSourceInfo 是否已赋值
                     * 
                     */
                    bool CosSourceInfoHasBeenSet() const;

                private:

                    /**
                     * Required to be uploaded when editing
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * Selected weeks, separated by commas.
Discarded: Use ScheduleInfo.
                     */
                    std::string m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * Hour for executing the backup taskDiscarded: Use ScheduleInfo.
                     */
                    int64_t m_executeHour;
                    bool m_executeHourHasBeenSet;

                    /**
                     * Backup table list
                     */
                    std::vector<BackupTableContent> m_backUpTables;
                    bool m_backUpTablesHasBeenSet;

                    /**
                     * 0: default; 1: one-time backup for the remote Doris
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Connection information of the remote doris cluster
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * 0: default; 1: one-time backup; 2: remote backup
                     */
                    int64_t m_backupTimeType;
                    bool m_backupTimeTypeHasBeenSet;

                    /**
                     * 0: default; 1: immediate recovery after the backup is completed.
                     */
                    int64_t m_restoreType;
                    bool m_restoreTypeHasBeenSet;

                    /**
                     * 0: default; 1: connecting to COS using a custom key.
                     */
                    int64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Cos certification information
                     */
                    CosSourceInfo m_cosSourceInfo;
                    bool m_cosSourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
