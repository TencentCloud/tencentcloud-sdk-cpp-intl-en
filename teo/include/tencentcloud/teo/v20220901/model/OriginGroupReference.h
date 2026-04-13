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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_

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
                * Services referencing this origin group
                */
                class OriginGroupReference : public AbstractModel
                {
                public:
                    OriginGroupReference();
                    ~OriginGroupReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reference service type. valid values:.
<Li>Acceleration-Domain: specifies the acceleration domain name.</li>.
<Li>Rule-Engine: specifies the rule engine.</li>.
<Li>Load-Balancer: specifies the cloud load balancer.</li>.
<li>application-proxy: layer 4 proxy.</li>.
                     * @return InstanceType Reference service type. valid values:.
<Li>Acceleration-Domain: specifies the acceleration domain name.</li>.
<Li>Rule-Engine: specifies the rule engine.</li>.
<Li>Load-Balancer: specifies the cloud load balancer.</li>.
<li>application-proxy: layer 4 proxy.</li>.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Reference service type. valid values:.
<Li>Acceleration-Domain: specifies the acceleration domain name.</li>.
<Li>Rule-Engine: specifies the rule engine.</li>.
<Li>Load-Balancer: specifies the cloud load balancer.</li>.
<li>application-proxy: layer 4 proxy.</li>.
                     * @param _instanceType Reference service type. valid values:.
<Li>Acceleration-Domain: specifies the acceleration domain name.</li>.
<Li>Rule-Engine: specifies the rule engine.</li>.
<Li>Load-Balancer: specifies the cloud load balancer.</li>.
<li>application-proxy: layer 4 proxy.</li>.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取ID of the instances referencing the origin group
                     * @return InstanceId ID of the instances referencing the origin group
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instances referencing the origin group
                     * @param _instanceId ID of the instances referencing the origin group
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
                     * 获取Specifies the instance name of the reference type.
                     * @return InstanceName Specifies the instance name of the reference type.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Specifies the instance name of the reference type.
                     * @param _instanceName Specifies the instance name of the reference type.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Referer ID.
                     * @return ZoneId Referer ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Referer ID.
                     * @param _zoneId Referer ID.
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
                     * 获取Refers to the site name.
                     * @return ZoneName Refers to the site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Refers to the site name.
                     * @param _zoneName Refers to the site name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Refers to the site alias.
                     * @return AliasZoneName Refers to the site alias.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Refers to the site alias.
                     * @param _aliasZoneName Refers to the site alias.
                     * 
                     */
                    void SetAliasZoneName(const std::string& _aliasZoneName);

                    /**
                     * 判断参数 AliasZoneName 是否已赋值
                     * @return AliasZoneName 是否已赋值
                     * 
                     */
                    bool AliasZoneNameHasBeenSet() const;

                private:

                    /**
                     * Reference service type. valid values:.
<Li>Acceleration-Domain: specifies the acceleration domain name.</li>.
<Li>Rule-Engine: specifies the rule engine.</li>.
<Li>Load-Balancer: specifies the cloud load balancer.</li>.
<li>application-proxy: layer 4 proxy.</li>.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * ID of the instances referencing the origin group
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the instance name of the reference type.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Referer ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Refers to the site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Refers to the site alias.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUPREFERENCE_H_
