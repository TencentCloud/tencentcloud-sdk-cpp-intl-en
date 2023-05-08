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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_

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
                * DescribeDBInstancesAttribute response structure.
                */
                class DescribeDBInstancesAttributeResponse : public AbstractModel
                {
                public:
                    DescribeDBInstancesAttributeResponse();
                    ~DescribeDBInstancesAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Archive backup status. Valid values: `enable` (enabled), `disable` (disabled)
                     * @return RegularBackupEnable Archive backup status. Valid values: `enable` (enabled), `disable` (disabled)
                     */
                    std::string GetRegularBackupEnable() const;

                    /**
                     * 判断参数 RegularBackupEnable 是否已赋值
                     * @return RegularBackupEnable 是否已赋值
                     */
                    bool RegularBackupEnableHasBeenSet() const;

                    /**
                     * 获取Archive backup retention period: [90-3650] days
                     * @return RegularBackupSaveDays Archive backup retention period: [90-3650] days
                     */
                    uint64_t GetRegularBackupSaveDays() const;

                    /**
                     * 判断参数 RegularBackupSaveDays 是否已赋值
                     * @return RegularBackupSaveDays 是否已赋值
                     */
                    bool RegularBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly).
                     * @return RegularBackupStrategy Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly).
                     */
                    std::string GetRegularBackupStrategy() const;

                    /**
                     * 判断参数 RegularBackupStrategy 是否已赋值
                     * @return RegularBackupStrategy 是否已赋值
                     */
                    bool RegularBackupStrategyHasBeenSet() const;

                    /**
                     * 获取The number of retained archive backups
                     * @return RegularBackupCounts The number of retained archive backups
                     */
                    uint64_t GetRegularBackupCounts() const;

                    /**
                     * 判断参数 RegularBackupCounts 是否已赋值
                     * @return RegularBackupCounts 是否已赋值
                     */
                    bool RegularBackupCountsHasBeenSet() const;

                    /**
                     * 获取Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     * @return RegularBackupStartTime Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     */
                    std::string GetRegularBackupStartTime() const;

                    /**
                     * 判断参数 RegularBackupStartTime 是否已赋值
                     * @return RegularBackupStartTime 是否已赋值
                     */
                    bool RegularBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取Block process threshold in milliseconds
                     * @return BlockedThreshold Block process threshold in milliseconds
                     */
                    int64_t GetBlockedThreshold() const;

                    /**
                     * 判断参数 BlockedThreshold 是否已赋值
                     * @return BlockedThreshold 是否已赋值
                     */
                    bool BlockedThresholdHasBeenSet() const;

                    /**
                     * 获取Retention period for the files of slow SQL, blocking, deadlock, and extended events.
                     * @return EventSaveDays Retention period for the files of slow SQL, blocking, deadlock, and extended events.
                     */
                    int64_t GetEventSaveDays() const;

                    /**
                     * 判断参数 EventSaveDays 是否已赋值
                     * @return EventSaveDays 是否已赋值
                     */
                    bool EventSaveDaysHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Archive backup status. Valid values: `enable` (enabled), `disable` (disabled)
                     */
                    std::string m_regularBackupEnable;
                    bool m_regularBackupEnableHasBeenSet;

                    /**
                     * Archive backup retention period: [90-3650] days
                     */
                    uint64_t m_regularBackupSaveDays;
                    bool m_regularBackupSaveDaysHasBeenSet;

                    /**
                     * Archive backup policy. Valid values: `years` (yearly); `quarters (quarterly); `months` (monthly).
                     */
                    std::string m_regularBackupStrategy;
                    bool m_regularBackupStrategyHasBeenSet;

                    /**
                     * The number of retained archive backups
                     */
                    uint64_t m_regularBackupCounts;
                    bool m_regularBackupCountsHasBeenSet;

                    /**
                     * Archive backup start date in YYYY-MM-DD format, which is the current time by default.
                     */
                    std::string m_regularBackupStartTime;
                    bool m_regularBackupStartTimeHasBeenSet;

                    /**
                     * Block process threshold in milliseconds
                     */
                    int64_t m_blockedThreshold;
                    bool m_blockedThresholdHasBeenSet;

                    /**
                     * Retention period for the files of slow SQL, blocking, deadlock, and extended events.
                     */
                    int64_t m_eventSaveDays;
                    bool m_eventSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESATTRIBUTERESPONSE_H_
