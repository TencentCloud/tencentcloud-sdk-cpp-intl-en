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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCBLACKWHITEIPLISTRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCBLACKWHITEIPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CcBlackWhiteIpPolicy.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeCcBlackWhiteIpList response structure.
                */
                class DescribeCcBlackWhiteIpListResponse : public AbstractModel
                {
                public:
                    DescribeCcBlackWhiteIpListResponse();
                    ~DescribeCcBlackWhiteIpListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of policy lists
                     * @return Total Number of policy lists
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Information of the policy list
                     * @return CcBlackWhiteIpList Information of the policy list
                     * 
                     */
                    std::vector<CcBlackWhiteIpPolicy> GetCcBlackWhiteIpList() const;

                    /**
                     * 判断参数 CcBlackWhiteIpList 是否已赋值
                     * @return CcBlackWhiteIpList 是否已赋值
                     * 
                     */
                    bool CcBlackWhiteIpListHasBeenSet() const;

                private:

                    /**
                     * Number of policy lists
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Information of the policy list
                     */
                    std::vector<CcBlackWhiteIpPolicy> m_ccBlackWhiteIpList;
                    bool m_ccBlackWhiteIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCBLACKWHITEIPLISTRESPONSE_H_
