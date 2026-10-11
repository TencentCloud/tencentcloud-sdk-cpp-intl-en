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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRUNCONDITIONRULE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRUNCONDITIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Task run condition rules
                */
                class TaskRunConditionRule : public AbstractModel
                {
                public:
                    TaskRunConditionRule();
                    ~TaskRunConditionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Upstream task ID</p>
                     * @return UpstreamTaskId <p>Upstream task ID</p>
                     * 
                     */
                    std::string GetUpstreamTaskId() const;

                    /**
                     * 设置<p>Upstream task ID</p>
                     * @param _upstreamTaskId <p>Upstream task ID</p>
                     * 
                     */
                    void SetUpstreamTaskId(const std::string& _upstreamTaskId);

                    /**
                     * 判断参数 UpstreamTaskId 是否已赋值
                     * @return UpstreamTaskId 是否已赋值
                     * 
                     */
                    bool UpstreamTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Upstream task name</p>
                     * @return UpstreamTaskName <p>Upstream task name</p>
                     * 
                     */
                    std::string GetUpstreamTaskName() const;

                    /**
                     * 设置<p>Upstream task name</p>
                     * @param _upstreamTaskName <p>Upstream task name</p>
                     * 
                     */
                    void SetUpstreamTaskName(const std::string& _upstreamTaskName);

                    /**
                     * 判断参数 UpstreamTaskName 是否已赋值
                     * @return UpstreamTaskName 是否已赋值
                     * 
                     */
                    bool UpstreamTaskNameHasBeenSet() const;

                    /**
                     * 获取<p>Task run conditions<br>Supported status values: - SUCCESS: successful - FAILED: failed - UPSTREAM_FAILED: upstream failed - EXCLUDED: excluded from running</p>
                     * @return AllowedStates <p>Task run conditions<br>Supported status values: - SUCCESS: successful - FAILED: failed - UPSTREAM_FAILED: upstream failed - EXCLUDED: excluded from running</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedStates() const;

                    /**
                     * 设置<p>Task run conditions<br>Supported status values: - SUCCESS: successful - FAILED: failed - UPSTREAM_FAILED: upstream failed - EXCLUDED: excluded from running</p>
                     * @param _allowedStates <p>Task run conditions<br>Supported status values: - SUCCESS: successful - FAILED: failed - UPSTREAM_FAILED: upstream failed - EXCLUDED: excluded from running</p>
                     * 
                     */
                    void SetAllowedStates(const std::vector<std::string>& _allowedStates);

                    /**
                     * 判断参数 AllowedStates 是否已赋值
                     * @return AllowedStates 是否已赋值
                     * 
                     */
                    bool AllowedStatesHasBeenSet() const;

                private:

                    /**
                     * <p>Upstream task ID</p>
                     */
                    std::string m_upstreamTaskId;
                    bool m_upstreamTaskIdHasBeenSet;

                    /**
                     * <p>Upstream task name</p>
                     */
                    std::string m_upstreamTaskName;
                    bool m_upstreamTaskNameHasBeenSet;

                    /**
                     * <p>Task run conditions<br>Supported status values: - SUCCESS: successful - FAILED: failed - UPSTREAM_FAILED: upstream failed - EXCLUDED: excluded from running</p>
                     */
                    std::vector<std::string> m_allowedStates;
                    bool m_allowedStatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRUNCONDITIONRULE_H_
