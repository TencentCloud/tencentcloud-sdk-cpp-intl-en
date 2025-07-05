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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETESESSIONREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETESESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteSession request structure.
                */
                class DeleteSessionRequest : public AbstractModel
                {
                public:
                    DeleteSessionRequest();
                    ~DeleteSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取clb-waf or sparta-waf
                     * @return Edition clb-waf or sparta-waf
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置clb-waf or sparta-waf
                     * @param _edition clb-waf or sparta-waf
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取SessionID to be deleted
                     * @return SessionID SessionID to be deleted
                     * 
                     */
                    int64_t GetSessionID() const;

                    /**
                     * 设置SessionID to be deleted
                     * @param _sessionID SessionID to be deleted
                     * 
                     */
                    void SetSessionID(const int64_t& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * clb-waf or sparta-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * SessionID to be deleted
                     */
                    int64_t m_sessionID;
                    bool m_sessionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETESESSIONREQUEST_H_
