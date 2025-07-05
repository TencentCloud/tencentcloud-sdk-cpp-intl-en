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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_SENSITIVEAPIAUDITINFORESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_SENSITIVEAPIAUDITINFORESP_H_

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
                * Sensitive API approval information
                */
                class SensitiveApiAuditInfoResp : public AbstractModel
                {
                public:
                    SensitiveApiAuditInfoResp();
                    ~SensitiveApiAuditInfoResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Approval ticket ID
                     * @return AuditNo Approval ticket ID
                     * 
                     */
                    std::string GetAuditNo() const;

                    /**
                     * 设置Approval ticket ID
                     * @param _auditNo Approval ticket ID
                     * 
                     */
                    void SetAuditNo(const std::string& _auditNo);

                    /**
                     * 判断参数 AuditNo 是否已赋值
                     * @return AuditNo 是否已赋值
                     * 
                     */
                    bool AuditNoHasBeenSet() const;

                    /**
                     * 获取Approval ticket ID
                     * @return ApiId Approval ticket ID
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Approval ticket ID
                     * @param _apiId Approval ticket ID
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API name
                     * @return ApiName API name
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name
                     * @param _apiName API name
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API request method
                     * @return ApiMethod API request method
                     * 
                     */
                    std::string GetApiMethod() const;

                    /**
                     * 设置API request method
                     * @param _apiMethod API request method
                     * 
                     */
                    void SetApiMethod(const std::string& _apiMethod);

                    /**
                     * 判断参数 ApiMethod 是否已赋值
                     * @return ApiMethod 是否已赋值
                     * 
                     */
                    bool ApiMethodHasBeenSet() const;

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
                     * 获取Approval status
                     * @return AuditStatus Approval status
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置Approval status
                     * @param _auditStatus Approval status
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditUser() const;

                    /**
                     * 设置Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditUser Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditUser(const std::string& _auditUser);

                    /**
                     * 判断参数 AuditUser 是否已赋值
                     * @return AuditUser 是否已赋值
                     * 
                     */
                    bool AuditUserHasBeenSet() const;

                    /**
                     * 获取Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditTime() const;

                    /**
                     * 设置Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditTime Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditTime(const std::string& _auditTime);

                    /**
                     * 判断参数 AuditTime 是否已赋值
                     * @return AuditTime 是否已赋值
                     * 
                     */
                    bool AuditTimeHasBeenSet() const;

                    /**
                     * 获取Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuditNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAuditNote() const;

                    /**
                     * 设置Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _auditNote Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuditNote(const std::string& _auditNote);

                    /**
                     * 判断参数 AuditNote 是否已赋值
                     * @return AuditNote 是否已赋值
                     * 
                     */
                    bool AuditNoteHasBeenSet() const;

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
                     * 获取The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置The application name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName The application name.
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
                     * @return ApiType API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetApiType() const;

                    /**
                     * 设置API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiType API type. 1: System; 2: Custom
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiType(const int64_t& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApiDesc API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _apiDesc API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                private:

                    /**
                     * Approval ticket ID
                     */
                    std::string m_auditNo;
                    bool m_auditNoHasBeenSet;

                    /**
                     * Approval ticket ID
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API name
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API request method
                     */
                    std::string m_apiMethod;
                    bool m_apiMethodHasBeenSet;

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
                     * Approval status
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * Approver
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditUser;
                    bool m_auditUserHasBeenSet;

                    /**
                     * Approval time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditTime;
                    bool m_auditTimeHasBeenSet;

                    /**
                     * Approval notes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_auditNote;
                    bool m_auditNoteHasBeenSet;

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * The application name.
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
                    int64_t m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API function description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_SENSITIVEAPIAUDITINFORESP_H_
