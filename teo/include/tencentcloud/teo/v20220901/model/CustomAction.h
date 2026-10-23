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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomActionParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom configuration
                */
                class CustomAction : public AbstractModel
                {
                public:
                    CustomAction();
                    ~CustomAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID of the custom configuration item.</p><p>You can obtain it through the returned value CustomActionSet[].ActionId of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @return ActionId <p>ID of the custom configuration item.</p><p>You can obtain it through the returned value CustomActionSet[].ActionId of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    std::string GetActionId() const;

                    /**
                     * 设置<p>ID of the custom configuration item.</p><p>You can obtain it through the returned value CustomActionSet[].ActionId of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @param _actionId <p>ID of the custom configuration item.</p><p>You can obtain it through the returned value CustomActionSet[].ActionId of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    void SetActionId(const std::string& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取<p>Parameter values of each parameter field under this custom configuration.</p><p>You can obtain them through the API return value CustomActionSet[].Parameters of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return Parameters <p>Parameter values of each parameter field under this custom configuration.</p><p>You can obtain them through the API return value CustomActionSet[].Parameters of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    std::vector<CustomActionParameter> GetParameters() const;

                    /**
                     * 设置<p>Parameter values of each parameter field under this custom configuration.</p><p>You can obtain them through the API return value CustomActionSet[].Parameters of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _parameters <p>Parameter values of each parameter field under this custom configuration.</p><p>You can obtain them through the API return value CustomActionSet[].Parameters of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    void SetParameters(const std::vector<CustomActionParameter>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * <p>ID of the custom configuration item.</p><p>You can obtain it through the returned value CustomActionSet[].ActionId of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     */
                    std::string m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * <p>Parameter values of each parameter field under this custom configuration.</p><p>You can obtain them through the API return value CustomActionSet[].Parameters of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    std::vector<CustomActionParameter> m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTION_H_
