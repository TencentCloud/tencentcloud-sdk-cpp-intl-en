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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SV_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SV_H_

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
                * Quotation Parameters
                */
                class Sv : public AbstractModel
                {
                public:
                    Sv();
                    ~Sv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Price inquiry parameter key.
                     * @return Key Price inquiry parameter key.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Price inquiry parameter key.
                     * @param _key Price inquiry parameter key.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Quotation parameter value.
                     * @return Value Quotation parameter value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Quotation parameter value.
                     * @param _value Quotation parameter value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Quota for inquiry parameter mapping. Valid values:
<li>zone: sites;</li>
<li>custom-rule: number of custom rules;</li>
<li>rate-limiting-rule: rate limiting rule;</li>
<li>l4-proxy-instance: number of L4 proxy instances.</li>
                     * @return Pack Quota for inquiry parameter mapping. Valid values:
<li>zone: sites;</li>
<li>custom-rule: number of custom rules;</li>
<li>rate-limiting-rule: rate limiting rule;</li>
<li>l4-proxy-instance: number of L4 proxy instances.</li>
                     * 
                     */
                    std::string GetPack() const;

                    /**
                     * 设置Quota for inquiry parameter mapping. Valid values:
<li>zone: sites;</li>
<li>custom-rule: number of custom rules;</li>
<li>rate-limiting-rule: rate limiting rule;</li>
<li>l4-proxy-instance: number of L4 proxy instances.</li>
                     * @param _pack Quota for inquiry parameter mapping. Valid values:
<li>zone: sites;</li>
<li>custom-rule: number of custom rules;</li>
<li>rate-limiting-rule: rate limiting rule;</li>
<li>l4-proxy-instance: number of L4 proxy instances.</li>
                     * 
                     */
                    void SetPack(const std::string& _pack);

                    /**
                     * 判断参数 Pack 是否已赋值
                     * @return Pack 是否已赋值
                     * 
                     */
                    bool PackHasBeenSet() const;

                    /**
                     * 获取L4 proxy instance Id mapped to the price inquiry parameter.
                     * @return InstanceId L4 proxy instance Id mapped to the price inquiry parameter.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置L4 proxy instance Id mapped to the price inquiry parameter.
                     * @param _instanceId L4 proxy instance Id mapped to the price inquiry parameter.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Inquiry parameter corresponding to the protection level.
Valid values: <li> cm_30G: 30 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_60G: 60 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_100G: 100 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> anycast_300G: 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> anycast_unlimited: unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_300G: 30 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_unlimited: 30 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_300G: 60 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_unlimited: 60 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_300G: 100 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_unlimited: 100 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland).</li>
                     * @return ProtectionSpecs Inquiry parameter corresponding to the protection level.
Valid values: <li> cm_30G: 30 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_60G: 60 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_100G: 100 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> anycast_300G: 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> anycast_unlimited: unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_300G: 30 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_unlimited: 30 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_300G: 60 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_unlimited: 60 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_300G: 100 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_unlimited: 100 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland).</li>
                     * 
                     */
                    std::string GetProtectionSpecs() const;

                    /**
                     * 设置Inquiry parameter corresponding to the protection level.
Valid values: <li> cm_30G: 30 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_60G: 60 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_100G: 100 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> anycast_300G: 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> anycast_unlimited: unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_300G: 30 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_unlimited: 30 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_300G: 60 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_unlimited: 60 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_300G: 100 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_unlimited: 100 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland).</li>
                     * @param _protectionSpecs Inquiry parameter corresponding to the protection level.
Valid values: <li> cm_30G: 30 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_60G: 60 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_100G: 100 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> anycast_300G: 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> anycast_unlimited: unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_300G: 30 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_unlimited: 30 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_300G: 60 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_unlimited: 60 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_300G: 100 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_unlimited: 100 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland).</li>
                     * 
                     */
                    void SetProtectionSpecs(const std::string& _protectionSpecs);

                    /**
                     * 判断参数 ProtectionSpecs 是否已赋值
                     * @return ProtectionSpecs 是否已赋值
                     * 
                     */
                    bool ProtectionSpecsHasBeenSet() const;

                private:

                    /**
                     * Price inquiry parameter key.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Quotation parameter value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Quota for inquiry parameter mapping. Valid values:
<li>zone: sites;</li>
<li>custom-rule: number of custom rules;</li>
<li>rate-limiting-rule: rate limiting rule;</li>
<li>l4-proxy-instance: number of L4 proxy instances.</li>
                     */
                    std::string m_pack;
                    bool m_packHasBeenSet;

                    /**
                     * L4 proxy instance Id mapped to the price inquiry parameter.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Inquiry parameter corresponding to the protection level.
Valid values: <li> cm_30G: 30 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_60G: 60 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> cm_100G: 100 Gbps baseline protection for the Chinese mainland acceleration area;</li><li> anycast_300G: 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> anycast_unlimited: unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_300G: 30 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_30G_anycast_unlimited: 30 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_300G: 60 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_60G_anycast_unlimited: 60 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_300G: 100 Gbps baseline protection for the Chinese mainland acceleration area, 300 Gbps anycast joint protection for the global acceleration region (outside Chinese mainland);</li><li> cm_100G_anycast_unlimited: 100 Gbps baseline protection for the Chinese mainland acceleration area, unlimited anycast full protection for the global acceleration region (outside Chinese mainland).</li>
                     */
                    std::string m_protectionSpecs;
                    bool m_protectionSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SV_H_
