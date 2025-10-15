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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKVERSIONDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKVERSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/Task.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Describes the version list information of the task.
                */
                class TaskVersionDetail : public AbstractModel
                {
                public:
                    TaskVersionDetail();
                    ~TaskVersionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Version number


                     * @return VersionNum Version number


                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置Version number


                     * @param _versionNum Version number


                     * 
                     */
                    void SetVersionNum(const std::string& _versionNum);

                    /**
                     * 判断参数 VersionNum 是否已赋值
                     * @return VersionNum 是否已赋值
                     * 
                     */
                    bool VersionNumHasBeenSet() const;

                    /**
                     * 获取Specifies the version creator.

                     * @return CreateUserUin Specifies the version creator.

                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Specifies the version creator.

                     * @param _createUserUin Specifies the version creator.

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
                     * 获取Specifies the version Id to save.

                     * @return VersionId Specifies the version Id to save.

                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Specifies the version Id to save.

                     * @param _versionId Specifies the version Id to save.

                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Version description

                     * @return VersionRemark Version description

                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置Version description

                     * @param _versionRemark Version description

                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取Approval status (only for submit version).

                     * @return ApproveStatus Approval status (only for submit version).

                     * 
                     */
                    std::string GetApproveStatus() const;

                    /**
                     * 设置Approval status (only for submit version).

                     * @param _approveStatus Approval status (only for submit version).

                     * 
                     */
                    void SetApproveStatus(const std::string& _approveStatus);

                    /**
                     * 判断参数 ApproveStatus 是否已赋值
                     * @return ApproveStatus 是否已赋值
                     * 
                     */
                    bool ApproveStatusHasBeenSet() const;

                    /**
                     * 获取Production status  (only for submit version).
                     * @return ApproveTime Production status  (only for submit version).
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置Production status  (only for submit version).
                     * @param _approveTime Production status  (only for submit version).
                     * 
                     */
                    void SetApproveTime(const std::string& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                    /**
                     * 获取Describes the task detail of the version.

                     * @return Task Describes the task detail of the version.

                     * 
                     */
                    Task GetTask() const;

                    /**
                     * 设置Describes the task detail of the version.

                     * @param _task Describes the task detail of the version.

                     * 
                     */
                    void SetTask(const Task& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取Approver Id.
                     * @return ApproveUserUin Approver Id.
                     * 
                     */
                    std::string GetApproveUserUin() const;

                    /**
                     * 设置Approver Id.
                     * @param _approveUserUin Approver Id.
                     * 
                     */
                    void SetApproveUserUin(const std::string& _approveUserUin);

                    /**
                     * 判断参数 ApproveUserUin 是否已赋值
                     * @return ApproveUserUin 是否已赋值
                     * 
                     */
                    bool ApproveUserUinHasBeenSet() const;

                private:

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Version number


                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * Specifies the version creator.

                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Specifies the version Id to save.

                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Version description

                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * Approval status (only for submit version).

                     */
                    std::string m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * Production status  (only for submit version).
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * Describes the task detail of the version.

                     */
                    Task m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * Approver Id.
                     */
                    std::string m_approveUserUin;
                    bool m_approveUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKVERSIONDETAIL_H_
