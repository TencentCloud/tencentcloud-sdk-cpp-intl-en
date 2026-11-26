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
                     * 获取<p>ID of the site associated with the IP SSL domain name. If the Status value is unbound, this field is empty.</p>
                     * @return ZoneId <p>ID of the site associated with the IP SSL domain name. If the Status value is unbound, this field is empty.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>ID of the site associated with the IP SSL domain name. If the Status value is unbound, this field is empty.</p>
                     * @param _zoneId <p>ID of the site associated with the IP SSL domain name. If the Status value is unbound, this field is empty.</p>
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
                     * 获取<p>The domain name associated with the IP SSL. If the Status value is unbound, this field is empty.</p>
                     * @return AssociatedDomain <p>The domain name associated with the IP SSL. If the Status value is unbound, this field is empty.</p>
                     * 
                     */
                    std::string GetAssociatedDomain() const;

                    /**
                     * 设置<p>The domain name associated with the IP SSL. If the Status value is unbound, this field is empty.</p>
                     * @param _associatedDomain <p>The domain name associated with the IP SSL. If the Status value is unbound, this field is empty.</p>
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
                     * 获取<p>Association status. Values as follows:</p><li>bound: IP SSL configuration bound</li><li>binding: IP SSL configuration binding</li><li>unbinding: IP SSL configuration unbinding</li><li>unbound: IP SSL configuration not bound</li>
                     * @return Status <p>Association status. Values as follows:</p><li>bound: IP SSL configuration bound</li><li>binding: IP SSL configuration binding</li><li>unbinding: IP SSL configuration unbinding</li><li>unbound: IP SSL configuration not bound</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Association status. Values as follows:</p><li>bound: IP SSL configuration bound</li><li>binding: IP SSL configuration binding</li><li>unbinding: IP SSL configuration unbinding</li><li>unbound: IP SSL configuration not bound</li>
                     * @param _status <p>Association status. Values as follows:</p><li>bound: IP SSL configuration bound</li><li>binding: IP SSL configuration binding</li><li>unbinding: IP SSL configuration unbinding</li><li>unbound: IP SSL configuration not bound</li>
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
                     * <p>ID of the site associated with the IP SSL domain name. If the Status value is unbound, this field is empty.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>The domain name associated with the IP SSL. If the Status value is unbound, this field is empty.</p>
                     */
                    std::string m_associatedDomain;
                    bool m_associatedDomainHasBeenSet;

                    /**
                     * <p>Association status. Values as follows:</p><li>bound: IP SSL configuration bound</li><li>binding: IP SSL configuration binding</li><li>unbinding: IP SSL configuration unbinding</li><li>unbound: IP SSL configuration not bound</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPSSLCONFIG_H_
