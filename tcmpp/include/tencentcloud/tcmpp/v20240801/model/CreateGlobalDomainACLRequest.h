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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEGLOBALDOMAINACLREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEGLOBALDOMAINACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateGlobalDomainACL request structure.
                */
                class CreateGlobalDomainACLRequest : public AbstractModel
                {
                public:
                    CreateGlobalDomainACLRequest();
                    ~CreateGlobalDomainACLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name list
                     * @return DomainUrlList Domain name list
                     * 
                     */
                    std::vector<std::string> GetDomainUrlList() const;

                    /**
                     * 设置Domain name list
                     * @param _domainUrlList Domain name list
                     * 
                     */
                    void SetDomainUrlList(const std::vector<std::string>& _domainUrlList);

                    /**
                     * 判断参数 DomainUrlList 是否已赋值
                     * @return DomainUrlList 是否已赋值
                     * 
                     */
                    bool DomainUrlListHasBeenSet() const;

                    /**
                     * 获取Domain type. 1: Allowed; 2: Blocked
                     * @return DomainType Domain type. 1: Allowed; 2: Blocked
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Domain type. 1: Allowed; 2: Blocked
                     * @param _domainType Domain type. 1: Allowed; 2: Blocked
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * Domain name list
                     */
                    std::vector<std::string> m_domainUrlList;
                    bool m_domainUrlListHasBeenSet;

                    /**
                     * Domain type. 1: Allowed; 2: Blocked
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEGLOBALDOMAINACLREQUEST_H_
