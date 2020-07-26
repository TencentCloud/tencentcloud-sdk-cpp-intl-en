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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAddressesBandwidth request structure.
                */
                class ModifyAddressesBandwidthRequest : public AbstractModel
                {
                public:
                    ModifyAddressesBandwidthRequest();
                    ~ModifyAddressesBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the EIP, such as 'eip-xxxx'.
                     * @return AddressIds The unique ID of the EIP, such as 'eip-xxxx'.
                     */
                    std::vector<std::string> GetAddressIds() const;

                    /**
                     * 设置The unique ID of the EIP, such as 'eip-xxxx'.
                     * @param AddressIds The unique ID of the EIP, such as 'eip-xxxx'.
                     */
                    void SetAddressIds(const std::vector<std::string>& _addressIds);

                    /**
                     * 判断参数 AddressIds 是否已赋值
                     * @return AddressIds 是否已赋值
                     */
                    bool AddressIdsHasBeenSet() const;

                    /**
                     * 获取Target bandwidth value adjustment
                     * @return InternetMaxBandwidthOut Target bandwidth value adjustment
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Target bandwidth value adjustment
                     * @param InternetMaxBandwidthOut Target bandwidth value adjustment
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取The monthly bandwidth start time
                     * @return StartTime The monthly bandwidth start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The monthly bandwidth start time
                     * @param StartTime The monthly bandwidth start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The monthly bandwidth end time
                     * @return EndTime The monthly bandwidth end time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The monthly bandwidth end time
                     * @param EndTime The monthly bandwidth end time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the EIP, such as 'eip-xxxx'.
                     */
                    std::vector<std::string> m_addressIds;
                    bool m_addressIdsHasBeenSet;

                    /**
                     * Target bandwidth value adjustment
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * The monthly bandwidth start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The monthly bandwidth end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSESBANDWIDTHREQUEST_H_
