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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALLISTDATA_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * List of permission requests to allow a mini program calling sensitive APIs 
                */
                class DescribeMNPSensitiveAPIPermissionApprovalListData : public AbstractModel
                {
                public:
                    DescribeMNPSensitiveAPIPermissionApprovalListData();
                    ~DescribeMNPSensitiveAPIPermissionApprovalListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Approval ID
                     * @return ApprovalNo Approval ID
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置Approval ID
                     * @param _approvalNo Approval ID
                     * 
                     */
                    void SetApprovalNo(const std::string& _approvalNo);

                    /**
                     * 判断参数 ApprovalNo 是否已赋值
                     * @return ApprovalNo 是否已赋值
                     * 
                     */
                    bool ApprovalNoHasBeenSet() const;

                    /**
                     * 获取Sensitive API ID
                     * @return APIId Sensitive API ID
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置Sensitive API ID
                     * @param _aPIId Sensitive API ID
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取API name
                     * @return APIName API name
                     * 
                     */
                    std::string GetAPIName() const;

                    /**
                     * 设置API name
                     * @param _aPIName API name
                     * 
                     */
                    void SetAPIName(const std::string& _aPIName);

                    /**
                     * 判断参数 APIName 是否已赋值
                     * @return APIName 是否已赋值
                     * 
                     */
                    bool APINameHasBeenSet() const;

                    /**
                     * 获取API request method
                     * @return APIMethod API request method
                     * 
                     */
                    std::string GetAPIMethod() const;

                    /**
                     * 设置API request method
                     * @param _aPIMethod API request method
                     * 
                     */
                    void SetAPIMethod(const std::string& _aPIMethod);

                    /**
                     * 判断参数 APIMethod 是否已赋值
                     * @return APIMethod 是否已赋值
                     * 
                     */
                    bool APIMethodHasBeenSet() const;

                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program name
                     * @return MNPName Mini program name
                     * 
                     */
                    std::string GetMNPName() const;

                    /**
                     * 设置Mini program name
                     * @param _mNPName Mini program name
                     * 
                     */
                    void SetMNPName(const std::string& _mNPName);

                    /**
                     * 判断参数 MNPName 是否已赋值
                     * @return MNPName 是否已赋值
                     * 
                     */
                    bool MNPNameHasBeenSet() const;

                    /**
                     * 获取Applicant
                     * @return ApplyUser Applicant
                     * 
                     */
                    std::string GetApplyUser() const;

                    /**
                     * 设置Applicant
                     * @param _applyUser Applicant
                     * 
                     */
                    void SetApplyUser(const std::string& _applyUser);

                    /**
                     * 判断参数 ApplyUser 是否已赋值
                     * @return ApplyUser 是否已赋值
                     * 
                     */
                    bool ApplyUserHasBeenSet() const;

                    /**
                     * 获取Application time
                     * @return ApplyTime Application time
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置Application time
                     * @param _applyTime Application time
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取Application notes
                     * @return ApplyNote Application notes
                     * 
                     */
                    std::string GetApplyNote() const;

                    /**
                     * 设置Application notes
                     * @param _applyNote Application notes
                     * 
                     */
                    void SetApplyNote(const std::string& _applyNote);

                    /**
                     * 判断参数 ApplyNote 是否已赋值
                     * @return ApplyNote 是否已赋值
                     * 
                     */
                    bool ApplyNoteHasBeenSet() const;

                    /**
                     * 获取Approval status. 1: Processing; 20: Rejected; 30: Approved
                     * @return ApprovalStatus Approval status. 1: Processing; 20: Rejected; 30: Approved
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置Approval status. 1: Processing; 20: Rejected; 30: Approved
                     * @param _approvalStatus Approval status. 1: Processing; 20: Rejected; 30: Approved
                     * 
                     */
                    void SetApprovalStatus(const int64_t& _approvalStatus);

                    /**
                     * 判断参数 ApprovalStatus 是否已赋值
                     * @return ApprovalStatus 是否已赋值
                     * 
                     */
                    bool ApprovalStatusHasBeenSet() const;

                    /**
                     * 获取Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalUser() const;

                    /**
                     * 设置Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApprovalUser(const std::string& _approvalUser);

                    /**
                     * 判断参数 ApprovalUser 是否已赋值
                     * @return ApprovalUser 是否已赋值
                     * 
                     */
                    bool ApprovalUserHasBeenSet() const;

                    /**
                     * 获取Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalTime() const;

                    /**
                     * 设置Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApprovalTime(const std::string& _approvalTime);

                    /**
                     * 判断参数 ApprovalTime 是否已赋值
                     * @return ApprovalTime 是否已赋值
                     * 
                     */
                    bool ApprovalTimeHasBeenSet() const;

                    /**
                     * 获取Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApprovalNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApprovalNote() const;

                    /**
                     * 设置Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _approvalNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApprovalNote(const std::string& _approvalNote);

                    /**
                     * 判断参数 ApprovalNote 是否已赋值
                     * @return ApprovalNote 是否已赋值
                     * 
                     */
                    bool ApprovalNoteHasBeenSet() const;

                    /**
                     * 获取Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationLogo Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationLogo() const;

                    /**
                     * 设置Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationLogo Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationLogo(const std::string& _applicationLogo);

                    /**
                     * 判断参数 ApplicationLogo 是否已赋值
                     * @return ApplicationLogo 是否已赋值
                     * 
                     */
                    bool ApplicationLogoHasBeenSet() const;

                    /**
                     * 获取API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIType API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIType API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIType(const int64_t& _aPIType);

                    /**
                     * 判断参数 APIType 是否已赋值
                     * @return APIType 是否已赋值
                     * 
                     */
                    bool APITypeHasBeenSet() const;

                    /**
                     * 获取API feature description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIDesc API feature description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置API feature description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIDesc API feature description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIDesc(const std::string& _aPIDesc);

                    /**
                     * 判断参数 APIDesc 是否已赋值
                     * @return APIDesc 是否已赋值
                     * 
                     */
                    bool APIDescHasBeenSet() const;

                private:

                    /**
                     * Approval ID
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Sensitive API ID
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API name
                     */
                    std::string m_aPIName;
                    bool m_aPINameHasBeenSet;

                    /**
                     * API request method
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program name
                     */
                    std::string m_mNPName;
                    bool m_mNPNameHasBeenSet;

                    /**
                     * Applicant
                     */
                    std::string m_applyUser;
                    bool m_applyUserHasBeenSet;

                    /**
                     * Application time
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * Application notes
                     */
                    std::string m_applyNote;
                    bool m_applyNoteHasBeenSet;

                    /**
                     * Approval status. 1: Processing; 20: Rejected; 30: Approved
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalUser;
                    bool m_approvalUserHasBeenSet;

                    /**
                     * Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalTime;
                    bool m_approvalTimeHasBeenSet;

                    /**
                     * Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_approvalNote;
                    bool m_approvalNoteHasBeenSet;

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationLogo;
                    bool m_applicationLogoHasBeenSet;

                    /**
                     * API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                    /**
                     * API feature description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALLISTDATA_H_
