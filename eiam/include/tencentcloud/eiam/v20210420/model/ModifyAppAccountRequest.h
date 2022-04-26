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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPACCOUNTREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ModifyAppAccount request structure.
                */
                class ModifyAppAccountRequest : public AbstractModel
                {
                public:
                    ModifyAppAccountRequest();
                    ~ModifyAppAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Account ID.
                     * @return AccountId Account ID.
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置Account ID.
                     * @param AccountId Account ID.
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取Account name. When this parameter is not specified, the name will not be modified.
                     * @return AccountName Account name. When this parameter is not specified, the name will not be modified.
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name. When this parameter is not specified, the name will not be modified.
                     * @param AccountName Account name. When this parameter is not specified, the name will not be modified.
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取Account password. When this parameter is not specified, the password will not be changed.
                     * @return Password Account password. When this parameter is not specified, the password will not be changed.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Account password. When this parameter is not specified, the password will not be changed.
                     * @param Password Account password. When this parameter is not specified, the password will not be changed.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Description. When this parameter is not specified, the description will not be modified.
                     * @return Description Description. When this parameter is not specified, the description will not be modified.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description. When this parameter is not specified, the description will not be modified.
                     * @param Description Description. When this parameter is not specified, the description will not be modified.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Account ID.
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * Account name. When this parameter is not specified, the name will not be modified.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Account password. When this parameter is not specified, the password will not be changed.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Description. When this parameter is not specified, the description will not be modified.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPACCOUNTREQUEST_H_
