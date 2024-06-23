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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LINKOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LINKOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Details of the task dependency edge
                */
                class LinkOpsDto : public AbstractModel
                {
                public:
                    LinkOpsDto();
                    ~LinkOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Edge ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Edge ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Edge ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Edge ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Edge key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LinkKey Edge key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLinkKey() const;

                    /**
                     * 设置Edge key
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _linkKey Edge key
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLinkKey(const std::string& _linkKey);

                    /**
                     * 判断参数 LinkKey 是否已赋值
                     * @return LinkKey 是否已赋值
                     * 
                     */
                    bool LinkKeyHasBeenSet() const;

                    /**
                     * 获取Source node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskFrom Source node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置Source node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskFrom Source node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取Target node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskTo Target node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置Target node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskTo Target node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return InCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _inCharge Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取Dependency Relationship Between Parent and Child TasksNote: This field may return null, indicating that no valid value can be obtained.
                     * @return LinkDependencyType Dependency Relationship Between Parent and Child TasksNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLinkDependencyType() const;

                    /**
                     * 设置Dependency Relationship Between Parent and Child TasksNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _linkDependencyType Dependency Relationship Between Parent and Child TasksNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLinkDependencyType(const std::string& _linkDependencyType);

                    /**
                     * 判断参数 LinkDependencyType 是否已赋值
                     * @return LinkDependencyType 是否已赋值
                     * 
                     */
                    bool LinkDependencyTypeHasBeenSet() const;

                    /**
                     * 获取Dependency offset between parent and child tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Offset Dependency offset between parent and child tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Dependency offset between parent and child tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _offset Dependency offset between parent and child tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Type of edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LinkType Type of edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLinkType() const;

                    /**
                     * 设置Type of edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _linkType Type of edge
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLinkType(const std::string& _linkType);

                    /**
                     * 判断参数 LinkType 是否已赋值
                     * @return LinkType 是否已赋值
                     * 
                     */
                    bool LinkTypeHasBeenSet() const;

                    /**
                     * 获取Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return WorkflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _workflowId Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                private:

                    /**
                     * Edge ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Edge key
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_linkKey;
                    bool m_linkKeyHasBeenSet;

                    /**
                     * Source node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * Target node of the edge
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * Person in ChargeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * Dependency Relationship Between Parent and Child TasksNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_linkDependencyType;
                    bool m_linkDependencyTypeHasBeenSet;

                    /**
                     * Dependency offset between parent and child tasks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Type of edge
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_linkType;
                    bool m_linkTypeHasBeenSet;

                    /**
                     * Workflow IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LINKOPSDTO_H_
