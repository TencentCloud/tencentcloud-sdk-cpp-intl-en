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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskInnerInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Dependency Configuration
                */
                class DependencyConfig : public AbstractModel
                {
                public:
                    DependencyConfig();
                    ~DependencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Only five types of periodic execution dependency configurations: HOUR, DAY, WEEK, MONTH, YEAR, CRONTAB, MINUTE
                     * @return DependConfType Only five types of periodic execution dependency configurations: HOUR, DAY, WEEK, MONTH, YEAR, CRONTAB, MINUTE
                     * 
                     */
                    std::string GetDependConfType() const;

                    /**
                     * 设置Only five types of periodic execution dependency configurations: HOUR, DAY, WEEK, MONTH, YEAR, CRONTAB, MINUTE
                     * @param _dependConfType Only five types of periodic execution dependency configurations: HOUR, DAY, WEEK, MONTH, YEAR, CRONTAB, MINUTE
                     * 
                     */
                    void SetDependConfType(const std::string& _dependConfType);

                    /**
                     * 判断参数 DependConfType 是否已赋值
                     * @return DependConfType 是否已赋值
                     * 
                     */
                    bool DependConfTypeHasBeenSet() const;

                    /**
                     * 获取Dependency Configuration Subordinate Period Type, CURRENT_HOUR, PREVIOUS_HOUR, CURRENT_DAY, PREVIOUS_DAY, PREVIOUS_WEEK, PREVIOUS_FRIDAY, PREVIOUS_WEEKEND, CURRENT_MONTH, PREVIOUS_MONTH, PREVIOUS_END_OF_MONTH
     * PREVIOUS_BEGIN_OF_MONTH,ALL_MONTH_OF_YEAR,ALL_DAY_OF_YEAR,CURRENT_YEAR,CURRENT,CURRENT_MINUTE,PREVIOUS_MINUTE_CYCLE,PREVIOUS_HOUR_CYCLE
                     * @return SubordinateCyclicType Dependency Configuration Subordinate Period Type, CURRENT_HOUR, PREVIOUS_HOUR, CURRENT_DAY, PREVIOUS_DAY, PREVIOUS_WEEK, PREVIOUS_FRIDAY, PREVIOUS_WEEKEND, CURRENT_MONTH, PREVIOUS_MONTH, PREVIOUS_END_OF_MONTH
     * PREVIOUS_BEGIN_OF_MONTH,ALL_MONTH_OF_YEAR,ALL_DAY_OF_YEAR,CURRENT_YEAR,CURRENT,CURRENT_MINUTE,PREVIOUS_MINUTE_CYCLE,PREVIOUS_HOUR_CYCLE
                     * 
                     */
                    std::string GetSubordinateCyclicType() const;

                    /**
                     * 设置Dependency Configuration Subordinate Period Type, CURRENT_HOUR, PREVIOUS_HOUR, CURRENT_DAY, PREVIOUS_DAY, PREVIOUS_WEEK, PREVIOUS_FRIDAY, PREVIOUS_WEEKEND, CURRENT_MONTH, PREVIOUS_MONTH, PREVIOUS_END_OF_MONTH
     * PREVIOUS_BEGIN_OF_MONTH,ALL_MONTH_OF_YEAR,ALL_DAY_OF_YEAR,CURRENT_YEAR,CURRENT,CURRENT_MINUTE,PREVIOUS_MINUTE_CYCLE,PREVIOUS_HOUR_CYCLE
                     * @param _subordinateCyclicType Dependency Configuration Subordinate Period Type, CURRENT_HOUR, PREVIOUS_HOUR, CURRENT_DAY, PREVIOUS_DAY, PREVIOUS_WEEK, PREVIOUS_FRIDAY, PREVIOUS_WEEKEND, CURRENT_MONTH, PREVIOUS_MONTH, PREVIOUS_END_OF_MONTH
     * PREVIOUS_BEGIN_OF_MONTH,ALL_MONTH_OF_YEAR,ALL_DAY_OF_YEAR,CURRENT_YEAR,CURRENT,CURRENT_MINUTE,PREVIOUS_MINUTE_CYCLE,PREVIOUS_HOUR_CYCLE
                     * 
                     */
                    void SetSubordinateCyclicType(const std::string& _subordinateCyclicType);

                    /**
                     * 判断参数 SubordinateCyclicType 是否已赋值
                     * @return SubordinateCyclicType 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicTypeHasBeenSet() const;

                    /**
                     * 获取WAITING, waiting (default policy) EXECUTING: executing
                     * @return DependencyStrategy WAITING, waiting (default policy) EXECUTING: executing
                     * 
                     */
                    std::string GetDependencyStrategy() const;

                    /**
                     * 设置WAITING, waiting (default policy) EXECUTING: executing
                     * @param _dependencyStrategy WAITING, waiting (default policy) EXECUTING: executing
                     * 
                     */
                    void SetDependencyStrategy(const std::string& _dependencyStrategy);

                    /**
                     * 判断参数 DependencyStrategy 是否已赋值
                     * @return DependencyStrategy 是否已赋值
                     * 
                     */
                    bool DependencyStrategyHasBeenSet() const;

                    /**
                     * 获取Parent Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentTask Parent Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskInnerInfo GetParentTask() const;

                    /**
                     * 设置Parent Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentTask Parent Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParentTask(const TaskInnerInfo& _parentTask);

                    /**
                     * 判断参数 ParentTask 是否已赋值
                     * @return ParentTask 是否已赋值
                     * 
                     */
                    bool ParentTaskHasBeenSet() const;

                    /**
                     * 获取Subtask Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SonTask Subtask Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskInnerInfo GetSonTask() const;

                    /**
                     * 设置Subtask Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _sonTask Subtask Information
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSonTask(const TaskInnerInfo& _sonTask);

                    /**
                     * 判断参数 SonTask 是否已赋值
                     * @return SonTask 是否已赋值
                     * 
                     */
                    bool SonTaskHasBeenSet() const;

                private:

                    /**
                     * Only five types of periodic execution dependency configurations: HOUR, DAY, WEEK, MONTH, YEAR, CRONTAB, MINUTE
                     */
                    std::string m_dependConfType;
                    bool m_dependConfTypeHasBeenSet;

                    /**
                     * Dependency Configuration Subordinate Period Type, CURRENT_HOUR, PREVIOUS_HOUR, CURRENT_DAY, PREVIOUS_DAY, PREVIOUS_WEEK, PREVIOUS_FRIDAY, PREVIOUS_WEEKEND, CURRENT_MONTH, PREVIOUS_MONTH, PREVIOUS_END_OF_MONTH
     * PREVIOUS_BEGIN_OF_MONTH,ALL_MONTH_OF_YEAR,ALL_DAY_OF_YEAR,CURRENT_YEAR,CURRENT,CURRENT_MINUTE,PREVIOUS_MINUTE_CYCLE,PREVIOUS_HOUR_CYCLE
                     */
                    std::string m_subordinateCyclicType;
                    bool m_subordinateCyclicTypeHasBeenSet;

                    /**
                     * WAITING, waiting (default policy) EXECUTING: executing
                     */
                    std::string m_dependencyStrategy;
                    bool m_dependencyStrategyHasBeenSet;

                    /**
                     * Parent Task Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskInnerInfo m_parentTask;
                    bool m_parentTaskHasBeenSet;

                    /**
                     * Subtask Information
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskInnerInfo m_sonTask;
                    bool m_sonTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIG_H_
