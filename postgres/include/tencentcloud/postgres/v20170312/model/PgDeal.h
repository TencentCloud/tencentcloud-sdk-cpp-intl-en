/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PGDEAL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PGDEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Order details
                */
                class PgDeal : public AbstractModel
                {
                public:
                    PgDeal();
                    ~PgDeal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order name
                     * @return DealName Order name
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order name
                     * @param _dealName Order name
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取User
                     * @return OwnerUin User
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置User
                     * @param _ownerUin User
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Number of instances involved in order
                     * @return Count Number of instances involved in order
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of instances involved in order
                     * @param _count Number of instances involved in order
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Billing mode. 0: pay-as-you-go
                     * @return PayMode Billing mode. 0: pay-as-you-go
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing mode. 0: pay-as-you-go
                     * @param _payMode Billing mode. 0: pay-as-you-go
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Async task flow ID
                     * @return FlowId Async task flow ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置Async task flow ID
                     * @param _flowId Async task flow ID
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Instance ID array
                     * @return DBInstanceIdSet Instance ID array
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置Instance ID array
                     * @param _dBInstanceIdSet Instance ID array
                     * 
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * Order name
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * User
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Number of instances involved in order
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Billing mode. 0: pay-as-you-go
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Async task flow ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Instance ID array
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PGDEAL_H_
