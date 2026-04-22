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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSENSITIVEAPIPERMISSIONLISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSENSITIVEAPIPERMISSIONLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Queries the list data of sensitive APIs that available to the mini game
                */
                class DescribeMNGSensitiveAPIPermissionListData : public AbstractModel
                {
                public:
                    DescribeMNGSensitiveAPIPermissionListData();
                    ~DescribeMNGSensitiveAPIPermissionListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API ID</p>
                     * @return APIId <p>API ID</p>
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置<p>API ID</p>
                     * @param _aPIId <p>API ID</p>
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
                     * 获取<p>API name</p>
                     * @return APIName <p>API name</p>
                     * 
                     */
                    std::string GetAPIName() const;

                    /**
                     * 设置<p>API name</p>
                     * @param _aPIName <p>API name</p>
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
                     * 获取<p>API method</p>
                     * @return APIMethod <p>API method</p>
                     * 
                     */
                    std::string GetAPIMethod() const;

                    /**
                     * 设置<p>API method</p>
                     * @param _aPIMethod <p>API method</p>
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
                     * 获取<p>API status</p>
                     * @return APIStatus <p>API status</p>
                     * 
                     */
                    int64_t GetAPIStatus() const;

                    /**
                     * 设置<p>API status</p>
                     * @param _aPIStatus <p>API status</p>
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
                     * 获取<p>API request status</p>
                     * @return APIApplyStatus <p>API request status</p>
                     * 
                     */
                    int64_t GetAPIApplyStatus() const;

                    /**
                     * 设置<p>API request status</p>
                     * @param _aPIApplyStatus <p>API request status</p>
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
                     * 获取<p>Reason for rejection</p>
                     * @return RejectReason <p>Reason for rejection</p>
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 设置<p>Reason for rejection</p>
                     * @param _rejectReason <p>Reason for rejection</p>
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
                     * 获取<p>Approval number</p>
                     * @return ApprovalNo <p>Approval number</p>
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置<p>Approval number</p>
                     * @param _approvalNo <p>Approval number</p>
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
                     * 获取<p>Superapp ID</p>
                     * @return ApplicationId <p>Superapp ID</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>Superapp ID</p>
                     * @param _applicationId <p>Superapp ID</p>
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
                     * 获取<p>Superapp icon</p>
                     * @return ApplicationIcon <p>Superapp icon</p>
                     * 
                     */
                    std::string GetApplicationIcon() const;

                    /**
                     * 设置<p>Superapp icon</p>
                     * @param _applicationIcon <p>Superapp icon</p>
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
                     * 获取<p>Superapp name</p>
                     * @return ApplicationName <p>Superapp name</p>
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置<p>Superapp name</p>
                     * @param _applicationName <p>Superapp name</p>
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
                     * 获取<p>API type. Valid values: 1: System; 2: Custom
                     * @return APIType <p>API type. Valid values: 1: System; 2: Custom
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置<p>API type. Valid values: 1: System; 2: Custom
                     * @param _aPIType <p>API type. Valid values: 1: System; 2: Custom
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
                     * 获取<p>API feature description</p>
                     * @return APIDesc <p>API feature description</p>
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置<p>API feature description</p>
                     * @param _aPIDesc <p>API feature description</p>
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
                     * <p>API ID</p>
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * <p>API name</p>
                     */
                    std::string m_aPIName;
                    bool m_aPINameHasBeenSet;

                    /**
                     * <p>API method</p>
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * <p>API status</p>
                     */
                    int64_t m_aPIStatus;
                    bool m_aPIStatusHasBeenSet;

                    /**
                     * <p>API request status</p>
                     */
                    int64_t m_aPIApplyStatus;
                    bool m_aPIApplyStatusHasBeenSet;

                    /**
                     * <p>Reason for rejection</p>
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                    /**
                     * <p>Approval number</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                    /**
                     * <p>Superapp ID</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Superapp icon</p>
                     */
                    std::string m_applicationIcon;
                    bool m_applicationIconHasBeenSet;

                    /**
                     * <p>Superapp name</p>
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * <p>API type. Valid values: 1: System; 2: Custom
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                    /**
                     * <p>API feature description</p>
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSENSITIVEAPIPERMISSIONLISTDATA_H_
