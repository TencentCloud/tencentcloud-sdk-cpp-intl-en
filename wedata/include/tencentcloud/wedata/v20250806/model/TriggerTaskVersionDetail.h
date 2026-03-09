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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSIONDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTask.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Version list information.
                */
                class TriggerTaskVersionDetail : public AbstractModel
                {
                public:
                    TriggerTaskVersionDetail();
                    ~TriggerTaskVersionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionNum Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionNum() const;

                    /**
                     * 设置Version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionNum Version
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creator of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUserUin Creator of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUserUin Creator of the version.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Save version Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionId Save version Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Save version Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionId Save version Id.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionRemark Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionRemark Version description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approval status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApproveStatus Approval status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApproveStatus() const;

                    /**
                     * 设置Approval status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approveStatus Approval status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApproveTime Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approveTime Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approver Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApproveUserUin Approver Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApproveUserUin() const;

                    /**
                     * 设置Approver Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approveUserUin Approver Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApproveUserUin(const std::string& _approveUserUin);

                    /**
                     * 判断参数 ApproveUserUin 是否已赋值
                     * @return ApproveUserUin 是否已赋值
                     * 
                     */
                    bool ApproveUserUinHasBeenSet() const;

                    /**
                     * 获取Task detail of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Task Task detail of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    TriggerTask GetTask() const;

                    /**
                     * 设置Task detail of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _task Task detail of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTask(const TriggerTask& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                private:

                    /**
                     * Creation time.


Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionNum;
                    bool m_versionNumHasBeenSet;

                    /**
                     * Creator of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Save version Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Version description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * Approval status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approveStatus;
                    bool m_approveStatusHasBeenSet;

                    /**
                     * Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * Approver Id.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approveUserUin;
                    bool m_approveUserUinHasBeenSet;

                    /**
                     * Task detail of the version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TriggerTask m_task;
                    bool m_taskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSIONDETAIL_H_
