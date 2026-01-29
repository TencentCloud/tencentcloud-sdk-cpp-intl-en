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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEACCESSKEYCHECKTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEACCESSKEYCHECKTASKREQUEST_H_

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
                * CreateAccessKeyCheckTask request structure.
                */
                class CreateAccessKeyCheckTaskRequest : public AbstractModel
                {
                public:
                    CreateAccessKeyCheckTaskRequest();
                    ~CreateAccessKeyCheckTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
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
                     * 获取Risk list.
                     * @return RiskIDList Risk list.
                     * 
                     */
                    std::vector<int64_t> GetRiskIDList() const;

                    /**
                     * 设置Risk list.
                     * @param _riskIDList Risk list.
                     * 
                     */
                    void SetRiskIDList(const std::vector<int64_t>& _riskIDList);

                    /**
                     * 判断参数 RiskIDList 是否已赋值
                     * @return RiskIDList 是否已赋值
                     * 
                     */
                    bool RiskIDListHasBeenSet() const;

                    /**
                     * 获取Access key list.
                     * @return AccessKeyList Access key list.
                     * 
                     */
                    std::vector<std::string> GetAccessKeyList() const;

                    /**
                     * 设置Access key list.
                     * @param _accessKeyList Access key list.
                     * 
                     */
                    void SetAccessKeyList(const std::vector<std::string>& _accessKeyList);

                    /**
                     * 判断参数 AccessKeyList 是否已赋值
                     * @return AccessKeyList 是否已赋值
                     * 
                     */
                    bool AccessKeyListHasBeenSet() const;

                    /**
                     * 获取Account uin list.
                     * @return SubUinList Account uin list.
                     * 
                     */
                    std::vector<std::string> GetSubUinList() const;

                    /**
                     * 设置Account uin list.
                     * @param _subUinList Account uin list.
                     * 
                     */
                    void SetSubUinList(const std::vector<std::string>& _subUinList);

                    /**
                     * 判断参数 SubUinList 是否已赋值
                     * @return SubUinList 是否已赋值
                     * 
                     */
                    bool SubUinListHasBeenSet() const;

                    /**
                     * 获取Risk rule id list.
                     * @return RiskRuleIDList Risk rule id list.
                     * 
                     */
                    std::vector<int64_t> GetRiskRuleIDList() const;

                    /**
                     * 设置Risk rule id list.
                     * @param _riskRuleIDList Risk rule id list.
                     * 
                     */
                    void SetRiskRuleIDList(const std::vector<int64_t>& _riskRuleIDList);

                    /**
                     * 判断参数 RiskRuleIDList 是否已赋值
                     * @return RiskRuleIDList 是否已赋值
                     * 
                     */
                    bool RiskRuleIDListHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Risk list.
                     */
                    std::vector<int64_t> m_riskIDList;
                    bool m_riskIDListHasBeenSet;

                    /**
                     * Access key list.
                     */
                    std::vector<std::string> m_accessKeyList;
                    bool m_accessKeyListHasBeenSet;

                    /**
                     * Account uin list.
                     */
                    std::vector<std::string> m_subUinList;
                    bool m_subUinListHasBeenSet;

                    /**
                     * Risk rule id list.
                     */
                    std::vector<int64_t> m_riskRuleIDList;
                    bool m_riskRuleIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEACCESSKEYCHECKTASKREQUEST_H_
