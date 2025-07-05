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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LOGMESSAGE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LOGMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Log details
                */
                class LogMessage : public AbstractModel
                {
                public:
                    LogMessage();
                    ~LogMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log ID
                     * @return LogId Log ID
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Log ID
                     * @param _logId Log ID
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TenantId Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tenantId Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取User pool ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserStoreId User pool ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User pool ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userStoreId User pool ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Event code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventCode Event code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEventCode() const;

                    /**
                     * 设置Event code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventCode Event code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventCode(const std::string& _eventCode);

                    /**
                     * 判断参数 EventCode 是否已赋值
                     * @return EventCode 是否已赋值
                     * 
                     */
                    bool EventCodeHasBeenSet() const;

                    /**
                     * 获取Event timestamp in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventDate Event timestamp in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetEventDate() const;

                    /**
                     * 设置Event timestamp in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventDate Event timestamp in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventDate(const int64_t& _eventDate);

                    /**
                     * 判断参数 EventDate 是否已赋值
                     * @return EventDate 是否已赋值
                     * 
                     */
                    bool EventDateHasBeenSet() const;

                    /**
                     * 获取Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event participant

<li> **TENANT** </li>  Tenant
<li> **USER** </li>  User
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Participant Event participant

<li> **TENANT** </li>  Tenant
<li> **USER** </li>  User
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParticipant() const;

                    /**
                     * 设置Event participant

<li> **TENANT** </li>  Tenant
<li> **USER** </li>  User
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _participant Event participant

<li> **TENANT** </li>  Tenant
<li> **USER** </li>  User
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParticipant(const std::string& _participant);

                    /**
                     * 判断参数 Participant 是否已赋值
                     * @return Participant 是否已赋值
                     * 
                     */
                    bool ParticipantHasBeenSet() const;

                    /**
                     * 获取Application `clientId`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationClientId Application `clientId`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationClientId() const;

                    /**
                     * 设置Application `clientId`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationClientId Application `clientId`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationClientId(const std::string& _applicationClientId);

                    /**
                     * 判断参数 ApplicationClientId 是否已赋值
                     * @return ApplicationClientId 是否已赋值
                     * 
                     */
                    bool ApplicationClientIdHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Authentication source ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthSourceId Authentication source ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthSourceId() const;

                    /**
                     * 设置Authentication source ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authSourceId Authentication source ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthSourceId(const std::string& _authSourceId);

                    /**
                     * 判断参数 AuthSourceId 是否已赋值
                     * @return AuthSourceId 是否已赋值
                     * 
                     */
                    bool AuthSourceIdHasBeenSet() const;

                    /**
                     * 获取Authentication source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthSourceName Authentication source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthSourceName() const;

                    /**
                     * 设置Authentication source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authSourceName Authentication source name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthSourceName(const std::string& _authSourceName);

                    /**
                     * 判断参数 AuthSourceName 是否已赋值
                     * @return AuthSourceName 是否已赋值
                     * 
                     */
                    bool AuthSourceNameHasBeenSet() const;

                    /**
                     * 获取Authentication source type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthSourceType Authentication source type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthSourceType() const;

                    /**
                     * 设置Authentication source type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authSourceType Authentication source type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthSourceType(const std::string& _authSourceType);

                    /**
                     * 判断参数 AuthSourceType 是否已赋值
                     * @return AuthSourceType 是否已赋值
                     * 
                     */
                    bool AuthSourceTypeHasBeenSet() const;

                    /**
                     * 获取Authentication source category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthSourceCategory Authentication source category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthSourceCategory() const;

                    /**
                     * 设置Authentication source category
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authSourceCategory Authentication source category
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthSourceCategory(const std::string& _authSourceCategory);

                    /**
                     * 判断参数 AuthSourceCategory 是否已赋值
                     * @return AuthSourceCategory 是否已赋值
                     * 
                     */
                    bool AuthSourceCategoryHasBeenSet() const;

                    /**
                     * 获取IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ip IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ip IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取User agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserAgent User agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置User agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userAgent User agent
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId User ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Detail Details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Details
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detail Details
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * Log ID
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * Tenant ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * User pool ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Event code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventCode;
                    bool m_eventCodeHasBeenSet;

                    /**
                     * Event timestamp in milliseconds
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_eventDate;
                    bool m_eventDateHasBeenSet;

                    /**
                     * Description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Event participant

<li> **TENANT** </li>  Tenant
<li> **USER** </li>  User
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_participant;
                    bool m_participantHasBeenSet;

                    /**
                     * Application `clientId`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationClientId;
                    bool m_applicationClientIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Authentication source ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authSourceId;
                    bool m_authSourceIdHasBeenSet;

                    /**
                     * Authentication source name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authSourceName;
                    bool m_authSourceNameHasBeenSet;

                    /**
                     * Authentication source type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authSourceType;
                    bool m_authSourceTypeHasBeenSet;

                    /**
                     * Authentication source category
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authSourceCategory;
                    bool m_authSourceCategoryHasBeenSet;

                    /**
                     * IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * User agent
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * User ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Details
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LOGMESSAGE_H_
