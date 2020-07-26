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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYSUMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYSUMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Queries playback information by district/ISP.
                */
                class ProIspPlaySumInfo : public AbstractModel
                {
                public:
                    ProIspPlaySumInfo();
                    ~ProIspPlaySumInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取District/ISP/country/region.
                     * @return Name District/ISP/country/region.
                     */
                    std::string GetName() const;

                    /**
                     * 设置District/ISP/country/region.
                     * @param Name District/ISP/country/region.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Total traffic in MB.
                     * @return TotalFlux Total traffic in MB.
                     */
                    double GetTotalFlux() const;

                    /**
                     * 设置Total traffic in MB.
                     * @param TotalFlux Total traffic in MB.
                     */
                    void SetTotalFlux(const double& _totalFlux);

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取Total number of requests.
                     * @return TotalRequest Total number of requests.
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 设置Total number of requests.
                     * @param TotalRequest Total number of requests.
                     */
                    void SetTotalRequest(const uint64_t& _totalRequest);

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     */
                    bool TotalRequestHasBeenSet() const;

                    /**
                     * 获取Average download traffic in MB/s.
                     * @return AvgFluxPerSecond Average download traffic in MB/s.
                     */
                    double GetAvgFluxPerSecond() const;

                    /**
                     * 设置Average download traffic in MB/s.
                     * @param AvgFluxPerSecond Average download traffic in MB/s.
                     */
                    void SetAvgFluxPerSecond(const double& _avgFluxPerSecond);

                    /**
                     * 判断参数 AvgFluxPerSecond 是否已赋值
                     * @return AvgFluxPerSecond 是否已赋值
                     */
                    bool AvgFluxPerSecondHasBeenSet() const;

                private:

                    /**
                     * District/ISP/country/region.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Total traffic in MB.
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * Total number of requests.
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                    /**
                     * Average download traffic in MB/s.
                     */
                    double m_avgFluxPerSecond;
                    bool m_avgFluxPerSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PROISPPLAYSUMINFO_H_
