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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSRESPONSE_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/FlowRealtimeStatusItem.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * DescribeStreamLinkFlowRealtimeStatus response structure.
                */
                class DescribeStreamLinkFlowRealtimeStatusResponse : public AbstractModel
                {
                public:
                    DescribeStreamLinkFlowRealtimeStatusResponse();
                    ~DescribeStreamLinkFlowRealtimeStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The timestamp (seconds) of the query.
                     * @return Timestamp The timestamp (seconds) of the query.
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取A list of the real-time data.
                     * @return Datas A list of the real-time data.
                     */
                    std::vector<FlowRealtimeStatusItem> GetDatas() const;

                    /**
                     * 判断参数 Datas 是否已赋值
                     * @return Datas 是否已赋值
                     */
                    bool DatasHasBeenSet() const;

                private:

                    /**
                     * The timestamp (seconds) of the query.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * A list of the real-time data.
                     */
                    std::vector<FlowRealtimeStatusItem> m_datas;
                    bool m_datasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBESTREAMLINKFLOWREALTIMESTATUSRESPONSE_H_
