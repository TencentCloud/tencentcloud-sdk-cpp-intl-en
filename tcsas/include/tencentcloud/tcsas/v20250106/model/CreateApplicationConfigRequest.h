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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateApplicationConfig request structure.
                */
                class CreateApplicationConfigRequest : public AbstractModel
                {
                public:
                    CreateApplicationConfigRequest();
                    ~CreateApplicationConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Superapp ID
                     * @return ApplicationId Superapp ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Superapp ID
                     * @param _applicationId Superapp ID
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
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Superapp type. 1: Test; 2: Formal
                     * @return ApplicationType Superapp type. 1: Test; 2: Formal
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置Superapp type. 1: Test; 2: Formal
                     * @param _applicationType Superapp type. 1: Test; 2: Formal
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取Superapp operating system. 2 Android 3 iOS
                     * @return ApplicationPlatformType Superapp operating system. 2 Android 3 iOS
                     * 
                     */
                    int64_t GetApplicationPlatformType() const;

                    /**
                     * 设置Superapp operating system. 2 Android 3 iOS
                     * @param _applicationPlatformType Superapp operating system. 2 Android 3 iOS
                     * 
                     */
                    void SetApplicationPlatformType(const int64_t& _applicationPlatformType);

                    /**
                     * 判断参数 ApplicationPlatformType 是否已赋值
                     * @return ApplicationPlatformType 是否已赋值
                     * 
                     */
                    bool ApplicationPlatformTypeHasBeenSet() const;

                    /**
                     * 获取Package name: corresponds to packageName on Android and bundleId on iOS
                     * @return AppKey Package name: corresponds to packageName on Android and bundleId on iOS
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置Package name: corresponds to packageName on Android and bundleId on iOS
                     * @param _appKey Package name: corresponds to packageName on Android and bundleId on iOS
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取Superapp URL
                     * @return AppURL Superapp URL
                     * 
                     */
                    std::string GetAppURL() const;

                    /**
                     * 设置Superapp URL
                     * @param _appURL Superapp URL
                     * 
                     */
                    void SetAppURL(const std::string& _appURL);

                    /**
                     * 判断参数 AppURL 是否已赋值
                     * @return AppURL 是否已赋值
                     * 
                     */
                    bool AppURLHasBeenSet() const;

                private:

                    /**
                     * Superapp ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Superapp type. 1: Test; 2: Formal
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * Superapp operating system. 2 Android 3 iOS
                     */
                    int64_t m_applicationPlatformType;
                    bool m_applicationPlatformTypeHasBeenSet;

                    /**
                     * Package name: corresponds to packageName on Android and bundleId on iOS
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * Superapp URL
                     */
                    std::string m_appURL;
                    bool m_appURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CREATEAPPLICATIONCONFIGREQUEST_H_
