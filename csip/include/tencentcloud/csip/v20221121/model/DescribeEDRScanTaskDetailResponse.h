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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRSCANTASKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRSCANTASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRScanTaskHostItem.h>
#include <tencentcloud/csip/v20221121/model/EDRScanTaskContainerItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEDRScanTaskDetail response structure.
                */
                class DescribeEDRScanTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeEDRScanTaskDetailResponse();
                    ~DescribeEDRScanTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID.</p>
                     * @return TaskId <p>Task ID.</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task name</p>
                     * @return TaskName <p>Task name</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>Overall status: WAIT/SCANNING/FINISHED/FAILED/CANCELED/TERMINATED/TIMEOUT</p>
                     * @return Status <p>Overall status: WAIT/SCANNING/FINISHED/FAILED/CANCELED/TERMINATED/TIMEOUT</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Task type: HOST/CONTAINER</p>
                     * @return TaskType <p>Task type: HOST/CONTAINER</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Trigger mode: MANUAL/CYCLE</p>
                     * @return TriggerType <p>Trigger mode: MANUAL/CYCLE</p>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task start time</p>
                     * @return StartTime <p>Task start time</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Task end time</p>
                     * @return EndTime <p>Task end time</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Detection mode: full/quick/include/exclude</p>
                     * @return ScanType <p>Detection mode: full/quick/include/exclude</p>
                     * 
                     */
                    std::string GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>Selected path list</p>
                     * @return CustomPaths <p>Selected path list</p>
                     * 
                     */
                    std::vector<std::string> GetCustomPaths() const;

                    /**
                     * 判断参数 CustomPaths 是否已赋值
                     * @return CustomPaths 是否已赋值
                     * 
                     */
                    bool CustomPathsHasBeenSet() const;

                    /**
                     * 获取<p>Timeout period (in seconds)</p>
                     * @return Timeout <p>Timeout period (in seconds)</p>
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     * @return EnableMemShellScan <p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     * 
                     */
                    int64_t GetEnableMemShellScan() const;

                    /**
                     * 判断参数 EnableMemShellScan 是否已赋值
                     * @return EnableMemShellScan 是否已赋值
                     * 
                     */
                    bool EnableMemShellScanHasBeenSet() const;

                    /**
                     * 获取<p>Creator account AppId</p>
                     * @return CreateAppID <p>Creator account AppId</p>
                     * 
                     */
                    uint64_t GetCreateAppID() const;

                    /**
                     * 判断参数 CreateAppID 是否已赋值
                     * @return CreateAppID 是否已赋值
                     * 
                     */
                    bool CreateAppIDHasBeenSet() const;

                    /**
                     * 获取<p>Task creator account name (enriched by backend)</p>
                     * @return AccountName <p>Task creator account name (enriched by backend)</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Creator cloud type</p>
                     * @return CloudType <p>Creator cloud type</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of task assets</p>
                     * @return TotalAssetCount <p>Total number of task assets</p>
                     * 
                     */
                    int64_t GetTotalAssetCount() const;

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Completed number of assets</p>
                     * @return FinishedAssetCount <p>Completed number of assets</p>
                     * 
                     */
                    int64_t GetFinishedAssetCount() const;

                    /**
                     * 判断参数 FinishedAssetCount 是否已赋值
                     * @return FinishedAssetCount 是否已赋值
                     * 
                     */
                    bool FinishedAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of risk assets</p>
                     * @return RiskAssetCount <p>Number of risk assets</p>
                     * 
                     */
                    int64_t GetRiskAssetCount() const;

                    /**
                     * 判断参数 RiskAssetCount 是否已赋值
                     * @return RiskAssetCount 是否已赋值
                     * 
                     */
                    bool RiskAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Host asset list (has a value when TaskType is HOST)</p>
                     * @return HostList <p>Host asset list (has a value when TaskType is HOST)</p>
                     * 
                     */
                    std::vector<EDRScanTaskHostItem> GetHostList() const;

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                    /**
                     * 获取<p>Container asset list (has a value when TaskType=CONTAINER)</p>
                     * @return ContainerList <p>Container asset list (has a value when TaskType=CONTAINER)</p>
                     * 
                     */
                    std::vector<EDRScanTaskContainerItem> GetContainerList() const;

                    /**
                     * 判断参数 ContainerList 是否已赋值
                     * @return ContainerList 是否已赋值
                     * 
                     */
                    bool ContainerListHasBeenSet() const;

                    /**
                     * 获取<p>Total number of items in the asset list under current filter conditions</p>
                     * @return TotalCount <p>Total number of items in the asset list under current filter conditions</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID.</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Overall status: WAIT/SCANNING/FINISHED/FAILED/CANCELED/TERMINATED/TIMEOUT</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Task type: HOST/CONTAINER</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Trigger mode: MANUAL/CYCLE</p>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Task start time</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Task end time</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Detection mode: full/quick/include/exclude</p>
                     */
                    std::string m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>Selected path list</p>
                     */
                    std::vector<std::string> m_customPaths;
                    bool m_customPathsHasBeenSet;

                    /**
                     * <p>Timeout period (in seconds)</p>
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Whether deep detection is enabled: 0-No/1-Yes</p>
                     */
                    int64_t m_enableMemShellScan;
                    bool m_enableMemShellScanHasBeenSet;

                    /**
                     * <p>Creator account AppId</p>
                     */
                    uint64_t m_createAppID;
                    bool m_createAppIDHasBeenSet;

                    /**
                     * <p>Task creator account name (enriched by backend)</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>Creator cloud type</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>Total number of task assets</p>
                     */
                    int64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>Completed number of assets</p>
                     */
                    int64_t m_finishedAssetCount;
                    bool m_finishedAssetCountHasBeenSet;

                    /**
                     * <p>Number of risk assets</p>
                     */
                    int64_t m_riskAssetCount;
                    bool m_riskAssetCountHasBeenSet;

                    /**
                     * <p>Host asset list (has a value when TaskType is HOST)</p>
                     */
                    std::vector<EDRScanTaskHostItem> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * <p>Container asset list (has a value when TaskType=CONTAINER)</p>
                     */
                    std::vector<EDRScanTaskContainerItem> m_containerList;
                    bool m_containerListHasBeenSet;

                    /**
                     * <p>Total number of items in the asset list under current filter conditions</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRSCANTASKDETAILRESPONSE_H_
