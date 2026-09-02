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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMAPPROVESTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMAPPROVESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmApproveStatus request structure.
                */
                class ModifyDspmApproveStatusRequest : public AbstractModel
                {
                public:
                    ModifyDspmApproveStatusRequest();
                    ~ModifyDspmApproveStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return OrderId Application ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置Application ID
                     * @param _orderId Application ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Status. 1: approved. 2: Rejected.
                     * @return Status Status. 1: approved. 2: Rejected.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status. 1: approved. 2: Rejected.
                     * @param _status Status. 1: approved. 2: Rejected.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Approval information.
                     * @return Comment Approval information.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Approval information.
                     * @param _comment Approval information.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Status. 1: approved. 2: Rejected.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Approval information.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMAPPROVESTATUSREQUEST_H_
