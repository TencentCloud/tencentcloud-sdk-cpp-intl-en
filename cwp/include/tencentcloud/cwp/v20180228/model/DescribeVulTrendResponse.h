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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTRENDRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTRENDRESPONSE_H_

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
                * DescribeVulTrend response structure.
                */
                class DescribeVulTrendResponse : public AbstractModel
                {
                public:
                    DescribeVulTrendResponse();
                    ~DescribeVulTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of vulnerability exploitation attacks in the past six months
                     * @return VulEventCount Number of vulnerability exploitation attacks in the past six months
                     * 
                     */
                    uint64_t GetVulEventCount() const;

                    /**
                     * 判断参数 VulEventCount 是否已赋值
                     * @return VulEventCount 是否已赋值
                     * 
                     */
                    bool VulEventCountHasBeenSet() const;

                    /**
                     * 获取Number of new vulnerability exploitation attacks in the past six months
                     * @return IncreaseVulEventCount Number of new vulnerability exploitation attacks in the past six months
                     * 
                     */
                    uint64_t GetIncreaseVulEventCount() const;

                    /**
                     * 判断参数 IncreaseVulEventCount 是否已赋值
                     * @return IncreaseVulEventCount 是否已赋值
                     * 
                     */
                    bool IncreaseVulEventCountHasBeenSet() const;

                    /**
                     * 获取Notable vulnerabilities attacked in the past six months
                     * @return HotVulCount Notable vulnerabilities attacked in the past six months
                     * 
                     */
                    uint64_t GetHotVulCount() const;

                    /**
                     * 判断参数 HotVulCount 是否已赋值
                     * @return HotVulCount 是否已赋值
                     * 
                     */
                    bool HotVulCountHasBeenSet() const;

                    /**
                     * 获取New notable vulnerabilities attacked in the past six months
                     * @return IncreaseHotVulCount New notable vulnerabilities attacked in the past six months
                     * 
                     */
                    uint64_t GetIncreaseHotVulCount() const;

                    /**
                     * 判断参数 IncreaseHotVulCount 是否已赋值
                     * @return IncreaseHotVulCount 是否已赋值
                     * 
                     */
                    bool IncreaseHotVulCountHasBeenSet() const;

                private:

                    /**
                     * Number of vulnerability exploitation attacks in the past six months
                     */
                    uint64_t m_vulEventCount;
                    bool m_vulEventCountHasBeenSet;

                    /**
                     * Number of new vulnerability exploitation attacks in the past six months
                     */
                    uint64_t m_increaseVulEventCount;
                    bool m_increaseVulEventCountHasBeenSet;

                    /**
                     * Notable vulnerabilities attacked in the past six months
                     */
                    uint64_t m_hotVulCount;
                    bool m_hotVulCountHasBeenSet;

                    /**
                     * New notable vulnerabilities attacked in the past six months
                     */
                    uint64_t m_increaseHotVulCount;
                    bool m_increaseHotVulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTRENDRESPONSE_H_
