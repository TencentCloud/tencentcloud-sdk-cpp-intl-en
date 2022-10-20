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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SHIELDAREA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SHIELDAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSHost.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS mitigation configuration
                */
                class ShieldArea : public AbstractModel
                {
                public:
                    ShieldArea();
                    ~ShieldArea() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The policy ID.
                     * @return PolicyId The policy ID.
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置The policy ID.
                     * @param PolicyId The policy ID.
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取The type of protected resources. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy</li>
                     * @return Type The type of protected resources. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type of protected resources. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy</li>
                     * @param Type The type of protected resources. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The layer-7 site name.
                     * @return EntityName The layer-7 site name.
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置The layer-7 site name.
                     * @param EntityName The layer-7 site name.
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取The layer-7 subdomain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DDoSHosts The layer-7 subdomain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DDoSHost> GetDDoSHosts() const;

                    /**
                     * 设置The layer-7 subdomain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DDoSHosts The layer-7 subdomain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDDoSHosts(const std::vector<DDoSHost>& _dDoSHosts);

                    /**
                     * 判断参数 DDoSHosts 是否已赋值
                     * @return DDoSHosts 是否已赋值
                     */
                    bool DDoSHostsHasBeenSet() const;

                    /**
                     * 获取Number of layer-4 TCP forwarding rules
                     * @return TcpNum Number of layer-4 TCP forwarding rules
                     */
                    int64_t GetTcpNum() const;

                    /**
                     * 设置Number of layer-4 TCP forwarding rules
                     * @param TcpNum Number of layer-4 TCP forwarding rules
                     */
                    void SetTcpNum(const int64_t& _tcpNum);

                    /**
                     * 判断参数 TcpNum 是否已赋值
                     * @return TcpNum 是否已赋值
                     */
                    bool TcpNumHasBeenSet() const;

                    /**
                     * 获取Number of layer-4 UDP forwarding rules
                     * @return UdpNum Number of layer-4 UDP forwarding rules
                     */
                    int64_t GetUdpNum() const;

                    /**
                     * 设置Number of layer-4 UDP forwarding rules
                     * @param UdpNum Number of layer-4 UDP forwarding rules
                     */
                    void SetUdpNum(const int64_t& _udpNum);

                    /**
                     * 判断参数 UdpNum 是否已赋值
                     * @return UdpNum 是否已赋值
                     */
                    bool UdpNumHasBeenSet() const;

                    /**
                     * 获取Name of the protected resource
                     * @return Entity Name of the protected resource
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Name of the protected resource
                     * @param Entity Name of the protected resource
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The policy ID.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * The type of protected resources. Values:
<li>`domain`: Layer-7 subdomain name</li>
<li>`application`: Layer-4 proxy</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The layer-7 site name.
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * The layer-7 subdomain name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DDoSHost> m_dDoSHosts;
                    bool m_dDoSHostsHasBeenSet;

                    /**
                     * Number of layer-4 TCP forwarding rules
                     */
                    int64_t m_tcpNum;
                    bool m_tcpNumHasBeenSet;

                    /**
                     * Number of layer-4 UDP forwarding rules
                     */
                    int64_t m_udpNum;
                    bool m_udpNumHasBeenSet;

                    /**
                     * Name of the protected resource
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SHIELDAREA_H_
