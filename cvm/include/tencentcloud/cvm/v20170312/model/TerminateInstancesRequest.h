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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_

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
                * TerminateInstances request structure.
                */
                class TerminateInstancesRequest : public AbstractModel
                {
                public:
                    TerminateInstancesRequest();
                    ~TerminateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 100.
                     * @return InstanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 100.
                     * @param _instanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 100.
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
                     * 获取Release an Elastic IP. Under EIP 2.0, only the first EIP on the primary network interface can be released, and currently supported release types are limited to HighQualityEIP, AntiDDoSEIP, EIPv6, and HighQualityEIPv6.
Default value:  `false`.

This feature is currently in gradually released phase. To access it, please contact us.
                     * @return ReleaseAddress Release an Elastic IP. Under EIP 2.0, only the first EIP on the primary network interface can be released, and currently supported release types are limited to HighQualityEIP, AntiDDoSEIP, EIPv6, and HighQualityEIPv6.
Default value:  `false`.

This feature is currently in gradually released phase. To access it, please contact us.
                     * 
                     */
                    bool GetReleaseAddress() const;

                    /**
                     * 设置Release an Elastic IP. Under EIP 2.0, only the first EIP on the primary network interface can be released, and currently supported release types are limited to HighQualityEIP, AntiDDoSEIP, EIPv6, and HighQualityEIPv6.
Default value:  `false`.

This feature is currently in gradually released phase. To access it, please contact us.
                     * @param _releaseAddress Release an Elastic IP. Under EIP 2.0, only the first EIP on the primary network interface can be released, and currently supported release types are limited to HighQualityEIP, AntiDDoSEIP, EIPv6, and HighQualityEIPv6.
Default value:  `false`.

This feature is currently in gradually released phase. To access it, please contact us.
                     * 
                     */
                    void SetReleaseAddress(const bool& _releaseAddress);

                    /**
                     * 判断参数 ReleaseAddress 是否已赋值
                     * @return ReleaseAddress 是否已赋值
                     * 
                     */
                    bool ReleaseAddressHasBeenSet() const;

                    /**
                     * 获取Whether to release a monthly subscription data disk mounted on an instance. true: Release the data disk along with termination of the instance. false: Only terminate the instance.
Default value: `false`.
                     * @return ReleasePrepaidDataDisks Whether to release a monthly subscription data disk mounted on an instance. true: Release the data disk along with termination of the instance. false: Only terminate the instance.
Default value: `false`.
                     * 
                     */
                    bool GetReleasePrepaidDataDisks() const;

                    /**
                     * 设置Whether to release a monthly subscription data disk mounted on an instance. true: Release the data disk along with termination of the instance. false: Only terminate the instance.
Default value: `false`.
                     * @param _releasePrepaidDataDisks Whether to release a monthly subscription data disk mounted on an instance. true: Release the data disk along with termination of the instance. false: Only terminate the instance.
Default value: `false`.
                     * 
                     */
                    void SetReleasePrepaidDataDisks(const bool& _releasePrepaidDataDisks);

                    /**
                     * 判断参数 ReleasePrepaidDataDisks 是否已赋值
                     * @return ReleasePrepaidDataDisks 是否已赋值
                     * 
                     */
                    bool ReleasePrepaidDataDisksHasBeenSet() const;

                private:

                    /**
                     * One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Release an Elastic IP. Under EIP 2.0, only the first EIP on the primary network interface can be released, and currently supported release types are limited to HighQualityEIP, AntiDDoSEIP, EIPv6, and HighQualityEIPv6.
Default value:  `false`.

This feature is currently in gradually released phase. To access it, please contact us.
                     */
                    bool m_releaseAddress;
                    bool m_releaseAddressHasBeenSet;

                    /**
                     * Whether to release a monthly subscription data disk mounted on an instance. true: Release the data disk along with termination of the instance. false: Only terminate the instance.
Default value: `false`.
                     */
                    bool m_releasePrepaidDataDisks;
                    bool m_releasePrepaidDataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_
