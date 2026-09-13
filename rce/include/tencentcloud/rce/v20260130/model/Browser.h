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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_BROWSER_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_BROWSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * Browser information
                */
                class Browser : public AbstractModel
                {
                public:
                    Browser();
                    ~Browser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>The user agent of the browser that interacts with the website</p>
                     * @return UserAgent <p>The user agent of the browser that interacts with the website</p>
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置<p>The user agent of the browser that interacts with the website</p>
                     * @param _userAgent <p>The user agent of the browser that interacts with the website</p>
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
                     * 获取<p>The language(s) that the client prefers</p><p>Parameter format: Complies with the ISO 3166 standard</p>
                     * @return AcceptLanguage <p>The language(s) that the client prefers</p><p>Parameter format: Complies with the ISO 3166 standard</p>
                     * 
                     */
                    std::string GetAcceptLanguage() const;

                    /**
                     * 设置<p>The language(s) that the client prefers</p><p>Parameter format: Complies with the ISO 3166 standard</p>
                     * @param _acceptLanguage <p>The language(s) that the client prefers</p><p>Parameter format: Complies with the ISO 3166 standard</p>
                     * 
                     */
                    void SetAcceptLanguage(const std::string& _acceptLanguage);

                    /**
                     * 判断参数 AcceptLanguage 是否已赋值
                     * @return AcceptLanguage 是否已赋值
                     * 
                     */
                    bool AcceptLanguageHasBeenSet() const;

                    /**
                     * 获取<p>The language(s) intended for the audience</p><p>Parameter format: Compliant with ISO 3166 standard</p>
                     * @return ContentLanguage <p>The language(s) intended for the audience</p><p>Parameter format: Compliant with ISO 3166 standard</p>
                     * 
                     */
                    std::string GetContentLanguage() const;

                    /**
                     * 设置<p>The language(s) intended for the audience</p><p>Parameter format: Compliant with ISO 3166 standard</p>
                     * @param _contentLanguage <p>The language(s) intended for the audience</p><p>Parameter format: Compliant with ISO 3166 standard</p>
                     * 
                     */
                    void SetContentLanguage(const std::string& _contentLanguage);

                    /**
                     * 判断参数 ContentLanguage 是否已赋值
                     * @return ContentLanguage 是否已赋值
                     * 
                     */
                    bool ContentLanguageHasBeenSet() const;

                private:

                    /**
                     * <p>The user agent of the browser that interacts with the website</p>
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * <p>The language(s) that the client prefers</p><p>Parameter format: Complies with the ISO 3166 standard</p>
                     */
                    std::string m_acceptLanguage;
                    bool m_acceptLanguageHasBeenSet;

                    /**
                     * <p>The language(s) intended for the audience</p><p>Parameter format: Compliant with ISO 3166 standard</p>
                     */
                    std::string m_contentLanguage;
                    bool m_contentLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_BROWSER_H_
