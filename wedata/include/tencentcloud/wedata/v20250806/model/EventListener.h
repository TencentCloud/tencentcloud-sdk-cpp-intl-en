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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EVENTLISTENER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EVENTLISTENER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Event listener.
                */
                class EventListener : public AbstractModel
                {
                public:
                    EventListener();
                    ~EventListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Event cycle. valid values: SECOND, MIN, HOUR, DAY.

                     * @return EventSubType Event cycle. valid values: SECOND, MIN, HOUR, DAY.

                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event cycle. valid values: SECOND, MIN, HOUR, DAY.

                     * @param _eventSubType Event cycle. valid values: SECOND, MIN, HOUR, DAY.

                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                    /**
                     * 获取Event BROADCAST type: SINGLE, BROADCAST.

                     * @return EventBroadcastType Event BROADCAST type: SINGLE, BROADCAST.

                     * 
                     */
                    std::string GetEventBroadcastType() const;

                    /**
                     * 设置Event BROADCAST type: SINGLE, BROADCAST.

                     * @param _eventBroadcastType Event BROADCAST type: SINGLE, BROADCAST.

                     * 
                     */
                    void SetEventBroadcastType(const std::string& _eventBroadcastType);

                    /**
                     * 判断参数 EventBroadcastType 是否已赋值
                     * @return EventBroadcastType 是否已赋值
                     * 
                     */
                    bool EventBroadcastTypeHasBeenSet() const;

                    /**
                     * 获取Extension Information


                     * @return PropertiesList Extension Information


                     * 
                     */
                    std::vector<ParamInfo> GetPropertiesList() const;

                    /**
                     * 设置Extension Information


                     * @param _propertiesList Extension Information


                     * 
                     */
                    void SetPropertiesList(const std::vector<ParamInfo>& _propertiesList);

                    /**
                     * 判断参数 PropertiesList 是否已赋值
                     * @return PropertiesList 是否已赋值
                     * 
                     */
                    bool PropertiesListHasBeenSet() const;

                private:

                    /**
                     * Event name

                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event cycle. valid values: SECOND, MIN, HOUR, DAY.

                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                    /**
                     * Event BROADCAST type: SINGLE, BROADCAST.

                     */
                    std::string m_eventBroadcastType;
                    bool m_eventBroadcastTypeHasBeenSet;

                    /**
                     * Extension Information


                     */
                    std::vector<ParamInfo> m_propertiesList;
                    bool m_propertiesListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EVENTLISTENER_H_
