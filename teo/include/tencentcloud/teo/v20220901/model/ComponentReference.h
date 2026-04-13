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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_

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
                * Instance information referenced by the component, used to show the binding relationship between the component and resources such as edge functions. When an edge function needs to access a component (for example KV namespace), a reference relationship is created. This struct can be used to view the instance detail of the referenced resource and its associated site information.
                */
                class ComponentReference : public AbstractModel
                {
                public:
                    ComponentReference();
                    ~ComponentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Refer to the instance type. Valid values:
<li>edge-function: Edge function.</li>
                     * @return ReferenceType Refer to the instance type. Valid values:
<li>edge-function: Edge function.</li>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置Refer to the instance type. Valid values:
<li>edge-function: Edge function.</li>
                     * @param _referenceType Refer to the instance type. Valid values:
<li>edge-function: Edge function.</li>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取Referenced instance ID. According to the value of ReferenceType, return the corresponding instance ID.
<li>When ReferenceType is edge-function: Return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * @return ReferenceId Referenced instance ID. According to the value of ReferenceType, return the corresponding instance ID.
<li>When ReferenceType is edge-function: Return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * 
                     */
                    std::string GetReferenceId() const;

                    /**
                     * 设置Referenced instance ID. According to the value of ReferenceType, return the corresponding instance ID.
<li>When ReferenceType is edge-function: Return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * @param _referenceId Referenced instance ID. According to the value of ReferenceType, return the corresponding instance ID.
<li>When ReferenceType is edge-function: Return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * 
                     */
                    void SetReferenceId(const std::string& _referenceId);

                    /**
                     * 判断参数 ReferenceId 是否已赋值
                     * @return ReferenceId 是否已赋值
                     * 
                     */
                    bool ReferenceIdHasBeenSet() const;

                    /**
                     * 获取Referenced instance name. According to the value of ReferenceType, return the corresponding instance name.
<li>When ReferenceType is edge-function: Returns the edge function name.</li>

                     * @return ReferenceName Referenced instance name. According to the value of ReferenceType, return the corresponding instance name.
<li>When ReferenceType is edge-function: Returns the edge function name.</li>

                     * 
                     */
                    std::string GetReferenceName() const;

                    /**
                     * 设置Referenced instance name. According to the value of ReferenceType, return the corresponding instance name.
<li>When ReferenceType is edge-function: Returns the edge function name.</li>

                     * @param _referenceName Referenced instance name. According to the value of ReferenceType, return the corresponding instance name.
<li>When ReferenceType is edge-function: Returns the edge function name.</li>

                     * 
                     */
                    void SetReferenceName(const std::string& _referenceName);

                    /**
                     * 判断参数 ReferenceName 是否已赋值
                     * @return ReferenceName 是否已赋值
                     * 
                     */
                    bool ReferenceNameHasBeenSet() const;

                    /**
                     * 获取Site ID. Site identifier of the instance ownership that refers to the namespace.
                     * @return ZoneId Site ID. Site identifier of the instance ownership that refers to the namespace.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. Site identifier of the instance ownership that refers to the namespace.
                     * @param _zoneId Site ID. Site identifier of the instance ownership that refers to the namespace.
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
                     * 获取Site name. Refer to the site name of the instance ownership in namespace.
                     * @return ZoneName Site name. Refer to the site name of the instance ownership in namespace.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name. Refer to the site name of the instance ownership in namespace.
                     * @param _zoneName Site name. Refer to the site name of the instance ownership in namespace.
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
                     * 获取Refer to the site alias of the namespace instance. If the site alias is not set, return an empty string.
                     * @return AliasZoneName Refer to the site alias of the namespace instance. If the site alias is not set, return an empty string.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Refer to the site alias of the namespace instance. If the site alias is not set, return an empty string.
                     * @param _aliasZoneName Refer to the site alias of the namespace instance. If the site alias is not set, return an empty string.
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
                     * Refer to the instance type. Valid values:
<li>edge-function: Edge function.</li>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * Referenced instance ID. According to the value of ReferenceType, return the corresponding instance ID.
<li>When ReferenceType is edge-function: Return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     */
                    std::string m_referenceId;
                    bool m_referenceIdHasBeenSet;

                    /**
                     * Referenced instance name. According to the value of ReferenceType, return the corresponding instance name.
<li>When ReferenceType is edge-function: Returns the edge function name.</li>

                     */
                    std::string m_referenceName;
                    bool m_referenceNameHasBeenSet;

                    /**
                     * Site ID. Site identifier of the instance ownership that refers to the namespace.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name. Refer to the site name of the instance ownership in namespace.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Refer to the site alias of the namespace instance. If the site alias is not set, return an empty string.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_
