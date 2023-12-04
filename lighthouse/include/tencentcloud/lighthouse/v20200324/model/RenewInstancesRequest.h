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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWINSTANCESREQUEST_H_

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
                * RenewInstances request structure.
                */
                class RenewInstancesRequest : public AbstractModel
                {
                public:
                    RenewInstancesRequest();
                    ~RenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of one or more instances to be operated. The value can be obtained from the `InstanceId` parameter returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API. Up to 100 instances can be requested at a time.
                     * @return InstanceIds IDs of one or more instances to be operated. The value can be obtained from the `InstanceId` parameter returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API. Up to 100 instances can be requested at a time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置IDs of one or more instances to be operated. The value can be obtained from the `InstanceId` parameter returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API. Up to 100 instances can be requested at a time.
                     * @param _instanceIds IDs of one or more instances to be operated. The value can be obtained from the `InstanceId` parameter returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API. Up to 100 instances can be requested at a time.
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
                     * 获取Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     * @return InstanceChargePrepaid Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     * @param _instanceChargePrepaid Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
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
                     * 获取Whether to renew elastic data disks. Values: 
`TRUE`: Renew the elastic data disks attached to the instance as well when the related instance is renewed.
`FALSE`: Do not renew the elastic data disks attached to the instance as well when the related instance is renewed.
Default: `TRUE`
                     * @return RenewDataDisk Whether to renew elastic data disks. Values: 
`TRUE`: Renew the elastic data disks attached to the instance as well when the related instance is renewed.
`FALSE`: Do not renew the elastic data disks attached to the instance as well when the related instance is renewed.
Default: `TRUE`
                     * 
                     */
                    bool GetRenewDataDisk() const;

                    /**
                     * 设置Whether to renew elastic data disks. Values: 
`TRUE`: Renew the elastic data disks attached to the instance as well when the related instance is renewed.
`FALSE`: Do not renew the elastic data disks attached to the instance as well when the related instance is renewed.
Default: `TRUE`
                     * @param _renewDataDisk Whether to renew elastic data disks. Values: 
`TRUE`: Renew the elastic data disks attached to the instance as well when the related instance is renewed.
`FALSE`: Do not renew the elastic data disks attached to the instance as well when the related instance is renewed.
Default: `TRUE`
                     * 
                     */
                    void SetRenewDataDisk(const bool& _renewDataDisk);

                    /**
                     * 判断参数 RenewDataDisk 是否已赋值
                     * @return RenewDataDisk 是否已赋值
                     * 
                     */
                    bool RenewDataDiskHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use vouchers. Values:
`TRUE`: Use vouchers for payment automatically.
`FALSE`: Do not use vouchers for payment automatically.
Default: `FALSE`.
                     * @return AutoVoucher Whether to automatically use vouchers. Values:
`TRUE`: Use vouchers for payment automatically.
`FALSE`: Do not use vouchers for payment automatically.
Default: `FALSE`.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers. Values:
`TRUE`: Use vouchers for payment automatically.
`FALSE`: Do not use vouchers for payment automatically.
Default: `FALSE`.
                     * @param _autoVoucher Whether to automatically use vouchers. Values:
`TRUE`: Use vouchers for payment automatically.
`FALSE`: Do not use vouchers for payment automatically.
Default: `FALSE`.
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
                     * IDs of one or more instances to be operated. The value can be obtained from the `InstanceId` parameter returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API. Up to 100 instances can be requested at a time.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Whether to renew elastic data disks. Values: 
`TRUE`: Renew the elastic data disks attached to the instance as well when the related instance is renewed.
`FALSE`: Do not renew the elastic data disks attached to the instance as well when the related instance is renewed.
Default: `TRUE`
                     */
                    bool m_renewDataDisk;
                    bool m_renewDataDiskHasBeenSet;

                    /**
                     * Whether to automatically use vouchers. Values:
`TRUE`: Use vouchers for payment automatically.
`FALSE`: Do not use vouchers for payment automatically.
Default: `FALSE`.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWINSTANCESREQUEST_H_
