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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGESERVICEINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGESERVICEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProtectMachineInfo.h>
#include <tencentcloud/cwp/v20180228/model/ProtectMachine.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWebPageServiceInfo response structure.
                */
                class DescribeWebPageServiceInfoResponse : public AbstractModel
                {
                public:
                    DescribeWebPageServiceInfoResponse();
                    ~DescribeWebPageServiceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether it is a purchased service. true: yes; false: no.
                     * @return Status Whether it is a purchased service. true: yes; false: no.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Number of used authorizations
                     * @return UsedNum Number of used authorizations
                     * 
                     */
                    uint64_t GetUsedNum() const;

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取Remaining licenses
                     * @return ResidueNum Remaining licenses
                     * 
                     */
                    uint64_t GetResidueNum() const;

                    /**
                     * 判断参数 ResidueNum 是否已赋值
                     * @return ResidueNum 是否已赋值
                     * 
                     */
                    bool ResidueNumHasBeenSet() const;

                    /**
                     * 获取Number of purchased authorizations
                     * @return BuyNum Number of purchased authorizations
                     * 
                     */
                    uint64_t GetBuyNum() const;

                    /**
                     * 判断参数 BuyNum 是否已赋值
                     * @return BuyNum 是否已赋值
                     * 
                     */
                    bool BuyNumHasBeenSet() const;

                    /**
                     * 获取Number of resources near expiration
                     * @return ExpireNum Number of resources near expiration
                     * 
                     */
                    uint64_t GetExpireNum() const;

                    /**
                     * 判断参数 ExpireNum 是否已赋值
                     * @return ExpireNum 是否已赋值
                     * 
                     */
                    bool ExpireNumHasBeenSet() const;

                    /**
                     * 获取Information of all authorization machines
                     * @return AllAuthorizedMachines Information of all authorization machines
                     * 
                     */
                    std::vector<ProtectMachineInfo> GetAllAuthorizedMachines() const;

                    /**
                     * 判断参数 AllAuthorizedMachines 是否已赋值
                     * @return AllAuthorizedMachines 是否已赋值
                     * 
                     */
                    bool AllAuthorizedMachinesHasBeenSet() const;

                    /**
                     * 获取Information of authorization machines near expiration
                     * @return ExpireAuthorizedMachines Information of authorization machines near expiration
                     * 
                     */
                    std::vector<ProtectMachine> GetExpireAuthorizedMachines() const;

                    /**
                     * 判断参数 ExpireAuthorizedMachines 是否已赋值
                     * @return ExpireAuthorizedMachines 是否已赋值
                     * 
                     */
                    bool ExpireAuthorizedMachinesHasBeenSet() const;

                    /**
                     * 获取Number of expired authorizations
                     * @return ExpiredNum Number of expired authorizations
                     * 
                     */
                    uint64_t GetExpiredNum() const;

                    /**
                     * 判断参数 ExpiredNum 是否已赋值
                     * @return ExpiredNum 是否已赋值
                     * 
                     */
                    bool ExpiredNumHasBeenSet() const;

                    /**
                     * 获取Number of protection directories
                     * @return ProtectDirNum Number of protection directories
                     * 
                     */
                    uint64_t GetProtectDirNum() const;

                    /**
                     * 判断参数 ProtectDirNum 是否已赋值
                     * @return ProtectDirNum 是否已赋值
                     * 
                     */
                    bool ProtectDirNumHasBeenSet() const;

                private:

                    /**
                     * Whether it is a purchased service. true: yes; false: no.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Number of used authorizations
                     */
                    uint64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * Remaining licenses
                     */
                    uint64_t m_residueNum;
                    bool m_residueNumHasBeenSet;

                    /**
                     * Number of purchased authorizations
                     */
                    uint64_t m_buyNum;
                    bool m_buyNumHasBeenSet;

                    /**
                     * Number of resources near expiration
                     */
                    uint64_t m_expireNum;
                    bool m_expireNumHasBeenSet;

                    /**
                     * Information of all authorization machines
                     */
                    std::vector<ProtectMachineInfo> m_allAuthorizedMachines;
                    bool m_allAuthorizedMachinesHasBeenSet;

                    /**
                     * Information of authorization machines near expiration
                     */
                    std::vector<ProtectMachine> m_expireAuthorizedMachines;
                    bool m_expireAuthorizedMachinesHasBeenSet;

                    /**
                     * Number of expired authorizations
                     */
                    uint64_t m_expiredNum;
                    bool m_expiredNumHasBeenSet;

                    /**
                     * Number of protection directories
                     */
                    uint64_t m_protectDirNum;
                    bool m_protectDirNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGESERVICEINFORESPONSE_H_
