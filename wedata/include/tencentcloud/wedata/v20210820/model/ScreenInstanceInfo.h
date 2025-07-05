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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENINSTANCEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance Statistics Display
                */
                class ScreenInstanceInfo : public AbstractModel
                {
                public:
                    ScreenInstanceInfo();
                    ~ScreenInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistical Indicator 0: All Instances, 1: Current Day, 2: YesterdayNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CountTag Statistical Indicator 0: All Instances, 1: Current Day, 2: YesterdayNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetCountTag() const;

                    /**
                     * 设置Statistical Indicator 0: All Instances, 1: Current Day, 2: YesterdayNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _countTag Statistical Indicator 0: All Instances, 1: Current Day, 2: YesterdayNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCountTag(const uint64_t& _countTag);

                    /**
                     * 判断参数 CountTag 是否已赋值
                     * @return CountTag 是否已赋值
                     * 
                     */
                    bool CountTagHasBeenSet() const;

                    /**
                     * 获取Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalNum Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalNum Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RunningNum RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRunningNum() const;

                    /**
                     * 设置RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _runningNum RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRunningNum(const uint64_t& _runningNum);

                    /**
                     * 判断参数 RunningNum 是否已赋值
                     * @return RunningNum 是否已赋值
                     * 
                     */
                    bool RunningNumHasBeenSet() const;

                    /**
                     * 获取Pending Execution
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WaitRunningNum Pending Execution
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetWaitRunningNum() const;

                    /**
                     * 设置Pending Execution
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _waitRunningNum Pending Execution
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWaitRunningNum(const uint64_t& _waitRunningNum);

                    /**
                     * 判断参数 WaitRunningNum 是否已赋值
                     * @return WaitRunningNum 是否已赋值
                     * 
                     */
                    bool WaitRunningNumHasBeenSet() const;

                    /**
                     * 获取Wait for Upstream
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DependencyNum Wait for Upstream
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDependencyNum() const;

                    /**
                     * 设置Wait for Upstream
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dependencyNum Wait for Upstream
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDependencyNum(const uint64_t& _dependencyNum);

                    /**
                     * 判断参数 DependencyNum 是否已赋值
                     * @return DependencyNum 是否已赋值
                     * 
                     */
                    bool DependencyNumHasBeenSet() const;

                    /**
                     * 获取Waiting for Event
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WaitEventNum Waiting for Event
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWaitEventNum() const;

                    /**
                     * 设置Waiting for Event
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _waitEventNum Waiting for Event
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWaitEventNum(const std::string& _waitEventNum);

                    /**
                     * 判断参数 WaitEventNum 是否已赋值
                     * @return WaitEventNum 是否已赋值
                     * 
                     */
                    bool WaitEventNumHasBeenSet() const;

                    /**
                     * 获取Terminating
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StoppingNum Terminating
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStoppingNum() const;

                    /**
                     * 设置Terminating
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _stoppingNum Terminating
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStoppingNum(const uint64_t& _stoppingNum);

                    /**
                     * 判断参数 StoppingNum 是否已赋值
                     * @return StoppingNum 是否已赋值
                     * 
                     */
                    bool StoppingNumHasBeenSet() const;

                    /**
                     * 获取SuccessNote: This field may return null, indicating that no valid value can be obtained.
                     * @return SucceedNum SuccessNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetSucceedNum() const;

                    /**
                     * 设置SuccessNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _succeedNum SuccessNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSucceedNum(const uint64_t& _succeedNum);

                    /**
                     * 判断参数 SucceedNum 是否已赋值
                     * @return SucceedNum 是否已赋值
                     * 
                     */
                    bool SucceedNumHasBeenSet() const;

                    /**
                     * 获取Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FailedNum Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetFailedNum() const;

                    /**
                     * 设置Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _failedNum Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFailedNum(const uint64_t& _failedNum);

                    /**
                     * 判断参数 FailedNum 是否已赋值
                     * @return FailedNum 是否已赋值
                     * 
                     */
                    bool FailedNumHasBeenSet() const;

                private:

                    /**
                     * Statistical Indicator 0: All Instances, 1: Current Day, 2: YesterdayNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_countTag;
                    bool m_countTagHasBeenSet;

                    /**
                     * Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * RunningNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_runningNum;
                    bool m_runningNumHasBeenSet;

                    /**
                     * Pending Execution
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_waitRunningNum;
                    bool m_waitRunningNumHasBeenSet;

                    /**
                     * Wait for Upstream
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_dependencyNum;
                    bool m_dependencyNumHasBeenSet;

                    /**
                     * Waiting for Event
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_waitEventNum;
                    bool m_waitEventNumHasBeenSet;

                    /**
                     * Terminating
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_stoppingNum;
                    bool m_stoppingNumHasBeenSet;

                    /**
                     * SuccessNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_succeedNum;
                    bool m_succeedNumHasBeenSet;

                    /**
                     * Failed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_failedNum;
                    bool m_failedNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENINSTANCEINFO_H_
