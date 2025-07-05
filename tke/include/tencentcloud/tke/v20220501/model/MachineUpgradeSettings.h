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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MACHINEUPGRADESETTINGS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MACHINEUPGRADESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/AutoUpgradeOptions.h>
#include <tencentcloud/tke/v20220501/model/IntOrString.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Managed node pool automatic upgrade configuration
                */
                class MachineUpgradeSettings : public AbstractModel
                {
                public:
                    MachineUpgradeSettings();
                    ~MachineUpgradeSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable automatic upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoUpgrade Whether to enable automatic upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAutoUpgrade() const;

                    /**
                     * 设置Whether to enable automatic upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoUpgrade Whether to enable automatic upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoUpgrade(const bool& _autoUpgrade);

                    /**
                     * 判断参数 AutoUpgrade 是否已赋值
                     * @return AutoUpgrade 是否已赋值
                     * 
                     */
                    bool AutoUpgradeHasBeenSet() const;

                    /**
                     * 获取Ops window
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return UpgradeOptions Ops window
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    AutoUpgradeOptions GetUpgradeOptions() const;

                    /**
                     * 设置Ops window
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _upgradeOptions Ops window
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpgradeOptions(const AutoUpgradeOptions& _upgradeOptions);

                    /**
                     * 判断参数 UpgradeOptions 是否已赋值
                     * @return UpgradeOptions 是否已赋值
                     * 
                     */
                    bool UpgradeOptionsHasBeenSet() const;

                    /**
                     * 获取Upgrade item
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Components Upgrade item
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置Upgrade item
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _components Upgrade item
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes that cannot be upgraded during upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MaxUnavailable Maximum number of nodes that cannot be upgraded during upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    IntOrString GetMaxUnavailable() const;

                    /**
                     * 设置Maximum number of nodes that cannot be upgraded during upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _maxUnavailable Maximum number of nodes that cannot be upgraded during upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxUnavailable(const IntOrString& _maxUnavailable);

                    /**
                     * 判断参数 MaxUnavailable 是否已赋值
                     * @return MaxUnavailable 是否已赋值
                     * 
                     */
                    bool MaxUnavailableHasBeenSet() const;

                private:

                    /**
                     * Whether to enable automatic upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    bool m_autoUpgrade;
                    bool m_autoUpgradeHasBeenSet;

                    /**
                     * Ops window
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    AutoUpgradeOptions m_upgradeOptions;
                    bool m_upgradeOptionsHasBeenSet;

                    /**
                     * Upgrade item
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * Maximum number of nodes that cannot be upgraded during upgrade
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    IntOrString m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MACHINEUPGRADESETTINGS_H_
