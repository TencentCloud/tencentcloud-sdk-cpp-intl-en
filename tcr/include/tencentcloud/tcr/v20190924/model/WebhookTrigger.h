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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/WebhookTarget.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Webhook trigger
                */
                class WebhookTrigger : public AbstractModel
                {
                public:
                    WebhookTrigger();
                    ~WebhookTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger name
                     * @return Name Trigger name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Trigger name
                     * @param _name Trigger name
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
                     * 获取Trigger target
                     * @return Targets Trigger target
                     * 
                     */
                    std::vector<WebhookTarget> GetTargets() const;

                    /**
                     * 设置Trigger target
                     * @param _targets Trigger target
                     * 
                     */
                    void SetTargets(const std::vector<WebhookTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Action to be triggered
                     * @return EventTypes Action to be triggered
                     * 
                     */
                    std::vector<std::string> GetEventTypes() const;

                    /**
                     * 设置Action to be triggered
                     * @param _eventTypes Action to be triggered
                     * 
                     */
                    void SetEventTypes(const std::vector<std::string>& _eventTypes);

                    /**
                     * 判断参数 EventTypes 是否已赋值
                     * @return EventTypes 是否已赋值
                     * 
                     */
                    bool EventTypesHasBeenSet() const;

                    /**
                     * 获取Trigger rule
                     * @return Condition Trigger rule
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Trigger rule
                     * @param _condition Trigger rule
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Whether to enable the trigger
                     * @return Enabled Whether to enable the trigger
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable the trigger
                     * @param _enabled Whether to enable the trigger
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
                     * 获取Trigger ID
                     * @return Id Trigger ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Trigger ID
                     * @param _id Trigger ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Trigger description
                     * @return Description Trigger description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Trigger description
                     * @param _description Trigger description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取ID of the namespace of the trigger
                     * @return NamespaceId ID of the namespace of the trigger
                     * 
                     */
                    int64_t GetNamespaceId() const;

                    /**
                     * 设置ID of the namespace of the trigger
                     * @param _namespaceId ID of the namespace of the trigger
                     * 
                     */
                    void SetNamespaceId(const int64_t& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                private:

                    /**
                     * Trigger name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Trigger target
                     */
                    std::vector<WebhookTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Action to be triggered
                     */
                    std::vector<std::string> m_eventTypes;
                    bool m_eventTypesHasBeenSet;

                    /**
                     * Trigger rule
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Whether to enable the trigger
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Trigger ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Trigger description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ID of the namespace of the trigger
                     */
                    int64_t m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTRIGGER_H_
