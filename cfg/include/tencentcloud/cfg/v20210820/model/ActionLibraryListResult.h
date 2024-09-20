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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONLIBRARYLISTRESULT_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONLIBRARYLISTRESULT_H_

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
                * Action library data list
                */
                class ActionLibraryListResult : public AbstractModel
                {
                public:
                    ActionLibraryListResult();
                    ~ActionLibraryListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action name
                     * @return ActionName Action name
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置Action name
                     * @param _actionName Action name
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取Action description
                     * @return Desc Action description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Action description
                     * @param _desc Action description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Action type: ["platform" and "custom"]
                     * @return ActionType Action type: ["platform" and "custom"]
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置Action type: ["platform" and "custom"]
                     * @param _actionType Action type: ["platform" and "custom"]
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Creator
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
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
                     * 获取Action risk description
                     * @return RiskDesc Action risk description
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置Action risk description
                     * @param _riskDesc Action risk description
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取Action ID
                     * @return ActionId Action ID
                     * 
                     */
                    uint64_t GetActionId() const;

                    /**
                     * 设置Action ID
                     * @param _actionId Action ID
                     * 
                     */
                    void SetActionId(const uint64_t& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取Action attribute (1: fault; 2: recovery)
                     * @return AttributeId Action attribute (1: fault; 2: recovery)
                     * 
                     */
                    uint64_t GetAttributeId() const;

                    /**
                     * 设置Action attribute (1: fault; 2: recovery)
                     * @param _attributeId Action attribute (1: fault; 2: recovery)
                     * 
                     */
                    void SetAttributeId(const uint64_t& _attributeId);

                    /**
                     * 判断参数 AttributeId 是否已赋值
                     * @return AttributeId 是否已赋值
                     * 
                     */
                    bool AttributeIdHasBeenSet() const;

                    /**
                     * 获取ID of the associated action
                     * @return RelationActionId ID of the associated action
                     * 
                     */
                    uint64_t GetRelationActionId() const;

                    /**
                     * 设置ID of the associated action
                     * @param _relationActionId ID of the associated action
                     * 
                     */
                    void SetRelationActionId(const uint64_t& _relationActionId);

                    /**
                     * 判断参数 RelationActionId 是否已赋值
                     * @return RelationActionId 是否已赋值
                     * 
                     */
                    bool RelationActionIdHasBeenSet() const;

                    /**
                     * 获取Operation command
                     * @return ActionCommand Operation command
                     * 
                     */
                    std::string GetActionCommand() const;

                    /**
                     * 设置Operation command
                     * @param _actionCommand Operation command
                     * 
                     */
                    void SetActionCommand(const std::string& _actionCommand);

                    /**
                     * 判断参数 ActionCommand 是否已赋值
                     * @return ActionCommand 是否已赋值
                     * 
                     */
                    bool ActionCommandHasBeenSet() const;

                    /**
                     * 获取Action type (0: tat; 1: cloud API)
                     * @return ActionCommandType Action type (0: tat; 1: cloud API)
                     * 
                     */
                    uint64_t GetActionCommandType() const;

                    /**
                     * 设置Action type (0: tat; 1: cloud API)
                     * @param _actionCommandType Action type (0: tat; 1: cloud API)
                     * 
                     */
                    void SetActionCommandType(const uint64_t& _actionCommandType);

                    /**
                     * 判断参数 ActionCommandType 是否已赋值
                     * @return ActionCommandType 是否已赋值
                     * 
                     */
                    bool ActionCommandTypeHasBeenSet() const;

                    /**
                     * 获取Parameters of the custom action, in JSON string format
                     * @return ActionContent Parameters of the custom action, in JSON string format
                     * 
                     */
                    std::string GetActionContent() const;

                    /**
                     * 设置Parameters of the custom action, in JSON string format
                     * @param _actionContent Parameters of the custom action, in JSON string format
                     * 
                     */
                    void SetActionContent(const std::string& _actionContent);

                    /**
                     * 判断参数 ActionContent 是否已赋值
                     * @return ActionContent 是否已赋值
                     * 
                     */
                    bool ActionContentHasBeenSet() const;

                    /**
                     * 获取Level-2 type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Level-2 type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Level-2 type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceType Level-2 type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Action description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionDetail Action description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionDetail() const;

                    /**
                     * 设置Action description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionDetail Action description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionDetail(const std::string& _actionDetail);

                    /**
                     * 判断参数 ActionDetail 是否已赋值
                     * @return ActionDetail 是否已赋值
                     * 
                     */
                    bool ActionDetailHasBeenSet() const;

                    /**
                     * 获取Whether to allow usage by the current account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAllowed Whether to allow usage by the current account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsAllowed() const;

                    /**
                     * 设置Whether to allow usage by the current account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isAllowed Whether to allow usage by the current account
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsAllowed(const bool& _isAllowed);

                    /**
                     * 判断参数 IsAllowed 是否已赋值
                     * @return IsAllowed 是否已赋值
                     * 
                     */
                    bool IsAllowedHasBeenSet() const;

                    /**
                     * 获取Link to best practices
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ActionBestCase Link to best practices
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetActionBestCase() const;

                    /**
                     * 设置Link to best practices
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _actionBestCase Link to best practices
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetActionBestCase(const std::string& _actionBestCase);

                    /**
                     * 判断参数 ActionBestCase 是否已赋值
                     * @return ActionBestCase 是否已赋值
                     * 
                     */
                    bool ActionBestCaseHasBeenSet() const;

                    /**
                     * 获取Object type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ObjectType Object type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置Object type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _objectType Object type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取Monitoring metric ID list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetricIdList Monitoring metric ID list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetMetricIdList() const;

                    /**
                     * 设置Monitoring metric ID list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metricIdList Monitoring metric ID list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMetricIdList(const std::vector<uint64_t>& _metricIdList);

                    /**
                     * 判断参数 MetricIdList 是否已赋值
                     * @return MetricIdList 是否已赋值
                     * 
                     */
                    bool MetricIdListHasBeenSet() const;

                    /**
                     * 获取Whether the action is new
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsNewAction Whether the action is new
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsNewAction() const;

                    /**
                     * 设置Whether the action is new
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isNewAction Whether the action is new
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsNewAction(const bool& _isNewAction);

                    /**
                     * 判断参数 IsNewAction 是否已赋值
                     * @return IsNewAction 是否已赋值
                     * 
                     */
                    bool IsNewActionHasBeenSet() const;

                private:

                    /**
                     * Action name
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * Action description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Action type: ["platform" and "custom"]
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Action risk description
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * Action ID
                     */
                    uint64_t m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * Action attribute (1: fault; 2: recovery)
                     */
                    uint64_t m_attributeId;
                    bool m_attributeIdHasBeenSet;

                    /**
                     * ID of the associated action
                     */
                    uint64_t m_relationActionId;
                    bool m_relationActionIdHasBeenSet;

                    /**
                     * Operation command
                     */
                    std::string m_actionCommand;
                    bool m_actionCommandHasBeenSet;

                    /**
                     * Action type (0: tat; 1: cloud API)
                     */
                    uint64_t m_actionCommandType;
                    bool m_actionCommandTypeHasBeenSet;

                    /**
                     * Parameters of the custom action, in JSON string format
                     */
                    std::string m_actionContent;
                    bool m_actionContentHasBeenSet;

                    /**
                     * Level-2 type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Action description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionDetail;
                    bool m_actionDetailHasBeenSet;

                    /**
                     * Whether to allow usage by the current account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isAllowed;
                    bool m_isAllowedHasBeenSet;

                    /**
                     * Link to best practices
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_actionBestCase;
                    bool m_actionBestCaseHasBeenSet;

                    /**
                     * Object type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * Monitoring metric ID list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_metricIdList;
                    bool m_metricIdListHasBeenSet;

                    /**
                     * Whether the action is new
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isNewAction;
                    bool m_isNewActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONLIBRARYLISTRESULT_H_
