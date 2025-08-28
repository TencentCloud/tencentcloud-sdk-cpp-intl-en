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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREGULARBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREGULARBACKUPPLANREQUEST_H_

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
                * DescribeRegularBackupPlan request structure.
                */
                class DescribeRegularBackupPlanRequest : public AbstractModel
                {
                public:
                    DescribeRegularBackupPlanRequest();
                    ~DescribeRegularBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Scheduled backup retention days, in the range of [90 - 3650]. The default value is 365.
                     * @return RegularBackupSaveDays Scheduled backup retention days, in the range of [90 - 3650]. The default value is 365.
                     * 
                     */
                    uint64_t GetRegularBackupSaveDays() const;

                    /**
                     * 设置Scheduled backup retention days, in the range of [90 - 3650]. The default value is 365.
                     * @param _regularBackupSaveDays Scheduled backup retention days, in the range of [90 - 3650]. The default value is 365.
                     * 
                     */
                    void SetRegularBackupSaveDays(const uint64_t& _regularBackupSaveDays);

                    /**
                     * 判断参数 RegularBackupSaveDays 是否已赋值
                     * @return RegularBackupSaveDays 是否已赋值
                     * 
                     */
                    bool RegularBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Scheduled backup policy. years - annually; quarters - quarterly; months - monthly. The default value is months.
                     * @return RegularBackupStrategy Scheduled backup policy. years - annually; quarters - quarterly; months - monthly. The default value is months.
                     * 
                     */
                    std::string GetRegularBackupStrategy() const;

                    /**
                     * 设置Scheduled backup policy. years - annually; quarters - quarterly; months - monthly. The default value is months.
                     * @param _regularBackupStrategy Scheduled backup policy. years - annually; quarters - quarterly; months - monthly. The default value is months.
                     * 
                     */
                    void SetRegularBackupStrategy(const std::string& _regularBackupStrategy);

                    /**
                     * 判断参数 RegularBackupStrategy 是否已赋值
                     * @return RegularBackupStrategy 是否已赋值
                     * 
                     */
                    bool RegularBackupStrategyHasBeenSet() const;

                    /**
                     * 获取Number of retained scheduled backups. The default value is 1.
                     * @return RegularBackupCounts Number of retained scheduled backups. The default value is 1.
                     * 
                     */
                    uint64_t GetRegularBackupCounts() const;

                    /**
                     * 设置Number of retained scheduled backups. The default value is 1.
                     * @param _regularBackupCounts Number of retained scheduled backups. The default value is 1.
                     * 
                     */
                    void SetRegularBackupCounts(const uint64_t& _regularBackupCounts);

                    /**
                     * 判断参数 RegularBackupCounts 是否已赋值
                     * @return RegularBackupCounts 是否已赋值
                     * 
                     */
                    bool RegularBackupCountsHasBeenSet() const;

                    /**
                     * 获取Scheduled backup start date, in the format of YYYY-MM-DD. The current date is used by default.
                     * @return RegularBackupStartTime Scheduled backup start date, in the format of YYYY-MM-DD. The current date is used by default.
                     * 
                     */
                    std::string GetRegularBackupStartTime() const;

                    /**
                     * 设置Scheduled backup start date, in the format of YYYY-MM-DD. The current date is used by default.
                     * @param _regularBackupStartTime Scheduled backup start date, in the format of YYYY-MM-DD. The current date is used by default.
                     * 
                     */
                    void SetRegularBackupStartTime(const std::string& _regularBackupStartTime);

                    /**
                     * 判断参数 RegularBackupStartTime 是否已赋值
                     * @return RegularBackupStartTime 是否已赋值
                     * 
                     */
                    bool RegularBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取Regular backup cycle.
                     * @return BackupCycle Regular backup cycle.
                     * 
                     */
                    std::vector<uint64_t> GetBackupCycle() const;

                    /**
                     * 设置Regular backup cycle.
                     * @param _backupCycle Regular backup cycle.
                     * 
                     */
                    void SetBackupCycle(const std::vector<uint64_t>& _backupCycle);

                    /**
                     * 判断参数 BackupCycle 是否已赋值
                     * @return BackupCycle 是否已赋值
                     * 
                     */
                    bool BackupCycleHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Scheduled backup retention days, in the range of [90 - 3650]. The default value is 365.
                     */
                    uint64_t m_regularBackupSaveDays;
                    bool m_regularBackupSaveDaysHasBeenSet;

                    /**
                     * Scheduled backup policy. years - annually; quarters - quarterly; months - monthly. The default value is months.
                     */
                    std::string m_regularBackupStrategy;
                    bool m_regularBackupStrategyHasBeenSet;

                    /**
                     * Number of retained scheduled backups. The default value is 1.
                     */
                    uint64_t m_regularBackupCounts;
                    bool m_regularBackupCountsHasBeenSet;

                    /**
                     * Scheduled backup start date, in the format of YYYY-MM-DD. The current date is used by default.
                     */
                    std::string m_regularBackupStartTime;
                    bool m_regularBackupStartTimeHasBeenSet;

                    /**
                     * Regular backup cycle.
                     */
                    std::vector<uint64_t> m_backupCycle;
                    bool m_backupCycleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEREGULARBACKUPPLANREQUEST_H_
