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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENT_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Component list data.
                */
                class Component : public AbstractModel
                {
                public:
                    Component();
                    ~Component() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID.
                     * @return Id Unique ID.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID.
                     * @param Id Unique ID.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取CWP agent `Uuid`.
                     * @return Uuid CWP agent `Uuid`.
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWP agent `Uuid`.
                     * @param Uuid CWP agent `Uuid`.
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Private IP of server.
                     * @return MachineIp Private IP of server.
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Private IP of server.
                     * @param MachineIp Private IP of server.
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Server name.
                     * @return MachineName Server name.
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Server name.
                     * @param MachineName Server name.
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取Component version number.
                     * @return ComponentVersion Component version number.
                     */
                    std::string GetComponentVersion() const;

                    /**
                     * 设置Component version number.
                     * @param ComponentVersion Component version number.
                     */
                    void SetComponentVersion(const std::string& _componentVersion);

                    /**
                     * 判断参数 ComponentVersion 是否已赋值
                     * @return ComponentVersion 是否已赋值
                     */
                    bool ComponentVersionHasBeenSet() const;

                    /**
                     * 获取Component type.
<li>SYSTEM: system component</li>
<li>WEB: web component</li>
                     * @return ComponentType Component type.
<li>SYSTEM: system component</li>
<li>WEB: web component</li>
                     */
                    std::string GetComponentType() const;

                    /**
                     * 设置Component type.
<li>SYSTEM: system component</li>
<li>WEB: web component</li>
                     * @param ComponentType Component type.
<li>SYSTEM: system component</li>
<li>WEB: web component</li>
                     */
                    void SetComponentType(const std::string& _componentType);

                    /**
                     * 判断参数 ComponentType 是否已赋值
                     * @return ComponentType 是否已赋值
                     */
                    bool ComponentTypeHasBeenSet() const;

                    /**
                     * 获取Component name.
                     * @return ComponentName Component name.
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置Component name.
                     * @param ComponentName Component name.
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取Component detection update time.
                     * @return ModifyTime Component detection update time.
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Component detection update time.
                     * @param ModifyTime Component detection update time.
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Unique ID.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * CWP agent `Uuid`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Private IP of server.
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Server name.
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Component version number.
                     */
                    std::string m_componentVersion;
                    bool m_componentVersionHasBeenSet;

                    /**
                     * Component type.
<li>SYSTEM: system component</li>
<li>WEB: web component</li>
                     */
                    std::string m_componentType;
                    bool m_componentTypeHasBeenSet;

                    /**
                     * Component name.
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * Component detection update time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_COMPONENT_H_
