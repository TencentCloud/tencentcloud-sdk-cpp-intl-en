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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATECUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATECUSTOMBLACKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateCustomBlacklist request structure.
                */
                class CreateCustomBlacklistRequest : public AbstractModel
                {
                public:
                    CreateCustomBlacklistRequest();
                    ~CreateCustomBlacklistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Add to blocklist email address.
                     * @return Emails Add to blocklist email address.
                     * 
                     */
                    std::vector<std::string> GetEmails() const;

                    /**
                     * 设置Add to blocklist email address.
                     * @param _emails Add to blocklist email address.
                     * 
                     */
                    void SetEmails(const std::vector<std::string>& _emails);

                    /**
                     * 判断参数 Emails 是否已赋值
                     * @return Emails 是否已赋值
                     * 
                     */
                    bool EmailsHasBeenSet() const;

                    /**
                     * 获取Expiration date.
                     * @return ExpireDate Expiration date.
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置Expiration date.
                     * @param _expireDate Expiration date.
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                private:

                    /**
                     * Add to blocklist email address.
                     */
                    std::vector<std::string> m_emails;
                    bool m_emailsHasBeenSet;

                    /**
                     * Expiration date.
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATECUSTOMBLACKLISTREQUEST_H_
