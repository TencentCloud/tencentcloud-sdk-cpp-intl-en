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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHANGERULEEVENTSIGNORESTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHANGERULEEVENTSIGNORESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ChangeRuleEventsIgnoreStatus request structure.
                */
                class ChangeRuleEventsIgnoreStatusRequest : public AbstractModel
                {
                public:
                    ChangeRuleEventsIgnoreStatusRequest();
                    ~ChangeRuleEventsIgnoreStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Ignore status: 0: unignore; 1: ignore
                     * @return IgnoreStatus Ignore status: 0: unignore; 1: ignore
                     * 
                     */
                    uint64_t GetIgnoreStatus() const;

                    /**
                     * 设置Ignore status: 0: unignore; 1: ignore
                     * @param _ignoreStatus Ignore status: 0: unignore; 1: ignore
                     * 
                     */
                    void SetIgnoreStatus(const uint64_t& _ignoreStatus);

                    /**
                     * 判断参数 IgnoreStatus 是否已赋值
                     * @return IgnoreStatus 是否已赋值
                     * 
                     */
                    bool IgnoreStatusHasBeenSet() const;

                    /**
                     * 获取Detection item ID array
                     * @return RuleIdList Detection item ID array
                     * 
                     */
                    std::vector<uint64_t> GetRuleIdList() const;

                    /**
                     * 设置Detection item ID array
                     * @param _ruleIdList Detection item ID array
                     * 
                     */
                    void SetRuleIdList(const std::vector<uint64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取Event ID array
                     * @return EventIdList Event ID array
                     * 
                     */
                    std::vector<uint64_t> GetEventIdList() const;

                    /**
                     * 设置Event ID array
                     * @param _eventIdList Event ID array
                     * 
                     */
                    void SetEventIdList(const std::vector<uint64_t>& _eventIdList);

                    /**
                     * 判断参数 EventIdList 是否已赋值
                     * @return EventIdList 是否已赋值
                     * 
                     */
                    bool EventIdListHasBeenSet() const;

                private:

                    /**
                     * Ignore status: 0: unignore; 1: ignore
                     */
                    uint64_t m_ignoreStatus;
                    bool m_ignoreStatusHasBeenSet;

                    /**
                     * Detection item ID array
                     */
                    std::vector<uint64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * Event ID array
                     */
                    std::vector<uint64_t> m_eventIdList;
                    bool m_eventIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHANGERULEEVENTSIGNORESTATUSREQUEST_H_
