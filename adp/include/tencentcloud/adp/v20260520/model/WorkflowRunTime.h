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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNTIME_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Workflow running instance time information
                */
                class WorkflowRunTime : public AbstractModel
                {
                public:
                    WorkflowRunTime();
                    ~WorkflowRunTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time (a millisecond timestamp).
                     * @return CreateTime Creation time (a millisecond timestamp).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time (a millisecond timestamp).
                     * @param _createTime Creation time (a millisecond timestamp).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Start time (timestamp in milliseconds)
                     * @return StartTime Start time (timestamp in milliseconds)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (timestamp in milliseconds)
                     * @param _startTime Start time (timestamp in milliseconds)
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
                     * 获取End time (timestamp in milliseconds)
                     * @return EndTime End time (timestamp in milliseconds)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (timestamp in milliseconds)
                     * @param _endTime End time (timestamp in milliseconds)
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
                     * Creation time (a millisecond timestamp).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Start time (timestamp in milliseconds)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time (timestamp in milliseconds)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WORKFLOWRUNTIME_H_
