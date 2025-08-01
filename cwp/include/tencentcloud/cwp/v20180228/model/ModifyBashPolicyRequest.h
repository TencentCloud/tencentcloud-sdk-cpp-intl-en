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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASHPOLICYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASHPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BashPolicy.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBashPolicy request structure.
                */
                class ModifyBashPolicyRequest : public AbstractModel
                {
                public:
                    ModifyBashPolicyRequest();
                    ~ModifyBashPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specific policy configuration
                     * @return Policy Specific policy configuration
                     * 
                     */
                    BashPolicy GetPolicy() const;

                    /**
                     * 设置Specific policy configuration
                     * @param _policy Specific policy configuration
                     * 
                     */
                    void SetPolicy(const BashPolicy& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * Specific policy configuration
                     */
                    BashPolicy m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASHPOLICYREQUEST_H_
