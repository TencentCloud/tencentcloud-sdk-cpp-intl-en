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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONAPPKEYREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONAPPKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyApplicationAppKey request structure.
                */
                class ModifyApplicationAppKeyRequest : public AbstractModel
                {
                public:
                    ModifyApplicationAppKeyRequest();
                    ~ModifyApplicationAppKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return ApplicationId Application ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
                     * @param _applicationId Application ID
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
                     * 获取Android package name
                     * @return AndroidAppKey Android package name
                     * 
                     */
                    std::string GetAndroidAppKey() const;

                    /**
                     * 设置Android package name
                     * @param _androidAppKey Android package name
                     * 
                     */
                    void SetAndroidAppKey(const std::string& _androidAppKey);

                    /**
                     * 判断参数 AndroidAppKey 是否已赋值
                     * @return AndroidAppKey 是否已赋值
                     * 
                     */
                    bool AndroidAppKeyHasBeenSet() const;

                    /**
                     * 获取iOS package name
                     * @return IOSAppKey iOS package name
                     * 
                     */
                    std::string GetIOSAppKey() const;

                    /**
                     * 设置iOS package name
                     * @param _iOSAppKey iOS package name
                     * 
                     */
                    void SetIOSAppKey(const std::string& _iOSAppKey);

                    /**
                     * 判断参数 IOSAppKey 是否已赋值
                     * @return IOSAppKey 是否已赋值
                     * 
                     */
                    bool IOSAppKeyHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Android package name
                     */
                    std::string m_androidAppKey;
                    bool m_androidAppKeyHasBeenSet;

                    /**
                     * iOS package name
                     */
                    std::string m_iOSAppKey;
                    bool m_iOSAppKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONAPPKEYREQUEST_H_
