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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERRESPONSE_H_

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
                * CreateDspmApplyOrder response structure.
                */
                class CreateDspmApplyOrderResponse : public AbstractModel
                {
                public:
                    CreateDspmApplyOrderResponse();
                    ~CreateDspmApplyOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return OrderId Application ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Automatic approval
                     * @return AutoApproval Automatic approval
                     * 
                     */
                    bool GetAutoApproval() const;

                    /**
                     * 判断参数 AutoApproval 是否已赋值
                     * @return AutoApproval 是否已赋值
                     * 
                     */
                    bool AutoApprovalHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Automatic approval
                     */
                    bool m_autoApproval;
                    bool m_autoApprovalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMAPPLYORDERRESPONSE_H_
