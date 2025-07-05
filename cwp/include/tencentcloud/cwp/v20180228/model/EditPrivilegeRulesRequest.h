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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EDITPRIVILEGERULESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EDITPRIVILEGERULESREQUEST_H_

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
                * EditPrivilegeRules request structure.
                */
                class EditPrivilegeRulesRequest : public AbstractModel
                {
                public:
                    EditPrivilegeRulesRequest();
                    ~EditPrivilegeRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule ID (Leave it blank when adding rules.)
                     * @return Id Rule ID (Leave it blank when adding rules.)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID (Leave it blank when adding rules.)
                     * @param _id Rule ID (Leave it blank when adding rules.)
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Client ID array
                     * @return Uuids Client ID array
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Client ID array
                     * @param _uuids Client ID array
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取Host IP
                     * @return HostIp Host IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP
                     * @param _hostIp Host IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Process name
                     * @return ProcessName Process name
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置Process name
                     * @param _processName Process name
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Whether it is a S permission process
                     * @return SMode Whether it is a S permission process
                     * 
                     */
                    uint64_t GetSMode() const;

                    /**
                     * 设置Whether it is a S permission process
                     * @param _sMode Whether it is a S permission process
                     * 
                     */
                    void SetSMode(const uint64_t& _sMode);

                    /**
                     * 判断参数 SMode 是否已赋值
                     * @return SMode 是否已赋值
                     * 
                     */
                    bool SModeHasBeenSet() const;

                    /**
                     * 获取Whether the rule is global (not global by default)
                     * @return IsGlobal Whether the rule is global (not global by default)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether the rule is global (not global by default)
                     * @param _isGlobal Whether the rule is global (not global by default)
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取ID of the associated event when the user clicks Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     * @return EventId ID of the associated event when the user clicks Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置ID of the associated event when the user clicks Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     * @param _eventId ID of the associated event when the user clicks Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
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
                     * Rule ID (Leave it blank when adding rules.)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID array
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Host IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Process name
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Whether it is a S permission process
                     */
                    uint64_t m_sMode;
                    bool m_sModeHasBeenSet;

                    /**
                     * Whether the rule is global (not global by default)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * ID of the associated event when the user clicks Add to Allowlist on the event list and details page (leave this parameter blank for rule addition)
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EDITPRIVILEGERULESREQUEST_H_
