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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEDOMAINPARAM_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEDOMAINPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Parameters to create a domain name
                */
                class CreateDomainParam : public AbstractModel
                {
                public:
                    CreateDomainParam();
                    ~CreateDomainParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Array of domain name URLs
                     * @return DomainUrlList Array of domain name URLs
                     * 
                     */
                    std::vector<std::string> GetDomainUrlList() const;

                    /**
                     * 设置Array of domain name URLs
                     * @param _domainUrlList Array of domain name URLs
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
                     * 获取Domain type. 1: requests domain; 2: WebView load domain, 3: sockets domain; 4: File upload; 5: File download
                     * @return DomainType Domain type. 1: requests domain; 2: WebView load domain, 3: sockets domain; 4: File upload; 5: File download
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Domain type. 1: requests domain; 2: WebView load domain, 3: sockets domain; 4: File upload; 5: File download
                     * @param _domainType Domain type. 1: requests domain; 2: WebView load domain, 3: sockets domain; 4: File upload; 5: File download
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                private:

                    /**
                     * Array of domain name URLs
                     */
                    std::vector<std::string> m_domainUrlList;
                    bool m_domainUrlListHasBeenSet;

                    /**
                     * Domain type. 1: requests domain; 2: WebView load domain, 3: sockets domain; 4: File upload; 5: File download
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEDOMAINPARAM_H_
