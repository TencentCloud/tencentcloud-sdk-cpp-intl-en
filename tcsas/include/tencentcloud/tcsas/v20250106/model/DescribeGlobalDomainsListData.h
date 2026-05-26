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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALDOMAINSLISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALDOMAINSLISTDATA_H_

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
                * Global domain list information.
                */
                class DescribeGlobalDomainsListData : public AbstractModel
                {
                public:
                    DescribeGlobalDomainsListData();
                    ~DescribeGlobalDomainsListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain ID.
                     * @return DomainId Domain ID.
                     * 
                     */
                    int64_t GetDomainId() const;

                    /**
                     * 设置Domain ID.
                     * @param _domainId Domain ID.
                     * 
                     */
                    void SetDomainId(const int64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Domain name.
                     * @return DomainUrl Domain name.
                     * 
                     */
                    std::string GetDomainUrl() const;

                    /**
                     * 设置Domain name.
                     * @param _domainUrl Domain name.
                     * 
                     */
                    void SetDomainUrl(const std::string& _domainUrl);

                    /**
                     * 判断参数 DomainUrl 是否已赋值
                     * @return DomainUrl 是否已赋值
                     * 
                     */
                    bool DomainUrlHasBeenSet() const;

                    /**
                     * 获取Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * @return DomainType Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * @param _domainType Domain type. Valid value: 1: Allowed; 2: Blocked.
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取Creator.
                     * @return CreateUser Creator.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator.
                     * @param _createUser Creator.
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Last modifier.
                     * @return UpdateUser Last modifier.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Last modifier.
                     * @param _updateUser Last modifier.
                     * 
                     */
                    void SetUpdateUser(const std::string& _updateUser);

                    /**
                     * 判断参数 UpdateUser 是否已赋值
                     * @return UpdateUser 是否已赋值
                     * 
                     */
                    bool UpdateUserHasBeenSet() const;

                    /**
                     * 获取Last modified time.
                     * @return UpdateTime Last modified time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified time.
                     * @param _updateTime Last modified time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Domain ID.
                     */
                    int64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_domainUrl;
                    bool m_domainUrlHasBeenSet;

                    /**
                     * Domain type. Valid value: 1: Allowed; 2: Blocked.
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * Creator.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modifier.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Last modified time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEGLOBALDOMAINSLISTDATA_H_
