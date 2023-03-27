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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_APPCUSTOMCONTENT_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_APPCUSTOMCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * Custom application content
Used by actions: SetAppCustomContent.
                */
                class AppCustomContent : public AbstractModel
                {
                public:
                    AppCustomContent();
                    ~AppCustomContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Multiple scenarios can be set for an application.
                     * @return Scene Multiple scenarios can be set for an application.
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Multiple scenarios can be set for an application.
                     * @param Scene Multiple scenarios can be set for an application.
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取Logo URL
                     * @return LogoUrl Logo URL
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置Logo URL
                     * @param LogoUrl Logo URL
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取Homepage URL, which can be used for redirection
                     * @return HomeUrl Homepage URL, which can be used for redirection
                     */
                    std::string GetHomeUrl() const;

                    /**
                     * 设置Homepage URL, which can be used for redirection
                     * @param HomeUrl Homepage URL, which can be used for redirection
                     */
                    void SetHomeUrl(const std::string& _homeUrl);

                    /**
                     * 判断参数 HomeUrl 是否已赋值
                     * @return HomeUrl 是否已赋值
                     */
                    bool HomeUrlHasBeenSet() const;

                    /**
                     * 获取Custom JS URL
                     * @return JsUrl Custom JS URL
                     */
                    std::string GetJsUrl() const;

                    /**
                     * 设置Custom JS URL
                     * @param JsUrl Custom JS URL
                     */
                    void SetJsUrl(const std::string& _jsUrl);

                    /**
                     * 判断参数 JsUrl 是否已赋值
                     * @return JsUrl 是否已赋值
                     */
                    bool JsUrlHasBeenSet() const;

                    /**
                     * 获取Custom CSS URL
                     * @return CssUrl Custom CSS URL
                     */
                    std::string GetCssUrl() const;

                    /**
                     * 设置Custom CSS URL
                     * @param CssUrl Custom CSS URL
                     */
                    void SetCssUrl(const std::string& _cssUrl);

                    /**
                     * 判断参数 CssUrl 是否已赋值
                     * @return CssUrl 是否已赋值
                     */
                    bool CssUrlHasBeenSet() const;

                private:

                    /**
                     * Multiple scenarios can be set for an application.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * Logo URL
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * Homepage URL, which can be used for redirection
                     */
                    std::string m_homeUrl;
                    bool m_homeUrlHasBeenSet;

                    /**
                     * Custom JS URL
                     */
                    std::string m_jsUrl;
                    bool m_jsUrlHasBeenSet;

                    /**
                     * Custom CSS URL
                     */
                    std::string m_cssUrl;
                    bool m_cssUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_APPCUSTOMCONTENT_H_
