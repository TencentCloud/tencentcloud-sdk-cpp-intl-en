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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FORCEREDIRECT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FORCEREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Access protocol forced redirect configuration. This is disabled by default.
                */
                class ForceRedirect : public AbstractModel
                {
                public:
                    ForceRedirect();
                    ~ForceRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access forced jump configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch Access forced jump configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Access forced jump configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch Access forced jump configuration switch, value: <li>on: on; </li> <li>off: off. </li>
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
                     * 获取Access forced jump type: <li>http: forced http jump</li> <li>https: forced https jump</li>
                     * @return RedirectType Access forced jump type: <li>http: forced http jump</li> <li>https: forced https jump</li>
                     * 
                     */
                    std::string GetRedirectType() const;

                    /**
                     * 设置Access forced jump type: <li>http: forced http jump</li> <li>https: forced https jump</li>
                     * @param _redirectType Access forced jump type: <li>http: forced http jump</li> <li>https: forced https jump</li>
                     * 
                     */
                    void SetRedirectType(const std::string& _redirectType);

                    /**
                     * 判断参数 RedirectType 是否已赋值
                     * @return RedirectType 是否已赋值
                     * 
                     */
                    bool RedirectTypeHasBeenSet() const;

                    /**
                     * 获取Status code returned for forced redirect Supports 301, 302.
                     * @return RedirectStatusCode Status code returned for forced redirect Supports 301, 302.
                     * 
                     */
                    uint64_t GetRedirectStatusCode() const;

                    /**
                     * 设置Status code returned for forced redirect Supports 301, 302.
                     * @param _redirectStatusCode Status code returned for forced redirect Supports 301, 302.
                     * 
                     */
                    void SetRedirectStatusCode(const uint64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     * 
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取Whether to return the newly added header during force redirection.
                     * @return CarryHeaders Whether to return the newly added header during force redirection.
                     * 
                     */
                    std::string GetCarryHeaders() const;

                    /**
                     * 设置Whether to return the newly added header during force redirection.
                     * @param _carryHeaders Whether to return the newly added header during force redirection.
                     * 
                     */
                    void SetCarryHeaders(const std::string& _carryHeaders);

                    /**
                     * 判断参数 CarryHeaders 是否已赋值
                     * @return CarryHeaders 是否已赋值
                     * 
                     */
                    bool CarryHeadersHasBeenSet() const;

                private:

                    /**
                     * Access forced jump configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Access forced jump type: <li>http: forced http jump</li> <li>https: forced https jump</li>
                     */
                    std::string m_redirectType;
                    bool m_redirectTypeHasBeenSet;

                    /**
                     * Status code returned for forced redirect Supports 301, 302.
                     */
                    uint64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                    /**
                     * Whether to return the newly added header during force redirection.
                     */
                    std::string m_carryHeaders;
                    bool m_carryHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FORCEREDIRECT_H_
