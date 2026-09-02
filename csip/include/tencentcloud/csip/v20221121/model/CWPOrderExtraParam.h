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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDEREXTRAPARAM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDEREXTRAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Additional parameters for orders.
                */
                class CWPOrderExtraParam : public AbstractModel
                {
                public:
                    CWPOrderExtraParam();
                    ~CWPOrderExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PrePay: monthly subscription.
PostPay indicates pay-as-you-go mode.
One-time delivery
                     * @return Mode PrePay: monthly subscription.
PostPay indicates pay-as-you-go mode.
One-time delivery
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置PrePay: monthly subscription.
PostPay indicates pay-as-you-go mode.
One-time delivery
                     * @param _mode PrePay: monthly subscription.
PostPay indicates pay-as-you-go mode.
One-time delivery
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取One-time service delivery status. This value is available for one-time resource orders only.
false: Not accepted
true accepted
                     * @return DisposableStatus One-time service delivery status. This value is available for one-time resource orders only.
false: Not accepted
true accepted
                     * 
                     */
                    bool GetDisposableStatus() const;

                    /**
                     * 设置One-time service delivery status. This value is available for one-time resource orders only.
false: Not accepted
true accepted
                     * @param _disposableStatus One-time service delivery status. This value is available for one-time resource orders only.
false: Not accepted
true accepted
                     * 
                     */
                    void SetDisposableStatus(const bool& _disposableStatus);

                    /**
                     * 判断参数 DisposableStatus 是否已赋值
                     * @return DisposableStatus 是否已赋值
                     * 
                     */
                    bool DisposableStatusHasBeenSet() const;

                private:

                    /**
                     * PrePay: monthly subscription.
PostPay indicates pay-as-you-go mode.
One-time delivery
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * One-time service delivery status. This value is available for one-time resource orders only.
false: Not accepted
true accepted
                     */
                    bool m_disposableStatus;
                    bool m_disposableStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CWPORDEREXTRAPARAM_H_
