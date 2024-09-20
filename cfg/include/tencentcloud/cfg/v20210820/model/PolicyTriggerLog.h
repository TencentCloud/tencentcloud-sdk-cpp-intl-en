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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_POLICYTRIGGERLOG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_POLICYTRIGGERLOG_H_

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
                * Guardrail policy triggering log
                */
                class PolicyTriggerLog : public AbstractModel
                {
                public:
                    PolicyTriggerLog();
                    ~PolicyTriggerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Experiment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Experiment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Experiment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskId Experiment ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Type. 0: trigger; 1: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerType Type. 0: trigger; 1: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置Type. 0: trigger; 1: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerType Type. 0: trigger; 1: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content Content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content Content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Triggering time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatTime Triggering time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置Triggering time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creatTime Triggering time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     * 
                     */
                    bool CreatTimeHasBeenSet() const;

                private:

                    /**
                     * Experiment ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type. 0: trigger; 1: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Triggering time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_POLICYTRIGGERLOG_H_
