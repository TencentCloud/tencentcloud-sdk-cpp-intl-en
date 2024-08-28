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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKWHITELISTREQUEST_H_

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
                * ModifyNetAttackWhiteList request structure.
                */
                class ModifyNetAttackWhiteListRequest : public AbstractModel
                {
                public:
                    ModifyNetAttackWhiteListRequest();
                    ~ModifyNetAttackWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether applies all hosts: 0: no; 1: yes
                     * @return Scope Whether applies all hosts: 0: no; 1: yes
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置Whether applies all hosts: 0: no; 1: yes
                     * @param _scope Whether applies all hosts: 0: no; 1: yes
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24 
                     * @return SrcIp Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24 
                     * 
                     */
                    std::vector<std::string> GetSrcIp() const;

                    /**
                     * 设置Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24 
                     * @param _srcIp Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24 
                     * 
                     */
                    void SetSrcIp(const std::vector<std::string>& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Whether to allowlist all alarms that match this rule: 1: Yes, 0: No.
                     * @return DealOldEvents Whether to allowlist all alarms that match this rule: 1: Yes, 0: No.
                     * 
                     */
                    uint64_t GetDealOldEvents() const;

                    /**
                     * 设置Whether to allowlist all alarms that match this rule: 1: Yes, 0: No.
                     * @param _dealOldEvents Whether to allowlist all alarms that match this rule: 1: Yes, 0: No.
                     * 
                     */
                    void SetDealOldEvents(const uint64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
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
                     * 获取QUUID list
                     * @return QuuidList QUUID list
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置QUUID list
                     * @param _quuidList QUUID list
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Description Rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
                     * @param _description Rule description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Whether applies all hosts: 0: no; 1: yes
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * Source IP. Single IP: 1.1.1.1, IP Range: 1.1.1.1-1.1.2.1, IP Range: 1.1.1.0/24 
                     */
                    std::vector<std::string> m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Whether to allowlist all alarms that match this rule: 1: Yes, 0: No.
                     */
                    uint64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * QUUID list
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKWHITELISTREQUEST_H_
