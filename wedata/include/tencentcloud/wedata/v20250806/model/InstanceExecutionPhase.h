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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCEEXECUTIONPHASE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCEEXECUTIONPHASE_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the details of each stage in instance execution.
                */
                class InstanceExecutionPhase : public AbstractModel
                {
                public:
                    InstanceExecutionPhase();
                    ~InstanceExecutionPhase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time of the state.
                     * @return StartTime Start time of the state.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the state.
                     * @param _startTime Start time of the state.
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
                     * 获取**Instance lifecycle phase status**.

-WAIT_UPSTREAM indicates the wait event/upstream status.
-WAIT_RUN indicates the waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates the final state of completion.
- FAILED indicates the final state - retry on failure.
-EXPIRED indicates the final state - failure.
-SKIP_RUNNING indicates the branch skipped by the upstream branch node in the final state.
-HISTORY indicates compatibility with historical instances before 2024-03-30. no need to pay attention to this enum afterward.
                     * @return DetailState **Instance lifecycle phase status**.

-WAIT_UPSTREAM indicates the wait event/upstream status.
-WAIT_RUN indicates the waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates the final state of completion.
- FAILED indicates the final state - retry on failure.
-EXPIRED indicates the final state - failure.
-SKIP_RUNNING indicates the branch skipped by the upstream branch node in the final state.
-HISTORY indicates compatibility with historical instances before 2024-03-30. no need to pay attention to this enum afterward.
                     * 
                     */
                    std::string GetDetailState() const;

                    /**
                     * 设置**Instance lifecycle phase status**.

-WAIT_UPSTREAM indicates the wait event/upstream status.
-WAIT_RUN indicates the waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates the final state of completion.
- FAILED indicates the final state - retry on failure.
-EXPIRED indicates the final state - failure.
-SKIP_RUNNING indicates the branch skipped by the upstream branch node in the final state.
-HISTORY indicates compatibility with historical instances before 2024-03-30. no need to pay attention to this enum afterward.
                     * @param _detailState **Instance lifecycle phase status**.

-WAIT_UPSTREAM indicates the wait event/upstream status.
-WAIT_RUN indicates the waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates the final state of completion.
- FAILED indicates the final state - retry on failure.
-EXPIRED indicates the final state - failure.
-SKIP_RUNNING indicates the branch skipped by the upstream branch node in the final state.
-HISTORY indicates compatibility with historical instances before 2024-03-30. no need to pay attention to this enum afterward.
                     * 
                     */
                    void SetDetailState(const std::string& _detailState);

                    /**
                     * 判断参数 DetailState 是否已赋值
                     * @return DetailState 是否已赋值
                     * 
                     */
                    bool DetailStateHasBeenSet() const;

                    /**
                     * 获取End time of the state.
                     * @return EndTime End time of the state.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the state.
                     * @param _endTime End time of the state.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Start time of the state.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * **Instance lifecycle phase status**.

-WAIT_UPSTREAM indicates the wait event/upstream status.
-WAIT_RUN indicates the waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates the final state of completion.
- FAILED indicates the final state - retry on failure.
-EXPIRED indicates the final state - failure.
-SKIP_RUNNING indicates the branch skipped by the upstream branch node in the final state.
-HISTORY indicates compatibility with historical instances before 2024-03-30. no need to pay attention to this enum afterward.
                     */
                    std::string m_detailState;
                    bool m_detailStateHasBeenSet;

                    /**
                     * End time of the state.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INSTANCEEXECUTIONPHASE_H_
