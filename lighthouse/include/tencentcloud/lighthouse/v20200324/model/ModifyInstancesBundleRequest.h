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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESBUNDLEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESBUNDLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyInstancesBundle request structure.
                */
                class ModifyInstancesBundleRequest : public AbstractModel
                {
                public:
                    ModifyInstancesBundleRequest();
                    ~ModifyInstancesBundleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 15 instances can be specified at the same time.
                     * @return InstanceIds IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 15 instances can be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 15 instances can be specified at the same time.
                     * @param _instanceIds IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 15 instances can be specified at the same time.
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
                     * 获取ID of bundles to change. You can get the IDs from the `BundleId` returned by the [DescribeBundles](https://intl.cloud.tencent.com/document/api/1207/47575?from_cn_redirect=1).
                     * @return BundleId ID of bundles to change. You can get the IDs from the `BundleId` returned by the [DescribeBundles](https://intl.cloud.tencent.com/document/api/1207/47575?from_cn_redirect=1).
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置ID of bundles to change. You can get the IDs from the `BundleId` returned by the [DescribeBundles](https://intl.cloud.tencent.com/document/api/1207/47575?from_cn_redirect=1).
                     * @param _bundleId ID of bundles to change. You can get the IDs from the `BundleId` returned by the [DescribeBundles](https://intl.cloud.tencent.com/document/api/1207/47575?from_cn_redirect=1).
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
                     * 获取Whether to use existing vouchers under the current account automatically. Valid values: 
`true`: Deduct from existing vouchers automatically 
`false`: Do not deduct from existing vouchers automatically 
Default value: `false`.
                     * @return AutoVoucher Whether to use existing vouchers under the current account automatically. Valid values: 
`true`: Deduct from existing vouchers automatically 
`false`: Do not deduct from existing vouchers automatically 
Default value: `false`.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to use existing vouchers under the current account automatically. Valid values: 
`true`: Deduct from existing vouchers automatically 
`false`: Do not deduct from existing vouchers automatically 
Default value: `false`.
                     * @param _autoVoucher Whether to use existing vouchers under the current account automatically. Valid values: 
`true`: Deduct from existing vouchers automatically 
`false`: Do not deduct from existing vouchers automatically 
Default value: `false`.
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                private:

                    /**
                     * IDs of target instances. You can get the IDs from the `InstanceId` parameter returned by the `DescribeInstances` API. Up to 15 instances can be specified at the same time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * ID of bundles to change. You can get the IDs from the `BundleId` returned by the [DescribeBundles](https://intl.cloud.tencent.com/document/api/1207/47575?from_cn_redirect=1).
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Whether to use existing vouchers under the current account automatically. Valid values: 
`true`: Deduct from existing vouchers automatically 
`false`: Do not deduct from existing vouchers automatically 
Default value: `false`.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYINSTANCESBUNDLEREQUEST_H_
