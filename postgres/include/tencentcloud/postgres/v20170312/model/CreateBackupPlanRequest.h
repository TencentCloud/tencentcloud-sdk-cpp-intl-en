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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBACKUPPLANREQUEST_H_

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
                * CreateBackupPlan request structure.
                */
                class CreateBackupPlanRequest : public AbstractModel
                {
                public:
                    CreateBackupPlanRequest();
                    ~CreateBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
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
                     * 获取Specifies the name of the backup plan.
                     * @return PlanName Specifies the name of the backup plan.
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Specifies the name of the backup plan.
                     * @param _planName Specifies the name of the backup plan.
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
                     * 获取Specifies the schedule type of the backup created. currently only support month.
                     * @return BackupPeriodType Specifies the schedule type of the backup created. currently only support month.
                     * 
                     */
                    std::string GetBackupPeriodType() const;

                    /**
                     * 设置Specifies the schedule type of the backup created. currently only support month.
                     * @param _backupPeriodType Specifies the schedule type of the backup created. currently only support month.
                     * 
                     */
                    void SetBackupPeriodType(const std::string& _backupPeriodType);

                    /**
                     * 判断参数 BackupPeriodType 是否已赋值
                     * @return BackupPeriodType 是否已赋值
                     * 
                     */
                    bool BackupPeriodTypeHasBeenSet() const;

                    /**
                     * 获取Backup date. example: enable backup on the 2nd of every month.
                     * @return BackupPeriod Backup date. example: enable backup on the 2nd of every month.
                     * 
                     */
                    std::vector<std::string> GetBackupPeriod() const;

                    /**
                     * 设置Backup date. example: enable backup on the 2nd of every month.
                     * @param _backupPeriod Backup date. example: enable backup on the 2nd of every month.
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
                     * 获取Specifies the backup start time. if not passed, it follows the default backup plan.
                     * @return MinBackupStartTime Specifies the backup start time. if not passed, it follows the default backup plan.
                     * 
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置Specifies the backup start time. if not passed, it follows the default backup plan.
                     * @param _minBackupStartTime Specifies the backup start time. if not passed, it follows the default backup plan.
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
                     * 获取Backup end time. follows the default plan if not specified.
                     * @return MaxBackupStartTime Backup end time. follows the default plan if not specified.
                     * 
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置Backup end time. follows the default plan if not specified.
                     * @param _maxBackupStartTime Backup end time. follows the default plan if not specified.
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
                     * 获取Specifies the data backup retention duration in days. value range: [0,30000).
BackupPeriodType defaults to 7 when set to week and 31 when set to month.
                     * @return BaseBackupRetentionPeriod Specifies the data backup retention duration in days. value range: [0,30000).
BackupPeriodType defaults to 7 when set to week and 31 when set to month.
                     * 
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置Specifies the data backup retention duration in days. value range: [0,30000).
BackupPeriodType defaults to 7 when set to week and 31 when set to month.
                     * @param _baseBackupRetentionPeriod Specifies the data backup retention duration in days. value range: [0,30000).
BackupPeriodType defaults to 7 when set to week and 31 when set to month.
                     * 
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/product/409/16773?lang=en).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Specifies the name of the backup plan.
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Specifies the schedule type of the backup created. currently only support month.
                     */
                    std::string m_backupPeriodType;
                    bool m_backupPeriodTypeHasBeenSet;

                    /**
                     * Backup date. example: enable backup on the 2nd of every month.
                     */
                    std::vector<std::string> m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * Specifies the backup start time. if not passed, it follows the default backup plan.
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * Backup end time. follows the default plan if not specified.
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                    /**
                     * Specifies the data backup retention duration in days. value range: [0,30000).
BackupPeriodType defaults to 7 when set to week and 31 when set to month.
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEBACKUPPLANREQUEST_H_
