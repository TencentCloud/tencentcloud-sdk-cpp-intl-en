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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CHANGEPAYMENTV2BINDMERCHANTRES_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CHANGEPAYMENTV2BINDMERCHANTRES_H_

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
                * Response parameters structure for changing the bound payment merchant.
                */
                class ChangePaymentV2BindMerchantRes : public AbstractModel
                {
                public:
                    ChangePaymentV2BindMerchantRes();
                    ~ChangePaymentV2BindMerchantRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API response result. Valid values: true: Operation succeeded; false: Operation failed.</p>
                     * @return Result <p>API response result. Valid values: true: Operation succeeded; false: Operation failed.</p>
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置<p>API response result. Valid values: true: Operation succeeded; false: Operation failed.</p>
                     * @param _result <p>API response result. Valid values: true: Operation succeeded; false: Operation failed.</p>
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>Approval number. Used for the API where the superapp approves the merchant binding of a mini program team.</p>
                     * @return ApprovalNo <p>Approval number. Used for the API where the superapp approves the merchant binding of a mini program team.</p>
                     * 
                     */
                    std::string GetApprovalNo() const;

                    /**
                     * 设置<p>Approval number. Used for the API where the superapp approves the merchant binding of a mini program team.</p>
                     * @param _approvalNo <p>Approval number. Used for the API where the superapp approves the merchant binding of a mini program team.</p>
                     * 
                     */
                    void SetApprovalNo(const std::string& _approvalNo);

                    /**
                     * 判断参数 ApprovalNo 是否已赋值
                     * @return ApprovalNo 是否已赋值
                     * 
                     */
                    bool ApprovalNoHasBeenSet() const;

                private:

                    /**
                     * <p>API response result. Valid values: true: Operation succeeded; false: Operation failed.</p>
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>Approval number. Used for the API where the superapp approves the merchant binding of a mini program team.</p>
                     */
                    std::string m_approvalNo;
                    bool m_approvalNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CHANGEPAYMENTV2BINDMERCHANTRES_H_
