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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PERMISSIONCOMPONENT_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PERMISSIONCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * Business edition permission unit
                */
                class PermissionComponent : public AbstractModel
                {
                public:
                    PermissionComponent();
                    ~PermissionComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModuleId Permission value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Permission value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _moduleId Permission value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Visible/Available.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IncludeType Visible/Available.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncludeType() const;

                    /**
                     * 设置Visible/Available.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _includeType Visible/Available.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIncludeType(const std::string& _includeType);

                    /**
                     * 判断参数 IncludeType 是否已赋值
                     * @return IncludeType 是否已赋值
                     * 
                     */
                    bool IncludeTypeHasBeenSet() const;

                    /**
                     * 获取Target upgrade version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpgradeVersionType Target upgrade version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpgradeVersionType() const;

                    /**
                     * 设置Target upgrade version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upgradeVersionType Target upgrade version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpgradeVersionType(const std::string& _upgradeVersionType);

                    /**
                     * 判断参数 UpgradeVersionType 是否已赋值
                     * @return UpgradeVersionType 是否已赋值
                     * 
                     */
                    bool UpgradeVersionTypeHasBeenSet() const;

                    /**
                     * 获取Supplemental information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tips Supplemental information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置Supplemental information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tips Supplemental information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取Key for supplementary information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TipsKey Key for supplementary information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTipsKey() const;

                    /**
                     * 设置Key for supplementary information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tipsKey Key for supplementary information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTipsKey(const std::string& _tipsKey);

                    /**
                     * 判断参数 TipsKey 是否已赋值
                     * @return TipsKey 是否已赋值
                     * 
                     */
                    bool TipsKeyHasBeenSet() const;

                private:

                    /**
                     * Permission value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Visible/Available.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_includeType;
                    bool m_includeTypeHasBeenSet;

                    /**
                     * Target upgrade version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_upgradeVersionType;
                    bool m_upgradeVersionTypeHasBeenSet;

                    /**
                     * Supplemental information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * Key for supplementary information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tipsKey;
                    bool m_tipsKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PERMISSIONCOMPONENT_H_
