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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamInfoDs.h>
#include <tencentcloud/wedata/v20210820/model/EventListenerTaskInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event listener information.
                */
                class EventListenerDTO : public AbstractModel
                {
                public:
                    EventListenerDTO();
                    ~EventListenerDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Keyword, generally the task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Key Keyword, generally the task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Keyword, generally the task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _key Keyword, generally the task id.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取REST_API,KAFKA
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type REST_API,KAFKA
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置REST_API,KAFKA
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type REST_API,KAFKA
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreationTs Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creationTs Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取Configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PropertiesList Configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamInfoDs> GetPropertiesList() const;

                    /**
                     * 设置Configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _propertiesList Configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPropertiesList(const std::vector<ParamInfoDs>& _propertiesList);

                    /**
                     * 判断参数 PropertiesList 是否已赋值
                     * @return PropertiesList 是否已赋值
                     * 
                     */
                    bool PropertiesListHasBeenSet() const;

                    /**
                     * 获取Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventName Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventName Event name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Listener task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskInfo Listener task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EventListenerTaskInfo GetTaskInfo() const;

                    /**
                     * 设置Listener task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _taskInfo Listener task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTaskInfo(const EventListenerTaskInfo& _taskInfo);

                    /**
                     * 判断参数 TaskInfo 是否已赋值
                     * @return TaskInfo 是否已赋值
                     * 
                     */
                    bool TaskInfoHasBeenSet() const;

                    /**
                     * 获取Project id to which the event belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventProjectId Project id to which the event belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventProjectId() const;

                    /**
                     * 设置Project id to which the event belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventProjectId Project id to which the event belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventProjectId(const std::string& _eventProjectId);

                    /**
                     * 判断参数 EventProjectId 是否已赋值
                     * @return EventProjectId 是否已赋值
                     * 
                     */
                    bool EventProjectIdHasBeenSet() const;

                private:

                    /**
                     * Keyword, generally the task id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * REST_API,KAFKA
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * Configuration information

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamInfoDs> m_propertiesList;
                    bool m_propertiesListHasBeenSet;

                    /**
                     * Event name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Listener task information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    EventListenerTaskInfo m_taskInfo;
                    bool m_taskInfoHasBeenSet;

                    /**
                     * Project id to which the event belongs.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventProjectId;
                    bool m_eventProjectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTLISTENERDTO_H_
