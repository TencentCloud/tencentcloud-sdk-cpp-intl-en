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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_FORCEREDIRECT_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_FORCEREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * Forced access protocol redirection configuration.
                */
                class ForceRedirect : public AbstractModel
                {
                public:
                    ForceRedirect();
                    ~ForceRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Forced access protocol redirection configuration switch. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Switch Forced access protocol redirection configuration switch. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Forced access protocol redirection configuration switch. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _switch Forced access protocol redirection configuration switch. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Access protocol type for forced redirection. Valid values: http (forced redirection to HTTP protocol), https (forced redirection to HTTPS protocol).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RedirectType Access protocol type for forced redirection. Valid values: http (forced redirection to HTTP protocol), https (forced redirection to HTTPS protocol).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRedirectType() const;

                    /**
                     * 设置Access protocol type for forced redirection. Valid values: http (forced redirection to HTTP protocol), https (forced redirection to HTTPS protocol).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _redirectType Access protocol type for forced redirection. Valid values: http (forced redirection to HTTP protocol), https (forced redirection to HTTPS protocol).
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取HTTP status code returned when forced redirection is enabled. Valid values: 301, 302.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RedirectStatusCode HTTP status code returned when forced redirection is enabled. Valid values: 301, 302.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置HTTP status code returned when forced redirection is enabled. Valid values: 301, 302.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _redirectStatusCode HTTP status code returned when forced redirection is enabled. Valid values: 301, 302.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Forced access protocol redirection configuration switch. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Access protocol type for forced redirection. Valid values: http (forced redirection to HTTP protocol), https (forced redirection to HTTPS protocol).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_redirectType;
                    bool m_redirectTypeHasBeenSet;

                    /**
                     * HTTP status code returned when forced redirection is enabled. Valid values: 301, 302.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_FORCEREDIRECT_H_
