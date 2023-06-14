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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSCOMMON_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSCOMMON_H_

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
                * The common real-time status information of a flow.
                */
                class FlowRealtimeStatusCommon : public AbstractModel
                {
                public:
                    FlowRealtimeStatusCommon();
                    ~FlowRealtimeStatusCommon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The connection status. Valid values: Connected, Waiting, Idle.
                     * @return State The connection status. Valid values: Connected, Waiting, Idle.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置The connection status. Valid values: Connected, Waiting, Idle.
                     * @param _state The connection status. Valid values: Connected, Waiting, Idle.
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取The connection mode. Valid values: Listener, Caller.
                     * @return Mode The connection mode. Valid values: Listener, Caller.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The connection mode. Valid values: Listener, Caller.
                     * @param _mode The connection mode. Valid values: Listener, Caller.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取The connected time.
                     * @return ConnectedTime The connected time.
                     * 
                     */
                    int64_t GetConnectedTime() const;

                    /**
                     * 设置The connected time.
                     * @param _connectedTime The connected time.
                     * 
                     */
                    void SetConnectedTime(const int64_t& _connectedTime);

                    /**
                     * 判断参数 ConnectedTime 是否已赋值
                     * @return ConnectedTime 是否已赋值
                     * 
                     */
                    bool ConnectedTimeHasBeenSet() const;

                    /**
                     * 获取The real-time bitrate (bps).
                     * @return Bitrate The real-time bitrate (bps).
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置The real-time bitrate (bps).
                     * @param _bitrate The real-time bitrate (bps).
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取The number of retries.
                     * @return Reconnections The number of retries.
                     * 
                     */
                    int64_t GetReconnections() const;

                    /**
                     * 设置The number of retries.
                     * @param _reconnections The number of retries.
                     * 
                     */
                    void SetReconnections(const int64_t& _reconnections);

                    /**
                     * 判断参数 Reconnections 是否已赋值
                     * @return Reconnections 是否已赋值
                     * 
                     */
                    bool ReconnectionsHasBeenSet() const;

                private:

                    /**
                     * The connection status. Valid values: Connected, Waiting, Idle.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * The connection mode. Valid values: Listener, Caller.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The connected time.
                     */
                    int64_t m_connectedTime;
                    bool m_connectedTimeHasBeenSet;

                    /**
                     * The real-time bitrate (bps).
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * The number of retries.
                     */
                    int64_t m_reconnections;
                    bool m_reconnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWREALTIMESTATUSCOMMON_H_
