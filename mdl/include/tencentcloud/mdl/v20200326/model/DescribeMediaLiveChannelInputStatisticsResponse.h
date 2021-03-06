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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEMEDIALIVECHANNELINPUTSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEMEDIALIVECHANNELINPUTSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/ChannelInputStatistics.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DescribeMediaLiveChannelInputStatistics response structure.
                */
                class DescribeMediaLiveChannelInputStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeMediaLiveChannelInputStatisticsResponse();
                    ~DescribeMediaLiveChannelInputStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Channel input statistics array.
                     * @return Infos Channel input statistics array.
                     */
                    std::vector<ChannelInputStatistics> GetInfos() const;

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * Channel input statistics array.
                     */
                    std::vector<ChannelInputStatistics> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBEMEDIALIVECHANNELINPUTSTATISTICSRESPONSE_H_
