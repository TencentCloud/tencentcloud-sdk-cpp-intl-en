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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * PurchaseReservedInstancesOffering response structure.
                */
                class PurchaseReservedInstancesOfferingResponse : public AbstractModel
                {
                public:
                    PurchaseReservedInstancesOfferingResponse();
                    ~PurchaseReservedInstancesOfferingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the Reserved Instance purchased.
                     * @return ReservedInstanceId The ID of the Reserved Instance purchased.
                     * 
                     */
                    std::string GetReservedInstanceId() const;

                    /**
                     * 判断参数 ReservedInstanceId 是否已赋值
                     * @return ReservedInstanceId 是否已赋值
                     * 
                     */
                    bool ReservedInstanceIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the Reserved Instance purchased.
                     */
                    std::string m_reservedInstanceId;
                    bool m_reservedInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGRESPONSE_H_
