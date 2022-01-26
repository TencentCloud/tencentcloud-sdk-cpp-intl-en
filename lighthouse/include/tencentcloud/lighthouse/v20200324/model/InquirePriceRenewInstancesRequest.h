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
                     * 获取Instance to be renewed.
                     * @return InstanceIds Instance to be renewed.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance to be renewed.
                     * @param InstanceIds Instance to be renewed.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     * @return InstanceChargePrepaid Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     * @param InstanceChargePrepaid Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取Whether to renew the data disk
                     * @return RenewDataDisk Whether to renew the data disk
                     */
                    bool GetRenewDataDisk() const;

                    /**
                     * 设置Whether to renew the data disk
                     * @param RenewDataDisk Whether to renew the data disk
                     */
                    void SetRenewDataDisk(const bool& _renewDataDisk);

                    /**
                     * 判断参数 RenewDataDisk 是否已赋值
                     * @return RenewDataDisk 是否已赋值
                     */
                    bool RenewDataDiskHasBeenSet() const;

                    /**
                     * 获取Whether the data disk has the same expiration time as the instance
                     * @return AlignInstanceExpiredTime Whether the data disk has the same expiration time as the instance
                     */
                    bool GetAlignInstanceExpiredTime() const;

                    /**
                     * 设置Whether the data disk has the same expiration time as the instance
                     * @param AlignInstanceExpiredTime Whether the data disk has the same expiration time as the instance
                     */
                    void SetAlignInstanceExpiredTime(const bool& _alignInstanceExpiredTime);

                    /**
                     * 判断参数 AlignInstanceExpiredTime 是否已赋值
                     * @return AlignInstanceExpiredTime 是否已赋值
                     */
                    bool AlignInstanceExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * Instance to be renewed.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Prepaid mode, i.e., monthly subscription. This parameter can specify the purchase period and other attributes such as auto-renewal. It is required for prepaid instances.
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * Whether to renew the data disk
                     */
                    bool m_renewDataDisk;
                    bool m_renewDataDiskHasBeenSet;

                    /**
                     * Whether the data disk has the same expiration time as the instance
                     */
                    bool m_alignInstanceExpiredTime;
                    bool m_alignInstanceExpiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESREQUEST_H_
