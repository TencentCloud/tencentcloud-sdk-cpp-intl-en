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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/FlowSRTInfo.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowSRTStatistics response structure.
                */
                class DescribeStreamLinkFlowSRTStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowSRTStatisticsResponse();
                    ~DescribeStreamLinkFlowSRTStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取A list of the SRT streaming performance data.
                     * @return Infos A list of the SRT streaming performance data.
                     * 
                     */
                    std::vector<FlowSRTInfo> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * A list of the SRT streaming performance data.
                     */
                    std::vector<FlowSRTInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWSRTSTATISTICSRESPONSE_H_
