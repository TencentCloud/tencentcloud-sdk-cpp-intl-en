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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEUSERDETAILRESP_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEUSERDETAILRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * User details
                */
                class DescribeUserDetailResp : public AbstractModel
                {
                public:
                    DescribeUserDetailResp();
                    ~DescribeUserDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User iD.
                     * @return UserId User iD.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User iD.
                     * @param _userId User iD.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User account
                     * @return UserAccount User account
                     * 
                     */
                    std::string GetUserAccount() const;

                    /**
                     * 设置User account
                     * @param _userAccount User account
                     * 
                     */
                    void SetUserAccount(const std::string& _userAccount);

                    /**
                     * 判断参数 UserAccount 是否已赋值
                     * @return UserAccount 是否已赋值
                     * 
                     */
                    bool UserAccountHasBeenSet() const;

                    /**
                     * 获取User account
1 - super admin 2 - platform admin 3 - ordinary member. not passing indicates all.
                     * @return AccountType User account
1 - super admin 2 - platform admin 3 - ordinary member. not passing indicates all.
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置User account
1 - super admin 2 - platform admin 3 - ordinary member. not passing indicates all.
                     * @param _accountType User account
1 - super admin 2 - platform admin 3 - ordinary member. not passing indicates all.
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取User name
                     * @return UserName User name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User name
                     * @param _userName User name
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * User iD.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User account
                     */
                    std::string m_userAccount;
                    bool m_userAccountHasBeenSet;

                    /**
                     * User account
1 - super admin 2 - platform admin 3 - ordinary member. not passing indicates all.
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * User name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEUSERDETAILRESP_H_
