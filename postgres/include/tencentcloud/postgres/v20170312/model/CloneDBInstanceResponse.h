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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCERESPONSE_H_

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
                * CloneDBInstance response structure.
                */
                class CloneDBInstanceResponse : public AbstractModel
                {
                public:
                    CloneDBInstanceResponse();
                    ~CloneDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Order ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DealName Order ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取Bill ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BillId Bill ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取ID of the cloned instance, which will be returned only when the instance is pay-as-you-go.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBInstanceId ID of the cloned instance, which will be returned only when the instance is pay-as-you-go.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Order ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Bill ID.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * ID of the cloned instance, which will be returned only when the instance is pay-as-you-go.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLONEDBINSTANCERESPONSE_H_
