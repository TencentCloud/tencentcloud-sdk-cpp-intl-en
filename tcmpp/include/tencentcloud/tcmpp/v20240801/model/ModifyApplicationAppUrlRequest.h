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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONAPPURLREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONAPPURLREQUEST_H_

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
                * ModifyApplicationAppUrl request structure.
                */
                class ModifyApplicationAppUrlRequest : public AbstractModel
                {
                public:
                    ModifyApplicationAppUrlRequest();
                    ~ModifyApplicationAppUrlRequest() = default;
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
                     * 获取Android address
                     * @return AndroidAppURL Android address
                     * 
                     */
                    std::string GetAndroidAppURL() const;

                    /**
                     * 设置Android address
                     * @param _androidAppURL Android address
                     * 
                     */
                    void SetAndroidAppURL(const std::string& _androidAppURL);

                    /**
                     * 判断参数 AndroidAppURL 是否已赋值
                     * @return AndroidAppURL 是否已赋值
                     * 
                     */
                    bool AndroidAppURLHasBeenSet() const;

                    /**
                     * 获取iOS address
                     * @return IOSAppURL iOS address
                     * 
                     */
                    std::string GetIOSAppURL() const;

                    /**
                     * 设置iOS address
                     * @param _iOSAppURL iOS address
                     * 
                     */
                    void SetIOSAppURL(const std::string& _iOSAppURL);

                    /**
                     * 判断参数 IOSAppURL 是否已赋值
                     * @return IOSAppURL 是否已赋值
                     * 
                     */
                    bool IOSAppURLHasBeenSet() const;

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
                     * Android address
                     */
                    std::string m_androidAppURL;
                    bool m_androidAppURLHasBeenSet;

                    /**
                     * iOS address
                     */
                    std::string m_iOSAppURL;
                    bool m_iOSAppURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONAPPURLREQUEST_H_
