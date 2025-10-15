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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKVERSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKVERSION_H_

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
                * Describes the version list information of the task.
                */
                class TaskVersion : public AbstractModel
                {
                public:
                    TaskVersion();
                    ~TaskVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Creator ID
                     * @return CreateUserUin Creator ID
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID
                     * @param _createUserUin Creator ID
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
                     * 获取Saved version ID
                     * @return VersionId Saved version ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Saved version ID
                     * @param _versionId Saved version ID
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
                     * 获取Production status (only for submit version).

                     * @return Status Production status (only for submit version).

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Production status (only for submit version).

                     * @param _status Production status (only for submit version).

                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Approver (only for submit version).

                     * @return ApproveUserUin Approver (only for submit version).

                     * 
                     */
                    std::string GetApproveUserUin() const;

                    /**
                     * 设置Approver (only for submit version).

                     * @param _approveUserUin Approver (only for submit version).

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
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Version number

                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * Creator ID
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Saved version ID
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
                     * Production status (only for submit version).

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Approver (only for submit version).

                     */
                    std::string m_approveUserUin;
                    bool m_approveUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKVERSION_H_
