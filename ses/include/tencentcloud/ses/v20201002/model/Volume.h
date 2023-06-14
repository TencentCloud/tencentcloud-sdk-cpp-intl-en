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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Statistics structure.
                */
                class Volume : public AbstractModel
                {
                public:
                    Volume();
                    ~Volume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SendDate Date
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSendDate() const;

                    /**
                     * 设置Date
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _sendDate Date
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSendDate(const std::string& _sendDate);

                    /**
                     * 判断参数 SendDate 是否已赋值
                     * @return SendDate 是否已赋值
                     * 
                     */
                    bool SendDateHasBeenSet() const;

                    /**
                     * 获取Number of email requests.
                     * @return RequestCount Number of email requests.
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置Number of email requests.
                     * @param _requestCount Number of email requests.
                     * 
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取Number of email requests accepted by Tencent Cloud.
                     * @return AcceptedCount Number of email requests accepted by Tencent Cloud.
                     * 
                     */
                    uint64_t GetAcceptedCount() const;

                    /**
                     * 设置Number of email requests accepted by Tencent Cloud.
                     * @param _acceptedCount Number of email requests accepted by Tencent Cloud.
                     * 
                     */
                    void SetAcceptedCount(const uint64_t& _acceptedCount);

                    /**
                     * 判断参数 AcceptedCount 是否已赋值
                     * @return AcceptedCount 是否已赋值
                     * 
                     */
                    bool AcceptedCountHasBeenSet() const;

                    /**
                     * 获取Number of delivered emails.
                     * @return DeliveredCount Number of delivered emails.
                     * 
                     */
                    uint64_t GetDeliveredCount() const;

                    /**
                     * 设置Number of delivered emails.
                     * @param _deliveredCount Number of delivered emails.
                     * 
                     */
                    void SetDeliveredCount(const uint64_t& _deliveredCount);

                    /**
                     * 判断参数 DeliveredCount 是否已赋值
                     * @return DeliveredCount 是否已赋值
                     * 
                     */
                    bool DeliveredCountHasBeenSet() const;

                    /**
                     * 获取Number of users (deduplicated) who opened emails.
                     * @return OpenedCount Number of users (deduplicated) who opened emails.
                     * 
                     */
                    uint64_t GetOpenedCount() const;

                    /**
                     * 设置Number of users (deduplicated) who opened emails.
                     * @param _openedCount Number of users (deduplicated) who opened emails.
                     * 
                     */
                    void SetOpenedCount(const uint64_t& _openedCount);

                    /**
                     * 判断参数 OpenedCount 是否已赋值
                     * @return OpenedCount 是否已赋值
                     * 
                     */
                    bool OpenedCountHasBeenSet() const;

                    /**
                     * 获取Number of recipients who clicked on links in emails.
                     * @return ClickedCount Number of recipients who clicked on links in emails.
                     * 
                     */
                    uint64_t GetClickedCount() const;

                    /**
                     * 设置Number of recipients who clicked on links in emails.
                     * @param _clickedCount Number of recipients who clicked on links in emails.
                     * 
                     */
                    void SetClickedCount(const uint64_t& _clickedCount);

                    /**
                     * 判断参数 ClickedCount 是否已赋值
                     * @return ClickedCount 是否已赋值
                     * 
                     */
                    bool ClickedCountHasBeenSet() const;

                    /**
                     * 获取Number of bounced emails.
                     * @return BounceCount Number of bounced emails.
                     * 
                     */
                    uint64_t GetBounceCount() const;

                    /**
                     * 设置Number of bounced emails.
                     * @param _bounceCount Number of bounced emails.
                     * 
                     */
                    void SetBounceCount(const uint64_t& _bounceCount);

                    /**
                     * 判断参数 BounceCount 是否已赋值
                     * @return BounceCount 是否已赋值
                     * 
                     */
                    bool BounceCountHasBeenSet() const;

                    /**
                     * 获取Number of users who canceled subscriptions.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return UnsubscribeCount Number of users who canceled subscriptions.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUnsubscribeCount() const;

                    /**
                     * 设置Number of users who canceled subscriptions.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _unsubscribeCount Number of users who canceled subscriptions.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnsubscribeCount(const uint64_t& _unsubscribeCount);

                    /**
                     * 判断参数 UnsubscribeCount 是否已赋值
                     * @return UnsubscribeCount 是否已赋值
                     * 
                     */
                    bool UnsubscribeCountHasBeenSet() const;

                private:

                    /**
                     * Date
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_sendDate;
                    bool m_sendDateHasBeenSet;

                    /**
                     * Number of email requests.
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * Number of email requests accepted by Tencent Cloud.
                     */
                    uint64_t m_acceptedCount;
                    bool m_acceptedCountHasBeenSet;

                    /**
                     * Number of delivered emails.
                     */
                    uint64_t m_deliveredCount;
                    bool m_deliveredCountHasBeenSet;

                    /**
                     * Number of users (deduplicated) who opened emails.
                     */
                    uint64_t m_openedCount;
                    bool m_openedCountHasBeenSet;

                    /**
                     * Number of recipients who clicked on links in emails.
                     */
                    uint64_t m_clickedCount;
                    bool m_clickedCountHasBeenSet;

                    /**
                     * Number of bounced emails.
                     */
                    uint64_t m_bounceCount;
                    bool m_bounceCountHasBeenSet;

                    /**
                     * Number of users who canceled subscriptions.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_unsubscribeCount;
                    bool m_unsubscribeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_VOLUME_H_
