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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepInfo.h>
#include <tencentcloud/dts/v20211206/model/ErrInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Step information of the sync task
                */
                class SyncDetailInfo : public AbstractModel
                {
                public:
                    SyncDetailInfo();
                    ~SyncDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepAll Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 设置Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepAll Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepAll(const uint64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNow Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 设置Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNow Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepNow(const uint64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Progress Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _progress Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Progress of the current step. Value range: 0-100. The value of `-1` indicates that you can't check the progress of the current step.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return CurrentStepProgress Progress of the current step. Value range: 0-100. The value of `-1` indicates that you can't check the progress of the current step.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCurrentStepProgress() const;

                    /**
                     * 设置Progress of the current step. Value range: 0-100. The value of `-1` indicates that you can't check the progress of the current step.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _currentStepProgress Progress of the current step. Value range: 0-100. The value of `-1` indicates that you can't check the progress of the current step.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCurrentStepProgress(const int64_t& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     * 
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取Data volume difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterSlaveDistance Data volume difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMasterSlaveDistance() const;

                    /**
                     * 设置Data volume difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterSlaveDistance Data volume difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMasterSlaveDistance(const int64_t& _masterSlaveDistance);

                    /**
                     * 判断参数 MasterSlaveDistance 是否已赋值
                     * @return MasterSlaveDistance 是否已赋值
                     * 
                     */
                    bool MasterSlaveDistanceHasBeenSet() const;

                    /**
                     * 获取Time difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecondsBehindMaster Time difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSecondsBehindMaster() const;

                    /**
                     * 设置Time difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secondsBehindMaster Time difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecondsBehindMaster(const int64_t& _secondsBehindMaster);

                    /**
                     * 判断参数 SecondsBehindMaster 是否已赋值
                     * @return SecondsBehindMaster 是否已赋值
                     * 
                     */
                    bool SecondsBehindMasterHasBeenSet() const;

                    /**
                     * 获取Overall description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Overall description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Overall description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Overall description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Step details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepInfos Step details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StepInfo> GetStepInfos() const;

                    /**
                     * 设置Step details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepInfos Step details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepInfos(const std::vector<StepInfo>& _stepInfos);

                    /**
                     * 判断参数 StepInfos 是否已赋值
                     * @return StepInfos 是否已赋值
                     * 
                     */
                    bool StepInfosHasBeenSet() const;

                    /**
                     * 获取Cause of the failure of initiating data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CauseOfCompareDisable Cause of the failure of initiating data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCauseOfCompareDisable() const;

                    /**
                     * 设置Cause of the failure of initiating data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _causeOfCompareDisable Cause of the failure of initiating data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCauseOfCompareDisable(const std::string& _causeOfCompareDisable);

                    /**
                     * 判断参数 CauseOfCompareDisable 是否已赋值
                     * @return CauseOfCompareDisable 是否已赋值
                     * 
                     */
                    bool CauseOfCompareDisableHasBeenSet() const;

                    /**
                     * 获取Task error and the corresponding solution
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @return ErrInfo Task error and the corresponding solution
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    ErrInfo GetErrInfo() const;

                    /**
                     * 设置Task error and the corresponding solution
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * @param _errInfo Task error and the corresponding solution
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetErrInfo(const ErrInfo& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                private:

                    /**
                     * Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * Overall progress
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Progress of the current step. Value range: 0-100. The value of `-1` indicates that you can't check the progress of the current step.
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    int64_t m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * Data volume difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_masterSlaveDistance;
                    bool m_masterSlaveDistanceHasBeenSet;

                    /**
                     * Time difference between the sync source and target
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_secondsBehindMaster;
                    bool m_secondsBehindMasterHasBeenSet;

                    /**
                     * Overall description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Step details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StepInfo> m_stepInfos;
                    bool m_stepInfosHasBeenSet;

                    /**
                     * Cause of the failure of initiating data consistency check
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_causeOfCompareDisable;
                    bool m_causeOfCompareDisableHasBeenSet;

                    /**
                     * Task error and the corresponding solution
Note: u200dThis field may returnu200d·nullu200d, indicating that no valid values can be obtained.
                     */
                    ErrInfo m_errInfo;
                    bool m_errInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_
