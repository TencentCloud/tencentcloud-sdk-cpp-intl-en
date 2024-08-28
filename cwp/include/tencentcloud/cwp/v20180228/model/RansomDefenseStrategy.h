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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * The TagList node in the data HostList corresponding to the host list query API
                */
                class RansomDefenseStrategy : public AbstractModel
                {
                public:
                    RansomDefenseStrategy();
                    ~RansomDefenseStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
                     * @return Id Policy ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Policy ID
                     * @param _id Policy ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Operating UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uin Operating UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Operating UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uin Operating UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return Name Policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param _name Policy name
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
                     * 获取Policy Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Policy Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Policy Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Enabling Status: 0 Disabled, 1 Enabled.
                     * @return Status Enabling Status: 0 Disabled, 1 Enabled.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Enabling Status: 0 Disabled, 1 Enabled.
                     * @param _status Enabling Status: 0 Disabled, 1 Enabled.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether it takes effect for all hosts.
                     * @return IsAll Whether it takes effect for all hosts.
                     * 
                     */
                    uint64_t GetIsAll() const;

                    /**
                     * 设置Whether it takes effect for all hosts.
                     * @param _isAll Whether it takes effect for all hosts.
                     * 
                     */
                    void SetIsAll(const uint64_t& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncludeDir Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncludeDir() const;

                    /**
                     * 设置Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _includeDir Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIncludeDir(const std::string& _includeDir);

                    /**
                     * 判断参数 IncludeDir 是否已赋值
                     * @return IncludeDir 是否已赋值
                     * 
                     */
                    bool IncludeDirHasBeenSet() const;

                    /**
                     * 获取Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExcludeDir Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExcludeDir() const;

                    /**
                     * 设置Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _excludeDir Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExcludeDir(const std::string& _excludeDir);

                    /**
                     * 判断参数 ExcludeDir 是否已赋值
                     * @return ExcludeDir 是否已赋值
                     * 
                     */
                    bool ExcludeDirHasBeenSet() const;

                    /**
                     * 获取Backup pattern: 0 weekly, 1 daily.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupType Backup pattern: 0 weekly, 1 daily.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置Backup pattern: 0 weekly, 1 daily.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _backupType Backup pattern: 0 weekly, 1 daily.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBackupType(const uint64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup days in a week (1-7): 1; 2; 3; 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weekday Backup days in a week (1-7): 1; 2; 3; 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWeekday() const;

                    /**
                     * 设置Backup days in a week (1-7): 1; 2; 3; 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weekday Backup days in a week (1-7): 1; 2; 3; 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeekday(const std::string& _weekday);

                    /**
                     * 判断参数 Weekday 是否已赋值
                     * @return Weekday 是否已赋值
                     * 
                     */
                    bool WeekdayHasBeenSet() const;

                    /**
                     * 获取Backup Execution Time Point (0-23): 11:00; 12:00
                     * @return Hour Backup Execution Time Point (0-23): 11:00; 12:00
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置Backup Execution Time Point (0-23): 11:00; 12:00
                     * @param _hour Backup Execution Time Point (0-23): 11:00; 12:00
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取Storage Days, 0 for Permanent
                     * @return SaveDay Storage Days, 0 for Permanent
                     * 
                     */
                    uint64_t GetSaveDay() const;

                    /**
                     * 设置Storage Days, 0 for Permanent
                     * @param _saveDay Storage Days, 0 for Permanent
                     * 
                     */
                    void SetSaveDay(const uint64_t& _saveDay);

                    /**
                     * 判断参数 SaveDay 是否已赋值
                     * @return SaveDay 是否已赋值
                     * 
                     */
                    bool SaveDayHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Number of Bound Machines
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineCount Number of Bound Machines
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMachineCount() const;

                    /**
                     * 设置Number of Bound Machines
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineCount Number of Bound Machines
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineCount(const uint64_t& _machineCount);

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     * 
                     */
                    bool MachineCountHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Operating UIN
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Enabling Status: 0 Disabled, 1 Enabled.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether it takes effect for all hosts.
                     */
                    uint64_t m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_includeDir;
                    bool m_includeDirHasBeenSet;

                    /**
                     * Includes directories, separated by semicolons (;).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_excludeDir;
                    bool m_excludeDirHasBeenSet;

                    /**
                     * Backup pattern: 0 weekly, 1 daily.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup days in a week (1-7): 1; 2; 3; 4.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_weekday;
                    bool m_weekdayHasBeenSet;

                    /**
                     * Backup Execution Time Point (0-23): 11:00; 12:00
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Storage Days, 0 for Permanent
                     */
                    uint64_t m_saveDay;
                    bool m_saveDayHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Number of Bound Machines
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSESTRATEGY_H_
