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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DEAL_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Order information
                */
                class Deal : public AbstractModel
                {
                public:
                    Deal();
                    ~Deal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Order number
                     * @return DealName Order number
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order number
                     * @param DealName Order number
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return OwnerUin Account
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Account
                     * @param OwnerUin Account
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Number of items
                     * @return Count Number of items
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of items
                     * @param Count Number of items
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取ID of the associated process, which can be used to query the process execution status.
                     * @return FlowId ID of the associated process, which can be used to query the process execution status.
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置ID of the associated process, which can be used to query the process execution status.
                     * @param FlowId ID of the associated process, which can be used to query the process execution status.
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取The ID of the created instance, which is required only for the order that creates an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceIds The ID of the created instance, which is required only for the order that creates an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置The ID of the created instance, which is required only for the order that creates an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceIds The ID of the created instance, which is required only for the order that creates an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Payment mode. Valid values: 0 (postpaid), 1 (prepaid)
                     * @return PayMode Payment mode. Valid values: 0 (postpaid), 1 (prepaid)
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment mode. Valid values: 0 (postpaid), 1 (prepaid)
                     * @param PayMode Payment mode. Valid values: 0 (postpaid), 1 (prepaid)
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * Order number
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Number of items
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * ID of the associated process, which can be used to query the process execution status.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * The ID of the created instance, which is required only for the order that creates an instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Payment mode. Valid values: 0 (postpaid), 1 (prepaid)
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DEAL_H_
