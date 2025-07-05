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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SHARECNAME_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SHARECNAME_H_

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
                * Shared CNAME configuration
ShareCname is only available to beta users. Submit a ticket if you need it.
                */
                class ShareCname : public AbstractModel
                {
                public:
                    ShareCname();
                    ~ShareCname() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable Shared CNAME. Values:
`on`: Enable. When enabled, it uses a shared CNAME.
`off`: Disable. When disabled, it uses a default CNAME.

                     * @return Switch Whether to enable Shared CNAME. Values:
`on`: Enable. When enabled, it uses a shared CNAME.
`off`: Disable. When disabled, it uses a default CNAME.

                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable Shared CNAME. Values:
`on`: Enable. When enabled, it uses a shared CNAME.
`off`: Disable. When disabled, it uses a default CNAME.

                     * @param _switch Whether to enable Shared CNAME. Values:
`on`: Enable. When enabled, it uses a shared CNAME.
`off`: Disable. When disabled, it uses a default CNAME.

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
                     * 获取Shared CNAME to be configured
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Cname Shared CNAME to be configured
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置Shared CNAME to be configured
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cname Shared CNAME to be configured
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                private:

                    /**
                     * Whether to enable Shared CNAME. Values:
`on`: Enable. When enabled, it uses a shared CNAME.
`off`: Disable. When disabled, it uses a default CNAME.

                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Shared CNAME to be configured
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SHARECNAME_H_
