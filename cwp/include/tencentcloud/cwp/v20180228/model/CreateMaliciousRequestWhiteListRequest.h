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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEMALICIOUSREQUESTWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEMALICIOUSREQUESTWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateMaliciousRequestWhiteList request structure.
                */
                class CreateMaliciousRequestWhiteListRequest : public AbstractModel
                {
                public:
                    CreateMaliciousRequestWhiteListRequest();
                    ~CreateMaliciousRequestWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Allowlisted domain names
                     * @return Domain Allowlisted domain names
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Allowlisted domain names
                     * @param _domain Allowlisted domain names
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
                     * 获取Remarks
                     * @return Mark Remarks
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置Remarks
                     * @param _mark Remarks
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                private:

                    /**
                     * Allowlisted domain names
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEMALICIOUSREQUESTWHITELISTREQUEST_H_
