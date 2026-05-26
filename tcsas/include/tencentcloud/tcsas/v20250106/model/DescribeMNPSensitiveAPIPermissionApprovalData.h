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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALDATA_H_

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
                * Detail data for querying mini program sensitive API permission approval.
                */
                class DescribeMNPSensitiveAPIPermissionApprovalData : public AbstractModel
                {
                public:
                    DescribeMNPSensitiveAPIPermissionApprovalData();
                    ~DescribeMNPSensitiveAPIPermissionApprovalData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API ID.
                     * @return APIId API ID.
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID.
                     * @param _aPIId API ID.
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
                     * 获取API method.
                     * @return APIMethod API method.
                     * 
                     */
                    std::string GetAPIMethod() const;

                    /**
                     * 设置API method.
                     * @param _aPIMethod API method.
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
                     * 获取Reason for request.
                     * @return ApplyReason Reason for request.
                     * 
                     */
                    std::string GetApplyReason() const;

                    /**
                     * 设置Reason for request.
                     * @param _applyReason Reason for request.
                     * 
                     */
                    void SetApplyReason(const std::string& _applyReason);

                    /**
                     * 判断参数 ApplyReason 是否已赋值
                     * @return ApplyReason 是否已赋值
                     * 
                     */
                    bool ApplyReasonHasBeenSet() const;

                    /**
                     * 获取Reason for rejection.
                     * @return RejectReason Reason for rejection.
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 设置Reason for rejection.
                     * @param _rejectReason Reason for rejection.
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
                     * 获取Approval status. Valid values: 20: Rejected; 30: Approved.
                     * @return ApprovalStatus Approval status. Valid values: 20: Rejected; 30: Approved.
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置Approval status. Valid values: 20: Rejected; 30: Approved.
                     * @param _approvalStatus Approval status. Valid values: 20: Rejected; 30: Approved.
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
                     * 获取API feature description.
                     * @return APIDesc API feature description.
                     * 
                     */
                    std::string GetAPIDesc() const;

                    /**
                     * 设置API feature description.
                     * @param _aPIDesc API feature description.
                     * 
                     */
                    void SetAPIDesc(const std::string& _aPIDesc);

                    /**
                     * 判断参数 APIDesc 是否已赋值
                     * @return APIDesc 是否已赋值
                     * 
                     */
                    bool APIDescHasBeenSet() const;

                    /**
                     * 获取API type. Valid values: 1: System; 2: Custom.
                     * @return APIType API type. Valid values: 1: System; 2: Custom.
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置API type. Valid values: 1: System; 2: Custom.
                     * @param _aPIType API type. Valid values: 1: System; 2: Custom.
                     * 
                     */
                    void SetAPIType(const int64_t& _aPIType);

                    /**
                     * 判断参数 APIType 是否已赋值
                     * @return APIType 是否已赋值
                     * 
                     */
                    bool APITypeHasBeenSet() const;

                private:

                    /**
                     * API ID.
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API method.
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * Reason for request.
                     */
                    std::string m_applyReason;
                    bool m_applyReasonHasBeenSet;

                    /**
                     * Reason for rejection.
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                    /**
                     * Approval status. Valid values: 20: Rejected; 30: Approved.
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * API feature description.
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                    /**
                     * API type. Valid values: 1: System; 2: Custom.
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNPSENSITIVEAPIPERMISSIONAPPROVALDATA_H_
