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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPHEADER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPHEADER_H_

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
                * The client IP header configuration
                */
                class ClientIpHeader : public AbstractModel
                {
                public:
                    ClientIpHeader();
                    ~ClientIpHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Whether to enable the configuration. Values:
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
                     * 获取Name of the request header containing the client IP address for origin-pull. When Switch is on, this parameter is required. X-Forwarded-For is not allowed for this parameter.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return HeaderName Name of the request header containing the client IP address for origin-pull. When Switch is on, this parameter is required. X-Forwarded-For is not allowed for this parameter.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetHeaderName() const;

                    /**
                     * 设置Name of the request header containing the client IP address for origin-pull. When Switch is on, this parameter is required. X-Forwarded-For is not allowed for this parameter.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _headerName Name of the request header containing the client IP address for origin-pull. When Switch is on, this parameter is required. X-Forwarded-For is not allowed for this parameter.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Name of the request header containing the client IP address for origin-pull. When Switch is on, this parameter is required. X-Forwarded-For is not allowed for this parameter.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_headerName;
                    bool m_headerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTIPHEADER_H_
