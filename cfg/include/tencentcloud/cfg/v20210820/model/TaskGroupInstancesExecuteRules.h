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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Machine selection rule
                */
                class TaskGroupInstancesExecuteRules : public AbstractModel
                {
                public:
                    TaskGroupInstancesExecuteRules();
                    ~TaskGroupInstancesExecuteRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance selection mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstancesExecuteMode Instance selection mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecuteMode() const;

                    /**
                     * 设置Instance selection mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstancesExecuteMode Instance selection mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstancesExecuteMode(const int64_t& _taskGroupInstancesExecuteMode);

                    /**
                     * 判断参数 TaskGroupInstancesExecuteMode 是否已赋值
                     * @return TaskGroupInstancesExecuteMode 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecuteModeHasBeenSet() const;

                    /**
                     * 获取Proportion of selected machines in selection by proportion mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstancesExecutePercent Proportion of selected machines in selection by proportion mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecutePercent() const;

                    /**
                     * 设置Proportion of selected machines in selection by proportion mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstancesExecutePercent Proportion of selected machines in selection by proportion mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstancesExecutePercent(const int64_t& _taskGroupInstancesExecutePercent);

                    /**
                     * 判断参数 TaskGroupInstancesExecutePercent 是否已赋值
                     * @return TaskGroupInstancesExecutePercent 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecutePercentHasBeenSet() const;

                    /**
                     * 获取Number of selected machines in selection by quantity mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskGroupInstancesExecuteNum Number of selected machines in selection by quantity mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskGroupInstancesExecuteNum() const;

                    /**
                     * 设置Number of selected machines in selection by quantity mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskGroupInstancesExecuteNum Number of selected machines in selection by quantity mode
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskGroupInstancesExecuteNum(const int64_t& _taskGroupInstancesExecuteNum);

                    /**
                     * 判断参数 TaskGroupInstancesExecuteNum 是否已赋值
                     * @return TaskGroupInstancesExecuteNum 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesExecuteNumHasBeenSet() const;

                private:

                    /**
                     * Instance selection mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupInstancesExecuteMode;
                    bool m_taskGroupInstancesExecuteModeHasBeenSet;

                    /**
                     * Proportion of selected machines in selection by proportion mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupInstancesExecutePercent;
                    bool m_taskGroupInstancesExecutePercentHasBeenSet;

                    /**
                     * Number of selected machines in selection by quantity mode
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskGroupInstancesExecuteNum;
                    bool m_taskGroupInstancesExecuteNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPINSTANCESEXECUTERULES_H_
