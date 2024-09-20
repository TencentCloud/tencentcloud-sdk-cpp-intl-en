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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TRIGGERPOLICYREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TRIGGERPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * TriggerPolicy request structure.
                */
                class TriggerPolicyRequest : public AbstractModel
                {
                public:
                    TriggerPolicyRequest();
                    ~TriggerPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Chaos engineering experiment ID
                     * @return TaskId Chaos engineering experiment ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Chaos engineering experiment ID
                     * @param _taskId Chaos engineering experiment ID
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
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Triggering content
                     * @return Content Triggering content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Triggering content
                     * @param _content Triggering content
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
                     * 获取Triggering type. 0: trigger; 1: recovery.
                     * @return TriggerType Triggering type. 0: trigger; 1: recovery.
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置Triggering type. 0: trigger; 1: recovery.
                     * @param _triggerType Triggering type. 0: trigger; 1: recovery.
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                private:

                    /**
                     * Chaos engineering experiment ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Triggering content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Triggering type. 0: trigger; 1: recovery.
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TRIGGERPOLICYREQUEST_H_
