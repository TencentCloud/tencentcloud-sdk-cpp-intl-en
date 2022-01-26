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
                * Event information, including event timestamp and event ID.
                */
                class EventMessage : public AbstractModel
                {
                public:
                    EventMessage();
                    ~EventMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video stream type:
0: non-video event;
2: big image;
3: small image;
7: relayed stream image.
                     * @return Type Video stream type:
0: non-video event;
2: big image;
3: small image;
7: relayed stream image.
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Video stream type:
0: non-video event;
2: big image;
3: small image;
7: relayed stream image.
                     * @param Type Video stream type:
0: non-video event;
2: big image;
3: small image;
7: relayed stream image.
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Event reporting time in the format of UNIX timestamp, such as 1589891188801ms
                     * @return Time Event reporting time in the format of UNIX timestamp, such as 1589891188801ms
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Event reporting time in the format of UNIX timestamp, such as 1589891188801ms
                     * @param Time Event reporting time in the format of UNIX timestamp, such as 1589891188801ms
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Event ID. Events divide into SDK events and WebRTC events. For more information, please see Appendix - Event ID Mapping Table at https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     * @return EventId Event ID. Events divide into SDK events and WebRTC events. For more information, please see Appendix - Event ID Mapping Table at https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID. Events divide into SDK events and WebRTC events. For more information, please see Appendix - Event ID Mapping Table at https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     * @param EventId Event ID. Events divide into SDK events and WebRTC events. For more information, please see Appendix - Event ID Mapping Table at https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取First event parameter, such as video resolution width
                     * @return ParamOne First event parameter, such as video resolution width
                     */
                    int64_t GetParamOne() const;

                    /**
                     * 设置First event parameter, such as video resolution width
                     * @param ParamOne First event parameter, such as video resolution width
                     */
                    void SetParamOne(const int64_t& _paramOne);

                    /**
                     * 判断参数 ParamOne 是否已赋值
                     * @return ParamOne 是否已赋值
                     */
                    bool ParamOneHasBeenSet() const;

                    /**
                     * 获取Second event parameter, such as video resolution height
                     * @return ParamTwo Second event parameter, such as video resolution height
                     */
                    int64_t GetParamTwo() const;

                    /**
                     * 设置Second event parameter, such as video resolution height
                     * @param ParamTwo Second event parameter, such as video resolution height
                     */
                    void SetParamTwo(const int64_t& _paramTwo);

                    /**
                     * 判断参数 ParamTwo 是否已赋值
                     * @return ParamTwo 是否已赋值
                     */
                    bool ParamTwoHasBeenSet() const;

                private:

                    /**
                     * Video stream type:
0: non-video event;
2: big image;
3: small image;
7: relayed stream image.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Event reporting time in the format of UNIX timestamp, such as 1589891188801ms
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Event ID. Events divide into SDK events and WebRTC events. For more information, please see Appendix - Event ID Mapping Table at https://intl.cloud.tencent.com/document/product/647/44916?from_cn_redirect=1
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * First event parameter, such as video resolution width
                     */
                    int64_t m_paramOne;
                    bool m_paramOneHasBeenSet;

                    /**
                     * Second event parameter, such as video resolution height
                     */
                    int64_t m_paramTwo;
                    bool m_paramTwoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_EVENTMESSAGE_H_
