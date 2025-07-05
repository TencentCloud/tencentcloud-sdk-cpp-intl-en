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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENEROPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENEROPSDTO_H_

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
                * Event Listener
                */
                class EventListenerOpsDto : public AbstractModel
                {
                public:
                    EventListenerOpsDto();
                    ~EventListenerOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EventName Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventName Event nameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Keyword, if it is a task, then it is the Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Key Keyword, if it is a task, then it is the Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Keyword, if it is a task, then it is the Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _key Keyword, if it is a task, then it is the Task ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Trigger methodNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Trigger methodNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Trigger methodNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Trigger methodNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Event Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Properties Event Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 设置Event Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _properties Event Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetProperties(const std::string& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreationTimestamp Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreationTimestamp() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _creationTimestamp Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreationTimestamp(const std::string& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                private:

                    /**
                     * Event nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Keyword, if it is a task, then it is the Task ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Trigger methodNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENEROPSDTO_H_
