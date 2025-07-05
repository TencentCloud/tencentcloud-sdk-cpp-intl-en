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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_QUERYPOLICYRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_QUERYPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * QueryPolicy response structure.
                */
                class QueryPolicyResponse : public AbstractModel
                {
                public:
                    QueryPolicyResponse();
                    ~QueryPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The policy index.
                     * @return Id The policy index.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取The policy ID.
                     * @return PolicyId The policy ID.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取The claim protocol type (CPT) ID.
                     * @return CptId The claim protocol type (CPT) ID.
                     * 
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     * 
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取The content of the policy.
                     * @return PolicyData The content of the policy.
                     * 
                     */
                    std::string GetPolicyData() const;

                    /**
                     * 判断参数 PolicyData 是否已赋值
                     * @return PolicyData 是否已赋值
                     * 
                     */
                    bool PolicyDataHasBeenSet() const;

                private:

                    /**
                     * The policy index.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * The policy ID.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The claim protocol type (CPT) ID.
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * The content of the policy.
                     */
                    std::string m_policyData;
                    bool m_policyDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_QUERYPOLICYRESPONSE_H_
