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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateReadOnlyDBInstance response structure.
                */
                class CreateReadOnlyDBInstanceResponse : public AbstractModel
                {
                public:
                    CreateReadOnlyDBInstanceResponse();
                    ~CreateReadOnlyDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Order number list. Each instance corresponds to an order number.</p>
                     * @return DealNames <p>Order number list. Each instance corresponds to an order number.</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>Frozen bill ID.</p>
                     * @return BillId <p>Frozen bill ID.</p>
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取<p>ID set of successfully created instances. The return value is available only in postpaid scenarios.</p>
                     * @return DBInstanceIdSet <p>ID set of successfully created instances. The return value is available only in postpaid scenarios.</p>
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                    /**
                     * 获取<p>The output parameter has a value only when the input parameter BillingParameters has a value. The value is the parameters for product order placement.</p>
                     * @return BillingParameters <p>The output parameter has a value only when the input parameter BillingParameters has a value. The value is the parameters for product order placement.</p>
                     * 
                     */
                    std::string GetBillingParameters() const;

                    /**
                     * 判断参数 BillingParameters 是否已赋值
                     * @return BillingParameters 是否已赋值
                     * 
                     */
                    bool BillingParametersHasBeenSet() const;

                private:

                    /**
                     * <p>Order number list. Each instance corresponds to an order number.</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>Frozen bill ID.</p>
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * <p>ID set of successfully created instances. The return value is available only in postpaid scenarios.</p>
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                    /**
                     * <p>The output parameter has a value only when the input parameter BillingParameters has a value. The value is the parameters for product order placement.</p>
                     */
                    std::string m_billingParameters;
                    bool m_billingParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEREADONLYDBINSTANCERESPONSE_H_
