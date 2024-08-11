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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONREQUEST_H_

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
                * ModifyApplication request structure.
                */
                class ModifyApplicationRequest : public AbstractModel
                {
                public:
                    ModifyApplicationRequest();
                    ~ModifyApplicationRequest() = default;
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
                     * 获取The application name.
                     * @return ApplicationName The application name.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置The application name.
                     * @param _applicationName The application name.
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
                     * 获取Application introduction
                     * @return Intro Application introduction
                     * 
                     */
                    std::string GetIntro() const;

                    /**
                     * 设置Application introduction
                     * @param _intro Application introduction
                     * 
                     */
                    void SetIntro(const std::string& _intro);

                    /**
                     * 判断参数 Intro 是否已赋值
                     * @return Intro 是否已赋值
                     * 
                     */
                    bool IntroHasBeenSet() const;

                    /**
                     * 获取Icon
                     * @return Logo Icon
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置Icon
                     * @param _logo Icon
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

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
                     * 获取iOS bundleId
                     * @return IosAppKey iOS bundleId
                     * 
                     */
                    std::string GetIosAppKey() const;

                    /**
                     * 设置iOS bundleId
                     * @param _iosAppKey iOS bundleId
                     * 
                     */
                    void SetIosAppKey(const std::string& _iosAppKey);

                    /**
                     * 判断参数 IosAppKey 是否已赋值
                     * @return IosAppKey 是否已赋值
                     * 
                     */
                    bool IosAppKeyHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Android App download address
                     * @return AndroidAppURL Android App download address
                     * 
                     */
                    std::string GetAndroidAppURL() const;

                    /**
                     * 设置Android App download address
                     * @param _androidAppURL Android App download address
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
                     * 获取iOS App download address
                     * @return IosAppURL iOS App download address
                     * 
                     */
                    std::string GetIosAppURL() const;

                    /**
                     * 设置iOS App download address
                     * @param _iosAppURL iOS App download address
                     * 
                     */
                    void SetIosAppURL(const std::string& _iosAppURL);

                    /**
                     * 判断参数 IosAppURL 是否已赋值
                     * @return IosAppURL 是否已赋值
                     * 
                     */
                    bool IosAppURLHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * The application name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application introduction
                     */
                    std::string m_intro;
                    bool m_introHasBeenSet;

                    /**
                     * Icon
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

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
                     * iOS bundleId
                     */
                    std::string m_iosAppKey;
                    bool m_iosAppKeyHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Android App download address
                     */
                    std::string m_androidAppURL;
                    bool m_androidAppURLHasBeenSet;

                    /**
                     * iOS App download address
                     */
                    std::string m_iosAppURL;
                    bool m_iosAppURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_MODIFYAPPLICATIONREQUEST_H_
