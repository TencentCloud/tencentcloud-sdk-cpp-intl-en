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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ADDLOGINWHITELISTSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ADDLOGINWHITELISTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/HostLoginWhiteObj.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
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
                     * 获取<p>Cross-region log-in allowlist entity</p>
                     * @return HostLoginWhiteObj <p>Cross-region log-in allowlist entity</p>
                     * 
                     */
                    HostLoginWhiteObj GetHostLoginWhiteObj() const;

                    /**
                     * 设置<p>Cross-region log-in allowlist entity</p>
                     * @param _hostLoginWhiteObj <p>Cross-region log-in allowlist entity</p>
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
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Event synchronization method: "" -- no operation. "All" -- add All event records that meet this configuration to the allowlist. "Id" -- add the event record corresponding to the EventId to the allowlist.</p>
                     * @return ProcessType <p>Event synchronization method: "" -- no operation. "All" -- add All event records that meet this configuration to the allowlist. "Id" -- add the event record corresponding to the EventId to the allowlist.</p>
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置<p>Event synchronization method: "" -- no operation. "All" -- add All event records that meet this configuration to the allowlist. "Id" -- add the event record corresponding to the EventId to the allowlist.</p>
                     * @param _processType <p>Event synchronization method: "" -- no operation. "All" -- add All event records that meet this configuration to the allowlist. "Id" -- add the event record corresponding to the EventId to the allowlist.</p>
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
                     * 获取<p>Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.</p>
                     * @return EventId <p>Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.</p>
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置<p>Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.</p>
                     * @param _eventId <p>Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.</p>
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
                     * <p>Cross-region log-in allowlist entity</p>
                     */
                    HostLoginWhiteObj m_hostLoginWhiteObj;
                    bool m_hostLoginWhiteObjHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Event synchronization method: "" -- no operation. "All" -- add All event records that meet this configuration to the allowlist. "Id" -- add the event record corresponding to the EventId to the allowlist.</p>
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>Cross-region log-in event ID. This parameter is required when ProcessType is set to Id.</p>
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ADDLOGINWHITELISTSREQUEST_H_
