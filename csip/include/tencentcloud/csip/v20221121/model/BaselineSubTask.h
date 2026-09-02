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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineHostAsset.h>
#include <tencentcloud/csip/v20221121/model/BaselineClusterAsset.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Subtasks of a baseline scan are split by detection asset dimension (one host or cluster corresponds to one subtask).
                */
                class BaselineSubTask : public AbstractModel
                {
                public:
                    BaselineSubTask();
                    ~BaselineSubTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Subtask ID.</p>
                     * @return ID <p>Subtask ID.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Subtask ID.</p>
                     * @param _iD <p>Subtask ID.</p>
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
                     * 获取<p>ID of the main task it belongs to (corresponds to BaselineMainTask.ID).</p>
                     * @return TaskID <p>ID of the main task it belongs to (corresponds to BaselineMainTask.ID).</p>
                     * 
                     */
                    uint64_t GetTaskID() const;

                    /**
                     * 设置<p>ID of the main task it belongs to (corresponds to BaselineMainTask.ID).</p>
                     * @param _taskID <p>ID of the main task it belongs to (corresponds to BaselineMainTask.ID).</p>
                     * 
                     */
                    void SetTaskID(const uint64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>Execution result of the subtask. Value:</p><ul><li>SUCCESS: successful</li><li>FAILED: failed</li><li>USER_CANCELED: canceled by the user</li><li>CHECKING: detecting</li><li>UNKNOWN: unknown status</li></ul>
                     * @return Status <p>Execution result of the subtask. Value:</p><ul><li>SUCCESS: successful</li><li>FAILED: failed</li><li>USER_CANCELED: canceled by the user</li><li>CHECKING: detecting</li><li>UNKNOWN: unknown status</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Execution result of the subtask. Value:</p><ul><li>SUCCESS: successful</li><li>FAILED: failed</li><li>USER_CANCELED: canceled by the user</li><li>CHECKING: detecting</li><li>UNKNOWN: unknown status</li></ul>
                     * @param _status <p>Execution result of the subtask. Value:</p><ul><li>SUCCESS: successful</li><li>FAILED: failed</li><li>USER_CANCELED: canceled by the user</li><li>CHECKING: detecting</li><li>UNKNOWN: unknown status</li></ul>
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
                     * 获取<p>Appid of the tenant associated with the subtask.</p>
                     * @return Appid <p>Appid of the tenant associated with the subtask.</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>Appid of the tenant associated with the subtask.</p>
                     * @param _appid <p>Appid of the tenant associated with the subtask.</p>
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
                     * 获取<p>Subtask start execution time.</p>
                     * @return StartTime <p>Subtask start execution time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Subtask start execution time.</p>
                     * @param _startTime <p>Subtask start execution time.</p>
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
                     * 获取<p>Subtask end time. If not ended, it is empty</p>
                     * @return FinishTime <p>Subtask end time. If not ended, it is empty</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Subtask end time. If not ended, it is empty</p>
                     * @param _finishTime <p>Subtask end time. If not ended, it is empty</p>
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
                     * 获取<p>Detect asset major category, case-sensitive between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: host</li><li>CLUSTER: container cluster</li></ul>
                     * @return CheckAssetType <p>Detect asset major category, case-sensitive between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: host</li><li>CLUSTER: container cluster</li></ul>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>Detect asset major category, case-sensitive between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: host</li><li>CLUSTER: container cluster</li></ul>
                     * @param _checkAssetType <p>Detect asset major category, case-sensitive between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: host</li><li>CLUSTER: container cluster</li></ul>
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
                     * 获取<p>Host asset information returned when CheckAssetType=HOST. Empty when CheckAssetType=CLUSTER.</p>
                     * @return HostAsset <p>Host asset information returned when CheckAssetType=HOST. Empty when CheckAssetType=CLUSTER.</p>
                     * 
                     */
                    BaselineHostAsset GetHostAsset() const;

                    /**
                     * 设置<p>Host asset information returned when CheckAssetType=HOST. Empty when CheckAssetType=CLUSTER.</p>
                     * @param _hostAsset <p>Host asset information returned when CheckAssetType=HOST. Empty when CheckAssetType=CLUSTER.</p>
                     * 
                     */
                    void SetHostAsset(const BaselineHostAsset& _hostAsset);

                    /**
                     * 判断参数 HostAsset 是否已赋值
                     * @return HostAsset 是否已赋值
                     * 
                     */
                    bool HostAssetHasBeenSet() const;

                    /**
                     * 获取<p>Status code: In case of failure, a failure code is returned (for example, AGENT_OFFLINE, SCAN_TIMEOUT, CLIENT_SCAN_FAILED). During detection, the detection status is returned. It is empty for success or user cancellation.</p>
                     * @return ErrCode <p>Status code: In case of failure, a failure code is returned (for example, AGENT_OFFLINE, SCAN_TIMEOUT, CLIENT_SCAN_FAILED). During detection, the detection status is returned. It is empty for success or user cancellation.</p>
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>Status code: In case of failure, a failure code is returned (for example, AGENT_OFFLINE, SCAN_TIMEOUT, CLIENT_SCAN_FAILED). During detection, the detection status is returned. It is empty for success or user cancellation.</p>
                     * @param _errCode <p>Status code: In case of failure, a failure code is returned (for example, AGENT_OFFLINE, SCAN_TIMEOUT, CLIENT_SCAN_FAILED). During detection, the detection status is returned. It is empty for success or user cancellation.</p>
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
                     * 获取<p>Detailed description of the reason for failure. Empty on success, canceled by the user, or during detection.</p>
                     * @return ErrMessage <p>Detailed description of the reason for failure. Empty on success, canceled by the user, or during detection.</p>
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置<p>Detailed description of the reason for failure. Empty on success, canceled by the user, or during detection.</p>
                     * @param _errMessage <p>Detailed description of the reason for failure. Empty on success, canceled by the user, or during detection.</p>
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
                     * 获取<p>Solution recommendation in case of failure. Empty for success, canceled by the user, or in-progress detection.</p>
                     * @return Solution <p>Solution recommendation in case of failure. Empty for success, canceled by the user, or in-progress detection.</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>Solution recommendation in case of failure. Empty for success, canceled by the user, or in-progress detection.</p>
                     * @param _solution <p>Solution recommendation in case of failure. Empty for success, canceled by the user, or in-progress detection.</p>
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
                     * 获取<p>Cluster asset information returned when CheckAssetType=CLUSTER. Empty when CheckAssetType=HOST.</p>
                     * @return ClusterAsset <p>Cluster asset information returned when CheckAssetType=CLUSTER. Empty when CheckAssetType=HOST.</p>
                     * 
                     */
                    BaselineClusterAsset GetClusterAsset() const;

                    /**
                     * 设置<p>Cluster asset information returned when CheckAssetType=CLUSTER. Empty when CheckAssetType=HOST.</p>
                     * @param _clusterAsset <p>Cluster asset information returned when CheckAssetType=CLUSTER. Empty when CheckAssetType=HOST.</p>
                     * 
                     */
                    void SetClusterAsset(const BaselineClusterAsset& _clusterAsset);

                    /**
                     * 判断参数 ClusterAsset 是否已赋值
                     * @return ClusterAsset 是否已赋值
                     * 
                     */
                    bool ClusterAssetHasBeenSet() const;

                private:

                    /**
                     * <p>Subtask ID.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>ID of the main task it belongs to (corresponds to BaselineMainTask.ID).</p>
                     */
                    uint64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>Execution result of the subtask. Value:</p><ul><li>SUCCESS: successful</li><li>FAILED: failed</li><li>USER_CANCELED: canceled by the user</li><li>CHECKING: detecting</li><li>UNKNOWN: unknown status</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Appid of the tenant associated with the subtask.</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>Subtask start execution time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Subtask end time. If not ended, it is empty</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Detect asset major category, case-sensitive between host baseline and container cluster baseline. Parameter Value:</p><ul><li>HOST: host</li><li>CLUSTER: container cluster</li></ul>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>Host asset information returned when CheckAssetType=HOST. Empty when CheckAssetType=CLUSTER.</p>
                     */
                    BaselineHostAsset m_hostAsset;
                    bool m_hostAssetHasBeenSet;

                    /**
                     * <p>Status code: In case of failure, a failure code is returned (for example, AGENT_OFFLINE, SCAN_TIMEOUT, CLIENT_SCAN_FAILED). During detection, the detection status is returned. It is empty for success or user cancellation.</p>
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Detailed description of the reason for failure. Empty on success, canceled by the user, or during detection.</p>
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * <p>Solution recommendation in case of failure. Empty for success, canceled by the user, or in-progress detection.</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>Cluster asset information returned when CheckAssetType=CLUSTER. Empty when CheckAssetType=HOST.</p>
                     */
                    BaselineClusterAsset m_clusterAsset;
                    bool m_clusterAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESUBTASK_H_
