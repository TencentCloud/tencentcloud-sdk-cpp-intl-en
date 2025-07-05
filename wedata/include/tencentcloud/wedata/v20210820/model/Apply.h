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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_

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
                * Approval List Information
                */
                class Apply : public AbstractModel
                {
                public:
                    Apply();
                    ~Apply() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Applicant ID
                     * @return ApplicantId Applicant ID
                     * 
                     */
                    std::string GetApplicantId() const;

                    /**
                     * 设置Applicant ID
                     * @param _applicantId Applicant ID
                     * 
                     */
                    void SetApplicantId(const std::string& _applicantId);

                    /**
                     * 判断参数 ApplicantId 是否已赋值
                     * @return ApplicantId 是否已赋值
                     * 
                     */
                    bool ApplicantIdHasBeenSet() const;

                    /**
                     * 获取Applicant Name
                     * @return ApplicantName Applicant Name
                     * 
                     */
                    std::string GetApplicantName() const;

                    /**
                     * 设置Applicant Name
                     * @param _applicantName Applicant Name
                     * 
                     */
                    void SetApplicantName(const std::string& _applicantName);

                    /**
                     * 判断参数 ApplicantName 是否已赋值
                     * @return ApplicantName 是否已赋值
                     * 
                     */
                    bool ApplicantNameHasBeenSet() const;

                    /**
                     * 获取Approval Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Remark Approval Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Approval Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _remark Approval Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Approval Category Key
                     * @return ApproveClassification Approval Category Key
                     * 
                     */
                    std::string GetApproveClassification() const;

                    /**
                     * 设置Approval Category Key
                     * @param _approveClassification Approval Category Key
                     * 
                     */
                    void SetApproveClassification(const std::string& _approveClassification);

                    /**
                     * 判断参数 ApproveClassification 是否已赋值
                     * @return ApproveClassification 是否已赋值
                     * 
                     */
                    bool ApproveClassificationHasBeenSet() const;

                    /**
                     * 获取Approval Form ID
                     * @return ApproveId Approval Form ID
                     * 
                     */
                    std::string GetApproveId() const;

                    /**
                     * 设置Approval Form ID
                     * @param _approveId Approval Form ID
                     * 
                     */
                    void SetApproveId(const std::string& _approveId);

                    /**
                     * 判断参数 ApproveId 是否已赋值
                     * @return ApproveId 是否已赋值
                     * 
                     */
                    bool ApproveIdHasBeenSet() const;

                    /**
                     * 获取Approval Type Key
                     * @return ApproveType Approval Type Key
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置Approval Type Key
                     * @param _approveType Approval Type Key
                     * 
                     */
                    void SetApproveType(const std::string& _approveType);

                    /**
                     * 判断参数 ApproveType 是否已赋值
                     * @return ApproveType 是否已赋值
                     * 
                     */
                    bool ApproveTypeHasBeenSet() const;

                    /**
                     * 获取Application Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Reason Application Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Application Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _reason Application Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取Creation Time
                     * @return CreateTime Creation Time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation Time
                     * @param _createTime Creation Time
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
                     * 获取Approval Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ApproveTime Approval Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetApproveTime() const;

                    /**
                     * 设置Approval Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _approveTime Approval Time
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Approval Category Name
                     * @return ApproveClassificationName Approval Category Name
                     * 
                     */
                    std::string GetApproveClassificationName() const;

                    /**
                     * 设置Approval Category Name
                     * @param _approveClassificationName Approval Category Name
                     * 
                     */
                    void SetApproveClassificationName(const std::string& _approveClassificationName);

                    /**
                     * 判断参数 ApproveClassificationName 是否已赋值
                     * @return ApproveClassificationName 是否已赋值
                     * 
                     */
                    bool ApproveClassificationNameHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
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
                     * 获取Approval Type Name
                     * @return ApproveTypeName Approval Type Name
                     * 
                     */
                    std::string GetApproveTypeName() const;

                    /**
                     * 设置Approval Type Name
                     * @param _approveTypeName Approval Type Name
                     * 
                     */
                    void SetApproveTypeName(const std::string& _approveTypeName);

                    /**
                     * 判断参数 ApproveTypeName 是否已赋值
                     * @return ApproveTypeName 是否已赋值
                     * 
                     */
                    bool ApproveTypeNameHasBeenSet() const;

                    /**
                     * 获取Approval Exception or Failure Information
                     * @return ErrorMessage Approval Exception or Failure Information
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置Approval Exception or Failure Information
                     * @param _errorMessage Approval Exception or Failure Information
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取Apply for Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ApplyName Apply for Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置Apply for Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _applyName Apply for Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     * 
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取Approver ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ApproverId Approver ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetApproverId() const;

                    /**
                     * 设置Approver ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _approverId Approver ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetApproverId(const std::string& _approverId);

                    /**
                     * 判断参数 ApproverId 是否已赋值
                     * @return ApproverId 是否已赋值
                     * 
                     */
                    bool ApproverIdHasBeenSet() const;

                    /**
                     * 获取Approver Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ApproverName Approver Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置Approver Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _approverName Approver Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取Project for Approval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ApproveProjectName Project for Approval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetApproveProjectName() const;

                    /**
                     * 设置Project for Approval
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _approveProjectName Project for Approval
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetApproveProjectName(const std::string& _approveProjectName);

                    /**
                     * 判断参数 ApproveProjectName 是否已赋值
                     * @return ApproveProjectName 是否已赋值
                     * 
                     */
                    bool ApproveProjectNameHasBeenSet() const;

                private:

                    /**
                     * Applicant ID
                     */
                    std::string m_applicantId;
                    bool m_applicantIdHasBeenSet;

                    /**
                     * Applicant Name
                     */
                    std::string m_applicantName;
                    bool m_applicantNameHasBeenSet;

                    /**
                     * Approval Remarks
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Approval Category Key
                     */
                    std::string m_approveClassification;
                    bool m_approveClassificationHasBeenSet;

                    /**
                     * Approval Form ID
                     */
                    std::string m_approveId;
                    bool m_approveIdHasBeenSet;

                    /**
                     * Approval Type Key
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * Application Reason
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * Creation Time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Approval Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * Approval Category Name
                     */
                    std::string m_approveClassificationName;
                    bool m_approveClassificationNameHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Approval Type Name
                     */
                    std::string m_approveTypeName;
                    bool m_approveTypeNameHasBeenSet;

                    /**
                     * Approval Exception or Failure Information
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * Apply for Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * Approver ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_approverId;
                    bool m_approverIdHasBeenSet;

                    /**
                     * Approver Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * Project for Approval
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_approveProjectName;
                    bool m_approveProjectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_APPLY_H_
