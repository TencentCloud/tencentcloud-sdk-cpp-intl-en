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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_APPROVECLIENTAPPLYREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_APPROVECLIENTAPPLYREQUEST_H_

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
                * ApproveClientApply request structure.
                */
                class ApproveClientApplyRequest : public AbstractModel
                {
                public:
                    ApproveClientApplyRequest();
                    ~ApproveClientApplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sub-customer uin.
                     * @return ClientUin Sub-customer uin.
                     * 
                     */
                    int64_t GetClientUin() const;

                    /**
                     * 设置Sub-customer uin.
                     * @param _clientUin Sub-customer uin.
                     * 
                     */
                    void SetClientUin(const int64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取Approval type. only supports pass and reject.
                     * @return ApproveType Approval type. only supports pass and reject.
                     * 
                     */
                    std::string GetApproveType() const;

                    /**
                     * 设置Approval type. only supports pass and reject.
                     * @param _approveType Approval type. only supports pass and reject.
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
                     * 获取Reason for rejection. required only when approvetype is reject.
                     * @return RejectReason Reason for rejection. required only when approvetype is reject.
                     * 
                     */
                    std::string GetRejectReason() const;

                    /**
                     * 设置Reason for rejection. required only when approvetype is reject.
                     * @param _rejectReason Reason for rejection. required only when approvetype is reject.
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
                     * Sub-customer uin.
                     */
                    int64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * Approval type. only supports pass and reject.
                     */
                    std::string m_approveType;
                    bool m_approveTypeHasBeenSet;

                    /**
                     * Reason for rejection. required only when approvetype is reject.
                     */
                    std::string m_rejectReason;
                    bool m_rejectReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_APPROVECLIENTAPPLYREQUEST_H_
