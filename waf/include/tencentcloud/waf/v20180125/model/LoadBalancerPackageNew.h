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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCERPACKAGENEW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCERPACKAGENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CLB
                */
                class LoadBalancerPackageNew : public AbstractModel
                {
                public:
                    LoadBalancerPackageNew();
                    ~LoadBalancerPackageNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListenerId Listener ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listenerId Listener ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Listening Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ListenerName Listening Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listening Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _listenerName Listening Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerId CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerId CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取CLB name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerName CLB name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置CLB name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerName CLB name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取Protocol

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Region
"Toronto": "ca",
"Guangzhou": "gz",
"Chengdu": "cd",
"Fuzhou": "fzec",
"Shenzhen": "szx",
"India": "in",
"Jinan": "jnec",
"Chongqing": "cq",
"Tianjin": "tsn",
"Northeast Europe": "ru",
"Nanjing": "nj",
"Silicon Valley (U.S.)": "usw",
"Thailand": "th",
"Guangzhou Open": "gzopen",
"Shenzhen Finance": "szjr",
"Frankfurt": "de",
"Japan": "jp",
"Virginia": "use",
"Beijing": "bj",
"Hong Kong (China)": "hk",
"Hangzhou": "hzec",
"Beijing Finance": "bjjr",
"Shanghai Finance": "shjr",
"Taipei (China)": "tpe",
"Seoul": "kr",
"Shanghai": "sh",
"Singapore": "sg",
"Qingyuan": "qy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region
"Toronto": "ca",
"Guangzhou": "gz",
"Chengdu": "cd",
"Fuzhou": "fzec",
"Shenzhen": "szx",
"India": "in",
"Jinan": "jnec",
"Chongqing": "cq",
"Tianjin": "tsn",
"Northeast Europe": "ru",
"Nanjing": "nj",
"Silicon Valley (U.S.)": "usw",
"Thailand": "th",
"Guangzhou Open": "gzopen",
"Shenzhen Finance": "szjr",
"Frankfurt": "de",
"Japan": "jp",
"Virginia": "use",
"Beijing": "bj",
"Hong Kong (China)": "hk",
"Hangzhou": "hzec",
"Beijing Finance": "bjjr",
"Shanghai Finance": "shjr",
"Taipei (China)": "tpe",
"Seoul": "kr",
"Shanghai": "sh",
"Singapore": "sg",
"Qingyuan": "qy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
"Toronto": "ca",
"Guangzhou": "gz",
"Chengdu": "cd",
"Fuzhou": "fzec",
"Shenzhen": "szx",
"India": "in",
"Jinan": "jnec",
"Chongqing": "cq",
"Tianjin": "tsn",
"Northeast Europe": "ru",
"Nanjing": "nj",
"Silicon Valley (U.S.)": "usw",
"Thailand": "th",
"Guangzhou Open": "gzopen",
"Shenzhen Finance": "szjr",
"Frankfurt": "de",
"Japan": "jp",
"Virginia": "use",
"Beijing": "bj",
"Hong Kong (China)": "hk",
"Hangzhou": "hzec",
"Beijing Finance": "bjjr",
"Shanghai Finance": "shjr",
"Taipei (China)": "tpe",
"Seoul": "kr",
"Shanghai": "sh",
"Singapore": "sg",
"Qingyuan": "qy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region
"Toronto": "ca",
"Guangzhou": "gz",
"Chengdu": "cd",
"Fuzhou": "fzec",
"Shenzhen": "szx",
"India": "in",
"Jinan": "jnec",
"Chongqing": "cq",
"Tianjin": "tsn",
"Northeast Europe": "ru",
"Nanjing": "nj",
"Silicon Valley (U.S.)": "usw",
"Thailand": "th",
"Guangzhou Open": "gzopen",
"Shenzhen Finance": "szjr",
"Frankfurt": "de",
"Japan": "jp",
"Virginia": "use",
"Beijing": "bj",
"Hong Kong (China)": "hk",
"Hangzhou": "hzec",
"Beijing Finance": "bjjr",
"Shanghai Finance": "shjr",
"Taipei (China)": "tpe",
"Seoul": "kr",
"Shanghai": "sh",
"Singapore": "sg",
"Qingyuan": "qy"
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Access IP

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vip Access IP

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Access IP

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vip Access IP

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Access Port

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Vport Access Port

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetVport() const;

                    /**
                     * 设置Access Port

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vport Access Port

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVport(const uint64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Zone Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zone Region

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取VPCID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NumericalVpcId VPCID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置VPCID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _numericalVpcId VPCID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                    /**
                     * 获取CLB Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerType CLB Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerType() const;

                    /**
                     * 设置CLB Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerType CLB Type

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerType(const std::string& _loadBalancerType);

                    /**
                     * 判断参数 LoadBalancerType 是否已赋值
                     * @return LoadBalancerType 是否已赋值
                     * 
                     */
                    bool LoadBalancerTypeHasBeenSet() const;

                    /**
                     * 获取Domain Name of CLB

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LoadBalancerDomain Domain Name of CLB

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLoadBalancerDomain() const;

                    /**
                     * 设置Domain Name of CLB

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _loadBalancerDomain Domain Name of CLB

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLoadBalancerDomain(const std::string& _loadBalancerDomain);

                    /**
                     * 判断参数 LoadBalancerDomain 是否已赋值
                     * @return LoadBalancerDomain 是否已赋值
                     * 
                     */
                    bool LoadBalancerDomainHasBeenSet() const;

                private:

                    /**
                     * Listener ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listening Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * CLB instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * CLB name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * Protocol

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Region
"Toronto": "ca",
"Guangzhou": "gz",
"Chengdu": "cd",
"Fuzhou": "fzec",
"Shenzhen": "szx",
"India": "in",
"Jinan": "jnec",
"Chongqing": "cq",
"Tianjin": "tsn",
"Northeast Europe": "ru",
"Nanjing": "nj",
"Silicon Valley (U.S.)": "usw",
"Thailand": "th",
"Guangzhou Open": "gzopen",
"Shenzhen Finance": "szjr",
"Frankfurt": "de",
"Japan": "jp",
"Virginia": "use",
"Beijing": "bj",
"Hong Kong (China)": "hk",
"Hangzhou": "hzec",
"Beijing Finance": "bjjr",
"Shanghai Finance": "shjr",
"Taipei (China)": "tpe",
"Seoul": "kr",
"Shanghai": "sh",
"Singapore": "sg",
"Qingyuan": "qy"
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Access IP

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Access Port

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Region

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * VPCID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                    /**
                     * CLB Type

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerType;
                    bool m_loadBalancerTypeHasBeenSet;

                    /**
                     * Domain Name of CLB

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_loadBalancerDomain;
                    bool m_loadBalancerDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LOADBALANCERPACKAGENEW_H_
