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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPLICATIONREQUEST_H_

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
                * ModifyApplication request structure.
                */
                class ModifyApplicationRequest : public AbstractModel
                {
                public:
                    ModifyApplicationRequest();
                    ~ModifyApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID, which is globally unique.
                     * @return ApplicationId Application ID, which is globally unique.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID, which is globally unique.
                     * @param ApplicationId Application ID, which is globally unique.
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Security level.
                     * @return SecureLevel Security level.
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 设置Security level.
                     * @param SecureLevel Security level.
                     */
                    void SetSecureLevel(const std::string& _secureLevel);

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     */
                    bool SecureLevelHasBeenSet() const;

                    /**
                     * 获取Displayed application name, which can contain up to 32 characters and is the same as the application name by default.
                     * @return DisplayName Displayed application name, which can contain up to 32 characters and is the same as the application name by default.
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Displayed application name, which can contain up to 32 characters and is the same as the application name by default.
                     * @param DisplayName Displayed application name, which can contain up to 32 characters and is the same as the application name by default.
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Application status. Valid values: true: enabled; false: disabled.
                     * @return AppStatus Application status. Valid values: true: enabled; false: disabled.
                     */
                    bool GetAppStatus() const;

                    /**
                     * 设置Application status. Valid values: true: enabled; false: disabled.
                     * @param AppStatus Application status. Valid values: true: enabled; false: disabled.
                     */
                    void SetAppStatus(const bool& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取Access address of the application icon image.
                     * @return IconUrl Access address of the application icon image.
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置Access address of the application icon image.
                     * @param IconUrl Access address of the application icon image.
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取Description, which can contain up to 128 characters.
                     * @return Description Description, which can contain up to 128 characters.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description, which can contain up to 128 characters.
                     * @param Description Description, which can contain up to 128 characters.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Application ID, which is globally unique.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Security level.
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                    /**
                     * Displayed application name, which can contain up to 32 characters and is the same as the application name by default.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Application status. Valid values: true: enabled; false: disabled.
                     */
                    bool m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * Access address of the application icon image.
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * Description, which can contain up to 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_MODIFYAPPLICATIONREQUEST_H_
