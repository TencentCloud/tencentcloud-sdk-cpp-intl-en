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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTEVENTINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Instance event information.
                */
                class InstEventInfo : public AbstractModel
                {
                public:
                    InstEventInfo();
                    ~InstEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event name.
                     * @return EventName Event name.
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置Event name.
                     * @param _eventName Event name.
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
                     * 获取Event status.
                     * @return EventStatus Event status.
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 设置Event status.
                     * @param _eventStatus Event status.
                     * 
                     */
                    void SetEventStatus(const std::string& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取Event occurrence time.
                     * @return OccurTime Event occurrence time.
                     * 
                     */
                    std::string GetOccurTime() const;

                    /**
                     * 设置Event occurrence time.
                     * @param _occurTime Event occurrence time.
                     * 
                     */
                    void SetOccurTime(const std::string& _occurTime);

                    /**
                     * 判断参数 OccurTime 是否已赋值
                     * @return OccurTime 是否已赋值
                     * 
                     */
                    bool OccurTimeHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node ID.
                     * @return NodeId Node ID.
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID.
                     * @param _nodeId Node ID.
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * Event name.
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * Event status.
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * Event occurrence time.
                     */
                    std::string m_occurTime;
                    bool m_occurTimeHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node ID.
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTEVENTINFO_H_
