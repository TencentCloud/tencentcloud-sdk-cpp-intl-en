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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_

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
                * ModifyBackupPlan request structure.
                */
                class ModifyBackupPlanRequest : public AbstractModel
                {
                public:
                    ModifyBackupPlanRequest();
                    ~ModifyBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
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
                     * 获取Backup retention period in days. Value range: 7-1830
                     * @return BaseBackupRetentionPeriod Backup retention period in days. Value range: 7-1830
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置Backup retention period in days. Value range: 7-1830
                     * @param _baseBackupRetentionPeriod Backup retention period in days. Value range: 7-1830
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
                     * 获取Instance backup period. if by week, format is lowercase english word of week and set at least two days for backup. if by month, format is digits such as ["1","2"].
                     * @return BackupPeriod Instance backup period. if by week, format is lowercase english word of week and set at least two days for backup. if by month, format is digits such as ["1","2"].
                     * 
                     */
                    std::vector<std::string> GetBackupPeriod() const;

                    /**
                     * 设置Instance backup period. if by week, format is lowercase english word of week and set at least two days for backup. if by month, format is digits such as ["1","2"].
                     * @param _backupPeriod Instance backup period. if by week, format is lowercase english word of week and set at least two days for backup. if by month, format is digits such as ["1","2"].
                     * 
                     */
                    void SetBackupPeriod(const std::vector<std::string>& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     * 
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取Instance log backup retention duration, with a value range of 7-1830 and a unit of day
                     * @return LogBackupRetentionPeriod Instance log backup retention duration, with a value range of 7-1830 and a unit of day
                     * 
                     */
                    uint64_t GetLogBackupRetentionPeriod() const;

                    /**
                     * 设置Instance log backup retention duration, with a value range of 7-1830 and a unit of day
                     * @param _logBackupRetentionPeriod Instance log backup retention duration, with a value range of 7-1830 and a unit of day
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
                     * 获取Backup plan ID. specifies which backup plan to modify. if left empty, the default backup plan will be modified.
                     * @return PlanId Backup plan ID. specifies which backup plan to modify. if left empty, the default backup plan will be modified.
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Backup plan ID. specifies which backup plan to modify. if left empty, the default backup plan will be modified.
                     * @param _planId Backup plan ID. specifies which backup plan to modify. if left empty, the default backup plan will be modified.
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
                     * 获取Specifies the name of the backup plan to modify.
                     * @return PlanName Specifies the name of the backup plan to modify.
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Specifies the name of the backup plan to modify.
                     * @param _planName Specifies the name of the backup plan to modify.
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

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
                     * Backup retention period in days. Value range: 7-1830
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * Instance backup period. if by week, format is lowercase english word of week and set at least two days for backup. if by month, format is digits such as ["1","2"].
                     */
                    std::vector<std::string> m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * Instance log backup retention duration, with a value range of 7-1830 and a unit of day
                     */
                    uint64_t m_logBackupRetentionPeriod;
                    bool m_logBackupRetentionPeriodHasBeenSet;

                    /**
                     * Backup plan ID. specifies which backup plan to modify. if left empty, the default backup plan will be modified.
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Specifies the name of the backup plan to modify.
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYBACKUPPLANREQUEST_H_
