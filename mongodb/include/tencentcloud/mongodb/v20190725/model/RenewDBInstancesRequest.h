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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RENEWDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RENEWDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * RenewDBInstances request structure.
                */
                class RenewDBInstancesRequest : public AbstractModel
                {
                public:
                    RenewDBInstancesRequest();
                    ~RenewDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the ID or IDs of one or multiple instances to be renewed.
 - You can obtain the IDs from **InstanceIds** in the return values of the [DescribeDBInstances](https://intl.cloud.tencent.com/document/product/240/38568?from_cn_redirect=1) API.
 - The maximum number of instances for each renewal request is 100.
                     * @return InstanceIds Specifies the ID or IDs of one or multiple instances to be renewed.
 - You can obtain the IDs from **InstanceIds** in the return values of the [DescribeDBInstances](https://intl.cloud.tencent.com/document/product/240/38568?from_cn_redirect=1) API.
 - The maximum number of instances for each renewal request is 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Specifies the ID or IDs of one or multiple instances to be renewed.
 - You can obtain the IDs from **InstanceIds** in the return values of the [DescribeDBInstances](https://intl.cloud.tencent.com/document/product/240/38568?from_cn_redirect=1) API.
 - The maximum number of instances for each renewal request is 100.
                     * @param _instanceIds Specifies the ID or IDs of one or multiple instances to be renewed.
 - You can obtain the IDs from **InstanceIds** in the return values of the [DescribeDBInstances](https://intl.cloud.tencent.com/document/product/240/38568?from_cn_redirect=1) API.
 - The maximum number of instances for each renewal request is 100.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取The parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set automatic renewal, and other attributes of the monthly subscription instance. This parameter is mandatory in monthly subscription.
                     * @return InstanceChargePrepaid The parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set automatic renewal, and other attributes of the monthly subscription instance. This parameter is mandatory in monthly subscription.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置The parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set automatic renewal, and other attributes of the monthly subscription instance. This parameter is mandatory in monthly subscription.
                     * @param _instanceChargePrepaid The parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set automatic renewal, and other attributes of the monthly subscription instance. This parameter is mandatory in monthly subscription.
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * Specifies the ID or IDs of one or multiple instances to be renewed.
 - You can obtain the IDs from **InstanceIds** in the return values of the [DescribeDBInstances](https://intl.cloud.tencent.com/document/product/240/38568?from_cn_redirect=1) API.
 - The maximum number of instances for each renewal request is 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * The parameter setting for the prepaid mode (monthly subscription mode). This parameter can specify the renewal period, whether to set automatic renewal, and other attributes of the monthly subscription instance. This parameter is mandatory in monthly subscription.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RENEWDBINSTANCESREQUEST_H_
