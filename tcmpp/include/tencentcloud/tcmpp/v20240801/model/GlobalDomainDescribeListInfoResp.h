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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINDESCRIBELISTINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINDESCRIBELISTINFORESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * List of global domain names
                */
                class GlobalDomainDescribeListInfoResp : public AbstractModel
                {
                public:
                    GlobalDomainDescribeListInfoResp();
                    ~GlobalDomainDescribeListInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainId Domain ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDomainId() const;

                    /**
                     * 设置Domain ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainId Domain ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Platform ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomerID Platform ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomerID() const;

                    /**
                     * 设置Platform ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customerID Platform ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomerID(const std::string& _customerID);

                    /**
                     * 判断参数 CustomerID 是否已赋值
                     * @return CustomerID 是否已赋值
                     * 
                     */
                    bool CustomerIDHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainURL Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomainURL() const;

                    /**
                     * 设置Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainURL Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDomainURL(const std::string& _domainURL);

                    /**
                     * 判断参数 DomainURL 是否已赋值
                     * @return DomainURL 是否已赋值
                     * 
                     */
                    bool DomainURLHasBeenSet() const;

                    /**
                     * 获取Type. 1: Allowed; 2: Blocked
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainType Type. 1: Allowed; 2: Blocked
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Type. 1: Allowed; 2: Blocked
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainType Type. 1: Allowed; 2: Blocked
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUser Creator
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateUser Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateUser() const;

                    /**
                     * 设置Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateUser Updated by
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update date
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Domain ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Platform ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customerID;
                    bool m_customerIDHasBeenSet;

                    /**
                     * Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainURL;
                    bool m_domainURLHasBeenSet;

                    /**
                     * Type. 1: Allowed; 2: Blocked
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Updated by
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateUser;
                    bool m_updateUserHasBeenSet;

                    /**
                     * Update date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_GLOBALDOMAINDESCRIBELISTINFORESP_H_
