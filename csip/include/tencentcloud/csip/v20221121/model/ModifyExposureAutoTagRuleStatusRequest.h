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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSUREAUTOTAGRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSUREAUTOTAGRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyExposureAutoTagRuleStatus request structure.
                */
                class ModifyExposureAutoTagRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyExposureAutoTagRuleStatusRequest();
                    ~ModifyExposureAutoTagRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Rule ID.</p>
                     * @return RuleID <p>Rule ID.</p>
                     * 
                     */
                    uint64_t GetRuleID() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _ruleID <p>Rule ID.</p>
                     * 
                     */
                    void SetRuleID(const uint64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>Enabled status</p>
                     * @return Enable <p>Enabled status</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Enabled status</p>
                     * @param _enable <p>Enabled status</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

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

                private:

                    /**
                     * <p>Rule ID.</p>
                     */
                    uint64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>Enabled status</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEXPOSUREAUTOTAGRULESTATUSREQUEST_H_
