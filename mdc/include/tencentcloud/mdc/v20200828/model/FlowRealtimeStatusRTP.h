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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSRTP_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSRTP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The real-time RTP streaming information of a flow.
                */
                class FlowRealtimeStatusRTP : public AbstractModel
                {
                public:
                    FlowRealtimeStatusRTP();
                    ~FlowRealtimeStatusRTP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The number of packets transmitted.
                     * @return Packets The number of packets transmitted.
                     * 
                     */
                    int64_t GetPackets() const;

                    /**
                     * 设置The number of packets transmitted.
                     * @param _packets The number of packets transmitted.
                     * 
                     */
                    void SetPackets(const int64_t& _packets);

                    /**
                     * 判断参数 Packets 是否已赋值
                     * @return Packets 是否已赋值
                     * 
                     */
                    bool PacketsHasBeenSet() const;

                private:

                    /**
                     * The number of packets transmitted.
                     */
                    int64_t m_packets;
                    bool m_packetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSRTP_H_
