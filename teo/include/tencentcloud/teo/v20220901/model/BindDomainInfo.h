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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDDOMAININFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDDOMAININFO_H_

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
                * Describes the domain names bound to the policy template.
                */
                class BindDomainInfo : public AbstractModel
                {
                public:
                    BindDomainInfo();
                    ~BindDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return Domain Domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name.
                     * @param _domain Domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Zone ID to which the domain belongs.
                     * @return ZoneId Zone ID to which the domain belongs.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID to which the domain belongs.
                     * @param _zoneId Zone ID to which the domain belongs.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Binding status. valid values:. 
<li>`process`: binding in progress</li>
<li>`online`: binding succeeded.</li>
<Li>`fail`: binding failed.</li>
                     * @return Status Binding status. valid values:. 
<li>`process`: binding in progress</li>
<li>`online`: binding succeeded.</li>
<Li>`fail`: binding failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Binding status. valid values:. 
<li>`process`: binding in progress</li>
<li>`online`: binding succeeded.</li>
<Li>`fail`: binding failed.</li>
                     * @param _status Binding status. valid values:. 
<li>`process`: binding in progress</li>
<li>`online`: binding succeeded.</li>
<Li>`fail`: binding failed.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Zone ID to which the domain belongs.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Binding status. valid values:. 
<li>`process`: binding in progress</li>
<li>`online`: binding succeeded.</li>
<Li>`fail`: binding failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDDOMAININFO_H_
