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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNT_H_

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
                * Database account information
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Database account name.</p>
                     * @return AccountName <p>Database account name.</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Database account name.</p>
                     * @param _accountName <p>Database account name.</p>
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
                     * 获取<p>host</p>
                     * @return Host <p>host</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>host</p>
                     * @param _host <p>host</p>
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
                     * 获取<p>Database account description.</p>
                     * @return Description <p>Database account description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Database account description.</p>
                     * @param _description <p>Database account description.</p>
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
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Maximum user connections</p>
                     * @return MaxUserConnections <p>Maximum user connections</p>
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置<p>Maximum user connections</p>
                     * @param _maxUserConnections <p>Maximum user connections</p>
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

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

                private:

                    /**
                     * <p>Database account name.</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>host</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Database account description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Maximum user connections</p>
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                    /**
                     * <p>Whether password rotation is enabled (0: turn off; 1: turn on)</p>
                     */
                    int64_t m_passwordRotation;
                    bool m_passwordRotationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNT_H_
