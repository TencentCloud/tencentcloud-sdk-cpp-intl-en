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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SHIELDAREA_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SHIELDAREA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSApplication.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
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
                     * 获取ID of the site (top-level domain name)
                     * @return ZoneId ID of the site (top-level domain name)
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site (top-level domain name)
                     * @param _zoneId ID of the site (top-level domain name)
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
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID
                     * @param _policyId Policy ID
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取Type of protected resource. Values: `domain` and `application`.
                     * @return Type Type of protected resource. Values: `domain` and `application`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of protected resource. Values: `domain` and `application`.
                     * @param _type Type of protected resource. Values: `domain` and `application`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Layer-4 proxy name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EntityName Layer-4 proxy name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置Layer-4 proxy name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _entityName Layer-4 proxy name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                    /**
                     * 获取Layer-7 domain name parameters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Application Layer-7 domain name parameters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DDoSApplication> GetApplication() const;

                    /**
                     * 设置Layer-7 domain name parameters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _application Layer-7 domain name parameters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetApplication(const std::vector<DDoSApplication>& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     * 
                     */
                    bool ApplicationHasBeenSet() const;

                    /**
                     * 获取Number of layer-4 TCP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TcpNum Number of layer-4 TCP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTcpNum() const;

                    /**
                     * 设置Number of layer-4 TCP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tcpNum Number of layer-4 TCP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTcpNum(const int64_t& _tcpNum);

                    /**
                     * 判断参数 TcpNum 是否已赋值
                     * @return TcpNum 是否已赋值
                     * 
                     */
                    bool TcpNumHasBeenSet() const;

                    /**
                     * 获取Number of layer-4 UDP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return UdpNum Number of layer-4 UDP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUdpNum() const;

                    /**
                     * 设置Number of layer-4 UDP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _udpNum Number of layer-4 UDP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUdpNum(const int64_t& _udpNum);

                    /**
                     * 判断参数 UdpNum 是否已赋值
                     * @return UdpNum 是否已赋值
                     * 
                     */
                    bool UdpNumHasBeenSet() const;

                    /**
                     * 获取Name of the protected resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Entity Name of the protected resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Name of the protected resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _entity Name of the protected resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     * 
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取Whether the shared resource is used. Values: `true` (yes) and `false` (no). The proxy mode cannot be switched when the shared resource is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Share Whether the shared resource is used. Values: `true` (yes) and `false` (no). The proxy mode cannot be switched when the shared resource is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetShare() const;

                    /**
                     * 设置Whether the shared resource is used. Values: `true` (yes) and `false` (no). The proxy mode cannot be switched when the shared resource is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _share Whether the shared resource is used. Values: `true` (yes) and `false` (no). The proxy mode cannot be switched when the shared resource is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetShare(const bool& _share);

                    /**
                     * 判断参数 Share 是否已赋值
                     * @return Share 是否已赋值
                     * 
                     */
                    bool ShareHasBeenSet() const;

                private:

                    /**
                     * ID of the site (top-level domain name)
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Policy ID
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * Type of protected resource. Values: `domain` and `application`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Layer-4 proxy name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                    /**
                     * Layer-7 domain name parameters
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<DDoSApplication> m_application;
                    bool m_applicationHasBeenSet;

                    /**
                     * Number of layer-4 TCP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_tcpNum;
                    bool m_tcpNumHasBeenSet;

                    /**
                     * Number of layer-4 UDP forwarding rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_udpNum;
                    bool m_udpNumHasBeenSet;

                    /**
                     * Name of the protected resource
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * Whether the shared resource is used. Values: `true` (yes) and `false` (no). The proxy mode cannot be switched when the shared resource is used.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_share;
                    bool m_shareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SHIELDAREA_H_
