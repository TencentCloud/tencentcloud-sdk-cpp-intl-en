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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_APPROVESUBAGENTAPPLYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_APPROVESUBAGENTAPPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * ApproveSubAgentApply request structure.
                */
                class ApproveSubAgentApplyRequest : public AbstractModel
                {
                public:
                    ApproveSubAgentApplyRequest();
                    ~ApproveSubAgentApplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Second-level reseller UIN.
                     * @return SubAgentUin Second-level reseller UIN.
                     * 
                     */
                    int64_t GetSubAgentUin() const;

                    /**
                     * 设置Second-level reseller UIN.
                     * @param _subAgentUin Second-level reseller UIN.
                     * 
                     */
                    void SetSubAgentUin(const int64_t& _subAgentUin);

                    /**
                     * 判断参数 SubAgentUin 是否已赋值
                     * @return SubAgentUin 是否已赋值
                     * 
                     */
                    bool SubAgentUinHasBeenSet() const;

                    /**
                     * 获取Approval type. Only pass and reject are supported.
                     * @return ApproveType Approval type. Only pass and reject are supported.
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置Approval type. Only pass and reject are supported.
                     * @param _approveType Approval type. Only pass and reject are supported.
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
                     * 获取Reason for rejection. Fill in only when ApproveType is reject.
                     * @return RejectReason Reason for rejection. Fill in only when ApproveType is reject.
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 设置Reason for rejection. Fill in only when ApproveType is reject.
                     * @param _rejectReason Reason for rejection. Fill in only when ApproveType is reject.
                     * 
                     */
                    void SetRejectReason(const std::string& _rejectReason);

                    /**
                     * 判断参数 RejectReason 是否已赋值
                     * @return RejectReason 是否已赋值
                     * 
                     */
                    bool RejectReasonHasBeenSet() const;

                private:

                    /**
                     * Second-level reseller UIN.
                     */
                    int64_t m_subAgentUin;
                    bool m_subAgentUinHasBeenSet;

                    /**
                     * Approval type. Only pass and reject are supported.
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * Reason for rejection. Fill in only when ApproveType is reject.
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_APPROVESUBAGENTAPPLYREQUEST_H_
