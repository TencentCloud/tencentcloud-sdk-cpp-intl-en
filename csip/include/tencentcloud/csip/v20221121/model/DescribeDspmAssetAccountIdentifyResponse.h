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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETACCOUNTIDENTIFYRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETACCOUNTIDENTIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmAssetAccountIdentify.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmAssetAccountIdentify response structure.
                */
                class DescribeDspmAssetAccountIdentifyResponse : public AbstractModel
                {
                public:
                    DescribeDspmAssetAccountIdentifyResponse();
                    ~DescribeDspmAssetAccountIdentifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of asset account identities
                     * @return TotalCount Total number of asset account identities
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Asset account identity information
                     * @return IdentifySet Asset account identity information
                     * 
                     */
                    std::vector<DspmAssetAccountIdentify> GetIdentifySet() const;

                    /**
                     * 判断参数 IdentifySet 是否已赋值
                     * @return IdentifySet 是否已赋值
                     * 
                     */
                    bool IdentifySetHasBeenSet() const;

                private:

                    /**
                     * Total number of asset account identities
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Asset account identity information
                     */
                    std::vector<DspmAssetAccountIdentify> m_identifySet;
                    bool m_identifySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETACCOUNTIDENTIFYRESPONSE_H_
