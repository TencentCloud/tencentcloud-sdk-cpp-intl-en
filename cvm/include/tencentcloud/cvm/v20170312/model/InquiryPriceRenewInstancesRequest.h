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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERENEWINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERENEWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewInstances request structure.
                */
                class InquiryPriceRenewInstancesRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewInstancesRequest();
                    ~InquiryPriceRenewInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * @return InstanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     * @param _instanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
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
                     * 获取Prepaid mode, that is, monthly subscription-related parameter settings. You can specify attributes of a monthly subscription instance, such as purchase duration and whether to set auto-renewal, through this parameter.
                     * @return InstanceChargePrepaid Prepaid mode, that is, monthly subscription-related parameter settings. You can specify attributes of a monthly subscription instance, such as purchase duration and whether to set auto-renewal, through this parameter.
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Prepaid mode, that is, monthly subscription-related parameter settings. You can specify attributes of a monthly subscription instance, such as purchase duration and whether to set auto-renewal, through this parameter.
                     * @param _instanceChargePrepaid Prepaid mode, that is, monthly subscription-related parameter settings. You can specify attributes of a monthly subscription instance, such as purchase duration and whether to set auto-renewal, through this parameter.
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
                     * 获取Trial run, for testing purposes, does not execute specific logic. valid values: <li>`true`: skip execution logic</li> <li>`false`: execute logic</li>  default value: `false`.
                     * @return DryRun Trial run, for testing purposes, does not execute specific logic. valid values: <li>`true`: skip execution logic</li> <li>`false`: execute logic</li>  default value: `false`.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Trial run, for testing purposes, does not execute specific logic. valid values: <li>`true`: skip execution logic</li> <li>`false`: execute logic</li>  default value: `false`.
                     * @param _dryRun Trial run, for testing purposes, does not execute specific logic. valid values: <li>`true`: skip execution logic</li> <li>`false`: execute logic</li>  default value: `false`.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Whether to renew the elastic data disk. valid values:<br><li>true: indicates renewing the annual and monthly subscription instance and its mounted elastic data disk simultaneously</li><li>false: indicates renewing the annual and monthly subscription instance while no longer renewing its mounted elastic data disk</li><br>default value: true.
                     * @return RenewPortableDataDisk Whether to renew the elastic data disk. valid values:<br><li>true: indicates renewing the annual and monthly subscription instance and its mounted elastic data disk simultaneously</li><li>false: indicates renewing the annual and monthly subscription instance while no longer renewing its mounted elastic data disk</li><br>default value: true.
                     * 
                     */
                    bool GetRenewPortableDataDisk() const;

                    /**
                     * 设置Whether to renew the elastic data disk. valid values:<br><li>true: indicates renewing the annual and monthly subscription instance and its mounted elastic data disk simultaneously</li><li>false: indicates renewing the annual and monthly subscription instance while no longer renewing its mounted elastic data disk</li><br>default value: true.
                     * @param _renewPortableDataDisk Whether to renew the elastic data disk. valid values:<br><li>true: indicates renewing the annual and monthly subscription instance and its mounted elastic data disk simultaneously</li><li>false: indicates renewing the annual and monthly subscription instance while no longer renewing its mounted elastic data disk</li><br>default value: true.
                     * 
                     */
                    void SetRenewPortableDataDisk(const bool& _renewPortableDataDisk);

                    /**
                     * 判断参数 RenewPortableDataDisk 是否已赋值
                     * @return RenewPortableDataDisk 是否已赋值
                     * 
                     */
                    bool RenewPortableDataDiskHasBeenSet() const;

                private:

                    /**
                     * One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/zh/document/api/213/33258). The maximum number of instances per request is 100.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Prepaid mode, that is, monthly subscription-related parameter settings. You can specify attributes of a monthly subscription instance, such as purchase duration and whether to set auto-renewal, through this parameter.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Trial run, for testing purposes, does not execute specific logic. valid values: <li>`true`: skip execution logic</li> <li>`false`: execute logic</li>  default value: `false`.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Whether to renew the elastic data disk. valid values:<br><li>true: indicates renewing the annual and monthly subscription instance and its mounted elastic data disk simultaneously</li><li>false: indicates renewing the annual and monthly subscription instance while no longer renewing its mounted elastic data disk</li><br>default value: true.
                     */
                    bool m_renewPortableDataDisk;
                    bool m_renewPortableDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICERENEWINSTANCESREQUEST_H_
