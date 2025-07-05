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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDOMAINUSRNAMEREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDOMAINUSRNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDomainUsrName request structure.
                */
                class ModifyDomainUsrNameRequest : public AbstractModel
                {
                public:
                    ModifyDomainUsrNameRequest();
                    ~ModifyDomainUsrNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User CNAME
                     * @return DomainName User CNAME
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置User CNAME
                     * @param _domainName User CNAME
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Domain name
                     * @return DomainUserName Domain name
                     * 
                     */
                    std::string GetDomainUserName() const;

                    /**
                     * 设置Domain name
                     * @param _domainUserName Domain name
                     * 
                     */
                    void SetDomainUserName(const std::string& _domainUserName);

                    /**
                     * 判断参数 DomainUserName 是否已赋值
                     * @return DomainUserName 是否已赋值
                     * 
                     */
                    bool DomainUserNameHasBeenSet() const;

                private:

                    /**
                     * User CNAME
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Domain name
                     */
                    std::string m_domainUserName;
                    bool m_domainUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDOMAINUSRNAMEREQUEST_H_
