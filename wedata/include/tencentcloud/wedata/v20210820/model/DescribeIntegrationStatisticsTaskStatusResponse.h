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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationStatisticsTaskStatus response structure.
                */
                class DescribeIntegrationStatisticsTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationStatisticsTaskStatusResponse();
                    ~DescribeIntegrationStatisticsTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistical ResultsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StatusData Statistical ResultsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatusData() const;

                    /**
                     * 判断参数 StatusData 是否已赋值
                     * @return StatusData 是否已赋值
                     * 
                     */
                    bool StatusDataHasBeenSet() const;

                private:

                    /**
                     * Statistical ResultsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_statusData;
                    bool m_statusDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONSTATISTICSTASKSTATUSRESPONSE_H_
