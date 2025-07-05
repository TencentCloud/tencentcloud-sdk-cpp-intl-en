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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_

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
                * PurchaseReservedInstancesOffering request structure.
                */
                class PurchaseReservedInstancesOfferingRequest : public AbstractModel
                {
                public:
                    PurchaseReservedInstancesOfferingRequest();
                    ~PurchaseReservedInstancesOfferingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of the Reserved Instance you are purchasing.
                     * @return InstanceCount The number of the Reserved Instance you are purchasing.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置The number of the Reserved Instance you are purchasing.
                     * @param _instanceCount The number of the Reserved Instance you are purchasing.
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取The ID of the Reserved Instance.
                     * @return ReservedInstancesOfferingId The ID of the Reserved Instance.
                     * 
                     */
                    std::string GetReservedInstancesOfferingId() const;

                    /**
                     * 设置The ID of the Reserved Instance.
                     * @param _reservedInstancesOfferingId The ID of the Reserved Instance.
                     * 
                     */
                    void SetReservedInstancesOfferingId(const std::string& _reservedInstancesOfferingId);

                    /**
                     * 判断参数 ReservedInstancesOfferingId 是否已赋值
                     * @return ReservedInstancesOfferingId 是否已赋值
                     * 
                     */
                    bool ReservedInstancesOfferingIdHasBeenSet() const;

                    /**
                     * 获取Dry run
                     * @return DryRun Dry run
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Dry run
                     * @param _dryRun Dry run
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Reserved instance name.<br><li>The RI name defaults to “unnamed” if this parameter is left empty.</li><li>You can enter any name within 60 characters (including the pattern string).</li>
                     * @return ReservedInstanceName Reserved instance name.<br><li>The RI name defaults to “unnamed” if this parameter is left empty.</li><li>You can enter any name within 60 characters (including the pattern string).</li>
                     * 
                     */
                    std::string GetReservedInstanceName() const;

                    /**
                     * 设置Reserved instance name.<br><li>The RI name defaults to “unnamed” if this parameter is left empty.</li><li>You can enter any name within 60 characters (including the pattern string).</li>
                     * @param _reservedInstanceName Reserved instance name.<br><li>The RI name defaults to “unnamed” if this parameter is left empty.</li><li>You can enter any name within 60 characters (including the pattern string).</li>
                     * 
                     */
                    void SetReservedInstanceName(const std::string& _reservedInstanceName);

                    /**
                     * 判断参数 ReservedInstanceName 是否已赋值
                     * @return ReservedInstanceName 是否已赋值
                     * 
                     */
                    bool ReservedInstanceNameHasBeenSet() const;

                private:

                    /**
                     * The number of the Reserved Instance you are purchasing.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * The ID of the Reserved Instance.
                     */
                    std::string m_reservedInstancesOfferingId;
                    bool m_reservedInstancesOfferingIdHasBeenSet;

                    /**
                     * Dry run
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed.<br>For more information, see Ensuring Idempotency.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Reserved instance name.<br><li>The RI name defaults to “unnamed” if this parameter is left empty.</li><li>You can enter any name within 60 characters (including the pattern string).</li>
                     */
                    std::string m_reservedInstanceName;
                    bool m_reservedInstanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_PURCHASERESERVEDINSTANCESOFFERINGREQUEST_H_
