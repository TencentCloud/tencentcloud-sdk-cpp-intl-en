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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATERANSOMDEFENSESTRATEGYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATERANSOMDEFENSESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RansomDefenseStrategyMachineInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateRansomDefenseStrategy request structure.
                */
                class CreateRansomDefenseStrategyRequest : public AbstractModel
                {
                public:
                    CreateRansomDefenseStrategyRequest();
                    ~CreateRansomDefenseStrategyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Scheduled snapshot execution time (0-23): 01:00; 23:00.
                     * @return Hour Scheduled snapshot execution time (0-23): 01:00; 23:00.
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置Scheduled snapshot execution time (0-23): 01:00; 23:00.
                     * @param _hour Scheduled snapshot execution time (0-23): 01:00; 23:00.
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
                     * 获取Policy ID: Modify the policy when filling in the ID. Otherwise, add a new policy.
                     * @return Id Policy ID: Modify the policy when filling in the ID. Otherwise, add a new policy.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Policy ID: Modify the policy when filling in the ID. Otherwise, add a new policy.
                     * @param _id Policy ID: Modify the policy when filling in the ID. Otherwise, add a new policy.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Policy Remarks
                     * @return Description Policy Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy Remarks
                     * @param _description Policy Remarks
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
                     * 获取Whether to enable: 0 Off, 1 On.
                     * @return Status Whether to enable: 0 Off, 1 On.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Whether to enable: 0 Off, 1 On.
                     * @param _status Whether to enable: 0 Off, 1 On.
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
                     * 获取Apply to all machines or not. 0: No; 1: Yes
                     * @return IsAll Apply to all machines or not. 0: No; 1: Yes
                     * 
                     */
                    uint64_t GetIsAll() const;

                    /**
                     * 设置Apply to all machines or not. 0: No; 1: Yes
                     * @param _isAll Apply to all machines or not. 0: No; 1: Yes
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
                     * 获取Include directories, separated by semicolons (;).
                     * @return IncludeDir Include directories, separated by semicolons (;).
                     * 
                     */
                    std::string GetIncludeDir() const;

                    /**
                     * 设置Include directories, separated by semicolons (;).
                     * @param _includeDir Include directories, separated by semicolons (;).
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
                     * 获取Exclude directories, separated by semicolons (;).
                     * @return ExcludeDir Exclude directories, separated by semicolons (;).
                     * 
                     */
                    std::string GetExcludeDir() const;

                    /**
                     * 设置Exclude directories, separated by semicolons (;).
                     * @param _excludeDir Exclude directories, separated by semicolons (;).
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
                     * @return BackupType Backup pattern: 0 weekly, 1 daily.
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置Backup pattern: 0 weekly, 1 daily.
                     * @param _backupType Backup pattern: 0 weekly, 1 daily.
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
                     * 获取Scheduled task execution days in a week (1-7): 1; 2; 7.
                     * @return Weekday Scheduled task execution days in a week (1-7): 1; 2; 7.
                     * 
                     */
                    std::string GetWeekday() const;

                    /**
                     * 设置Scheduled task execution days in a week (1-7): 1; 2; 7.
                     * @param _weekday Scheduled task execution days in a week (1-7): 1; 2; 7.
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
                     * 获取Retention Period: 0 Permanent.
                     * @return SaveDay Retention Period: 0 Permanent.
                     * 
                     */
                    uint64_t GetSaveDay() const;

                    /**
                     * 设置Retention Period: 0 Permanent.
                     * @param _saveDay Retention Period: 0 Permanent.
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
                     * 获取Bound Host List
                     * @return Machines Bound Host List
                     * 
                     */
                    std::vector<RansomDefenseStrategyMachineInfo> GetMachines() const;

                    /**
                     * 设置Bound Host List
                     * @param _machines Bound Host List
                     * 
                     */
                    void SetMachines(const std::vector<RansomDefenseStrategyMachineInfo>& _machines);

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                private:

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Scheduled snapshot execution time (0-23): 01:00; 23:00.
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Policy ID: Modify the policy when filling in the ID. Otherwise, add a new policy.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Policy Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether to enable: 0 Off, 1 On.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Apply to all machines or not. 0: No; 1: Yes
                     */
                    uint64_t m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * Include directories, separated by semicolons (;).
                     */
                    std::string m_includeDir;
                    bool m_includeDirHasBeenSet;

                    /**
                     * Exclude directories, separated by semicolons (;).
                     */
                    std::string m_excludeDir;
                    bool m_excludeDirHasBeenSet;

                    /**
                     * Backup pattern: 0 weekly, 1 daily.
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Scheduled task execution days in a week (1-7): 1; 2; 7.
                     */
                    std::string m_weekday;
                    bool m_weekdayHasBeenSet;

                    /**
                     * Retention Period: 0 Permanent.
                     */
                    uint64_t m_saveDay;
                    bool m_saveDayHasBeenSet;

                    /**
                     * Bound Host List
                     */
                    std::vector<RansomDefenseStrategyMachineInfo> m_machines;
                    bool m_machinesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATERANSOMDEFENSESTRATEGYREQUEST_H_
