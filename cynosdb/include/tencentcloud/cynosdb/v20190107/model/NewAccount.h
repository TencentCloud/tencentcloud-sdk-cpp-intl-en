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
                * The newly created x08 account
                */
                class NewAccount : public AbstractModel
                {
                public:
                    NewAccount();
                    ~NewAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Account name, which can contain 1-16 letters, digits, and underscores. It must begin with a letter and end with a letter or digit.
                     * @return AccountName Account name, which can contain 1-16 letters, digits, and underscores. It must begin with a letter and end with a letter or digit.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name, which can contain 1-16 letters, digits, and underscores. It must begin with a letter and end with a letter or digit.
                     * @param _accountName Account name, which can contain 1-16 letters, digits, and underscores. It must begin with a letter and end with a letter or digit.
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
                     * 获取Password, which can contain 8-64 characters.
                     * @return AccountPassword Password, which can contain 8-64 characters.
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置Password, which can contain 8-64 characters.
                     * @param _accountPassword Password, which can contain 8-64 characters.
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
                     * 获取Host
                     * @return Host Host
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host
                     * @param _host Host
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Maximum number of user connections, which cannot be above 10,240.
                     * @return MaxUserConnections Maximum number of user connections, which cannot be above 10,240.
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置Maximum number of user connections, which cannot be above 10,240.
                     * @param _maxUserConnections Maximum number of user connections, which cannot be above 10,240.
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
                     * Account name, which can contain 1-16 letters, digits, and underscores. It must begin with a letter and end with a letter or digit.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Password, which can contain 8-64 characters.
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * Host
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Maximum number of user connections, which cannot be above 10,240.
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NEWACCOUNT_H_
