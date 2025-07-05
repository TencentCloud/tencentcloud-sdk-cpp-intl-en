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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEDNSACCOUNT_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEDNSACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Private DNS account
                */
                class PrivateDNSAccount : public AbstractModel
                {
                public:
                    PrivateDNSAccount();
                    ~PrivateDNSAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Root account UIN
                     * @return Uin Root account UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Root account UIN
                     * @param _uin Root account UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Root account name
                     * @return Account Root account name
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Root account name
                     * @param _account Root account name
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取Account name
                     * @return Nickname Account name
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置Account name
                     * @param _nickname Account name
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                private:

                    /**
                     * Root account UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Root account name
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_PRIVATEDNSACCOUNT_H_
