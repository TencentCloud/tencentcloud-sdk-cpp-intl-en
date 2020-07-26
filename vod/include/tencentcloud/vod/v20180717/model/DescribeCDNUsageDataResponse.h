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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/StatDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNUsageData response structure.
                */
                class DescribeCDNUsageDataResponse : public AbstractModel
                {
                public:
                    DescribeCDNUsageDataResponse();
                    ~DescribeCDNUsageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Time granularity in minutes.
                     * @return DataInterval Time granularity in minutes.
                     */
                    int64_t GetDataInterval() const;

                    /**
                     * 判断参数 DataInterval 是否已赋值
                     * @return DataInterval 是否已赋值
                     */
                    bool DataIntervalHasBeenSet() const;

                    /**
                     * 获取CDN statistics.
                     * @return Data CDN statistics.
                     */
                    std::vector<StatDataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Time granularity in minutes.
                     */
                    int64_t m_dataInterval;
                    bool m_dataIntervalHasBeenSet;

                    /**
                     * CDN statistics.
                     */
                    std::vector<StatDataItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNUSAGEDATARESPONSE_H_
