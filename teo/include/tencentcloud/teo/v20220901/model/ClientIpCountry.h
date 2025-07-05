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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPCOUNTRY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPCOUNTRY_H_

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
                * Location information of the client IP carried in origin-pull. It is formatted as a two-letter ISO-3166-1 country/region code.
                */
                class ClientIpCountry : public AbstractModel
                {
                public:
                    ClientIpCountry();
                    ~ClientIpCountry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
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
                     * 获取Name of the request header that contains the client IP region. It is valid when `Switch=on`. 
The default value `EO-Client-IPCountry` is used when it is not specified.
                     * @return HeaderName Name of the request header that contains the client IP region. It is valid when `Switch=on`. 
The default value `EO-Client-IPCountry` is used when it is not specified.
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置Name of the request header that contains the client IP region. It is valid when `Switch=on`. 
The default value `EO-Client-IPCountry` is used when it is not specified.
                     * @param _headerName Name of the request header that contains the client IP region. It is valid when `Switch=on`. 
The default value `EO-Client-IPCountry` is used when it is not specified.
                     * 
                     */
                    void SetHeaderName(const std::string& _headerName);

                    /**
                     * 判断参数 HeaderName 是否已赋值
                     * @return HeaderName 是否已赋值
                     * 
                     */
                    bool HeaderNameHasBeenSet() const;

                private:

                    /**
                     * Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Name of the request header that contains the client IP region. It is valid when `Switch=on`. 
The default value `EO-Client-IPCountry` is used when it is not specified.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPCOUNTRY_H_
