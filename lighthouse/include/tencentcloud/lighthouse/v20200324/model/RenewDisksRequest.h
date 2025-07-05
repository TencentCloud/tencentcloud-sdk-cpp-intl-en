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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/RenewDiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * RenewDisks request structure.
                */
                class RenewDisksRequest : public AbstractModel
                {
                public:
                    RenewDisksRequest();
                    ~RenewDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of cloud disks. The value can be obtained from the `DiskId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 50 disks can be requested at a time.
                     * @return DiskIds IDs of cloud disks. The value can be obtained from the `DiskId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 50 disks can be requested at a time.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置IDs of cloud disks. The value can be obtained from the `DiskId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 50 disks can be requested at a time.
                     * @param _diskIds IDs of cloud disks. The value can be obtained from the `DiskId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 50 disks can be requested at a time.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取Parameter settings for renewing the monthly subscribed cloud disk.
                     * @return RenewDiskChargePrepaid Parameter settings for renewing the monthly subscribed cloud disk.
                     * 
                     */
                    RenewDiskChargePrepaid GetRenewDiskChargePrepaid() const;

                    /**
                     * 设置Parameter settings for renewing the monthly subscribed cloud disk.
                     * @param _renewDiskChargePrepaid Parameter settings for renewing the monthly subscribed cloud disk.
                     * 
                     */
                    void SetRenewDiskChargePrepaid(const RenewDiskChargePrepaid& _renewDiskChargePrepaid);

                    /**
                     * 判断参数 RenewDiskChargePrepaid 是否已赋值
                     * @return RenewDiskChargePrepaid 是否已赋值
                     * 
                     */
                    bool RenewDiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Whether to use the vouchers automatically. It defaults to No.
                     * @return AutoVoucher Whether to use the vouchers automatically. It defaults to No.
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置Whether to use the vouchers automatically. It defaults to No.
                     * @param _autoVoucher Whether to use the vouchers automatically. It defaults to No.
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
                     * IDs of cloud disks. The value can be obtained from the `DiskId` parameter returned by the [DescribeDisks](https://intl.cloud.tencent.com/document/product/1207/66093?from_cn_redirect=1) API. Up to 50 disks can be requested at a time.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Parameter settings for renewing the monthly subscribed cloud disk.
                     */
                    RenewDiskChargePrepaid m_renewDiskChargePrepaid;
                    bool m_renewDiskChargePrepaidHasBeenSet;

                    /**
                     * Whether to use the vouchers automatically. It defaults to No.
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKSREQUEST_H_
