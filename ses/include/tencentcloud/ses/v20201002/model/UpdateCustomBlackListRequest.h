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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_UPDATECUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_UPDATECUSTOMBLACKLISTREQUEST_H_

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
                * UpdateCustomBlackList request structure.
                */
                class UpdateCustomBlackListRequest : public AbstractModel
                {
                public:
                    UpdateCustomBlackListRequest();
                    ~UpdateCustomBlackListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Blocklist id that needs to change.
                     * @return Id Blocklist id that needs to change.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Blocklist id that needs to change.
                     * @param _id Blocklist id that needs to change.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取After modification email address.
                     * @return Email After modification email address.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置After modification email address.
                     * @param _email After modification email address.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Expiration time. if left empty, it indicates permanent validity.
                     * @return ExpireDate Expiration time. if left empty, it indicates permanent validity.
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置Expiration time. if left empty, it indicates permanent validity.
                     * @param _expireDate Expiration time. if left empty, it indicates permanent validity.
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
                     * Blocklist id that needs to change.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * After modification email address.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Expiration time. if left empty, it indicates permanent validity.
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_UPDATECUSTOMBLACKLISTREQUEST_H_
