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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyServiceAccountPassword request structure.
                */
                class ModifyServiceAccountPasswordRequest : public AbstractModel
                {
                public:
                    ModifyServiceAccountPasswordRequest();
                    ~ModifyServiceAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return RegistryId Instance ID.
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID.
                     * @param _registryId Instance ID.
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Service level account name.
                     * @return Name Service level account name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service level account name.
                     * @param _name Service level account name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to randomly generate a password.
                     * @return Random Whether to randomly generate a password.
                     * 
                     */
                    bool GetRandom() const;

                    /**
                     * 设置Whether to randomly generate a password.
                     * @param _random Whether to randomly generate a password.
                     * 
                     */
                    void SetRandom(const bool& _random);

                    /**
                     * 判断参数 Random 是否已赋值
                     * @return Random 是否已赋值
                     * 
                     */
                    bool RandomHasBeenSet() const;

                    /**
                     * 获取Service level account password, 8 to 20 characters, contains at least one uppercase letter, one lowercase letter, and one number.
                     * @return Password Service level account password, 8 to 20 characters, contains at least one uppercase letter, one lowercase letter, and one number.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Service level account password, 8 to 20 characters, contains at least one uppercase letter, one lowercase letter, and one number.
                     * @param _password Service level account password, 8 to 20 characters, contains at least one uppercase letter, one lowercase letter, and one number.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Service level account name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to randomly generate a password.
                     */
                    bool m_random;
                    bool m_randomHasBeenSet;

                    /**
                     * Service level account password, 8 to 20 characters, contains at least one uppercase letter, one lowercase letter, and one number.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTPASSWORDREQUEST_H_
