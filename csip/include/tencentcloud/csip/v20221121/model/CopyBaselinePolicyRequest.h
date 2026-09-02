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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COPYBASELINEPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COPYBASELINEPOLICYREQUEST_H_

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
                * CopyBaselinePolicy request structure.
                */
                class CopyBaselinePolicyRequest : public AbstractModel
                {
                public:
                    CopyBaselinePolicyRequest();
                    ~CopyBaselinePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID of the replicated policy.</p>
                     * @return PolicyID <p>ID of the replicated policy.</p>
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置<p>ID of the replicated policy.</p>
                     * @param _policyID <p>ID of the replicated policy.</p>
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>Target AppID to copy</p>
                     * @return TargetAppIDList <p>Target AppID to copy</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDList() const;

                    /**
                     * 设置<p>Target AppID to copy</p>
                     * @param _targetAppIDList <p>Target AppID to copy</p>
                     * 
                     */
                    void SetTargetAppIDList(const std::vector<uint64_t>& _targetAppIDList);

                    /**
                     * 判断参数 TargetAppIDList 是否已赋值
                     * @return TargetAppIDList 是否已赋值
                     * 
                     */
                    bool TargetAppIDListHasBeenSet() const;

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
                     * <p>ID of the replicated policy.</p>
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>Target AppID to copy</p>
                     */
                    std::vector<uint64_t> m_targetAppIDList;
                    bool m_targetAppIDListHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COPYBASELINEPOLICYREQUEST_H_
