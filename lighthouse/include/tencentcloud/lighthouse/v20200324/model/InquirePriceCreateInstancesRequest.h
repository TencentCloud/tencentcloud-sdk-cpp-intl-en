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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceCreateInstances request structure.
                */
                class InquirePriceCreateInstancesRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateInstancesRequest();
                    ~InquirePriceCreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance package ID.
                     * @return BundleId Instance package ID.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Instance package ID.
                     * @param _bundleId Instance package ID.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Parameter setting for prepaid mode. This parameter can specify the purchase period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     * @return InstanceChargePrepaid Parameter setting for prepaid mode. This parameter can specify the purchase period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Parameter setting for prepaid mode. This parameter can specify the purchase period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     * @param _instanceChargePrepaid Parameter setting for prepaid mode. This parameter can specify the purchase period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Number of instances to be created. Default value: 1.
                     * @return InstanceCount Number of instances to be created. Default value: 1.
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置Number of instances to be created. Default value: 1.
                     * @param _instanceCount Number of instances to be created. Default value: 1.
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
                     * 获取Application image ID, which is required if a paid application image is used and can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * @return BlueprintId Application image ID, which is required if a paid application image is used and can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置Application image ID, which is required if a paid application image is used and can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * @param _blueprintId Application image ID, which is required if a paid application image is used and can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                private:

                    /**
                     * Instance package ID.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Parameter setting for prepaid mode. This parameter can specify the purchase period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Number of instances to be created. Default value: 1.
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * Application image ID, which is required if a paid application image is used and can be obtained from the `BlueprintId` returned by the [DescribeBlueprints](https://intl.cloud.tencent.com/document/product/1207/47689?from_cn_redirect=1) API.
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEINSTANCESREQUEST_H_
