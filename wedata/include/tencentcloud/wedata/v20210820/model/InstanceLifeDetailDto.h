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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFEDETAILDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFEDETAILDTO_H_

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
                * Instance Lifecycle Detail
                */
                class InstanceLifeDetailDto : public AbstractModel
                {
                public:
                    InstanceLifeDetailDto();
                    ~InstanceLifeDetailDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Indicates the status of an instance.
-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]  indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return State Indicates the status of an instance.
-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]  indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Indicates the status of an instance.
-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]  indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _state Indicates the status of an instance.
-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]  indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Start Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return StartTime Start Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _startTime Start Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Instance lifecycle phase status.

-WAIT_UPSTREAM indicates waiting for an event or upstream status.
-WAIT_RUN indicates waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates terminal state - completed.
-FAILED indicates terminal state - retry after failure.
-EXPIRED indicates terminal state - failure.
-SKIP_RUNNING indicates terminal state - a branch skipped by the upstream branch node.
-HISTORY indicates compatibility with historical instances before march 30, 2024. no need to pay attention to this enumeration type for instances afterward.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetailState Instance lifecycle phase status.

-WAIT_UPSTREAM indicates waiting for an event or upstream status.
-WAIT_RUN indicates waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates terminal state - completed.
-FAILED indicates terminal state - retry after failure.
-EXPIRED indicates terminal state - failure.
-SKIP_RUNNING indicates terminal state - a branch skipped by the upstream branch node.
-HISTORY indicates compatibility with historical instances before march 30, 2024. no need to pay attention to this enumeration type for instances afterward.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDetailState() const;

                    /**
                     * 设置Instance lifecycle phase status.

-WAIT_UPSTREAM indicates waiting for an event or upstream status.
-WAIT_RUN indicates waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates terminal state - completed.
-FAILED indicates terminal state - retry after failure.
-EXPIRED indicates terminal state - failure.
-SKIP_RUNNING indicates terminal state - a branch skipped by the upstream branch node.
-HISTORY indicates compatibility with historical instances before march 30, 2024. no need to pay attention to this enumeration type for instances afterward.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detailState Instance lifecycle phase status.

-WAIT_UPSTREAM indicates waiting for an event or upstream status.
-WAIT_RUN indicates waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates terminal state - completed.
-FAILED indicates terminal state - retry after failure.
-EXPIRED indicates terminal state - failure.
-SKIP_RUNNING indicates terminal state - a branch skipped by the upstream branch node.
-HISTORY indicates compatibility with historical instances before march 30, 2024. no need to pay attention to this enumeration type for instances afterward.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime End Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime End Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Indicates the status of an instance.
-[0] Indicates waiting for event.
-[12] indicates waiting for upstream.
-[6, 7, 9, 10, 18] indicates awaiting execution.
-[1, 19, 22]  indicate running.
-[21] skip running.
-[3] indicates retry on failure.
-[8, 4, 5, 13] indicates a failure.
-[2] indicates a success.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Start Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Instance lifecycle phase status.

-WAIT_UPSTREAM indicates waiting for an event or upstream status.
-WAIT_RUN indicates waiting for running status.
-RUNNING indicates the running state.
-COMPLETE indicates terminal state - completed.
-FAILED indicates terminal state - retry after failure.
-EXPIRED indicates terminal state - failure.
-SKIP_RUNNING indicates terminal state - a branch skipped by the upstream branch node.
-HISTORY indicates compatibility with historical instances before march 30, 2024. no need to pay attention to this enumeration type for instances afterward.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_detailState;
                    bool m_detailStateHasBeenSet;

                    /**
                     * End Time of the State
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFEDETAILDTO_H_
