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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICEMODIFYINSTANCESCHARGETYPEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICEMODIFYINSTANCESCHARGETYPEREQUEST_H_

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
                * InquiryPriceModifyInstancesChargeType request structure.
                */
                class InquiryPriceModifyInstancesChargeTypeRequest : public AbstractModel
                {
                public:
                    InquiryPriceModifyInstancesChargeTypeRequest();
                    ~InquiryPriceModifyInstancesChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 20.
                     * @return InstanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 20.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 20.
                     * @param _instanceIds One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 20.
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
                     * 获取Modified instance [billing type](https://www.tencentcloud.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: monthly subscription.</li>

**Note:** Only supports converting pay-as-you-go instances to annual and monthly subscription instances.

default value: `PREPAID`
                     * @return InstanceChargeType Modified instance [billing type](https://www.tencentcloud.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: monthly subscription.</li>

**Note:** Only supports converting pay-as-you-go instances to annual and monthly subscription instances.

default value: `PREPAID`
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Modified instance [billing type](https://www.tencentcloud.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: monthly subscription.</li>

**Note:** Only supports converting pay-as-you-go instances to annual and monthly subscription instances.

default value: `PREPAID`
                     * @param _instanceChargeType Modified instance [billing type](https://www.tencentcloud.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: monthly subscription.</li>

**Note:** Only supports converting pay-as-you-go instances to annual and monthly subscription instances.

default value: `PREPAID`
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取Prepaid mode, parameter settings related to monthly/annual subscription. through this parameter, specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. 
                     * @return InstanceChargePrepaid Prepaid mode, parameter settings related to monthly/annual subscription. through this parameter, specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. 
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Prepaid mode, parameter settings related to monthly/annual subscription. through this parameter, specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. 
                     * @param _instanceChargePrepaid Prepaid mode, parameter settings related to monthly/annual subscription. through this parameter, specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. 
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
                     * 获取Whether to switch the billing mode of elastic data cloud disks simultaneously. valid values: <br><li>true: means switching the billing mode of elastic data cloud disks</li><li>false: means not switching the billing mode of elastic data cloud disks</li><br>default value: false.
                     * @return ModifyPortableDataDisk Whether to switch the billing mode of elastic data cloud disks simultaneously. valid values: <br><li>true: means switching the billing mode of elastic data cloud disks</li><li>false: means not switching the billing mode of elastic data cloud disks</li><br>default value: false.
                     * 
                     */
                    bool GetModifyPortableDataDisk() const;

                    /**
                     * 设置Whether to switch the billing mode of elastic data cloud disks simultaneously. valid values: <br><li>true: means switching the billing mode of elastic data cloud disks</li><li>false: means not switching the billing mode of elastic data cloud disks</li><br>default value: false.
                     * @param _modifyPortableDataDisk Whether to switch the billing mode of elastic data cloud disks simultaneously. valid values: <br><li>true: means switching the billing mode of elastic data cloud disks</li><li>false: means not switching the billing mode of elastic data cloud disks</li><br>default value: false.
                     * 
                     */
                    void SetModifyPortableDataDisk(const bool& _modifyPortableDataDisk);

                    /**
                     * 判断参数 ModifyPortableDataDisk 是否已赋值
                     * @return ModifyPortableDataDisk 是否已赋值
                     * 
                     */
                    bool ModifyPortableDataDiskHasBeenSet() const;

                private:

                    /**
                     * One or more instance IDs to be operated. You can obtain the instance ID through the `InstanceId` in the return value from the API [DescribeInstances](https://www.tencentcloud.com/document/api/213/15728?from_cn_redirect=1). The maximum number of instances per request is 20.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Modified instance [billing type](https://www.tencentcloud.com/document/product/213/2180?from_cn_redirect=1). <br><li>`PREPAID`: monthly subscription.</li>

**Note:** Only supports converting pay-as-you-go instances to annual and monthly subscription instances.

default value: `PREPAID`
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * Prepaid mode, parameter settings related to monthly/annual subscription. through this parameter, specify the purchase duration of annual and monthly subscription instances, whether to enable auto-renewal, and other attributes. 
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Whether to switch the billing mode of elastic data cloud disks simultaneously. valid values: <br><li>true: means switching the billing mode of elastic data cloud disks</li><li>false: means not switching the billing mode of elastic data cloud disks</li><br>default value: false.
                     */
                    bool m_modifyPortableDataDisk;
                    bool m_modifyPortableDataDiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INQUIRYPRICEMODIFYINSTANCESCHARGETYPEREQUEST_H_
