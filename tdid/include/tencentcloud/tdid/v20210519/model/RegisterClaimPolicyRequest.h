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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCLAIMPOLICYREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCLAIMPOLICYREQUEST_H_

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
                * RegisterClaimPolicy request structure.
                */
                class RegisterClaimPolicyRequest : public AbstractModel
                {
                public:
                    RegisterClaimPolicyRequest();
                    ~RegisterClaimPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The claim protocol type (CPT) index.
                     * @return CptIndex The claim protocol type (CPT) index.
                     * 
                     */
                    uint64_t GetCptIndex() const;

                    /**
                     * 设置The claim protocol type (CPT) index.
                     * @param _cptIndex The claim protocol type (CPT) index.
                     * 
                     */
                    void SetCptIndex(const uint64_t& _cptIndex);

                    /**
                     * 判断参数 CptIndex 是否已赋值
                     * @return CptIndex 是否已赋值
                     * 
                     */
                    bool CptIndexHasBeenSet() const;

                    /**
                     * 获取The disclosure policy.
                     * @return Policy The disclosure policy.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置The disclosure policy.
                     * @param _policy The disclosure policy.
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * The claim protocol type (CPT) index.
                     */
                    uint64_t m_cptIndex;
                    bool m_cptIndexHasBeenSet;

                    /**
                     * The disclosure policy.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_REGISTERCLAIMPOLICYREQUEST_H_
