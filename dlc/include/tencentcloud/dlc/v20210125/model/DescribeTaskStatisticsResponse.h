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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/StatisticInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTaskStatistics response structure.
                */
                class DescribeTaskStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeTaskStatisticsResponse();
                    ~DescribeTaskStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task statistics information.
                     * @return StatisticInfo Task statistics information.
                     * 
                     */
                    StatisticInfo GetStatisticInfo() const;

                    /**
                     * 判断参数 StatisticInfo 是否已赋值
                     * @return StatisticInfo 是否已赋值
                     * 
                     */
                    bool StatisticInfoHasBeenSet() const;

                private:

                    /**
                     * Task statistics information.
                     */
                    StatisticInfo m_statisticInfo;
                    bool m_statisticInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSTATISTICSRESPONSE_H_
