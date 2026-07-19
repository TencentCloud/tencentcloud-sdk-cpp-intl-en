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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVALPAYMENTV2MERCHANTBINDRES_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVALPAYMENTV2MERCHANTBINDRES_H_

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
                * Response parameters structure for the superapp approving the merchant binding of a mini program team.
                */
                class ApprovalPaymentV2MerchantBindRes : public AbstractModel
                {
                public:
                    ApprovalPaymentV2MerchantBindRes();
                    ~ApprovalPaymentV2MerchantBindRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API response result. A value of true indicates that the operation succeeded.</p>
                     * @return Result <p>API response result. A value of true indicates that the operation succeeded.</p>
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置<p>API response result. A value of true indicates that the operation succeeded.</p>
                     * @param _result <p>API response result. A value of true indicates that the operation succeeded.</p>
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
                     * 获取<p>The unique merchant binding ID of the mini program team, used for the superapp to unbind the merchant.</p>
                     * @return ID <p>The unique merchant binding ID of the mini program team, used for the superapp to unbind the merchant.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>The unique merchant binding ID of the mini program team, used for the superapp to unbind the merchant.</p>
                     * @param _iD <p>The unique merchant binding ID of the mini program team, used for the superapp to unbind the merchant.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>API response result. A value of true indicates that the operation succeeded.</p>
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>The unique merchant binding ID of the mini program team, used for the superapp to unbind the merchant.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_APPROVALPAYMENTV2MERCHANTBINDRES_H_
