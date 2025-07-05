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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFORMATION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Application information list.
                */
                class ApplicationInformation : public AbstractModel
                {
                public:
                    ApplicationInformation();
                    ~ApplicationInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application ID, which is globally unique.
                     * @return ApplicationId Application ID, which is globally unique.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID, which is globally unique.
                     * @param _applicationId Application ID, which is globally unique.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedDate Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdDate Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return LastModifiedDate Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastModifiedDate() const;

                    /**
                     * 设置Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _lastModifiedDate Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastModifiedDate(const std::string& _lastModifiedDate);

                    /**
                     * 判断参数 LastModifiedDate 是否已赋值
                     * @return LastModifiedDate 是否已赋值
                     * 
                     */
                    bool LastModifiedDateHasBeenSet() const;

                    /**
                     * 获取Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppStatus Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAppStatus() const;

                    /**
                     * 设置Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _appStatus Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAppStatus(const bool& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取Application icon.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Icon Application icon.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置Application icon.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _icon Application icon.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取Application type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationType Application type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Application type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _applicationType Application type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClientId Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _clientId Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is globally unique.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Displayed application name, which can contain up to 64 characters and is the same as the application name by default.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Application creation time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * Last update time in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastModifiedDate;
                    bool m_lastModifiedDateHasBeenSet;

                    /**
                     * Application status.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * Application icon.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * Application type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Client ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFORMATION_H_
