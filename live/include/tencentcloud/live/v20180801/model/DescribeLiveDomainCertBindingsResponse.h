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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveDomainCertBindings.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomainCertBindings response structure.
                */
                class DescribeLiveDomainCertBindingsResponse : public AbstractModel
                {
                public:
                    DescribeLiveDomainCertBindingsResponse();
                    ~DescribeLiveDomainCertBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The information of domains that meet the query criteria.
                     * @return LiveDomainCertBindings The information of domains that meet the query criteria.
                     * 
                     */
                    std::vector<LiveDomainCertBindings> GetLiveDomainCertBindings() const;

                    /**
                     * 判断参数 LiveDomainCertBindings 是否已赋值
                     * @return LiveDomainCertBindings 是否已赋值
                     * 
                     */
                    bool LiveDomainCertBindingsHasBeenSet() const;

                    /**
                     * 获取The number of records returned, which is needed for pagination.
                     * @return TotalNum The number of records returned, which is needed for pagination.
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * The information of domains that meet the query criteria.
                     */
                    std::vector<LiveDomainCertBindings> m_liveDomainCertBindings;
                    bool m_liveDomainCertBindingsHasBeenSet;

                    /**
                     * The number of records returned, which is needed for pagination.
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINCERTBINDINGSRESPONSE_H_
