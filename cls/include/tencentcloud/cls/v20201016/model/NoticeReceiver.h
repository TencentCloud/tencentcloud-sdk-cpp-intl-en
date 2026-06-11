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
                     * 获取Recipient type. Available values:
-Uin - User ID
-Group - User group ID
Other recipient types are not currently supported.
                     * @return ReceiverType Recipient type. Available values:
-Uin - User ID
-Group - User group ID
Other recipient types are not currently supported.
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置Recipient type. Available values:
-Uin - User ID
-Group - User group ID
Other recipient types are not currently supported.
                     * @param _receiverType Recipient type. Available values:
-Uin - User ID
-Group - User group ID
Other recipient types are not currently supported.
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取Recipient.
When ReceiverType is Uin, the value of ReceiverIds is the user uid. [Sub-user information query](https://www.tencentcloud.com/document/api/598/53486?from_cn_redirect=1)
When ReceiverType is Group, ReceiverIds is the user Group id. [CAM User Group](https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1)
                     * @return ReceiverIds Recipient.
When ReceiverType is Uin, the value of ReceiverIds is the user uid. [Sub-user information query](https://www.tencentcloud.com/document/api/598/53486?from_cn_redirect=1)
When ReceiverType is Group, ReceiverIds is the user Group id. [CAM User Group](https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1)
                     * 
                     */
                    std::vector<int64_t> GetReceiverIds() const;

                    /**
                     * 设置Recipient.
When ReceiverType is Uin, the value of ReceiverIds is the user uid. [Sub-user information query](https://www.tencentcloud.com/document/api/598/53486?from_cn_redirect=1)
When ReceiverType is Group, ReceiverIds is the user Group id. [CAM User Group](https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1)
                     * @param _receiverIds Recipient.
When ReceiverType is Uin, the value of ReceiverIds is the user uid. [Sub-user information query](https://www.tencentcloud.com/document/api/598/53486?from_cn_redirect=1)
When ReceiverType is Group, ReceiverIds is the user Group id. [CAM User Group](https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1)
                     * 
                     */
                    void SetReceiverIds(const std::vector<int64_t>& _receiverIds);

                    /**
                     * 判断参数 ReceiverIds 是否已赋值
                     * @return ReceiverIds 是否已赋值
                     * 
                     */
                    bool ReceiverIdsHasBeenSet() const;

                    /**
                     * 获取Notification receiving channel
-Mail
-Sms
-WeChat
-Phone - phone
                     * @return ReceiverChannels Notification receiving channel
-Mail
-Sms
-WeChat
-Phone - phone
                     * 
                     */
                    std::vector<std::string> GetReceiverChannels() const;

                    /**
                     * 设置Notification receiving channel
-Mail
-Sms
-WeChat
-Phone - phone
                     * @param _receiverChannels Notification receiving channel
-Mail
-Sms
-WeChat
-Phone - phone
                     * 
                     */
                    void SetReceiverChannels(const std::vector<std::string>& _receiverChannels);

                    /**
                     * 判断参数 ReceiverChannels 是否已赋值
                     * @return ReceiverChannels 是否已赋值
                     * 
                     */
                    bool ReceiverChannelsHasBeenSet() const;

                    /**
                     * 获取Notification content template ID. Use Default-zh to refer to the Default template (Chinese). Use Default-en to refer to DefaultTemplate (English). Get the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/product/614/111714?from_cn_redirect=1).
                     * @return NoticeContentId Notification content template ID. Use Default-zh to refer to the Default template (Chinese). Use Default-en to refer to DefaultTemplate (English). Get the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/product/614/111714?from_cn_redirect=1).
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置Notification content template ID. Use Default-zh to refer to the Default template (Chinese). Use Default-en to refer to DefaultTemplate (English). Get the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/product/614/111714?from_cn_redirect=1).
                     * @param _noticeContentId Notification content template ID. Use Default-zh to refer to the Default template (Chinese). Use Default-en to refer to DefaultTemplate (English). Get the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/product/614/111714?from_cn_redirect=1).
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                    /**
                     * 获取Start time to allow receipt of information. Format: `15:04:05`. Required.
                     * @return StartTime Start time to allow receipt of information. Format: `15:04:05`. Required.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time to allow receipt of information. Format: `15:04:05`. Required.
                     * @param _startTime Start time to allow receipt of information. Format: `15:04:05`. Required.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Allow receipt of information end time. Format: `15:04:05`. Required
                     * @return EndTime Allow receipt of information end time. Format: `15:04:05`. Required
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Allow receipt of information end time. Format: `15:04:05`. Required
                     * @param _endTime Allow receipt of information end time. Format: `15:04:05`. Required
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Bit order.

-Invalid when passed as an input parameter.
-Valid at that time.
                     * @return Index Bit order.

-Invalid when passed as an input parameter.
-Valid at that time.
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Bit order.

-Invalid when passed as an input parameter.
-Valid at that time.
                     * @param _index Bit order.

-Invalid when passed as an input parameter.
-Valid at that time.
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * Recipient type. Available values:
-Uin - User ID
-Group - User group ID
Other recipient types are not currently supported.
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * Recipient.
When ReceiverType is Uin, the value of ReceiverIds is the user uid. [Sub-user information query](https://www.tencentcloud.com/document/api/598/53486?from_cn_redirect=1)
When ReceiverType is Group, ReceiverIds is the user Group id. [CAM User Group](https://www.tencentcloud.com/document/product/598/34589?from_cn_redirect=1)
                     */
                    std::vector<int64_t> m_receiverIds;
                    bool m_receiverIdsHasBeenSet;

                    /**
                     * Notification receiving channel
-Mail
-Sms
-WeChat
-Phone - phone
                     */
                    std::vector<std::string> m_receiverChannels;
                    bool m_receiverChannelsHasBeenSet;

                    /**
                     * Notification content template ID. Use Default-zh to refer to the Default template (Chinese). Use Default-en to refer to DefaultTemplate (English). Get the notification content template ID by searching the notification content template (https://www.tencentcloud.com/document/product/614/111714?from_cn_redirect=1).
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * Start time to allow receipt of information. Format: `15:04:05`. Required.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Allow receipt of information end time. Format: `15:04:05`. Required
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Bit order.

-Invalid when passed as an input parameter.
-Valid at that time.
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERECEIVER_H_
