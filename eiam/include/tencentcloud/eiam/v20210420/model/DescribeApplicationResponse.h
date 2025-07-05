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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONRESPONSE_H_

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
                * DescribeApplication response structure.
                */
                class DescribeApplicationResponse : public AbstractModel
                {
                public:
                    DescribeApplicationResponse();
                    ~DescribeApplicationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeyId Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Last modification time of the application in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifiedDate Last modification time of the application in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClientId Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取Application type, i.e., the application template type selected during application creation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationType Application type, i.e., the application template type selected during application creation.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedDate Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Token validity period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TokenExpired Token validity period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTokenExpired() const;

                    /**
                     * 判断参数 TokenExpired 是否已赋值
                     * @return TokenExpired 是否已赋值
                     * 
                     */
                    bool TokenExpiredHasBeenSet() const;

                    /**
                     * 获取Client secret.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClientSecret Client secret.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientSecret() const;

                    /**
                     * 判断参数 ClientSecret 是否已赋值
                     * @return ClientSecret 是否已赋值
                     * 
                     */
                    bool ClientSecretHasBeenSet() const;

                    /**
                     * 获取Public key information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PublicKey Public key information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取Authorization address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizeUrl Authorization address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuthorizeUrl() const;

                    /**
                     * 判断参数 AuthorizeUrl 是否已赋值
                     * @return AuthorizeUrl 是否已赋值
                     * 
                     */
                    bool AuthorizeUrlHasBeenSet() const;

                    /**
                     * 获取Access address of the application icon image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IconUrl Access address of the application icon image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取Security level.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SecureLevel Security level.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     * 
                     */
                    bool SecureLevelHasBeenSet() const;

                    /**
                     * 获取Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppStatus Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAppStatus() const;

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取Description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Key ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Last modification time of the application in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * Application type, i.e., the application template type selected during application creation.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Token validity period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tokenExpired;
                    bool m_tokenExpiredHasBeenSet;

                    /**
                     * Client secret.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientSecret;
                    bool m_clientSecretHasBeenSet;

                    /**
                     * Public key information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * Authorization address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authorizeUrl;
                    bool m_authorizeUrlHasBeenSet;

                    /**
                     * Access address of the application icon image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * Security level.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                    /**
                     * Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * Description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPLICATIONRESPONSE_H_
