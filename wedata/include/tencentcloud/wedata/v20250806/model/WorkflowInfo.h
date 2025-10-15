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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWINFO_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Retrieves workflow list information item.
                */
                class WorkflowInfo : public AbstractModel
                {
                public:
                    WorkflowInfo();
                    ~WorkflowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow ID.
                     * @return WorkflowId Workflow ID.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
                     * @param _workflowId Workflow ID.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Workflow name.

                     * @return WorkflowName Workflow name.

                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.

                     * @param _workflowName Workflow name.

                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Workflow type: cycle or manual.

                     * @return WorkflowType Workflow type: cycle or manual.

                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Workflow type: cycle or manual.

                     * @param _workflowType Workflow type: cycle or manual.

                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取Owner ID


                     * @return OwnerUin Owner ID


                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID


                     * @param _ownerUin Owner ID


                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Creation time.

                     * @return CreateTime Creation time.

                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.

                     * @param _createTime Creation time.

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
                     * 获取Last Modification Time

                     * @return ModifyTime Last Modification Time

                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last Modification Time

                     * @param _modifyTime Last Modification Time

                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Last updated user ID.

                     * @return UpdateUserUin Last updated user ID.

                     * 
                     */
                    std::string GetUpdateUserUin() const;

                    /**
                     * 设置Last updated user ID.

                     * @param _updateUserUin Last updated user ID.

                     * 
                     */
                    void SetUpdateUserUin(const std::string& _updateUserUin);

                    /**
                     * 判断参数 UpdateUserUin 是否已赋值
                     * @return UpdateUserUin 是否已赋值
                     * 
                     */
                    bool UpdateUserUinHasBeenSet() const;

                    /**
                     * 获取Workflow description.

                     * @return WorkflowDesc Workflow description.

                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow description.

                     * @param _workflowDesc Workflow description.

                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取Creator ID.

                     * @return CreateUserUin Creator ID.

                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.

                     * @param _createUserUin Creator ID.

                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                private:

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Workflow name.

                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Workflow type: cycle or manual.

                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * Owner ID


                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creation time.

                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last Modification Time

                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Last updated user ID.

                     */
                    std::string m_updateUserUin;
                    bool m_updateUserUinHasBeenSet;

                    /**
                     * Workflow description.

                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Creator ID.

                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_WORKFLOWINFO_H_
