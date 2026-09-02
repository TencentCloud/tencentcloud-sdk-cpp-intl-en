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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEMAINTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEMAINTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Baseline scanning main task, corresponding to a "one-click scan/period scanning/disperse scan" action.
                */
                class BaselineMainTask : public AbstractModel
                {
                public:
                    BaselineMainTask();
                    ~BaselineMainTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Global task ID corresponding to the main task.</p>
                     * @return JobID <p>Global task ID corresponding to the main task.</p>
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置<p>Global task ID corresponding to the main task.</p>
                     * @param _jobID <p>Global task ID corresponding to the main task.</p>
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                    /**
                     * 获取<p>Main task ID.</p>
                     * @return ID <p>Main task ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Main task ID.</p>
                     * @param _iD <p>Main task ID.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Main task status. Values:</p><ul><li>INIT: initialization</li><li>SUBTASK_CREATING: creating subtasks</li><li>SCANNING: scanning</li><li>TIMEOUT: timeout</li><li>USER_CANCELED: canceled by the user</li><li>ALL_FAILED: all failed</li><li>SUCCESS: success</li></ul>
                     * @return Status <p>Main task status. Values:</p><ul><li>INIT: initialization</li><li>SUBTASK_CREATING: creating subtasks</li><li>SCANNING: scanning</li><li>TIMEOUT: timeout</li><li>USER_CANCELED: canceled by the user</li><li>ALL_FAILED: all failed</li><li>SUCCESS: success</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Main task status. Values:</p><ul><li>INIT: initialization</li><li>SUBTASK_CREATING: creating subtasks</li><li>SCANNING: scanning</li><li>TIMEOUT: timeout</li><li>USER_CANCELED: canceled by the user</li><li>ALL_FAILED: all failed</li><li>SUCCESS: success</li></ul>
                     * @param _status <p>Main task status. Values:</p><ul><li>INIT: initialization</li><li>SUBTASK_CREATING: creating subtasks</li><li>SCANNING: scanning</li><li>TIMEOUT: timeout</li><li>USER_CANCELED: canceled by the user</li><li>ALL_FAILED: all failed</li><li>SUCCESS: success</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Appid of the associated tenant of the main task.</p>
                     * @return Appid <p>Appid of the associated tenant of the main task.</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>Appid of the associated tenant of the main task.</p>
                     * @param _appid <p>Appid of the associated tenant of the main task.</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>Main task type. Value:</p><ul><li>ONE_SHOT: one-click policy scan (manual triggering)</li><li>PERIODIC: period scanning (auto-trigger by CycleScanConf)</li><li>OTHER: other disperse scans (triggered by asset dimension, etc.)</li></ul>
                     * @return TaskType <p>Main task type. Value:</p><ul><li>ONE_SHOT: one-click policy scan (manual triggering)</li><li>PERIODIC: period scanning (auto-trigger by CycleScanConf)</li><li>OTHER: other disperse scans (triggered by asset dimension, etc.)</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Main task type. Value:</p><ul><li>ONE_SHOT: one-click policy scan (manual triggering)</li><li>PERIODIC: period scanning (auto-trigger by CycleScanConf)</li><li>OTHER: other disperse scans (triggered by asset dimension, etc.)</li></ul>
                     * @param _taskType <p>Main task type. Value:</p><ul><li>ONE_SHOT: one-click policy scan (manual triggering)</li><li>PERIODIC: period scanning (auto-trigger by CycleScanConf)</li><li>OTHER: other disperse scans (triggered by asset dimension, etc.)</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>Main task start time.</p>
                     * @return StartTime <p>Main task start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Main task start time.</p>
                     * @param _startTime <p>Main task start time.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time of the main task. Empty if not ended.</p>
                     * @return FinishTime <p>End time of the main task. Empty if not ended.</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>End time of the main task. Empty if not ended.</p>
                     * @param _finishTime <p>End time of the main task. Empty if not ended.</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @return CheckAssetType <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * @param _checkAssetType <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Failure error code. Empty if the request is successful.</p>
                     * @return ErrCode <p>Failure error code. Empty if the request is successful.</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>Failure error code. Empty if the request is successful.</p>
                     * @param _errCode <p>Failure error code. Empty if the request is successful.</p>
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>Failure reason, empty if successful.</p>
                     * @return ErrMessage <p>Failure reason, empty if successful.</p>
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置<p>Failure reason, empty if successful.</p>
                     * @param _errMessage <p>Failure reason, empty if successful.</p>
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取<p>Solution (mapped according to ErrCode; empty on success)</p>
                     * @return Solution <p>Solution (mapped according to ErrCode; empty on success)</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>Solution (mapped according to ErrCode; empty on success)</p>
                     * @param _solution <p>Solution (mapped according to ErrCode; empty on success)</p>
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets scanned successfully.</p>
                     * @return ScanSuccessCount <p>Number of assets scanned successfully.</p>
                     * 
                     */
                    uint64_t GetScanSuccessCount() const;

                    /**
                     * 设置<p>Number of assets scanned successfully.</p>
                     * @param _scanSuccessCount <p>Number of assets scanned successfully.</p>
                     * 
                     */
                    void SetScanSuccessCount(const uint64_t& _scanSuccessCount);

                    /**
                     * 判断参数 ScanSuccessCount 是否已赋值
                     * @return ScanSuccessCount 是否已赋值
                     * 
                     */
                    bool ScanSuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of assets with scan failure.</p>
                     * @return ScanFailedCount <p>Number of assets with scan failure.</p>
                     * 
                     */
                    uint64_t GetScanFailedCount() const;

                    /**
                     * 设置<p>Number of assets with scan failure.</p>
                     * @param _scanFailedCount <p>Number of assets with scan failure.</p>
                     * 
                     */
                    void SetScanFailedCount(const uint64_t& _scanFailedCount);

                    /**
                     * 判断参数 ScanFailedCount 是否已赋值
                     * @return ScanFailedCount 是否已赋值
                     * 
                     */
                    bool ScanFailedCountHasBeenSet() const;

                    /**
                     * 获取<p>Total number of subtasks</p>
                     * @return ScanTotalCount <p>Total number of subtasks</p>
                     * 
                     */
                    uint64_t GetScanTotalCount() const;

                    /**
                     * 设置<p>Total number of subtasks</p>
                     * @param _scanTotalCount <p>Total number of subtasks</p>
                     * 
                     */
                    void SetScanTotalCount(const uint64_t& _scanTotalCount);

                    /**
                     * 判断参数 ScanTotalCount 是否已赋值
                     * @return ScanTotalCount 是否已赋值
                     * 
                     */
                    bool ScanTotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Global task ID corresponding to the main task.</p>
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * <p>Main task ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Main task status. Values:</p><ul><li>INIT: initialization</li><li>SUBTASK_CREATING: creating subtasks</li><li>SCANNING: scanning</li><li>TIMEOUT: timeout</li><li>USER_CANCELED: canceled by the user</li><li>ALL_FAILED: all failed</li><li>SUCCESS: success</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Appid of the associated tenant of the main task.</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>Main task type. Value:</p><ul><li>ONE_SHOT: one-click policy scan (manual triggering)</li><li>PERIODIC: period scanning (auto-trigger by CycleScanConf)</li><li>OTHER: other disperse scans (triggered by asset dimension, etc.)</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Main task start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time of the main task. Empty if not ended.</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Detect asset major category, case-sensitive host baseline and container cluster baseline. Parameter values:</p><ul><li>HOST: Host</li><li>CLUSTER: Container cluster</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>Failure error code. Empty if the request is successful.</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Failure reason, empty if successful.</p>
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * <p>Solution (mapped according to ErrCode; empty on success)</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>Number of assets scanned successfully.</p>
                     */
                    uint64_t m_scanSuccessCount;
                    bool m_scanSuccessCountHasBeenSet;

                    /**
                     * <p>Number of assets with scan failure.</p>
                     */
                    uint64_t m_scanFailedCount;
                    bool m_scanFailedCountHasBeenSet;

                    /**
                     * <p>Total number of subtasks</p>
                     */
                    uint64_t m_scanTotalCount;
                    bool m_scanTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEMAINTASK_H_
