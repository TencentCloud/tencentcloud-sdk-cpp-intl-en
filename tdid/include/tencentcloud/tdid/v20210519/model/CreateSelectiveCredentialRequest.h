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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATESELECTIVECREDENTIALREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATESELECTIVECREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/VerifyFunctionArg.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateSelectiveCredential request structure.
                */
                class CreateSelectiveCredentialRequest : public AbstractModel
                {
                public:
                    CreateSelectiveCredentialRequest();
                    ~CreateSelectiveCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取A parameter set.
                     * @return FunctionArg A parameter set.
                     * 
                     */
                    VerifyFunctionArg GetFunctionArg() const;

                    /**
                     * 设置A parameter set.
                     * @param _functionArg A parameter set.
                     * 
                     */
                    void SetFunctionArg(const VerifyFunctionArg& _functionArg);

                    /**
                     * 判断参数 FunctionArg 是否已赋值
                     * @return FunctionArg 是否已赋值
                     * 
                     */
                    bool FunctionArgHasBeenSet() const;

                    /**
                     * 获取The disclosure policy ID.
                     * @return PolicyId The disclosure policy ID.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置The disclosure policy ID.
                     * @param _policyId The disclosure policy ID.
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * A parameter set.
                     */
                    VerifyFunctionArg m_functionArg;
                    bool m_functionArgHasBeenSet;

                    /**
                     * The disclosure policy ID.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATESELECTIVECREDENTIALREQUEST_H_
