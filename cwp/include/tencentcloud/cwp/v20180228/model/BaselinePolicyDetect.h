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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICYDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICYDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Baseline detection policy
                */
                class BaselinePolicyDetect : public AbstractModel
                {
                public:
                    BaselinePolicyDetect();
                    ~BaselinePolicyDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Detection task Id
                     * @return TaskId Detection task Id
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Detection task Id
                     * @param _taskId Detection task Id
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Associated hosts
                     * @return HostCount Associated hosts
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Associated hosts
                     * @param _hostCount Associated hosts
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param _startTime Start time
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
                     * 获取End time
                     * @return FinishTime End time
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置End time
                     * @param _finishTime End time
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
                     * 获取Policy name
                     * @return PolicyName Policy name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
                     * @param _policyName Policy name
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
                     * 获取Number of successful hosts.
                     * @return SuccessCount Number of successful hosts.
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successful hosts.
                     * @param _successCount Number of successful hosts.
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of failed primary technologies
                     * @return FailedCount Number of failed primary technologies
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置Number of failed primary technologies
                     * @param _failedCount Number of failed primary technologies
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取Number of failed hosts.
                     * @return TimeoutCount Number of failed hosts.
                     * 
                     */
                    int64_t GetTimeoutCount() const;

                    /**
                     * 设置Number of failed hosts.
                     * @param _timeoutCount Number of failed hosts.
                     * 
                     */
                    void SetTimeoutCount(const int64_t& _timeoutCount);

                    /**
                     * 判断参数 TimeoutCount 是否已赋值
                     * @return TimeoutCount 是否已赋值
                     * 
                     */
                    bool TimeoutCountHasBeenSet() const;

                    /**
                     * 获取1: Detecting 2: Detection completed
                     * @return PolicyDetectStatus 1: Detecting 2: Detection completed
                     * 
                     */
                    int64_t GetPolicyDetectStatus() const;

                    /**
                     * 设置1: Detecting 2: Detection completed
                     * @param _policyDetectStatus 1: Detecting 2: Detection completed
                     * 
                     */
                    void SetPolicyDetectStatus(const int64_t& _policyDetectStatus);

                    /**
                     * 判断参数 PolicyDetectStatus 是否已赋值
                     * @return PolicyDetectStatus 是否已赋值
                     * 
                     */
                    bool PolicyDetectStatusHasBeenSet() const;

                private:

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Detection task Id
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Associated hosts
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * Number of successful hosts.
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of failed primary technologies
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * Number of failed hosts.
                     */
                    int64_t m_timeoutCount;
                    bool m_timeoutCountHasBeenSet;

                    /**
                     * 1: Detecting 2: Detection completed
                     */
                    int64_t m_policyDetectStatus;
                    bool m_policyDetectStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEPOLICYDETECT_H_
