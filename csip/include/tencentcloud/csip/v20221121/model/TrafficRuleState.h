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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICRULESTATE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICRULESTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Traffic sandbox rule status
                */
                class TrafficRuleState : public AbstractModel
                {
                public:
                    TrafficRuleState();
                    ~TrafficRuleState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Sandbox plug-in module name</p>
                     * @return Module <p>Sandbox plug-in module name</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>Sandbox plug-in module name</p>
                     * @param _module <p>Sandbox plug-in module name</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>Sandbox rule status</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * @return Status <p>Sandbox rule status</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Sandbox rule status</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * @param _status <p>Sandbox rule status</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Sandbox plug-in module name</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>Sandbox rule status</p><p>Enumeration value:</p><ul><li>ON: Enable</li><li>OFF: Disable</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICRULESTATE_H_
