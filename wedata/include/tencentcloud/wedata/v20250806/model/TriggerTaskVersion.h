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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSION_H_

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
                * Version list information.
                */
                class TriggerTaskVersion : public AbstractModel
                {
                public:
                    TriggerTaskVersion();
                    ~TriggerTaskVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Retention time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Retention time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Retention time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Retention time.
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
                     * 获取Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUserUin Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUserUin Creator
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
                     * 获取Save version id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionId Save version id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Save version id.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionId Save version id.
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
                     * @return Status Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Production status (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Approver (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApproveUserUin Approver (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApproveUserUin() const;

                    /**
                     * 设置Approver (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approveUserUin Approver (only submit version has).
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

                private:

                    /**
                     * Retention time.
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
                     * Creator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Save version id.
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
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Approver (only submit version has).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approveUserUin;
                    bool m_approveUserUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERTASKVERSION_H_
