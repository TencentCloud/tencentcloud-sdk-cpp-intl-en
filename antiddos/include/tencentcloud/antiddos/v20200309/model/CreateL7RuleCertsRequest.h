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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEL7RULECERTSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEL7RULECERTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InsL7Rules.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateL7RuleCerts request structure.
                */
                class CreateL7RuleCertsRequest : public AbstractModel
                {
                public:
                    CreateL7RuleCertsRequest();
                    ~CreateL7RuleCertsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SSL certificate ID
                     * @return CertId SSL certificate ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置SSL certificate ID
                     * @param _certId SSL certificate ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取List of Layer-7 domain name forwarding rules
                     * @return L7Rules List of Layer-7 domain name forwarding rules
                     * 
                     */
                    std::vector<InsL7Rules> GetL7Rules() const;

                    /**
                     * 设置List of Layer-7 domain name forwarding rules
                     * @param _l7Rules List of Layer-7 domain name forwarding rules
                     * 
                     */
                    void SetL7Rules(const std::vector<InsL7Rules>& _l7Rules);

                    /**
                     * 判断参数 L7Rules 是否已赋值
                     * @return L7Rules 是否已赋值
                     * 
                     */
                    bool L7RulesHasBeenSet() const;

                private:

                    /**
                     * SSL certificate ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * List of Layer-7 domain name forwarding rules
                     */
                    std::vector<InsL7Rules> m_l7Rules;
                    bool m_l7RulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEL7RULECERTSREQUEST_H_
