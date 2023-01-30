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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLRULEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlChildRuleInfo.h>
#include <tencentcloud/tcss/v20201101/model/AccessControlSystemChildRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Container runtime - Access control policy information
                */
                class AccessControlRuleInfo : public AbstractModel
                {
                public:
                    AccessControlRuleInfo();
                    ~AccessControlRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch. Valid values: `true` (on); `false` (off).
                     * @return IsEnable Switch. Valid values: `true` (on); `false` (off).
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置Switch. Valid values: `true` (on); `false` (off).
                     * @param IsEnable Switch. Valid values: `true` (on); `false` (off).
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取IDs of associated images. An empty array indicates all images.
                     * @return ImageIds IDs of associated images. An empty array indicates all images.
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置IDs of associated images. An empty array indicates all images.
                     * @param ImageIds IDs of associated images. An empty array indicates all images.
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取Array of sub-policies of the user policy
                     * @return ChildRules Array of sub-policies of the user policy
                     */
                    std::vector<AccessControlChildRuleInfo> GetChildRules() const;

                    /**
                     * 设置Array of sub-policies of the user policy
                     * @param ChildRules Array of sub-policies of the user policy
                     */
                    void SetChildRules(const std::vector<AccessControlChildRuleInfo>& _childRules);

                    /**
                     * 判断参数 ChildRules 是否已赋值
                     * @return ChildRules 是否已赋值
                     */
                    bool ChildRulesHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return RuleName Policy name
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Policy name
                     * @param RuleName Policy name
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RuleId Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Array of sub-policies of the preset policy
                     * @return SystemChildRules Array of sub-policies of the preset policy
                     */
                    std::vector<AccessControlSystemChildRuleInfo> GetSystemChildRules() const;

                    /**
                     * 设置Array of sub-policies of the preset policy
                     * @param SystemChildRules Array of sub-policies of the preset policy
                     */
                    void SetSystemChildRules(const std::vector<AccessControlSystemChildRuleInfo>& _systemChildRules);

                    /**
                     * 判断参数 SystemChildRules 是否已赋值
                     * @return SystemChildRules 是否已赋值
                     */
                    bool SystemChildRulesHasBeenSet() const;

                    /**
                     * 获取Whether it is the default preset policy
                     * @return IsDefault Whether it is the default preset policy
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default preset policy
                     * @param IsDefault Whether it is the default preset policy
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * Switch. Valid values: `true` (on); `false` (off).
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * IDs of associated images. An empty array indicates all images.
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * Array of sub-policies of the user policy
                     */
                    std::vector<AccessControlChildRuleInfo> m_childRules;
                    bool m_childRulesHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Policy ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Array of sub-policies of the preset policy
                     */
                    std::vector<AccessControlSystemChildRuleInfo> m_systemChildRules;
                    bool m_systemChildRulesHasBeenSet;

                    /**
                     * Whether it is the default preset policy
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ACCESSCONTROLRULEINFO_H_
