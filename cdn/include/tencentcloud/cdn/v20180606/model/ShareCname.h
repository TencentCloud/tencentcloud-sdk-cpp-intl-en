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
                */
                class ShareCname : public AbstractModel
                {
                public:
                    ShareCname();
                    ~ShareCname() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to enable Shared CNAME. If it is set to `off`, the default CNAME is used. If it is set to `on`, a shared CNAME is used.

* ShareCname is only available to beta users. To use this feature, please submit a ticket for application.
                     * @return Switch Specifies whether to enable Shared CNAME. If it is set to `off`, the default CNAME is used. If it is set to `on`, a shared CNAME is used.

* ShareCname is only available to beta users. To use this feature, please submit a ticket for application.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Specifies whether to enable Shared CNAME. If it is set to `off`, the default CNAME is used. If it is set to `on`, a shared CNAME is used.

* ShareCname is only available to beta users. To use this feature, please submit a ticket for application.
                     * @param _switch Specifies whether to enable Shared CNAME. If it is set to `off`, the default CNAME is used. If it is set to `on`, a shared CNAME is used.

* ShareCname is only available to beta users. To use this feature, please submit a ticket for application.
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
                     * Specifies whether to enable Shared CNAME. If it is set to `off`, the default CNAME is used. If it is set to `on`, a shared CNAME is used.

* ShareCname is only available to beta users. To use this feature, please submit a ticket for application.
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
