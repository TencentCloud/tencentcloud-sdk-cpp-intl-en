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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUPACTION_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUPACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task group action
                */
                class TemplateGroupAction : public AbstractModel
                {
                public:
                    TemplateGroupAction();
                    ~TemplateGroupAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template library group action ID
                     * @return TemplateGroupActionId Template library group action ID
                     * 
                     */
                    int64_t GetTemplateGroupActionId() const;

                    /**
                     * 设置Template library group action ID
                     * @param _templateGroupActionId Template library group action ID
                     * 
                     */
                    void SetTemplateGroupActionId(const int64_t& _templateGroupActionId);

                    /**
                     * 判断参数 TemplateGroupActionId 是否已赋值
                     * @return TemplateGroupActionId 是否已赋值
                     * 
                     */
                    bool TemplateGroupActionIdHasBeenSet() const;

                    /**
                     * 获取Action ID
                     * @return ActionId Action ID
                     * 
                     */
                    int64_t GetActionId() const;

                    /**
                     * 设置Action ID
                     * @param _actionId Action ID
                     * 
                     */
                    void SetActionId(const int64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取Order of actions in the group
                     * @return Order Order of actions in the group
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Order of actions in the group
                     * @param _order Order of actions in the group
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GeneralConfiguration General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGeneralConfiguration() const;

                    /**
                     * 设置General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _generalConfiguration General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGeneralConfiguration(const std::string& _generalConfiguration);

                    /**
                     * 判断参数 GeneralConfiguration 是否已赋值
                     * @return GeneralConfiguration 是否已赋值
                     * 
                     */
                    bool GeneralConfigurationHasBeenSet() const;

                    /**
                     * 获取Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomConfiguration Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCustomConfiguration() const;

                    /**
                     * 设置Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customConfiguration Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomConfiguration(const std::string& _customConfiguration);

                    /**
                     * 判断参数 CustomConfiguration 是否已赋值
                     * @return CustomConfiguration 是否已赋值
                     * 
                     */
                    bool CustomConfigurationHasBeenSet() const;

                    /**
                     * 获取Action group creation time
                     * @return CreateTime Action group creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Action group creation time
                     * @param _createTime Action group creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Action group update time
                     * @return UpdateTime Action group update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Action group update time
                     * @param _updateTime Action group update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Action name
                     * @return ActionTitle Action name
                     * 
                     */
                    std::string GetActionTitle() const;

                    /**
                     * 设置Action name
                     * @param _actionTitle Action name
                     * 
                     */
                    void SetActionTitle(const std::string& _actionTitle);

                    /**
                     * 判断参数 ActionTitle 是否已赋值
                     * @return ActionTitle 是否已赋值
                     * 
                     */
                    bool ActionTitleHasBeenSet() const;

                    /**
                     * 获取Random ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RandomId Random ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRandomId() const;

                    /**
                     * 设置Random ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _randomId Random ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRandomId(const int64_t& _randomId);

                    /**
                     * 判断参数 RandomId 是否已赋值
                     * @return RandomId 是否已赋值
                     * 
                     */
                    bool RandomIdHasBeenSet() const;

                    /**
                     * 获取Recovery action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecoverId Recovery action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRecoverId() const;

                    /**
                     * 设置Recovery action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recoverId Recovery action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecoverId(const int64_t& _recoverId);

                    /**
                     * 判断参数 RecoverId 是否已赋值
                     * @return RecoverId 是否已赋值
                     * 
                     */
                    bool RecoverIdHasBeenSet() const;

                    /**
                     * 获取Executed action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecuteId Executed action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExecuteId() const;

                    /**
                     * 设置Executed action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executeId Executed action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecuteId(const int64_t& _executeId);

                    /**
                     * 判断参数 ExecuteId 是否已赋值
                     * @return ExecuteId 是否已赋值
                     * 
                     */
                    bool ExecuteIdHasBeenSet() const;

                    /**
                     * 获取Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionApiType Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetActionApiType() const;

                    /**
                     * 设置Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionApiType Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionApiType(const int64_t& _actionApiType);

                    /**
                     * 判断参数 ActionApiType 是否已赋值
                     * @return ActionApiType 是否已赋值
                     * 
                     */
                    bool ActionApiTypeHasBeenSet() const;

                    /**
                     * 获取1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionAttribute 1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetActionAttribute() const;

                    /**
                     * 设置1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionAttribute 1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionAttribute(const int64_t& _actionAttribute);

                    /**
                     * 判断参数 ActionAttribute 是否已赋值
                     * @return ActionAttribute 是否已赋值
                     * 
                     */
                    bool ActionAttributeHasBeenSet() const;

                    /**
                     * 获取Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionType Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionType Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Action risk level. 1: low-risk; 2: medium-risk; 3: high-risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionRisk Action risk level. 1: low-risk; 2: medium-risk; 3: high-risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionRisk() const;

                    /**
                     * 设置Action risk level. 1: low-risk; 2: medium-risk; 3: high-risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionRisk Action risk level. 1: low-risk; 2: medium-risk; 3: high-risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionRisk(const std::string& _actionRisk);

                    /**
                     * 判断参数 ActionRisk 是否已赋值
                     * @return ActionRisk 是否已赋值
                     * 
                     */
                    bool ActionRiskHasBeenSet() const;

                private:

                    /**
                     * Template library group action ID
                     */
                    int64_t m_templateGroupActionId;
                    bool m_templateGroupActionIdHasBeenSet;

                    /**
                     * Action ID
                     */
                    int64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * Order of actions in the group
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * General configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_generalConfiguration;
                    bool m_generalConfigurationHasBeenSet;

                    /**
                     * Custom configurations of actions in the group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                    /**
                     * Action group creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Action group update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Action name
                     */
                    std::string m_actionTitle;
                    bool m_actionTitleHasBeenSet;

                    /**
                     * Random ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_randomId;
                    bool m_randomIdHasBeenSet;

                    /**
                     * Recovery action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_recoverId;
                    bool m_recoverIdHasBeenSet;

                    /**
                     * Executed action ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_executeId;
                    bool m_executeIdHasBeenSet;

                    /**
                     * Called API type. 0: tat; 1: cloud API.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_actionApiType;
                    bool m_actionApiTypeHasBeenSet;

                    /**
                     * 1: fault; 2: recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_actionAttribute;
                    bool m_actionAttributeHasBeenSet;

                    /**
                     * Action type: platform and custom
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Action risk level. 1: low-risk; 2: medium-risk; 3: high-risk.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionRisk;
                    bool m_actionRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUPACTION_H_
