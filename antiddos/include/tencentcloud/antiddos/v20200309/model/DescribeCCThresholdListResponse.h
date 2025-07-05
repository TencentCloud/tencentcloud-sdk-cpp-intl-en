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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCTHRESHOLDLISTRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCTHRESHOLDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/CCThresholdPolicy.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeCCThresholdList response structure.
                */
                class DescribeCCThresholdListResponse : public AbstractModel
                {
                public:
                    DescribeCCThresholdListResponse();
                    ~DescribeCCThresholdListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of cleansing threshold policies
                     * @return Total Total number of cleansing threshold policies
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
                     * 获取Details of cleansing threshold policies
                     * @return ThresholdList Details of cleansing threshold policies
                     * 
                     */
                    std::vector<CCThresholdPolicy> GetThresholdList() const;

                    /**
                     * 判断参数 ThresholdList 是否已赋值
                     * @return ThresholdList 是否已赋值
                     * 
                     */
                    bool ThresholdListHasBeenSet() const;

                private:

                    /**
                     * Total number of cleansing threshold policies
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Details of cleansing threshold policies
                     */
                    std::vector<CCThresholdPolicy> m_thresholdList;
                    bool m_thresholdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCTHRESHOLDLISTRESPONSE_H_
