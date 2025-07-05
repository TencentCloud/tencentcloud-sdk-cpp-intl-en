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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMDOMAINLISTINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMDOMAINLISTINFORESP_H_

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
                * Information of team domains
                */
                class DescribeTeamDomainListInfoResp : public AbstractModel
                {
                public:
                    DescribeTeamDomainListInfoResp();
                    ~DescribeTeamDomainListInfoResp() = default;
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
                     * 获取Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPId Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mNPName Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainUrl Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomainUrl() const;

                    /**
                     * 设置Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainUrl Domain name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DomainType Type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置Type 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domainType Type 
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
                     * 获取Domain name status. 1: Normal; 2: Disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Domain name status. 1: Normal; 2: Disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Domain name status. 1: Normal; 2: Disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Domain name status. 1: Normal; 2: Disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime The creation time.
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

                private:

                    /**
                     * Domain ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Mini program ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Domain name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domainUrl;
                    bool m_domainUrlHasBeenSet;

                    /**
                     * Type 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * Domain name status. 1: Normal; 2: Disabled
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * The creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBETEAMDOMAINLISTINFORESP_H_
