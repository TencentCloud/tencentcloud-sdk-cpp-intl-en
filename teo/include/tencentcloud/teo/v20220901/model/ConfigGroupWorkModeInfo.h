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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPWORKMODEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPWORKMODEINFO_H_

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
                * Version management configuration group working mode information.
                */
                class ConfigGroupWorkModeInfo : public AbstractModel
                {
                public:
                    ConfigGroupWorkModeInfo();
                    ~ConfigGroupWorkModeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration group type. Options are as follows:<li>l7_acceleration: layer-7 acceleration configuration group;</li><li>edge_functions: edge function configuration group.</li><li>web_security: web protection configuration group.</li>
                     * @return ConfigGroupType Configuration group type. Options are as follows:<li>l7_acceleration: layer-7 acceleration configuration group;</li><li>edge_functions: edge function configuration group.</li><li>web_security: web protection configuration group.</li>
                     * 
                     */
                    std::string GetConfigGroupType() const;

                    /**
                     * 设置Configuration group type. Options are as follows:<li>l7_acceleration: layer-7 acceleration configuration group;</li><li>edge_functions: edge function configuration group.</li><li>web_security: web protection configuration group.</li>
                     * @param _configGroupType Configuration group type. Options are as follows:<li>l7_acceleration: layer-7 acceleration configuration group;</li><li>edge_functions: edge function configuration group.</li><li>web_security: web protection configuration group.</li>
                     * 
                     */
                    void SetConfigGroupType(const std::string& _configGroupType);

                    /**
                     * 判断参数 ConfigGroupType 是否已赋值
                     * @return ConfigGroupType 是否已赋值
                     * 
                     */
                    bool ConfigGroupTypeHasBeenSet() const;

                    /**
                     * 获取Working mode. options are as follows: <li>immediate_effect: immediate effect mode;</li><li>version_control: version management mode.</li>.
                     * @return WorkMode Working mode. options are as follows: <li>immediate_effect: immediate effect mode;</li><li>version_control: version management mode.</li>.
                     * 
                     */
                    std::string GetWorkMode() const;

                    /**
                     * 设置Working mode. options are as follows: <li>immediate_effect: immediate effect mode;</li><li>version_control: version management mode.</li>.
                     * @param _workMode Working mode. options are as follows: <li>immediate_effect: immediate effect mode;</li><li>version_control: version management mode.</li>.
                     * 
                     */
                    void SetWorkMode(const std::string& _workMode);

                    /**
                     * 判断参数 WorkMode 是否已赋值
                     * @return WorkMode 是否已赋值
                     * 
                     */
                    bool WorkModeHasBeenSet() const;

                private:

                    /**
                     * Configuration group type. Options are as follows:<li>l7_acceleration: layer-7 acceleration configuration group;</li><li>edge_functions: edge function configuration group.</li><li>web_security: web protection configuration group.</li>
                     */
                    std::string m_configGroupType;
                    bool m_configGroupTypeHasBeenSet;

                    /**
                     * Working mode. options are as follows: <li>immediate_effect: immediate effect mode;</li><li>version_control: version management mode.</li>.
                     */
                    std::string m_workMode;
                    bool m_workModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPWORKMODEINFO_H_
