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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HostLoginWhiteObj.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * AddLoginWhiteLists request structure.
                */
                class AddLoginWhiteListsRequest : public AbstractModel
                {
                public:
                    AddLoginWhiteListsRequest();
                    ~AddLoginWhiteListsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cross-region log-in allowlist entity
                     * @return HostLoginWhiteObj Cross-region log-in allowlist entity
                     * 
                     */
                    HostLoginWhiteObj GetHostLoginWhiteObj() const;

                    /**
                     * 设置Cross-region log-in allowlist entity
                     * @param _hostLoginWhiteObj Cross-region log-in allowlist entity
                     * 
                     */
                    void SetHostLoginWhiteObj(const HostLoginWhiteObj& _hostLoginWhiteObj);

                    /**
                     * 判断参数 HostLoginWhiteObj 是否已赋值
                     * @return HostLoginWhiteObj 是否已赋值
                     * 
                     */
                    bool HostLoginWhiteObjHasBeenSet() const;

                    /**
                     * 获取Synchronous event processing method:
"": do not process"All": add all events that match this configuration to the allowlist"Id": add the event corresponding to the event ID to the allowlist
                     * @return ProcessType Synchronous event processing method:
"": do not process"All": add all events that match this configuration to the allowlist"Id": add the event corresponding to the event ID to the allowlist
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置Synchronous event processing method:
"": do not process"All": add all events that match this configuration to the allowlist"Id": add the event corresponding to the event ID to the allowlist
                     * @param _processType Synchronous event processing method:
"": do not process"All": add all events that match this configuration to the allowlist"Id": add the event corresponding to the event ID to the allowlist
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.
                     * @return EventId Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.
                     * @param _eventId Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                private:

                    /**
                     * Cross-region log-in allowlist entity
                     */
                    HostLoginWhiteObj m_hostLoginWhiteObj;
                    bool m_hostLoginWhiteObjHasBeenSet;

                    /**
                     * Synchronous event processing method:
"": do not process"All": add all events that match this configuration to the allowlist"Id": add the event corresponding to the event ID to the allowlist
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_
