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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEOFFLINETASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEOFFLINETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteOfflineTask request structure.
                */
                class DeleteOfflineTaskRequest : public AbstractModel
                {
                public:
                    DeleteOfflineTaskRequest();
                    ~DeleteOfflineTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Operator's name
                     * @return OperatorName Operator's name
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置Operator's name
                     * @param _operatorName Operator's name
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取Project/workspace ID
                     * @return ProjectId Project/workspace ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project/workspace ID
                     * @param _projectId Project/workspace ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Virtual task marker (defaults to false, consistent with previous scheduling interfaces)
                     * @return VirtualFlag Virtual task marker (defaults to false, consistent with previous scheduling interfaces)
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置Virtual task marker (defaults to false, consistent with previous scheduling interfaces)
                     * @param _virtualFlag Virtual task marker (defaults to false, consistent with previous scheduling interfaces)
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                private:

                    /**
                     * Operator's name
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * Project/workspace ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Virtual task marker (defaults to false, consistent with previous scheduling interfaces)
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEOFFLINETASKREQUEST_H_
