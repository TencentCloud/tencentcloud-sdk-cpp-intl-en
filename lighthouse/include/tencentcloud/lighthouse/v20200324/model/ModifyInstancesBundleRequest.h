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
                     * 获取List of instance IDs. One or more IDs of the instances to be operated. You can obtain the InstanceId from the value returned by the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API. The maximum number of instances in each request is 15.
                     * @return InstanceIds List of instance IDs. One or more IDs of the instances to be operated. You can obtain the InstanceId from the value returned by the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API. The maximum number of instances in each request is 15.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs. One or more IDs of the instances to be operated. You can obtain the InstanceId from the value returned by the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API. The maximum number of instances in each request is 15.
                     * @param _instanceIds List of instance IDs. One or more IDs of the instances to be operated. You can obtain the InstanceId from the value returned by the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API. The maximum number of instances in each request is 15.
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
                     * 获取ID of the target bundle. Note that it cannot be the same as the current bundle ID of the instance to be upgraded. You can obtain the BundleId from the value returned by the [DescribeBundles](https://www.tencentcloud.com/document/api/1207/47575?from_cn_redirect=1) API.
                     * @return BundleId ID of the target bundle. Note that it cannot be the same as the current bundle ID of the instance to be upgraded. You can obtain the BundleId from the value returned by the [DescribeBundles](https://www.tencentcloud.com/document/api/1207/47575?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置ID of the target bundle. Note that it cannot be the same as the current bundle ID of the instance to be upgraded. You can obtain the BundleId from the value returned by the [DescribeBundles](https://www.tencentcloud.com/document/api/1207/47575?from_cn_redirect=1) API.
                     * @param _bundleId ID of the target bundle. Note that it cannot be the same as the current bundle ID of the instance to be upgraded. You can obtain the BundleId from the value returned by the [DescribeBundles](https://www.tencentcloud.com/document/api/1207/47575?from_cn_redirect=1) API.
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
                     * List of instance IDs. One or more IDs of the instances to be operated. You can obtain the InstanceId from the value returned by the [DescribeInstances](https://www.tencentcloud.com/document/api/1207/47573?from_cn_redirect=1) API. The maximum number of instances in each request is 15.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * ID of the target bundle. Note that it cannot be the same as the current bundle ID of the instance to be upgraded. You can obtain the BundleId from the value returned by the [DescribeBundles](https://www.tencentcloud.com/document/api/1207/47575?from_cn_redirect=1) API.
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
