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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DEALINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DEALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Order information
                */
                class DealInfo : public AbstractModel
                {
                public:
                    DealInfo();
                    ~DealInfo() = default;
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
                     * 获取Number of items
                     * @return Count Number of items
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of items
                     * @param _count Number of items
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取ID of associated flow, which can be used to query the flow execution status
                     * @return FlowId ID of associated flow, which can be used to query the flow execution status
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置ID of associated flow, which can be used to query the flow execution status
                     * @param _flowId ID of associated flow, which can be used to query the flow execution status
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
                     * 获取This field is required only for an order that creates an instance, indicating the ID of the instance created by the order
                     * @return InstanceIdSet This field is required only for an order that creates an instance, indicating the ID of the instance created by the order
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置This field is required only for an order that creates an instance, indicating the ID of the instance created by the order
                     * @param _instanceIdSet This field is required only for an order that creates an instance, indicating the ID of the instance created by the order
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return OwnerUin Account
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Account
                     * @param _ownerUin Account
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
                     * 获取Instance billing type
                     * @return InstanceChargeType Instance billing type
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing type
                     * @param _instanceChargeType Instance billing type
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * Order name
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Number of items
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * ID of associated flow, which can be used to query the flow execution status
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * This field is required only for an order that creates an instance, indicating the ID of the instance created by the order
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Instance billing type
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DEALINFO_H_
