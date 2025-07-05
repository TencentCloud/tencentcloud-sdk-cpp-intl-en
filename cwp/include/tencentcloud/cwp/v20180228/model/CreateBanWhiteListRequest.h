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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BanWhiteList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateBanWhiteList request structure.
                */
                class CreateBanWhiteListRequest : public AbstractModel
                {
                public:
                    CreateBanWhiteListRequest();
                    ~CreateBanWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Block rules
                     * @return Rules Block rules
                     * 
                     */
                    BanWhiteList GetRules() const;

                    /**
                     * 设置Block rules
                     * @param _rules Block rules
                     * 
                     */
                    void SetRules(const BanWhiteList& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Event list ID, which is passed when the event list is allowlisted. After it is successfully allowlisted, the events in the list will be marked as whitelisted.
                     * @return EventId Event list ID, which is passed when the event list is allowlisted. After it is successfully allowlisted, the events in the list will be marked as whitelisted.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event list ID, which is passed when the event list is allowlisted. After it is successfully allowlisted, the events in the list will be marked as whitelisted.
                     * @param _eventId Event list ID, which is passed when the event list is allowlisted. After it is successfully allowlisted, the events in the list will be marked as whitelisted.
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
                     * Block rules
                     */
                    BanWhiteList m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Event list ID, which is passed when the event list is allowlisted. After it is successfully allowlisted, the events in the list will be marked as whitelisted.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBANWHITELISTREQUEST_H_
