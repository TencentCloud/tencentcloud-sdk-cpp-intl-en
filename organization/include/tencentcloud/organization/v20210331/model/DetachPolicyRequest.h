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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DETACHPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DETACHPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DetachPolicy request structure.
                */
                class DetachPolicyRequest : public AbstractModel
                {
                public:
                    DetachPolicyRequest();
                    ~DetachPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unbind policy target ID. member Uin or department ID</p>.
                     * @return TargetId <p>Unbind policy target ID. member Uin or department ID</p>.
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置<p>Unbind policy target ID. member Uin or department ID</p>.
                     * @param _targetId <p>Unbind policy target ID. member Uin or department ID</p>.
                     * 
                     */
                    void SetTargetId(const uint64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取<p>Target type. valid values: NODE-department, MEMBER-MEMBER</p>.
                     * @return TargetType <p>Target type. valid values: NODE-department, MEMBER-MEMBER</p>.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>Target type. valid values: NODE-department, MEMBER-MEMBER</p>.
                     * @param _targetType <p>Target type. valid values: NODE-department, MEMBER-MEMBER</p>.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Policy Id. you can call the <a href="https://www.tencentcloud.com/document/product/850/105311?from_cn_redirect=1">ListPolicies</a> api to obtain it.</p>.
                     * @return PolicyId <p>Policy Id. you can call the <a href="https://www.tencentcloud.com/document/product/850/105311?from_cn_redirect=1">ListPolicies</a> api to obtain it.</p>.
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置<p>Policy Id. you can call the <a href="https://www.tencentcloud.com/document/product/850/105311?from_cn_redirect=1">ListPolicies</a> api to obtain it.</p>.
                     * @param _policyId <p>Policy Id. you can call the <a href="https://www.tencentcloud.com/document/product/850/105311?from_cn_redirect=1">ListPolicies</a> api to obtain it.</p>.
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>POLICY type. default value: SERVICE_CONTROL_POLICY. valid values: SERVICE_CONTROL_POLICY (SERVICE CONTROL POLICY) and TAG_POLICY (TAG POLICY).</p>.
                     * @return Type <p>POLICY type. default value: SERVICE_CONTROL_POLICY. valid values: SERVICE_CONTROL_POLICY (SERVICE CONTROL POLICY) and TAG_POLICY (TAG POLICY).</p>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>POLICY type. default value: SERVICE_CONTROL_POLICY. valid values: SERVICE_CONTROL_POLICY (SERVICE CONTROL POLICY) and TAG_POLICY (TAG POLICY).</p>.
                     * @param _type <p>POLICY type. default value: SERVICE_CONTROL_POLICY. valid values: SERVICE_CONTROL_POLICY (SERVICE CONTROL POLICY) and TAG_POLICY (TAG POLICY).</p>.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Unbind policy target ID. member Uin or department ID</p>.
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * <p>Target type. valid values: NODE-department, MEMBER-MEMBER</p>.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>Policy Id. you can call the <a href="https://www.tencentcloud.com/document/product/850/105311?from_cn_redirect=1">ListPolicies</a> api to obtain it.</p>.
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>POLICY type. default value: SERVICE_CONTROL_POLICY. valid values: SERVICE_CONTROL_POLICY (SERVICE CONTROL POLICY) and TAG_POLICY (TAG POLICY).</p>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DETACHPOLICYREQUEST_H_
