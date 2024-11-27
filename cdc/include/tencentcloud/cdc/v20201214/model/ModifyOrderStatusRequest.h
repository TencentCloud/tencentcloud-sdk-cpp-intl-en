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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYORDERSTATUSREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYORDERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * ModifyOrderStatus request structure.
                */
                class ModifyOrderStatusRequest : public AbstractModel
                {
                public:
                    ModifyOrderStatusRequest();
                    ~ModifyOrderStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Status to be updated
                     * @return Status Status to be updated
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status to be updated
                     * @param _status Status to be updated
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Large order ID
                     * @return DedicatedClusterOrderId Large order ID
                     * 
                     */
                    std::string GetDedicatedClusterOrderId() const;

                    /**
                     * 设置Large order ID
                     * @param _dedicatedClusterOrderId Large order ID
                     * 
                     */
                    void SetDedicatedClusterOrderId(const std::string& _dedicatedClusterOrderId);

                    /**
                     * 判断参数 DedicatedClusterOrderId 是否已赋值
                     * @return DedicatedClusterOrderId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdHasBeenSet() const;

                    /**
                     * 获取Small order ID
                     * @return SubOrderIds Small order ID
                     * 
                     */
                    std::vector<std::string> GetSubOrderIds() const;

                    /**
                     * 设置Small order ID
                     * @param _subOrderIds Small order ID
                     * 
                     */
                    void SetSubOrderIds(const std::vector<std::string>& _subOrderIds);

                    /**
                     * 判断参数 SubOrderIds 是否已赋值
                     * @return SubOrderIds 是否已赋值
                     * 
                     */
                    bool SubOrderIdsHasBeenSet() const;

                private:

                    /**
                     * Status to be updated
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Large order ID
                     */
                    std::string m_dedicatedClusterOrderId;
                    bool m_dedicatedClusterOrderIdHasBeenSet;

                    /**
                     * Small order ID
                     */
                    std::vector<std::string> m_subOrderIds;
                    bool m_subOrderIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_MODIFYORDERSTATUSREQUEST_H_
