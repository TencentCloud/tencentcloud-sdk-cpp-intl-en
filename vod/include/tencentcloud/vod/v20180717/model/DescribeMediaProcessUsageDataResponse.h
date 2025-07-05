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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TaskStatData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeMediaProcessUsageData response structure.
                */
                class DescribeMediaProcessUsageDataResponse : public AbstractModel
                {
                public:
                    DescribeMediaProcessUsageDataResponse();
                    ~DescribeMediaProcessUsageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Overview of video processing statistics, which displays the overview and details of queried tasks.
                     * @return MediaProcessDataSet Overview of video processing statistics, which displays the overview and details of queried tasks.
                     * 
                     */
                    std::vector<TaskStatData> GetMediaProcessDataSet() const;

                    /**
                     * 判断参数 MediaProcessDataSet 是否已赋值
                     * @return MediaProcessDataSet 是否已赋值
                     * 
                     */
                    bool MediaProcessDataSetHasBeenSet() const;

                private:

                    /**
                     * Overview of video processing statistics, which displays the overview and details of queried tasks.
                     */
                    std::vector<TaskStatData> m_mediaProcessDataSet;
                    bool m_mediaProcessDataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAPROCESSUSAGEDATARESPONSE_H_
