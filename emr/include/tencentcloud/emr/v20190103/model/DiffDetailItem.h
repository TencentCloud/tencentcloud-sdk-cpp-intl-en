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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAILITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Dynamically generated change detail entries.
                */
                class DiffDetailItem : public AbstractModel
                {
                public:
                    DiffDetailItem();
                    ~DiffDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attribute.
                     * @return Attribute Attribute.
                     * 
                     */
                    std::string GetAttribute() const;

                    /**
                     * 设置Attribute.
                     * @param _attribute Attribute.
                     * 
                     */
                    void SetAttribute(const std::string& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取Currently effective.
                     * @return InEffect Currently effective.
                     * 
                     */
                    std::string GetInEffect() const;

                    /**
                     * 设置Currently effective.
                     * @param _inEffect Currently effective.
                     * 
                     */
                    void SetInEffect(const std::string& _inEffect);

                    /**
                     * 判断参数 InEffect 是否已赋值
                     * @return InEffect 是否已赋值
                     * 
                     */
                    bool InEffectHasBeenSet() const;

                    /**
                     * 获取To be effective.
                     * @return PendingEffectiveness To be effective.
                     * 
                     */
                    std::string GetPendingEffectiveness() const;

                    /**
                     * 设置To be effective.
                     * @param _pendingEffectiveness To be effective.
                     * 
                     */
                    void SetPendingEffectiveness(const std::string& _pendingEffectiveness);

                    /**
                     * 判断参数 PendingEffectiveness 是否已赋值
                     * @return PendingEffectiveness 是否已赋值
                     * 
                     */
                    bool PendingEffectivenessHasBeenSet() const;

                    /**
                     * 获取Operation.
                     * @return Operation Operation.
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation.
                     * @param _operation Operation.
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取Queue.
                     * @return Queue Queue.
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置Queue.
                     * @param _queue Queue.
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取Configuration set.
                     * @return ConfigSet Configuration set.
                     * 
                     */
                    std::string GetConfigSet() const;

                    /**
                     * 设置Configuration set.
                     * @param _configSet Configuration set.
                     * 
                     */
                    void SetConfigSet(const std::string& _configSet);

                    /**
                     * 判断参数 ConfigSet 是否已赋值
                     * @return ConfigSet 是否已赋值
                     * 
                     */
                    bool ConfigSetHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return LabelName Tag.
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置Tag.
                     * @param _labelName Tag.
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取Current position.
                     * @return InEffectIndex Current position.
                     * 
                     */
                    std::string GetInEffectIndex() const;

                    /**
                     * 设置Current position.
                     * @param _inEffectIndex Current position.
                     * 
                     */
                    void SetInEffectIndex(const std::string& _inEffectIndex);

                    /**
                     * 判断参数 InEffectIndex 是否已赋值
                     * @return InEffectIndex 是否已赋值
                     * 
                     */
                    bool InEffectIndexHasBeenSet() const;

                    /**
                     * 获取Position to be effective.
                     * @return PendingEffectIndex Position to be effective.
                     * 
                     */
                    std::string GetPendingEffectIndex() const;

                    /**
                     * 设置Position to be effective.
                     * @param _pendingEffectIndex Position to be effective.
                     * 
                     */
                    void SetPendingEffectIndex(const std::string& _pendingEffectIndex);

                    /**
                     * 判断参数 PendingEffectIndex 是否已赋值
                     * @return PendingEffectIndex 是否已赋值
                     * 
                     */
                    bool PendingEffectIndexHasBeenSet() const;

                    /**
                     * 获取Plan mode name.
                     * @return PlanName Plan mode name.
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Plan mode name.
                     * @param _planName Plan mode name.
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Label Tag.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Tag.
                     * @param _label Tag.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Placement rule.
                     * @return RuleName Placement rule.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Placement rule.
                     * @param _ruleName Placement rule.
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return UserName Username.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username.
                     * @param _userName Username.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * Attribute.
                     */
                    std::string m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * Currently effective.
                     */
                    std::string m_inEffect;
                    bool m_inEffectHasBeenSet;

                    /**
                     * To be effective.
                     */
                    std::string m_pendingEffectiveness;
                    bool m_pendingEffectivenessHasBeenSet;

                    /**
                     * Operation.
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * Queue.
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * Configuration set.
                     */
                    std::string m_configSet;
                    bool m_configSetHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * Current position.
                     */
                    std::string m_inEffectIndex;
                    bool m_inEffectIndexHasBeenSet;

                    /**
                     * Position to be effective.
                     */
                    std::string m_pendingEffectIndex;
                    bool m_pendingEffectIndexHasBeenSet;

                    /**
                     * Plan mode name.
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Placement rule.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAILITEM_H_
