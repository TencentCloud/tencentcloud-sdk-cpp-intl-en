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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The event information, including the timestamp and event ID.
                */
                class EventMessage : public AbstractModel
                {
                public:
                    EventMessage();
                    ~EventMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The video stream type. Valid values:
`0`: A non-video event
`2`: The big video
`3`: The small video
`7`: A relayed video
                     * @return Type The video stream type. Valid values:
`0`: A non-video event
`2`: The big video
`3`: The small video
`7`: A relayed video
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置The video stream type. Valid values:
`0`: A non-video event
`2`: The big video
`3`: The small video
`7`: A relayed video
                     * @param Type The video stream type. Valid values:
`0`: A non-video event
`2`: The big video
`3`: The small video
`7`: A relayed video
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The event reporting time in the format of UNIX timestamp (milliseconds), such as `1589891188801`.
                     * @return Time The event reporting time in the format of UNIX timestamp (milliseconds), such as `1589891188801`.
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置The event reporting time in the format of UNIX timestamp (milliseconds), such as `1589891188801`.
                     * @param Time The event reporting time in the format of UNIX timestamp (milliseconds), such as `1589891188801`.
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The event ID. Events are classified into SDK events and WebRTC events. For more information, see https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     * @return EventId The event ID. Events are classified into SDK events and WebRTC events. For more information, see https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置The event ID. Events are classified into SDK events and WebRTC events. For more information, see https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     * @param EventId The event ID. Events are classified into SDK events and WebRTC events. For more information, see https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取The first event parameter, such as the video width.
                     * @return ParamOne The first event parameter, such as the video width.
                     */
                    int64_t GetParamOne() const;

                    /**
                     * 设置The first event parameter, such as the video width.
                     * @param ParamOne The first event parameter, such as the video width.
                     */
                    void SetParamOne(const int64_t& _paramOne);

                    /**
                     * 判断参数 ParamOne 是否已赋值
                     * @return ParamOne 是否已赋值
                     */
                    bool ParamOneHasBeenSet() const;

                    /**
                     * 获取The second event parameter, such as the video height.
                     * @return ParamTwo The second event parameter, such as the video height.
                     */
                    int64_t GetParamTwo() const;

                    /**
                     * 设置The second event parameter, such as the video height.
                     * @param ParamTwo The second event parameter, such as the video height.
                     */
                    void SetParamTwo(const int64_t& _paramTwo);

                    /**
                     * 判断参数 ParamTwo 是否已赋值
                     * @return ParamTwo 是否已赋值
                     */
                    bool ParamTwoHasBeenSet() const;

                private:

                    /**
                     * The video stream type. Valid values:
`0`: A non-video event
`2`: The big video
`3`: The small video
`7`: A relayed video
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The event reporting time in the format of UNIX timestamp (milliseconds), such as `1589891188801`.
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The event ID. Events are classified into SDK events and WebRTC events. For more information, see https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * The first event parameter, such as the video width.
                     */
                    int64_t m_paramOne;
                    bool m_paramOneHasBeenSet;

                    /**
                     * The second event parameter, such as the video height.
                     */
                    int64_t m_paramTwo;
                    bool m_paramTwoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_
