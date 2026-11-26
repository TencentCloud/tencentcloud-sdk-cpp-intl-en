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
                * Instance information referenced by the component, used to show the binding relationship between the component and resources such as edge functions. When an edge function needs to access a component (such as a KV namespace), a reference relationship is created. This struct allows you to view the specific instance details and associated site information.
                */
                class ComponentReference : public AbstractModel
                {
                public:
                    ComponentReference();
                    ~ComponentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance type to refer. Valid values:
<li>edge-function: edge function.</li>
                     * @return ReferenceType Instance type to refer. Valid values:
<li>edge-function: edge function.</li>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置Instance type to refer. Valid values:
<li>edge-function: edge function.</li>
                     * @param _referenceType Instance type to refer. Valid values:
<li>edge-function: edge function.</li>
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
                     * 获取ID of the referenced instance. Based on the value of ReferenceType, return the corresponding instance ID:
<li>When ReferenceType is edge-function: return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * @return ReferenceId ID of the referenced instance. Based on the value of ReferenceType, return the corresponding instance ID:
<li>When ReferenceType is edge-function: return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * 
                     */
                    std::string GetReferenceId() const;

                    /**
                     * 设置ID of the referenced instance. Based on the value of ReferenceType, return the corresponding instance ID:
<li>When ReferenceType is edge-function: return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     * @param _referenceId ID of the referenced instance. Based on the value of ReferenceType, return the corresponding instance ID:
<li>When ReferenceType is edge-function: return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

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
                     * 获取Name of the referenced instance. Based on the value of ReferenceType, the corresponding instance name is returned:
<li>When ReferenceType is edge-function: return the edge function name.</li>

                     * @return ReferenceName Name of the referenced instance. Based on the value of ReferenceType, the corresponding instance name is returned:
<li>When ReferenceType is edge-function: return the edge function name.</li>

                     * 
                     */
                    std::string GetReferenceName() const;

                    /**
                     * 设置Name of the referenced instance. Based on the value of ReferenceType, the corresponding instance name is returned:
<li>When ReferenceType is edge-function: return the edge function name.</li>

                     * @param _referenceName Name of the referenced instance. Based on the value of ReferenceType, the corresponding instance name is returned:
<li>When ReferenceType is edge-function: return the edge function name.</li>

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
                     * 获取Zone ID. Site identifier of the instance that references the namespace.
                     * @return ZoneId Zone ID. Site identifier of the instance that references the namespace.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID. Site identifier of the instance that references the namespace.
                     * @param _zoneId Zone ID. Site identifier of the instance that references the namespace.
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
                     * 获取Site name. The name of the site to which the instances in this namespace belong.
                     * @return ZoneName Site name. The name of the site to which the instances in this namespace belong.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name. The name of the site to which the instances in this namespace belong.
                     * @param _zoneName Site name. The name of the site to which the instances in this namespace belong.
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
                     * 获取Alias of the site that the instance in the namespace belongs to. If no site alias is set, an empty string is returned.
                     * @return AliasZoneName Alias of the site that the instance in the namespace belongs to. If no site alias is set, an empty string is returned.
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置Alias of the site that the instance in the namespace belongs to. If no site alias is set, an empty string is returned.
                     * @param _aliasZoneName Alias of the site that the instance in the namespace belongs to. If no site alias is set, an empty string is returned.
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
                     * Instance type to refer. Valid values:
<li>edge-function: edge function.</li>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * ID of the referenced instance. Based on the value of ReferenceType, return the corresponding instance ID:
<li>When ReferenceType is edge-function: return the edge function ID in the format of ef-2vc5oe9mzqhm.</li>

                     */
                    std::string m_referenceId;
                    bool m_referenceIdHasBeenSet;

                    /**
                     * Name of the referenced instance. Based on the value of ReferenceType, the corresponding instance name is returned:
<li>When ReferenceType is edge-function: return the edge function name.</li>

                     */
                    std::string m_referenceName;
                    bool m_referenceNameHasBeenSet;

                    /**
                     * Zone ID. Site identifier of the instance that references the namespace.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site name. The name of the site to which the instances in this namespace belong.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Alias of the site that the instance in the namespace belongs to. If no site alias is set, an empty string is returned.
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_
