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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_

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
                * IP SSL information
                */
                class IPSSLConfig : public AbstractModel
                {
                public:
                    IPSSLConfig();
                    ~IPSSLConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name associated with IP SSL. If the Status value is unbound, this field is empty.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return AssociatedDomain Domain name associated with IP SSL. If the Status value is unbound, this field is empty.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetAssociatedDomain() const;

                    /**
                     * 设置Domain name associated with IP SSL. If the Status value is unbound, this field is empty.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _associatedDomain Domain name associated with IP SSL. If the Status value is unbound, this field is empty.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetAssociatedDomain(const std::string& _associatedDomain);

                    /**
                     * 判断参数 AssociatedDomain 是否已赋值
                     * @return AssociatedDomain 是否已赋值
                     * 
                     */
                    bool AssociatedDomainHasBeenSet() const;

                    /**
                     * 获取Association status. Values as follows:
<li>bound: The IP SSL configuration is bound</li>
<li>Binding: IP SSL configuration binding in progress</li>
<li>unbinding: IP SSL configuration is being unbound</li>
<li>unbound: IP SSL configuration not bound to</li>
                     * @return Status Association status. Values as follows:
<li>bound: The IP SSL configuration is bound</li>
<li>Binding: IP SSL configuration binding in progress</li>
<li>unbinding: IP SSL configuration is being unbound</li>
<li>unbound: IP SSL configuration not bound to</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Association status. Values as follows:
<li>bound: The IP SSL configuration is bound</li>
<li>Binding: IP SSL configuration binding in progress</li>
<li>unbinding: IP SSL configuration is being unbound</li>
<li>unbound: IP SSL configuration not bound to</li>
                     * @param _status Association status. Values as follows:
<li>bound: The IP SSL configuration is bound</li>
<li>Binding: IP SSL configuration binding in progress</li>
<li>unbinding: IP SSL configuration is being unbound</li>
<li>unbound: IP SSL configuration not bound to</li>
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
                     * Domain name associated with IP SSL. If the Status value is unbound, this field is empty.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_associatedDomain;
                    bool m_associatedDomainHasBeenSet;

                    /**
                     * Association status. Values as follows:
<li>bound: The IP SSL configuration is bound</li>
<li>Binding: IP SSL configuration binding in progress</li>
<li>unbinding: IP SSL configuration is being unbound</li>
<li>unbound: IP SSL configuration not bound to</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_
