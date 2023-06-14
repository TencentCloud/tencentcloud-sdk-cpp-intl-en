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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYCCPRECISIONPOLICYREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYCCPRECISIONPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CCPrecisionPlyRecord.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyCCPrecisionPolicy request structure.
                */
                class ModifyCCPrecisionPolicyRequest : public AbstractModel
                {
                public:
                    ModifyCCPrecisionPolicyRequest();
                    ~ModifyCCPrecisionPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Specifies the action. `alg`: Verify the access request via CAPTCHA; `drop`: Drop the access request.
                     * @return PolicyAction Specifies the action. `alg`: Verify the access request via CAPTCHA; `drop`: Drop the access request.
                     * 
                     */
                    std::string GetPolicyAction() const;

                    /**
                     * 设置Specifies the action. `alg`: Verify the access request via CAPTCHA; `drop`: Drop the access request.
                     * @param _policyAction Specifies the action. `alg`: Verify the access request via CAPTCHA; `drop`: Drop the access request.
                     * 
                     */
                    void SetPolicyAction(const std::string& _policyAction);

                    /**
                     * 判断参数 PolicyAction 是否已赋值
                     * @return PolicyAction 是否已赋值
                     * 
                     */
                    bool PolicyActionHasBeenSet() const;

                    /**
                     * 获取Policy records
                     * @return PolicyList Policy records
                     * 
                     */
                    std::vector<CCPrecisionPlyRecord> GetPolicyList() const;

                    /**
                     * 设置Policy records
                     * @param _policyList Policy records
                     * 
                     */
                    void SetPolicyList(const std::vector<CCPrecisionPlyRecord>& _policyList);

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     * 
                     */
                    bool PolicyListHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Specifies the action. `alg`: Verify the access request via CAPTCHA; `drop`: Drop the access request.
                     */
                    std::string m_policyAction;
                    bool m_policyActionHasBeenSet;

                    /**
                     * Policy records
                     */
                    std::vector<CCPrecisionPlyRecord> m_policyList;
                    bool m_policyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYCCPRECISIONPOLICYREQUEST_H_
