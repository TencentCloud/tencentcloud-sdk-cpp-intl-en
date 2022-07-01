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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyApplicationProxy request structure.
                */
                class ModifyApplicationProxyRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRequest();
                    ~ModifyApplicationProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID
                     * @return ZoneId Site ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
                     * @param ZoneId Site ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Layer-4 proxy ID
                     * @return ProxyId Layer-4 proxy ID
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer-4 proxy ID
                     * @param ProxyId Layer-4 proxy ID
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Layer-4 proxy name
                     * @return ProxyName Layer-4 proxy name
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Layer-4 proxy name
                     * @param ProxyName Layer-4 proxy name
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取This parameter is disused.
                     * @return ForwardClientIp This parameter is disused.
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置This parameter is disused.
                     * @param ForwardClientIp This parameter is disused.
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取This parameter is disused.
                     * @return SessionPersist This parameter is disused.
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置This parameter is disused.
                     * @param SessionPersist This parameter is disused.
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Session persistence time. Value range: 30-3600 (in seconds).
                     * @return SessionPersistTime Session persistence time. Value range: 30-3600 (in seconds).
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Session persistence time. Value range: 30-3600 (in seconds).
                     * @param SessionPersistTime Session persistence time. Value range: 30-3600 (in seconds).
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     * @return ProxyType Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     * @param ProxyType Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                private:

                    /**
                     * Site ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Layer-4 proxy ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Layer-4 proxy name
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * This parameter is disused.
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * This parameter is disused.
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Session persistence time. Value range: 30-3600 (in seconds).
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Specifies how a layer-4 proxy is created.
`hostname`: Subdomain name
`instance`: Instance
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYAPPLICATIONPROXYREQUEST_H_
