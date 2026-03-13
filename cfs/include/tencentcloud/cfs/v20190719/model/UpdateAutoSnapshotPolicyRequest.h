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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateAutoSnapshotPolicy request structure.
                */
                class UpdateAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UpdateAutoSnapshotPolicyRequest();
                    ~UpdateAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unbound snapshot policy ID, which can be obtained by querying through the [DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1) api.
                     * @return AutoSnapshotPolicyId Unbound snapshot policy ID, which can be obtained by querying through the [DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置Unbound snapshot policy ID, which can be obtained by querying through the [DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1) api.
                     * @param _autoSnapshotPolicyId Unbound snapshot policy ID, which can be obtained by querying through the [DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1) api.
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取Snapshot policy name, no more than 64 characters.
                     * @return PolicyName Snapshot policy name, no more than 64 characters.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Snapshot policy name, no more than 64 characters.
                     * @param _policyName Snapshot policy name, no more than 64 characters.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取Snapshot periodic backup, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * @return DayOfWeek Snapshot periodic backup, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置Snapshot periodic backup, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * @param _dayOfWeek Snapshot periodic backup, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取The hour of a day at which to regularly back up the snapshot
                     * @return Hour The hour of a day at which to regularly back up the snapshot
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置The hour of a day at which to regularly back up the snapshot
                     * @param _hour The hour of a day at which to regularly back up the snapshot
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
                     * 获取Snapshot retention days.
                     * @return AliveDays Snapshot retention days.
                     * 
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置Snapshot retention days.
                     * @param _aliveDays Snapshot retention days.
                     * 
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     * 
                     */
                    bool AliveDaysHasBeenSet() const;

                    /**
                     * 获取Whether the periodic snapshot function is activated; 1 indicates activate, 0 indicates inactive.
                     * @return IsActivated Whether the periodic snapshot function is activated; 1 indicates activate, 0 indicates inactive.
                     * 
                     */
                    uint64_t GetIsActivated() const;

                    /**
                     * 设置Whether the periodic snapshot function is activated; 1 indicates activate, 0 indicates inactive.
                     * @param _isActivated Whether the periodic snapshot function is activated; 1 indicates activate, 0 indicates inactive.
                     * 
                     */
                    void SetIsActivated(const uint64_t& _isActivated);

                    /**
                     * 判断参数 IsActivated 是否已赋值
                     * @return IsActivated 是否已赋值
                     * 
                     */
                    bool IsActivatedHasBeenSet() const;

                    /**
                     * 获取Scheduled snapshot creates a snapshot on the day of the month. this parameter is used in combination with DayOfWeek and IntervalDays. choose one of the three.
                     * @return DayOfMonth Scheduled snapshot creates a snapshot on the day of the month. this parameter is used in combination with DayOfWeek and IntervalDays. choose one of the three.
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置Scheduled snapshot creates a snapshot on the day of the month. this parameter is used in combination with DayOfWeek and IntervalDays. choose one of the three.
                     * @param _dayOfMonth Scheduled snapshot creates a snapshot on the day of the month. this parameter is used in combination with DayOfWeek and IntervalDays. choose one of the three.
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取Periodically execute snapshots at interval days. this parameter is used in combination with DayOfWeek and DayOfMonth. choose one of the three.
                     * @return IntervalDays Periodically execute snapshots at interval days. this parameter is used in combination with DayOfWeek and DayOfMonth. choose one of the three.
                     * 
                     */
                    uint64_t GetIntervalDays() const;

                    /**
                     * 设置Periodically execute snapshots at interval days. this parameter is used in combination with DayOfWeek and DayOfMonth. choose one of the three.
                     * @param _intervalDays Periodically execute snapshots at interval days. this parameter is used in combination with DayOfWeek and DayOfMonth. choose one of the three.
                     * 
                     */
                    void SetIntervalDays(const uint64_t& _intervalDays);

                    /**
                     * 判断参数 IntervalDays 是否已赋值
                     * @return IntervalDays 是否已赋值
                     * 
                     */
                    bool IntervalDaysHasBeenSet() const;

                private:

                    /**
                     * Unbound snapshot policy ID, which can be obtained by querying through the [DescribeAutoSnapshotPolicies](https://www.tencentcloud.com/document/api/582/80208?from_cn_redirect=1) api.
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * Snapshot policy name, no more than 64 characters.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Snapshot periodic backup, monday to sunday. 1 represents monday, 7 represents sunday. choose one from three: DayOfMonth, IntervalDays.
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * The hour of a day at which to regularly back up the snapshot
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * Snapshot retention days.
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                    /**
                     * Whether the periodic snapshot function is activated; 1 indicates activate, 0 indicates inactive.
                     */
                    uint64_t m_isActivated;
                    bool m_isActivatedHasBeenSet;

                    /**
                     * Scheduled snapshot creates a snapshot on the day of the month. this parameter is used in combination with DayOfWeek and IntervalDays. choose one of the three.
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * Periodically execute snapshots at interval days. this parameter is used in combination with DayOfWeek and DayOfMonth. choose one of the three.
                     */
                    uint64_t m_intervalDays;
                    bool m_intervalDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATEAUTOSNAPSHOTPOLICYREQUEST_H_
