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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_

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
                * Backup plan
                */
                class BackupPlan : public AbstractModel
                {
                public:
                    BackupPlan();
                    ~BackupPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup cycle
                     * @return BackupPeriod Backup cycle
                     * 
                     */
                    std::string GetBackupPeriod() const;

                    /**
                     * 设置Backup cycle
                     * @param _backupPeriod Backup cycle
                     * 
                     */
                    void SetBackupPeriod(const std::string& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     * 
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取Specifies the data backup retention duration in days.
                     * @return BaseBackupRetentionPeriod Specifies the data backup retention duration in days.
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置Specifies the data backup retention duration in days.
                     * @param _baseBackupRetentionPeriod Specifies the data backup retention duration in days.
                     * 
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取The earliest time to start a backup
                     * @return MinBackupStartTime The earliest time to start a backup
                     * 
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置The earliest time to start a backup
                     * @param _minBackupStartTime The earliest time to start a backup
                     * 
                     */
                    void SetMinBackupStartTime(const std::string& _minBackupStartTime);

                    /**
                     * 判断参数 MinBackupStartTime 是否已赋值
                     * @return MinBackupStartTime 是否已赋值
                     * 
                     */
                    bool MinBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取The latest time to start a backup
                     * @return MaxBackupStartTime The latest time to start a backup
                     * 
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置The latest time to start a backup
                     * @param _maxBackupStartTime The latest time to start a backup
                     * 
                     */
                    void SetMaxBackupStartTime(const std::string& _maxBackupStartTime);

                    /**
                     * 判断参数 MaxBackupStartTime 是否已赋值
                     * @return MaxBackupStartTime 是否已赋值
                     * 
                     */
                    bool MaxBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取Backup plan ID.
                     * @return PlanId Backup plan ID.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Backup plan ID.
                     * @param _planId Backup plan ID.
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Specifies the custom name of the backup plan.
                     * @return PlanName Specifies the custom name of the backup plan.
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Specifies the custom name of the backup plan.
                     * @param _planName Specifies the custom name of the backup plan.
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取Specifies the log backup retention period in days.
                     * @return LogBackupRetentionPeriod Specifies the log backup retention period in days.
                     * 
                     */
                    uint64_t GetLogBackupRetentionPeriod() const;

                    /**
                     * 设置Specifies the log backup retention period in days.
                     * @param _logBackupRetentionPeriod Specifies the log backup retention period in days.
                     * 
                     */
                    void SetLogBackupRetentionPeriod(const uint64_t& _logBackupRetentionPeriod);

                    /**
                     * 判断参数 LogBackupRetentionPeriod 是否已赋值
                     * @return LogBackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool LogBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreatedTime Creation time.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createdTime Creation time.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last modification time.
                     * @return UpdatedTime Last modification time.
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置Last modification time.
                     * @param _updatedTime Last modification time.
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取Backup plan type. valid values: default (created by system), custom.
                     * @return PlanType Backup plan type. valid values: default (created by system), custom.
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置Backup plan type. valid values: default (created by system), custom.
                     * @param _planType Backup plan type. valid values: default (created by system), custom.
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取Backup cycle type. valid values: week, month.
                     * @return BackupPeriodType Backup cycle type. valid values: week, month.
                     * 
                     */
                    std::string GetBackupPeriodType() const;

                    /**
                     * 设置Backup cycle type. valid values: week, month.
                     * @param _backupPeriodType Backup cycle type. valid values: week, month.
                     * 
                     */
                    void SetBackupPeriodType(const std::string& _backupPeriodType);

                    /**
                     * 判断参数 BackupPeriodType 是否已赋值
                     * @return BackupPeriodType 是否已赋值
                     * 
                     */
                    bool BackupPeriodTypeHasBeenSet() const;

                private:

                    /**
                     * Backup cycle
                     */
                    std::string m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * Specifies the data backup retention duration in days.
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * The earliest time to start a backup
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * The latest time to start a backup
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * Backup plan ID.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Specifies the custom name of the backup plan.
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Specifies the log backup retention period in days.
                     */
                    uint64_t m_logBackupRetentionPeriod;
                    bool m_logBackupRetentionPeriodHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last modification time.
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * Backup plan type. valid values: default (created by system), custom.
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * Backup cycle type. valid values: week, month.
                     */
                    std::string m_backupPeriodType;
                    bool m_backupPeriodTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
