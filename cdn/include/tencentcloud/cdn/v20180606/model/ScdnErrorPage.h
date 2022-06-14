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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNERRORPAGE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNERRORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ACL error page
                */
                class ScdnErrorPage : public AbstractModel
                {
                public:
                    ScdnErrorPage();
                    ~ScdnErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status code
`403` is passed in when the action is `intercept`.
`301` is passed in when the action is `redirect`.
                     * @return RedirectCode Status code
`403` is passed in when the action is `intercept`.
`301` is passed in when the action is `redirect`.
                     */
                    int64_t GetRedirectCode() const;

                    /**
                     * 设置Status code
`403` is passed in when the action is `intercept`.
`301` is passed in when the action is `redirect`.
                     * @param RedirectCode Status code
`403` is passed in when the action is `intercept`.
`301` is passed in when the action is `redirect`.
                     */
                    void SetRedirectCode(const int64_t& _redirectCode);

                    /**
                     * 判断参数 RedirectCode 是否已赋值
                     * @return RedirectCode 是否已赋值
                     */
                    bool RedirectCodeHasBeenSet() const;

                    /**
                     * 获取Redirection URL
                     * @return RedirectUrl Redirection URL
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置Redirection URL
                     * @param RedirectUrl Redirection URL
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                private:

                    /**
                     * Status code
`403` is passed in when the action is `intercept`.
`301` is passed in when the action is `redirect`.
                     */
                    int64_t m_redirectCode;
                    bool m_redirectCodeHasBeenSet;

                    /**
                     * Redirection URL
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNERRORPAGE_H_
