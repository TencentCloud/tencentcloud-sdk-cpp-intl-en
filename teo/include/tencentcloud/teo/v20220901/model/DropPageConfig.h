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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DropPageDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Block page configuration
                */
                class DropPageConfig : public AbstractModel
                {
                public:
                    DropPageConfig();
                    ~DropPageConfig() = default;
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
                     * 获取Intercept page configuration for Waf(managed rules) module. if null, historical configuration is used by default.
                     * @return WafDropPageDetail Intercept page configuration for Waf(managed rules) module. if null, historical configuration is used by default.
                     * 
                     */
                    DropPageDetail GetWafDropPageDetail() const;

                    /**
                     * 设置Intercept page configuration for Waf(managed rules) module. if null, historical configuration is used by default.
                     * @param _wafDropPageDetail Intercept page configuration for Waf(managed rules) module. if null, historical configuration is used by default.
                     * 
                     */
                    void SetWafDropPageDetail(const DropPageDetail& _wafDropPageDetail);

                    /**
                     * 判断参数 WafDropPageDetail 是否已赋值
                     * @return WafDropPageDetail 是否已赋值
                     * 
                     */
                    bool WafDropPageDetailHasBeenSet() const;

                    /**
                     * 获取Interception page configuration for custom pages. if null, use the last set configuration by default.
                     * @return AclDropPageDetail Interception page configuration for custom pages. if null, use the last set configuration by default.
                     * 
                     */
                    DropPageDetail GetAclDropPageDetail() const;

                    /**
                     * 设置Interception page configuration for custom pages. if null, use the last set configuration by default.
                     * @param _aclDropPageDetail Interception page configuration for custom pages. if null, use the last set configuration by default.
                     * 
                     */
                    void SetAclDropPageDetail(const DropPageDetail& _aclDropPageDetail);

                    /**
                     * 判断参数 AclDropPageDetail 是否已赋值
                     * @return AclDropPageDetail 是否已赋值
                     * 
                     */
                    bool AclDropPageDetailHasBeenSet() const;

                private:

                    /**
                     * Whether to enable configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Intercept page configuration for Waf(managed rules) module. if null, historical configuration is used by default.
                     */
                    DropPageDetail m_wafDropPageDetail;
                    bool m_wafDropPageDetailHasBeenSet;

                    /**
                     * Interception page configuration for custom pages. if null, use the last set configuration by default.
                     */
                    DropPageDetail m_aclDropPageDetail;
                    bool m_aclDropPageDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGECONFIG_H_
