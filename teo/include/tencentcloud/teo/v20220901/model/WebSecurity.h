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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WEBSECURITY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WEBSECURITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityPolicy.h>
#include <tencentcloud/teo/v20220901/model/HostPolicy.h>
#include <tencentcloud/teo/v20220901/model/WebSecurityTemplates.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Serialized security structure
                */
                class WebSecurity : public AbstractModel
                {
                public:
                    WebSecurity();
                    ~WebSecurity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Configuration details of the site-level policy.</p>
                     * @return ZoneDefaultPolicy <p>Configuration details of the site-level policy.</p>
                     * 
                     */
                    SecurityPolicy GetZoneDefaultPolicy() const;

                    /**
                     * 设置<p>Configuration details of the site-level policy.</p>
                     * @param _zoneDefaultPolicy <p>Configuration details of the site-level policy.</p>
                     * 
                     */
                    void SetZoneDefaultPolicy(const SecurityPolicy& _zoneDefaultPolicy);

                    /**
                     * 判断参数 ZoneDefaultPolicy 是否已赋值
                     * @return ZoneDefaultPolicy 是否已赋值
                     * 
                     */
                    bool ZoneDefaultPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Configuration details of the domain-level policy.</p>
                     * @return HostPolicy <p>Configuration details of the domain-level policy.</p>
                     * 
                     */
                    std::vector<HostPolicy> GetHostPolicy() const;

                    /**
                     * 设置<p>Configuration details of the domain-level policy.</p>
                     * @param _hostPolicy <p>Configuration details of the domain-level policy.</p>
                     * 
                     */
                    void SetHostPolicy(const std::vector<HostPolicy>& _hostPolicy);

                    /**
                     * 判断参数 HostPolicy 是否已赋值
                     * @return HostPolicy 是否已赋值
                     * 
                     */
                    bool HostPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Configuration details of the policy template.</p>
                     * @return Templates <p>Configuration details of the policy template.</p>
                     * 
                     */
                    std::vector<WebSecurityTemplates> GetTemplates() const;

                    /**
                     * 设置<p>Configuration details of the policy template.</p>
                     * @param _templates <p>Configuration details of the policy template.</p>
                     * 
                     */
                    void SetTemplates(const std::vector<WebSecurityTemplates>& _templates);

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     * 
                     */
                    bool TemplatesHasBeenSet() const;

                private:

                    /**
                     * <p>Configuration details of the site-level policy.</p>
                     */
                    SecurityPolicy m_zoneDefaultPolicy;
                    bool m_zoneDefaultPolicyHasBeenSet;

                    /**
                     * <p>Configuration details of the domain-level policy.</p>
                     */
                    std::vector<HostPolicy> m_hostPolicy;
                    bool m_hostPolicyHasBeenSet;

                    /**
                     * <p>Configuration details of the policy template.</p>
                     */
                    std::vector<WebSecurityTemplates> m_templates;
                    bool m_templatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WEBSECURITY_H_
