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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONLISTDATA_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONLISTDATA_H_

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
                * List of sensitive APIs that can be called by a mini program
                */
                class DescribeMNPSensitiveAPIPermissionListData : public AbstractModel
                {
                public:
                    DescribeMNPSensitiveAPIPermissionListData();
                    ~DescribeMNPSensitiveAPIPermissionListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIId API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIId API ID
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIName API name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIName() const;

                    /**
                     * 设置API name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIName API name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIMethod API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAPIMethod() const;

                    /**
                     * 设置API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIMethod API request method
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取API status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIStatus API status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAPIStatus() const;

                    /**
                     * 设置API status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIStatus API status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIStatus(const int64_t& _aPIStatus);

                    /**
                     * 判断参数 APIStatus 是否已赋值
                     * @return APIStatus 是否已赋值
                     * 
                     */
                    bool APIStatusHasBeenSet() const;

                    /**
                     * 获取API application status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return APIApplyStatus API application status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetAPIApplyStatus() const;

                    /**
                     * 设置API application status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aPIApplyStatus API application status
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAPIApplyStatus(const int64_t& _aPIApplyStatus);

                    /**
                     * 判断参数 APIApplyStatus 是否已赋值
                     * @return APIApplyStatus 是否已赋值
                     * 
                     */
                    bool APIApplyStatusHasBeenSet() const;

                    /**
                     * 获取Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RejectReason Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 设置Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rejectReason Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRejectReason(const std::string& _rejectReason);

                    /**
                     * 判断参数 RejectReason 是否已赋值
                     * @return RejectReason 是否已赋值
                     * 
                     */
                    bool RejectReasonHasBeenSet() const;

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
                     * 获取Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationIcon Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationIcon() const;

                    /**
                     * 设置Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _applicationIcon Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationIcon(const std::string& _applicationIcon);

                    /**
                     * 判断参数 ApplicationIcon 是否已赋值
                     * @return ApplicationIcon 是否已赋值
                     * 
                     */
                    bool ApplicationIconHasBeenSet() const;

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
                     * API ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIName;
                    bool m_aPINameHasBeenSet;

                    /**
                     * API request method
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * API status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_aPIStatus;
                    bool m_aPIStatusHasBeenSet;

                    /**
                     * API application status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_aPIApplyStatus;
                    bool m_aPIApplyStatusHasBeenSet;

                    /**
                     * Reason for rejection
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                    /**
                     * Approval ID
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * Application ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application icon
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationIcon;
                    bool m_applicationIconHasBeenSet;

                    /**
                     * Application name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

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

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONLISTDATA_H_
