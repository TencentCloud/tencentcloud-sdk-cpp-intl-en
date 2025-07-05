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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEPAYTYPEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEPAYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * UpdatePayType request structure.
                */
                class UpdatePayTypeRequest : public AbstractModel
                {
                public:
                    UpdatePayTypeRequest();
                    ~UpdatePayTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Billing region, which can be `mainland` or `overseas`.
                     * @return Area Billing region, which can be `mainland` or `overseas`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Billing region, which can be `mainland` or `overseas`.
                     * @param _area Billing region, which can be `mainland` or `overseas`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Billing mode, which can be `flux` or `bandwidth`.
                     * @return PayType Billing mode, which can be `flux` or `bandwidth`.
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置Billing mode, which can be `flux` or `bandwidth`.
                     * @param _payType Billing mode, which can be `flux` or `bandwidth`.
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                private:

                    /**
                     * Billing region, which can be `mainland` or `overseas`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Billing mode, which can be `flux` or `bandwidth`.
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEPAYTYPEREQUEST_H_
