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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYTRIGGERTASK_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYTRIGGERTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Task triggered by alarm policy
                */
                class AlarmPolicyTriggerTask : public AbstractModel
                {
                public:
                    AlarmPolicyTriggerTask();
                    ~AlarmPolicyTriggerTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Triggered task type. Valid value: AS (auto scaling)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Type Triggered task type. Valid value: AS (auto scaling)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Triggered task type. Valid value: AS (auto scaling)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _type Triggered task type. Valid value: AS (auto scaling)
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Configuration information in JSON format, such as {"Key1":"Value1","Key2":"Value2"}
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskConfig Configuration information in JSON format, such as {"Key1":"Value1","Key2":"Value2"}
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskConfig() const;

                    /**
                     * 设置Configuration information in JSON format, such as {"Key1":"Value1","Key2":"Value2"}
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _taskConfig Configuration information in JSON format, such as {"Key1":"Value1","Key2":"Value2"}
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskConfig(const std::string& _taskConfig);

                    /**
                     * 判断参数 TaskConfig 是否已赋值
                     * @return TaskConfig 是否已赋值
                     * 
                     */
                    bool TaskConfigHasBeenSet() const;

                private:

                    /**
                     * Triggered task type. Valid value: AS (auto scaling)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Configuration information in JSON format, such as {"Key1":"Value1","Key2":"Value2"}
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskConfig;
                    bool m_taskConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMPOLICYTRIGGERTASK_H_
