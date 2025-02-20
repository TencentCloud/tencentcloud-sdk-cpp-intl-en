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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FORCEREDIRECTHTTPSPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FORCEREDIRECTHTTPSPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Forced HTTPS redirect configuration for access protocols.
                */
                class ForceRedirectHTTPSParameters : public AbstractModel
                {
                public:
                    ForceRedirectHTTPSParameters();
                    ~ForceRedirectHTTPSParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable forced redirect configuration switch. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Whether to enable forced redirect configuration switch. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable forced redirect configuration switch. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Whether to enable forced redirect configuration switch. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Redirection status code. this field is required when switch is on; otherwise, it is not effective. valid values are:.
<Li>`301`: 301 redirect;</li>.
<Li>`302`: 302 redirect.</li>.
                     * @return RedirectStatusCode Redirection status code. this field is required when switch is on; otherwise, it is not effective. valid values are:.
<Li>`301`: 301 redirect;</li>.
<Li>`302`: 302 redirect.</li>.
                     * 
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置Redirection status code. this field is required when switch is on; otherwise, it is not effective. valid values are:.
<Li>`301`: 301 redirect;</li>.
<Li>`302`: 302 redirect.</li>.
                     * @param _redirectStatusCode Redirection status code. this field is required when switch is on; otherwise, it is not effective. valid values are:.
<Li>`301`: 301 redirect;</li>.
<Li>`302`: 302 redirect.</li>.
                     * 
                     */
                    void SetRedirectStatusCode(const int64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     * 
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable forced redirect configuration switch. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Redirection status code. this field is required when switch is on; otherwise, it is not effective. valid values are:.
<Li>`301`: 301 redirect;</li>.
<Li>`302`: 302 redirect.</li>.
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FORCEREDIRECTHTTPSPARAMETERS_H_
