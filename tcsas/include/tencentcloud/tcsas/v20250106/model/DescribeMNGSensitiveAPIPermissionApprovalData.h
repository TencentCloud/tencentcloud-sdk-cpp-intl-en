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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSENSITIVEAPIPERMISSIONAPPROVALDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSENSITIVEAPIPERMISSIONAPPROVALDATA_H_

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
                * Queries the details of a sensitive API permission request for a mini game
                */
                class DescribeMNGSensitiveAPIPermissionApprovalData : public AbstractModel
                {
                public:
                    DescribeMNGSensitiveAPIPermissionApprovalData();
                    ~DescribeMNGSensitiveAPIPermissionApprovalData() = default;
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
                     * 获取<p>Reason for request</p>
                     * @return ApplyReason <p>Reason for request</p>
                     * 
                     */
                    std::string GetApplyReason() const;

                    /**
                     * 设置<p>Reason for request</p>
                     * @param _applyReason <p>Reason for request</p>
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
                     * 获取<p>Approval status. 20: Rejected; 30: Approved</p>
                     * @return ApprovalStatus <p>Approval status. 20: Rejected; 30: Approved</p>
                     * 
                     */
                    int64_t GetApprovalStatus() const;

                    /**
                     * 设置<p>Approval status. 20: Rejected; 30: Approved</p>
                     * @param _approvalStatus <p>Approval status. 20: Rejected; 30: Approved</p>
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

                    /**
                     * 获取<p>API type. Valid values: 1: System; 2: Custom</p>
                     * @return APIType <p>API type. Valid values: 1: System; 2: Custom</p>
                     * 
                     */
                    int64_t GetAPIType() const;

                    /**
                     * 设置<p>API type. Valid values: 1: System; 2: Custom</p>
                     * @param _aPIType <p>API type. Valid values: 1: System; 2: Custom</p>
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
                     * <p>API ID</p>
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * <p>API method</p>
                     */
                    std::string m_aPIMethod;
                    bool m_aPIMethodHasBeenSet;

                    /**
                     * <p>Reason for request</p>
                     */
                    std::string m_applyReason;
                    bool m_applyReasonHasBeenSet;

                    /**
                     * <p>Reason for rejection</p>
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                    /**
                     * <p>Approval status. 20: Rejected; 30: Approved</p>
                     */
                    int64_t m_approvalStatus;
                    bool m_approvalStatusHasBeenSet;

                    /**
                     * <p>API feature description</p>
                     */
                    std::string m_aPIDesc;
                    bool m_aPIDescHasBeenSet;

                    /**
                     * <p>API type. Valid values: 1: System; 2: Custom</p>
                     */
                    int64_t m_aPIType;
                    bool m_aPITypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEMNGSENSITIVEAPIPERMISSIONAPPROVALDATA_H_
