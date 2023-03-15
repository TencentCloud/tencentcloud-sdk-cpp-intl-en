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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_

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
                * InquirePriceRenewInstances request structure.
                */
                class InquirePriceRenewInstancesRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewInstancesRequest();
                    ~InquirePriceRenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of the instances to be renewed. Each request can contain up to 50 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * @return InstanceIds IDs of the instances to be renewed. Each request can contain up to 50 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置IDs of the instances to be renewed. Each request can contain up to 50 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     * @param InstanceIds IDs of the instances to be renewed. Each request can contain up to 50 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Parameter setting for prepaid mode. This parameter can specify the renewal period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     * @return InstanceChargePrepaid Parameter setting for prepaid mode. This parameter can specify the renewal period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Parameter setting for prepaid mode. This parameter can specify the renewal period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     * @param InstanceChargePrepaid Parameter setting for prepaid mode. This parameter can specify the renewal period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Whether to renew the data disk. Default: `false`.
                     * @return RenewDataDisk Whether to renew the data disk. Default: `false`.
                     */
                    bool GetRenewDataDisk() const;

                    /**
                     * 设置Whether to renew the data disk. Default: `false`.
                     * @param RenewDataDisk Whether to renew the data disk. Default: `false`.
                     */
                    void SetRenewDataDisk(const bool& _renewDataDisk);

                    /**
                     * 判断参数 RenewDataDisk 是否已赋值
                     * @return RenewDataDisk 是否已赋值
                     */
                    bool RenewDataDiskHasBeenSet() const;

                    /**
                     * 获取Whether to align the data disk expiration with the instance expiration time. Default: `false`.
                     * @return AlignInstanceExpiredTime Whether to align the data disk expiration with the instance expiration time. Default: `false`.
                     */
                    bool GetAlignInstanceExpiredTime() const;

                    /**
                     * 设置Whether to align the data disk expiration with the instance expiration time. Default: `false`.
                     * @param AlignInstanceExpiredTime Whether to align the data disk expiration with the instance expiration time. Default: `false`.
                     */
                    void SetAlignInstanceExpiredTime(const bool& _alignInstanceExpiredTime);

                    /**
                     * 判断参数 AlignInstanceExpiredTime 是否已赋值
                     * @return AlignInstanceExpiredTime 是否已赋值
                     */
                    bool AlignInstanceExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * IDs of the instances to be renewed. Each request can contain up to 50 instances at a time. You can get an instance ID from the `InstanceId` returned by the [DescribeInstances](https://intl.cloud.tencent.com/document/api/1207/47573?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Parameter setting for prepaid mode. This parameter can specify the renewal period, whether to enable auto-renewal, and other attributes of the monthly subscribed instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Whether to renew the data disk. Default: `false`.
                     */
                    bool m_renewDataDisk;
                    bool m_renewDataDiskHasBeenSet;

                    /**
                     * Whether to align the data disk expiration with the instance expiration time. Default: `false`.
                     */
                    bool m_alignInstanceExpiredTime;
                    bool m_alignInstanceExpiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_
