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
                     * 获取<p>Unusual-login allowlist entry</p>
                     * @return HostLoginWhiteObj <p>Unusual-login allowlist entry</p>
                     * 
                     */
                    HostLoginWhiteObj GetHostLoginWhiteObj() const;

                    /**
                     * 设置<p>Unusual-login allowlist entry</p>
                     * @param _hostLoginWhiteObj <p>Unusual-login allowlist entry</p>
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
                     * 获取<p>Event sync processing method:<br>"" -- No action<br>"All" -- Add all event records matching this configuration to the allowlist<br>"Id" -- Add the event record corresponding to EventId to the allowlist</p>
                     * @return ProcessType <p>Event sync processing method:<br>"" -- No action<br>"All" -- Add all event records matching this configuration to the allowlist<br>"Id" -- Add the event record corresponding to EventId to the allowlist</p>
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置<p>Event sync processing method:<br>"" -- No action<br>"All" -- Add all event records matching this configuration to the allowlist<br>"Id" -- Add the event record corresponding to EventId to the allowlist</p>
                     * @param _processType <p>Event sync processing method:<br>"" -- No action<br>"All" -- Add all event records matching this configuration to the allowlist<br>"Id" -- Add the event record corresponding to EventId to the allowlist</p>
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
                     * 获取<p>Unusual-login event ID. This parameter is required when ProcessType is Id.</p>
                     * @return EventId <p>Unusual-login event ID. This parameter is required when ProcessType is Id.</p>
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置<p>Unusual-login event ID. This parameter is required when ProcessType is Id.</p>
                     * @param _eventId <p>Unusual-login event ID. This parameter is required when ProcessType is Id.</p>
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
                     * <p>Unusual-login allowlist entry</p>
                     */
                    HostLoginWhiteObj m_hostLoginWhiteObj;
                    bool m_hostLoginWhiteObjHasBeenSet;

                    /**
                     * <p>Event sync processing method:<br>"" -- No action<br>"All" -- Add all event records matching this configuration to the allowlist<br>"Id" -- Add the event record corresponding to EventId to the allowlist</p>
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>Unusual-login event ID. This parameter is required when ProcessType is Id.</p>
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ADDLOGINWHITELISTSREQUEST_H_
