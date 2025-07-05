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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyDDoSWaterKey request structure.
                */
                class ModifyDDoSWaterKeyRequest : public AbstractModel
                {
                public:
                    ModifyDDoSWaterKeyRequest();
                    ~ModifyDDoSWaterKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * @param _business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

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
                     * 获取Key operation. Valid values: [add (add), delete (delete), open (open), close (close), get (get key)]
                     * @return Method Key operation. Valid values: [add (add), delete (delete), open (open), close (close), get (get key)]
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Key operation. Valid values: [add (add), delete (delete), open (open), close (close), get (get key)]
                     * @param _method Key operation. Valid values: [add (add), delete (delete), open (open), close (close), get (get key)]
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Key ID, which can be left empty or 0 when adding a key but is required for other operations
                     * @return KeyId Key ID, which can be left empty or 0 when adding a key but is required for other operations
                     * 
                     */
                    uint64_t GetKeyId() const;

                    /**
                     * 设置Key ID, which can be left empty or 0 when adding a key but is required for other operations
                     * @param _keyId Key ID, which can be left empty or 0 when adding a key but is required for other operations
                     * 
                     */
                    void SetKeyId(const uint64_t& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `bgp`: Anti-DDoS Pro (single IP); `bgp-multip`: Anti-DDoS Pro (multi-IP), `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Key operation. Valid values: [add (add), delete (delete), open (open), close (close), get (get key)]
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Key ID, which can be left empty or 0 when adding a key but is required for other operations
                     */
                    uint64_t m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYREQUEST_H_
