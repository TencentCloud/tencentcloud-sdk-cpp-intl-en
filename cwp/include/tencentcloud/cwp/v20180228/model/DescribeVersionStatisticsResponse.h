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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERSIONSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERSIONSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVersionStatistics response structure.
                */
                class DescribeVersionStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeVersionStatisticsResponse();
                    ~DescribeVersionStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of Basic editions
                     * @return BasicVersionNum Number of Basic editions
                     * 
                     */
                    uint64_t GetBasicVersionNum() const;

                    /**
                     * 判断参数 BasicVersionNum 是否已赋值
                     * @return BasicVersionNum 是否已赋值
                     * 
                     */
                    bool BasicVersionNumHasBeenSet() const;

                    /**
                     * 获取Number of Professional editions
                     * @return ProVersionNum Number of Professional editions
                     * 
                     */
                    uint64_t GetProVersionNum() const;

                    /**
                     * 判断参数 ProVersionNum 是否已赋值
                     * @return ProVersionNum 是否已赋值
                     * 
                     */
                    bool ProVersionNumHasBeenSet() const;

                    /**
                     * 获取Number of Ultimate editions
                     * @return UltimateVersionNum Number of Ultimate editions
                     * 
                     */
                    uint64_t GetUltimateVersionNum() const;

                    /**
                     * 判断参数 UltimateVersionNum 是否已赋值
                     * @return UltimateVersionNum 是否已赋值
                     * 
                     */
                    bool UltimateVersionNumHasBeenSet() const;

                    /**
                     * 获取Number of General Discount Editions
                     * @return GeneralVersionNum Number of General Discount Editions
                     * 
                     */
                    uint64_t GetGeneralVersionNum() const;

                    /**
                     * 判断参数 GeneralVersionNum 是否已赋值
                     * @return GeneralVersionNum 是否已赋值
                     * 
                     */
                    bool GeneralVersionNumHasBeenSet() const;

                private:

                    /**
                     * Number of Basic editions
                     */
                    uint64_t m_basicVersionNum;
                    bool m_basicVersionNumHasBeenSet;

                    /**
                     * Number of Professional editions
                     */
                    uint64_t m_proVersionNum;
                    bool m_proVersionNumHasBeenSet;

                    /**
                     * Number of Ultimate editions
                     */
                    uint64_t m_ultimateVersionNum;
                    bool m_ultimateVersionNumHasBeenSet;

                    /**
                     * Number of General Discount Editions
                     */
                    uint64_t m_generalVersionNum;
                    bool m_generalVersionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVERSIONSTATISTICSRESPONSE_H_
