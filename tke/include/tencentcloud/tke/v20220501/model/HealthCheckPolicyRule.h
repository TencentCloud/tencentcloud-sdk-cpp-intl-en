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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYRULE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Health check rules
                */
                class HealthCheckPolicyRule : public AbstractModel
                {
                public:
                    HealthCheckPolicyRule();
                    ~HealthCheckPolicyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Health check rules
                     * @return Name Health check rules
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Health check rules
                     * @param _name Health check rules
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to check this item
                     * @return Enabled Whether to check this item
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to check this item
                     * @param _enabled Whether to check this item
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Whether to enable repair
                     * @return AutoRepairEnabled Whether to enable repair
                     * 
                     */
                    bool GetAutoRepairEnabled() const;

                    /**
                     * 设置Whether to enable repair
                     * @param _autoRepairEnabled Whether to enable repair
                     * 
                     */
                    void SetAutoRepairEnabled(const bool& _autoRepairEnabled);

                    /**
                     * 判断参数 AutoRepairEnabled 是否已赋值
                     * @return AutoRepairEnabled 是否已赋值
                     * 
                     */
                    bool AutoRepairEnabledHasBeenSet() const;

                private:

                    /**
                     * Health check rules
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to check this item
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Whether to enable repair
                     */
                    bool m_autoRepairEnabled;
                    bool m_autoRepairEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYRULE_H_
