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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTLISTENERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTLISTENERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RegisterEventListener request structure.
                */
                class RegisterEventListenerRequest : public AbstractModel
                {
                public:
                    RegisterEventListenerRequest();
                    ~RegisterEventListenerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Keyword, if it refers to a task, then pass the Task ID
                     * @return Key Keyword, if it refers to a task, then pass the Task ID
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Keyword, if it refers to a task, then pass the Task ID
                     * @param _key Keyword, if it refers to a task, then pass the Task ID
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Event name
                     * @return EventName Event name
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name
                     * @param _eventName Event name
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Event type, default REST_API
                     * @return Type Event type, default REST_API
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Event type, default REST_API
                     * @param _type Event type, default REST_API
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
                     * 获取Configuration information, for example, maximum waiting time 1 day configuration in json: {"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * @return Properties Configuration information, for example, maximum waiting time 1 day configuration in json: {"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置Configuration information, for example, maximum waiting time 1 day configuration in json: {"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * @param _properties Configuration information, for example, maximum waiting time 1 day configuration in json: {"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * Keyword, if it refers to a task, then pass the Task ID
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Event name
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Event type, default REST_API
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Configuration information, for example, maximum waiting time 1 day configuration in json: {"maxWaitEventTime":1,"maxWaitEventTimeUnit":"DAYS"}
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REGISTEREVENTLISTENERREQUEST_H_
