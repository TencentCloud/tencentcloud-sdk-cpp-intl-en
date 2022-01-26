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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Alarm notification recipient information
                */
                class NoticeReceiver : public AbstractModel
                {
                public:
                    NoticeReceiver();
                    ~NoticeReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recipient type. Valid values:
<br><li> `Uin`: user ID
<br><li> `Group`: user group ID
Currently, other recipient types are not supported.
                     * @return ReceiverType Recipient type. Valid values:
<br><li> `Uin`: user ID
<br><li> `Group`: user group ID
Currently, other recipient types are not supported.
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Recipient type. Valid values:
<br><li> `Uin`: user ID
<br><li> `Group`: user group ID
Currently, other recipient types are not supported.
                     * @param ReceiverType Recipient type. Valid values:
<br><li> `Uin`: user ID
<br><li> `Group`: user group ID
Currently, other recipient types are not supported.
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Recipient
                     * @return ReceiverIds Recipient
                     */
                    std::vector<int64_t> GetReceiverIds() const;

                    /**
                     * 设置Recipient
                     * @param ReceiverIds Recipient
                     */
                    void SetReceiverIds(const std::vector<int64_t>& _receiverIds);

                    /**
                     * 判断参数 ReceiverIds 是否已赋值
                     * @return ReceiverIds 是否已赋值
                     */
                    bool ReceiverIdsHasBeenSet() const;

                    /**
                     * 获取Notification method
<br><li> `Email`: email
<br><li> `Sms`: SMS
<br><li> `WeChat`: WeChat
<br><li> `Phone`: phone
                     * @return ReceiverChannels Notification method
<br><li> `Email`: email
<br><li> `Sms`: SMS
<br><li> `WeChat`: WeChat
<br><li> `Phone`: phone
                     */
                    std::vector<std::string> GetReceiverChannels() const;

                    /**
                     * 设置Notification method
<br><li> `Email`: email
<br><li> `Sms`: SMS
<br><li> `WeChat`: WeChat
<br><li> `Phone`: phone
                     * @param ReceiverChannels Notification method
<br><li> `Email`: email
<br><li> `Sms`: SMS
<br><li> `WeChat`: WeChat
<br><li> `Phone`: phone
                     */
                    void SetReceiverChannels(const std::vector<std::string>& _receiverChannels);

                    /**
                     * 判断参数 ReceiverChannels 是否已赋值
                     * @return ReceiverChannels 是否已赋值
                     */
                    bool ReceiverChannelsHasBeenSet() const;

                    /**
                     * 获取Start time for allowed message receipt
                     * @return StartTime Start time for allowed message receipt
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for allowed message receipt
                     * @param StartTime Start time for allowed message receipt
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time for allowed message receipt
                     * @return EndTime End time for allowed message receipt
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for allowed message receipt
                     * @param EndTime End time for allowed message receipt
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Index
                     * @return Index Index
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Index
                     * @param Index Index
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * Recipient type. Valid values:
<br><li> `Uin`: user ID
<br><li> `Group`: user group ID
Currently, other recipient types are not supported.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Recipient
                     */
                    std::vector<int64_t> m_receiverIds;
                    bool m_receiverIdsHasBeenSet;

                    /**
                     * Notification method
<br><li> `Email`: email
<br><li> `Sms`: SMS
<br><li> `WeChat`: WeChat
<br><li> `Phone`: phone
                     */
                    std::vector<std::string> m_receiverChannels;
                    bool m_receiverChannelsHasBeenSet;

                    /**
                     * Start time for allowed message receipt
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for allowed message receipt
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Index
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_
