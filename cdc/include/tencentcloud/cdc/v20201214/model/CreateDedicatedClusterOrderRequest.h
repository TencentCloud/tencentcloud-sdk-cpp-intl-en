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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERORDERREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/DedicatedClusterTypeInfo.h>
#include <tencentcloud/cdc/v20201214/model/CosInfo.h>
#include <tencentcloud/cdc/v20201214/model/CbsInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * CreateDedicatedClusterOrder request structure.
                */
                class CreateDedicatedClusterOrderRequest : public AbstractModel
                {
                public:
                    CreateDedicatedClusterOrderRequest();
                    ~CreateDedicatedClusterOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CDC id
                     * @return DedicatedClusterId CDC id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC id
                     * @param _dedicatedClusterId CDC id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取Array of order-related CDC types
                     * @return DedicatedClusterTypes Array of order-related CDC types
                     * 
                     */
                    std::vector<DedicatedClusterTypeInfo> GetDedicatedClusterTypes() const;

                    /**
                     * 设置Array of order-related CDC types
                     * @param _dedicatedClusterTypes Array of order-related CDC types
                     * 
                     */
                    void SetDedicatedClusterTypes(const std::vector<DedicatedClusterTypeInfo>& _dedicatedClusterTypes);

                    /**
                     * 判断参数 DedicatedClusterTypes 是否已赋值
                     * @return DedicatedClusterTypes 是否已赋值
                     * 
                     */
                    bool DedicatedClusterTypesHasBeenSet() const;

                    /**
                     * 获取Order-related COS storage information
                     * @return CosInfo Order-related COS storage information
                     * 
                     */
                    CosInfo GetCosInfo() const;

                    /**
                     * 设置Order-related COS storage information
                     * @param _cosInfo Order-related COS storage information
                     * 
                     */
                    void SetCosInfo(const CosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                    /**
                     * 获取Order-related CBS storage information
                     * @return CbsInfo Order-related CBS storage information
                     * 
                     */
                    CbsInfo GetCbsInfo() const;

                    /**
                     * 设置Order-related CBS storage information
                     * @param _cbsInfo Order-related CBS storage information
                     * 
                     */
                    void SetCbsInfo(const CbsInfo& _cbsInfo);

                    /**
                     * 判断参数 CbsInfo 是否已赋值
                     * @return CbsInfo 是否已赋值
                     * 
                     */
                    bool CbsInfoHasBeenSet() const;

                    /**
                     * 获取Purchase source, cloudApi by default
                     * @return PurchaseSource Purchase source, cloudApi by default
                     * 
                     */
                    std::string GetPurchaseSource() const;

                    /**
                     * 设置Purchase source, cloudApi by default
                     * @param _purchaseSource Purchase source, cloudApi by default
                     * 
                     */
                    void SetPurchaseSource(const std::string& _purchaseSource);

                    /**
                     * 判断参数 PurchaseSource 是否已赋值
                     * @return PurchaseSource 是否已赋值
                     * 
                     */
                    bool PurchaseSourceHasBeenSet() const;

                    /**
                     * 获取DedicatedClusterOrderId needs to be submitted when API is invoked to submit an order.
                     * @return DedicatedClusterOrderId DedicatedClusterOrderId needs to be submitted when API is invoked to submit an order.
                     * 
                     */
                    std::string GetDedicatedClusterOrderId() const;

                    /**
                     * 设置DedicatedClusterOrderId needs to be submitted when API is invoked to submit an order.
                     * @param _dedicatedClusterOrderId DedicatedClusterOrderId needs to be submitted when API is invoked to submit an order.
                     * 
                     */
                    void SetDedicatedClusterOrderId(const std::string& _dedicatedClusterOrderId);

                    /**
                     * 判断参数 DedicatedClusterOrderId 是否已赋值
                     * @return DedicatedClusterOrderId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterOrderIdHasBeenSet() const;

                private:

                    /**
                     * CDC id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * Array of order-related CDC types
                     */
                    std::vector<DedicatedClusterTypeInfo> m_dedicatedClusterTypes;
                    bool m_dedicatedClusterTypesHasBeenSet;

                    /**
                     * Order-related COS storage information
                     */
                    CosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                    /**
                     * Order-related CBS storage information
                     */
                    CbsInfo m_cbsInfo;
                    bool m_cbsInfoHasBeenSet;

                    /**
                     * Purchase source, cloudApi by default
                     */
                    std::string m_purchaseSource;
                    bool m_purchaseSourceHasBeenSet;

                    /**
                     * DedicatedClusterOrderId needs to be submitted when API is invoked to submit an order.
                     */
                    std::string m_dedicatedClusterOrderId;
                    bool m_dedicatedClusterOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_CREATEDEDICATEDCLUSTERORDERREQUEST_H_
