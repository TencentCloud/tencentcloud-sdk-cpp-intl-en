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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWDISKSREQUEST_H_

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
                * InquirePriceRenewDisks request structure.
                */
                class InquirePriceRenewDisksRequest : public AbstractModel
                {
                public:
                    InquirePriceRenewDisksRequest();
                    ~InquirePriceRenewDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of cloud disk IDs.
                     * @return DiskIds List of cloud disk IDs.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置List of cloud disk IDs.
                     * @param _diskIds List of cloud disk IDs.
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

                private:

                    /**
                     * List of cloud disk IDs.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * Parameter settings for renewing the monthly subscribed cloud disk.
                     */
                    RenewDiskChargePrepaid m_renewDiskChargePrepaid;
                    bool m_renewDiskChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWDISKSREQUEST_H_
