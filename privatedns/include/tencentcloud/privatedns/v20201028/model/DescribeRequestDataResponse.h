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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATARESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/MetricData.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeRequestData response structure.
                */
                class DescribeRequestDataResponse : public AbstractModel
                {
                public:
                    DescribeRequestDataResponse();
                    ~DescribeRequestDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Request volume statistics table
                     * @return Data Request volume statistics table
                     * 
                     */
                    std::vector<MetricData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Request volume unit time. Valid values: Day, Hour
                     * @return Interval Request volume unit time. Valid values: Day, Hour
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * Request volume statistics table
                     */
                    std::vector<MetricData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Request volume unit time. Valid values: Day, Hour
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEREQUESTDATARESPONSE_H_
