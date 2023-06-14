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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERESETINSTANCESTYPEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERESETINSTANCESTYPEREQUEST_H_

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
                * InquiryPriceResetInstancesType request structure.
                */
                class InquiryPriceResetInstancesTypeRequest : public AbstractModel
                {
                public:
                    InquiryPriceResetInstancesTypeRequest();
                    ~InquiryPriceResetInstancesTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID(s). You can obtain the instance IDs from the value of `InstanceId` returned by the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API. The maximum number of instances in each request is 1.
                     * @return InstanceIds Instance ID(s). You can obtain the instance IDs from the value of `InstanceId` returned by the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API. The maximum number of instances in each request is 1.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID(s). You can obtain the instance IDs from the value of `InstanceId` returned by the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API. The maximum number of instances in each request is 1.
                     * @param _instanceIds Instance ID(s). You can obtain the instance IDs from the value of `InstanceId` returned by the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API. The maximum number of instances in each request is 1.
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
                     * 获取Instance model. Resources vary with the instance model. Specific values can be found in the tables of [Instance Types] (https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) or in the latest specifications via the [DescribeInstanceTypeConfigs] (https://intl.cloud.tencent.com/document/product/213/15749?from_cn_redirect=1) API.
                     * @return InstanceType Instance model. Resources vary with the instance model. Specific values can be found in the tables of [Instance Types] (https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) or in the latest specifications via the [DescribeInstanceTypeConfigs] (https://intl.cloud.tencent.com/document/product/213/15749?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model. Resources vary with the instance model. Specific values can be found in the tables of [Instance Types] (https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) or in the latest specifications via the [DescribeInstanceTypeConfigs] (https://intl.cloud.tencent.com/document/product/213/15749?from_cn_redirect=1) API.
                     * @param _instanceType Instance model. Resources vary with the instance model. Specific values can be found in the tables of [Instance Types] (https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) or in the latest specifications via the [DescribeInstanceTypeConfigs] (https://intl.cloud.tencent.com/document/product/213/15749?from_cn_redirect=1) API.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * Instance ID(s). You can obtain the instance IDs from the value of `InstanceId` returned by the [`DescribeInstances`](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) API. The maximum number of instances in each request is 1.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Instance model. Resources vary with the instance model. Specific values can be found in the tables of [Instance Types] (https://intl.cloud.tencent.com/document/product/213/11518?from_cn_redirect=1) or in the latest specifications via the [DescribeInstanceTypeConfigs] (https://intl.cloud.tencent.com/document/product/213/15749?from_cn_redirect=1) API.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERESETINSTANCESTYPEREQUEST_H_
