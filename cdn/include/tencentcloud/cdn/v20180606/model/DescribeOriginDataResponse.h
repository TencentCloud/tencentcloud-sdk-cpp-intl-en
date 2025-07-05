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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEORIGINDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEORIGINDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ResourceOriginData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeOriginData response structure.
                */
                class DescribeOriginDataResponse : public AbstractModel
                {
                public:
                    DescribeOriginDataResponse();
                    ~DescribeOriginDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Time granularity of data statistics, which supports `min` (1 minute), `5min` (5 minutes), `hour` (1 hour), and `day` (1 day).
                     * @return Interval Time granularity of data statistics, which supports `min` (1 minute), `5min` (5 minutes), `hour` (1 hour), and `day` (1 day).
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Origin-pull data details of each resource.
                     * @return Data Origin-pull data details of each resource.
                     * 
                     */
                    std::vector<ResourceOriginData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Time granularity of data statistics, which supports `min` (1 minute), `5min` (5 minutes), `hour` (1 hour), and `day` (1 day).
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Origin-pull data details of each resource.
                     */
                    std::vector<ResourceOriginData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEORIGINDATARESPONSE_H_
