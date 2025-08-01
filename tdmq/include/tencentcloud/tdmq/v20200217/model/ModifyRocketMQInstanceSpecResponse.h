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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRocketMQInstanceSpec response structure.
                */
                class ModifyRocketMQInstanceSpecResponse : public AbstractModel
                {
                public:
                    ModifyRocketMQInstanceSpecResponse();
                    ~ModifyRocketMQInstanceSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order ID
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * @return OrderId Order ID
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * Order ID
Note: u200dThis field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQINSTANCESPECRESPONSE_H_
