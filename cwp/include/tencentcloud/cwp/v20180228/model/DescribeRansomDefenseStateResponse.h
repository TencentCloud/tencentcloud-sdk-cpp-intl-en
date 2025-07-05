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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTATERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRansomDefenseState response structure.
                */
                class DescribeRansomDefenseStateResponse : public AbstractModel
                {
                public:
                    DescribeRansomDefenseStateResponse();
                    ~DescribeRansomDefenseStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of Activated Defense Policies
                     * @return StrategyCount Number of Activated Defense Policies
                     * 
                     */
                    uint64_t GetStrategyCount() const;

                    /**
                     * 判断参数 StrategyCount 是否已赋值
                     * @return StrategyCount 是否已赋值
                     * 
                     */
                    bool StrategyCountHasBeenSet() const;

                    /**
                     * 获取Number of Protected Machines
                     * @return MachineCount Number of Protected Machines
                     * 
                     */
                    uint64_t GetMachineCount() const;

                    /**
                     * 判断参数 MachineCount 是否已赋值
                     * @return MachineCount 是否已赋值
                     * 
                     */
                    bool MachineCountHasBeenSet() const;

                    /**
                     * 获取Total snapshot capacity
                     * @return SnapshotSize Total snapshot capacity
                     * 
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                    /**
                     * 获取Number of Backup Recovery Tasks
                     * @return RollBackTaskCount Number of Backup Recovery Tasks
                     * 
                     */
                    uint64_t GetRollBackTaskCount() const;

                    /**
                     * 判断参数 RollBackTaskCount 是否已赋值
                     * @return RollBackTaskCount 是否已赋值
                     * 
                     */
                    bool RollBackTaskCountHasBeenSet() const;

                    /**
                     * 获取Number of Snapshot Creation Tasks in Progress
                     * @return ProgressingSnapshotTaskCount Number of Snapshot Creation Tasks in Progress
                     * 
                     */
                    uint64_t GetProgressingSnapshotTaskCount() const;

                    /**
                     * 判断参数 ProgressingSnapshotTaskCount 是否已赋值
                     * @return ProgressingSnapshotTaskCount 是否已赋值
                     * 
                     */
                    bool ProgressingSnapshotTaskCountHasBeenSet() const;

                    /**
                     * 获取Number of Backup Recovery Tasks in Progress
                     * @return ProgressingRollBackTaskCount Number of Backup Recovery Tasks in Progress
                     * 
                     */
                    uint64_t GetProgressingRollBackTaskCount() const;

                    /**
                     * 判断参数 ProgressingRollBackTaskCount 是否已赋值
                     * @return ProgressingRollBackTaskCount 是否已赋值
                     * 
                     */
                    bool ProgressingRollBackTaskCountHasBeenSet() const;

                    /**
                     * 获取Total Number of Machines
                     * @return MachineTotal Total Number of Machines
                     * 
                     */
                    uint64_t GetMachineTotal() const;

                    /**
                     * 判断参数 MachineTotal 是否已赋值
                     * @return MachineTotal 是否已赋值
                     * 
                     */
                    bool MachineTotalHasBeenSet() const;

                    /**
                     * 获取Total number of policies
                     * @return StrategyTotal Total number of policies
                     * 
                     */
                    uint64_t GetStrategyTotal() const;

                    /**
                     * 判断参数 StrategyTotal 是否已赋值
                     * @return StrategyTotal 是否已赋值
                     * 
                     */
                    bool StrategyTotalHasBeenSet() const;

                    /**
                     * 获取Account Status. 0 - Without Overdue Payment; 1 - With Overdue Payment
                     * @return BalanceStatus Account Status. 0 - Without Overdue Payment; 1 - With Overdue Payment
                     * 
                     */
                    uint64_t GetBalanceStatus() const;

                    /**
                     * 判断参数 BalanceStatus 是否已赋值
                     * @return BalanceStatus 是否已赋值
                     * 
                     */
                    bool BalanceStatusHasBeenSet() const;

                    /**
                     * 获取Number of Backed-Up Hosts
                     * @return BackupMachineCount Number of Backed-Up Hosts
                     * 
                     */
                    uint64_t GetBackupMachineCount() const;

                    /**
                     * 判断参数 BackupMachineCount 是否已赋值
                     * @return BackupMachineCount 是否已赋值
                     * 
                     */
                    bool BackupMachineCountHasBeenSet() const;

                private:

                    /**
                     * Number of Activated Defense Policies
                     */
                    uint64_t m_strategyCount;
                    bool m_strategyCountHasBeenSet;

                    /**
                     * Number of Protected Machines
                     */
                    uint64_t m_machineCount;
                    bool m_machineCountHasBeenSet;

                    /**
                     * Total snapshot capacity
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                    /**
                     * Number of Backup Recovery Tasks
                     */
                    uint64_t m_rollBackTaskCount;
                    bool m_rollBackTaskCountHasBeenSet;

                    /**
                     * Number of Snapshot Creation Tasks in Progress
                     */
                    uint64_t m_progressingSnapshotTaskCount;
                    bool m_progressingSnapshotTaskCountHasBeenSet;

                    /**
                     * Number of Backup Recovery Tasks in Progress
                     */
                    uint64_t m_progressingRollBackTaskCount;
                    bool m_progressingRollBackTaskCountHasBeenSet;

                    /**
                     * Total Number of Machines
                     */
                    uint64_t m_machineTotal;
                    bool m_machineTotalHasBeenSet;

                    /**
                     * Total number of policies
                     */
                    uint64_t m_strategyTotal;
                    bool m_strategyTotalHasBeenSet;

                    /**
                     * Account Status. 0 - Without Overdue Payment; 1 - With Overdue Payment
                     */
                    uint64_t m_balanceStatus;
                    bool m_balanceStatusHasBeenSet;

                    /**
                     * Number of Backed-Up Hosts
                     */
                    uint64_t m_backupMachineCount;
                    bool m_backupMachineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSESTATERESPONSE_H_
