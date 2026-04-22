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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYAPPLICATIONCONFIGREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYAPPLICATIONCONFIGREQUEST_H_

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
                * ModifyApplicationConfig request structure.
                */
                class ModifyApplicationConfigRequest : public AbstractModel
                {
                public:
                    ModifyApplicationConfigRequest();
                    ~ModifyApplicationConfigRequest() = default;
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
                     * 获取Superapp configuration ID
                     * @return Id Superapp configuration ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Superapp configuration ID
                     * @param _id Superapp configuration ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * Superapp configuration ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_MODIFYAPPLICATIONCONFIGREQUEST_H_
