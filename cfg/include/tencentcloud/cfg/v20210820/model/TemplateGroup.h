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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUP_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TemplateGroupAction.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task group
                */
                class TemplateGroup : public AbstractModel
                {
                public:
                    TemplateGroup();
                    ~TemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template library action ID
                     * @return TemplateGroupId Template library action ID
                     * 
                     */
                    int64_t GetTemplateGroupId() const;

                    /**
                     * 设置Template library action ID
                     * @param _templateGroupId Template library action ID
                     * 
                     */
                    void SetTemplateGroupId(const int64_t& _templateGroupId);

                    /**
                     * 判断参数 TemplateGroupId 是否已赋值
                     * @return TemplateGroupId 是否已赋值
                     * 
                     */
                    bool TemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取List of actions in the template library action group
                     * @return TemplateGroupActions List of actions in the template library action group
                     * 
                     */
                    std::vector<TemplateGroupAction> GetTemplateGroupActions() const;

                    /**
                     * 设置List of actions in the template library action group
                     * @param _templateGroupActions List of actions in the template library action group
                     * 
                     */
                    void SetTemplateGroupActions(const std::vector<TemplateGroupAction>& _templateGroupActions);

                    /**
                     * 判断参数 TemplateGroupActions 是否已赋值
                     * @return TemplateGroupActions 是否已赋值
                     * 
                     */
                    bool TemplateGroupActionsHasBeenSet() const;

                    /**
                     * 获取Group name
                     * @return Title Group name
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Group name
                     * @param _title Group name
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Group description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Group order
                     * @return Order Group order
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置Group order
                     * @param _order Group order
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
                     * 获取Execution mode. 1: sequential execution; 2: execution by stage.
                     * @return Mode Execution mode. 1: sequential execution; 2: execution by stage.
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置Execution mode. 1: sequential execution; 2: execution by stage.
                     * @param _mode Execution mode. 1: sequential execution; 2: execution by stage.
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Object type ID
                     * @return ObjectTypeId Object type ID
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置Object type ID
                     * @param _objectTypeId Object type ID
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取Group creation time
                     * @return CreateTime Group creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Group creation time
                     * @param _createTime Group creation time
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
                     * 获取Group update time
                     * @return UpdateTime Group update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Group update time
                     * @param _updateTime Group update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Template library action ID
                     */
                    int64_t m_templateGroupId;
                    bool m_templateGroupIdHasBeenSet;

                    /**
                     * List of actions in the template library action group
                     */
                    std::vector<TemplateGroupAction> m_templateGroupActions;
                    bool m_templateGroupActionsHasBeenSet;

                    /**
                     * Group name
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Group description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Group order
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Execution mode. 1: sequential execution; 2: execution by stage.
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Object type ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * Group creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Group update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATEGROUP_H_
