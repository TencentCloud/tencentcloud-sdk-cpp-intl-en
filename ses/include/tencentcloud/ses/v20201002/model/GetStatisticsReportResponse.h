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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Volume.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * GetStatisticsReport response structure.
                */
                class GetStatisticsReportResponse : public AbstractModel
                {
                public:
                    GetStatisticsReportResponse();
                    ~GetStatisticsReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Daily email sending statistics.
                     * @return DailyVolumes Daily email sending statistics.
                     * 
                     */
                    std::vector<Volume> GetDailyVolumes() const;

                    /**
                     * 判断参数 DailyVolumes 是否已赋值
                     * @return DailyVolumes 是否已赋值
                     * 
                     */
                    bool DailyVolumesHasBeenSet() const;

                    /**
                     * 获取Overall email sending statistics.
                     * @return OverallVolume Overall email sending statistics.
                     * 
                     */
                    Volume GetOverallVolume() const;

                    /**
                     * 判断参数 OverallVolume 是否已赋值
                     * @return OverallVolume 是否已赋值
                     * 
                     */
                    bool OverallVolumeHasBeenSet() const;

                private:

                    /**
                     * Daily email sending statistics.
                     */
                    std::vector<Volume> m_dailyVolumes;
                    bool m_dailyVolumesHasBeenSet;

                    /**
                     * Overall email sending statistics.
                     */
                    Volume m_overallVolume;
                    bool m_overallVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETSTATISTICSREPORTRESPONSE_H_
