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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_REQUESTPAYMENTENABLERESPONSE_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_REQUESTPAYMENTENABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcsas/v20250106/model/ChangePaymentV2BindMerchantRes.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * RequestPaymentEnable response structure.
                */
                class RequestPaymentEnableResponse : public AbstractModel
                {
                public:
                    RequestPaymentEnableResponse();
                    ~RequestPaymentEnableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Response parameters structure for mini program payment activation. The returned approval number is required when calling the API to approve payment activation.</p>
                     * @return Data <p>Response parameters structure for mini program payment activation. The returned approval number is required when calling the API to approve payment activation.</p>
                     * 
                     */
                    ChangePaymentV2BindMerchantRes GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Response parameters structure for mini program payment activation. The returned approval number is required when calling the API to approve payment activation.</p>
                     */
                    ChangePaymentV2BindMerchantRes m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_REQUESTPAYMENTENABLERESPONSE_H_
