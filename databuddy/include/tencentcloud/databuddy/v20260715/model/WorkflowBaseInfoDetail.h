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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBASEINFODETAIL_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBASEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Workflow basic info (for output parameters, including system-generated fields and owner display information)
                */
                class WorkflowBaseInfoDetail : public AbstractModel
                {
                public:
                    WorkflowBaseInfoDetail();
                    ~WorkflowBaseInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
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
                     * 获取Creator UIN
                     * @return CreateUserUin Creator UIN
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator UIN
                     * @param _createUserUin Creator UIN
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取UIN of the person who runs the workflow
                     * @return RunUserUin UIN of the person who runs the workflow
                     * 
                     */
                    std::string GetRunUserUin() const;

                    /**
                     * 设置UIN of the person who runs the workflow
                     * @param _runUserUin UIN of the person who runs the workflow
                     * 
                     */
                    void SetRunUserUin(const std::string& _runUserUin);

                    /**
                     * 判断参数 RunUserUin 是否已赋值
                     * @return RunUserUin 是否已赋值
                     * 
                     */
                    bool RunUserUinHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * 获取Workflow owner userName
                     * @return OwnerUserName Workflow owner userName
                     * 
                     */
                    std::string GetOwnerUserName() const;

                    /**
                     * 设置Workflow owner userName
                     * @param _ownerUserName Workflow owner userName
                     * 
                     */
                    void SetOwnerUserName(const std::string& _ownerUserName);

                    /**
                     * 判断参数 OwnerUserName 是否已赋值
                     * @return OwnerUserName 是否已赋值
                     * 
                     */
                    bool OwnerUserNameHasBeenSet() const;

                    /**
                     * 获取Workflow owner UIN
                     * @return OwnerUserUin Workflow owner UIN
                     * 
                     */
                    std::string GetOwnerUserUin() const;

                    /**
                     * 设置Workflow owner UIN
                     * @param _ownerUserUin Workflow owner UIN
                     * 
                     */
                    void SetOwnerUserUin(const std::string& _ownerUserUin);

                    /**
                     * 判断参数 OwnerUserUin 是否已赋值
                     * @return OwnerUserUin 是否已赋值
                     * 
                     */
                    bool OwnerUserUinHasBeenSet() const;

                    /**
                     * 获取Display name of the workflow owner
                     * @return OwnerDisplayName Display name of the workflow owner
                     * 
                     */
                    std::string GetOwnerDisplayName() const;

                    /**
                     * 设置Display name of the workflow owner
                     * @param _ownerDisplayName Display name of the workflow owner
                     * 
                     */
                    void SetOwnerDisplayName(const std::string& _ownerDisplayName);

                    /**
                     * 判断参数 OwnerDisplayName 是否已赋值
                     * @return OwnerDisplayName 是否已赋值
                     * 
                     */
                    bool OwnerDisplayNameHasBeenSet() const;

                    /**
                     * 获取Creation time. Unit: millisecond timestamp
                     * @return CreateTime Creation time. Unit: millisecond timestamp
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time. Unit: millisecond timestamp
                     * @param _createTime Creation time. Unit: millisecond timestamp
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
                     * 获取Last update time. Unit: timestamp in milliseconds
                     * @return UpdateTime Last update time. Unit: timestamp in milliseconds
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time. Unit: timestamp in milliseconds
                     * @param _updateTime Last update time. Unit: timestamp in milliseconds
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
                     * Workflow name.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * UIN of the person who runs the workflow
                     */
                    std::string m_runUserUin;
                    bool m_runUserUinHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Workflow owner userName
                     */
                    std::string m_ownerUserName;
                    bool m_ownerUserNameHasBeenSet;

                    /**
                     * Workflow owner UIN
                     */
                    std::string m_ownerUserUin;
                    bool m_ownerUserUinHasBeenSet;

                    /**
                     * Display name of the workflow owner
                     */
                    std::string m_ownerDisplayName;
                    bool m_ownerDisplayNameHasBeenSet;

                    /**
                     * Creation time. Unit: millisecond timestamp
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time. Unit: timestamp in milliseconds
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOWBASEINFODETAIL_H_
