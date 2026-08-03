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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Create account
                */
                class NewAccount : public AbstractModel
                {
                public:
                    NewAccount();
                    ~NewAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Account name, containing letters, digits, and underscores, starting with a letter, ending with a letter or digit, length 1-30</p>
                     * @return AccountName <p>Account name, containing letters, digits, and underscores, starting with a letter, ending with a letter or digit, length 1-30</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Account name, containing letters, digits, and underscores, starting with a letter, ending with a letter or digit, length 1-30</p>
                     * @param _accountName <p>Account name, containing letters, digits, and underscores, starting with a letter, ending with a letter or digit, length 1-30</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>host (% or ipv4 address)</p>
                     * @return Host <p>host (% or ipv4 address)</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>host (% or ipv4 address)</p>
                     * @param _host <p>host (% or ipv4 address)</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Password. The length range is 8 to 64 characters.</p>
                     * @return AccountPassword <p>Password. The length range is 8 to 64 characters.</p>
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置<p>Password. The length range is 8 to 64 characters.</p>
                     * @param _accountPassword <p>Password. The length range is 8 to 64 characters.</p>
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取<p>Whether password rotation is enabled (0: turn off; 1: turn on)</p>
                     * @return PasswordRotation <p>Whether password rotation is enabled (0: turn off; 1: turn on)</p>
                     * 
                     */
                    int64_t GetPasswordRotation() const;

                    /**
                     * 设置<p>Whether password rotation is enabled (0: turn off; 1: turn on)</p>
                     * @param _passwordRotation <p>Whether password rotation is enabled (0: turn off; 1: turn on)</p>
                     * 
                     */
                    void SetPasswordRotation(const int64_t& _passwordRotation);

                    /**
                     * 判断参数 PasswordRotation 是否已赋值
                     * @return PasswordRotation 是否已赋值
                     * 
                     */
                    bool PasswordRotationHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Maximum user connections cannot be greater than 10240</p>
                     * @return MaxUserConnections <p>Maximum user connections cannot be greater than 10240</p>
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置<p>Maximum user connections cannot be greater than 10240</p>
                     * @param _maxUserConnections <p>Maximum user connections cannot be greater than 10240</p>
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * <p>Account name, containing letters, digits, and underscores, starting with a letter, ending with a letter or digit, length 1-30</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>host (% or ipv4 address)</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Password. The length range is 8 to 64 characters.</p>
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * <p>Whether password rotation is enabled (0: turn off; 1: turn on)</p>
                     */
                    int64_t m_passwordRotation;
                    bool m_passwordRotationHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Maximum user connections cannot be greater than 10240</p>
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_
