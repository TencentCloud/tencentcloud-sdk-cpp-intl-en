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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_COMPONENTSTATISTICS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_COMPONENTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Component statistics
                */
                class ComponentStatistics : public AbstractModel
                {
                public:
                    ComponentStatistics();
                    ~ComponentStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component ID
                     * @return Id Component ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Component ID
                     * @param _id Component ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Number of hosts
                     * @return MachineNum Number of hosts
                     * 
                     */
                    uint64_t GetMachineNum() const;

                    /**
                     * 设置Number of hosts
                     * @param _machineNum Number of hosts
                     * 
                     */
                    void SetMachineNum(const uint64_t& _machineNum);

                    /**
                     * 判断参数 MachineNum 是否已赋值
                     * @return MachineNum 是否已赋值
                     * 
                     */
                    bool MachineNumHasBeenSet() const;

                    /**
                     * 获取Component name
                     * @return ComponentName Component name
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component name
                     * @param _componentName Component name
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取Component type
<li>WEB: Web component</li>
<li>SYSTEM: system component</li>
                     * @return ComponentType Component type
<li>WEB: Web component</li>
<li>SYSTEM: system component</li>
                     * 
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置Component type
<li>WEB: Web component</li>
<li>SYSTEM: system component</li>
                     * @param _componentType Component type
<li>WEB: Web component</li>
<li>SYSTEM: system component</li>
                     * 
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     * 
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取Component description
                     * @return Description Component description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Component description
                     * @param _description Component description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Component ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Number of hosts
                     */
                    uint64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                    /**
                     * Component name
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Component type
<li>WEB: Web component</li>
<li>SYSTEM: system component</li>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * Component description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_COMPONENTSTATISTICS_H_
