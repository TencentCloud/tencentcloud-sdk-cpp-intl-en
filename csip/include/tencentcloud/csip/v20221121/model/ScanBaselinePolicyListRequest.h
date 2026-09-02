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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEPOLICYLISTREQUEST_H_

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
                * ScanBaselinePolicyList request structure.
                */
                class ScanBaselinePolicyListRequest : public AbstractModel
                {
                public:
                    ScanBaselinePolicyListRequest();
                    ~ScanBaselinePolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @return PolicyType <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * @param _policyType <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of baseline policy IDs to rescan. It cannot be empty and 0 is not allowed as an element.</p>
                     * @return PolicyIDList <p>List of baseline policy IDs to rescan. It cannot be empty and 0 is not allowed as an element.</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyIDList() const;

                    /**
                     * 设置<p>List of baseline policy IDs to rescan. It cannot be empty and 0 is not allowed as an element.</p>
                     * @param _policyIDList <p>List of baseline policy IDs to rescan. It cannot be empty and 0 is not allowed as an element.</p>
                     * 
                     */
                    void SetPolicyIDList(const std::vector<uint64_t>& _policyIDList);

                    /**
                     * 判断参数 PolicyIDList 是否已赋值
                     * @return PolicyIDList 是否已赋值
                     * 
                     */
                    bool PolicyIDListHasBeenSet() const;

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
                     * <p>Baseline policy type. Values:</p><ul><li>SYSTEM: system policy (CSIP built-in)</li><li>SELF: user-defined policy</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>List of baseline policy IDs to rescan. It cannot be empty and 0 is not allowed as an element.</p>
                     */
                    std::vector<uint64_t> m_policyIDList;
                    bool m_policyIDListHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEPOLICYLISTREQUEST_H_
