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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * Receipt statistics response packet
                */
                class CallbackStatusStatistics : public AbstractModel
                {
                public:
                    CallbackStatusStatistics();
                    ~CallbackStatusStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SMS receipts.
                     * @return CallbackCount SMS receipts.
                     */
                    uint64_t GetCallbackCount() const;

                    /**
                     * 设置SMS receipts.
                     * @param CallbackCount SMS receipts.
                     */
                    void SetCallbackCount(const uint64_t& _callbackCount);

                    /**
                     * 判断参数 CallbackCount 是否已赋值
                     * @return CallbackCount 是否已赋值
                     */
                    bool CallbackCountHasBeenSet() const;

                    /**
                     * 获取Successfully submitted SMS messages.
                     * @return RequestSuccessCount Successfully submitted SMS messages.
                     */
                    uint64_t GetRequestSuccessCount() const;

                    /**
                     * 设置Successfully submitted SMS messages.
                     * @param RequestSuccessCount Successfully submitted SMS messages.
                     */
                    void SetRequestSuccessCount(const uint64_t& _requestSuccessCount);

                    /**
                     * 判断参数 RequestSuccessCount 是否已赋值
                     * @return RequestSuccessCount 是否已赋值
                     */
                    bool RequestSuccessCountHasBeenSet() const;

                    /**
                     * 获取Failed SMS receipts.
                     * @return CallbackFailCount Failed SMS receipts.
                     */
                    uint64_t GetCallbackFailCount() const;

                    /**
                     * 设置Failed SMS receipts.
                     * @param CallbackFailCount Failed SMS receipts.
                     */
                    void SetCallbackFailCount(const uint64_t& _callbackFailCount);

                    /**
                     * 判断参数 CallbackFailCount 是否已赋值
                     * @return CallbackFailCount 是否已赋值
                     */
                    bool CallbackFailCountHasBeenSet() const;

                    /**
                     * 获取Successful SMS receipts.
                     * @return CallbackSuccessCount Successful SMS receipts.
                     */
                    uint64_t GetCallbackSuccessCount() const;

                    /**
                     * 设置Successful SMS receipts.
                     * @param CallbackSuccessCount Successful SMS receipts.
                     */
                    void SetCallbackSuccessCount(const uint64_t& _callbackSuccessCount);

                    /**
                     * 判断参数 CallbackSuccessCount 是否已赋值
                     * @return CallbackSuccessCount 是否已赋值
                     */
                    bool CallbackSuccessCountHasBeenSet() const;

                    /**
                     * 获取Internal carrier errors.
                     * @return InternalErrorCount Internal carrier errors.
                     */
                    uint64_t GetInternalErrorCount() const;

                    /**
                     * 设置Internal carrier errors.
                     * @param InternalErrorCount Internal carrier errors.
                     */
                    void SetInternalErrorCount(const uint64_t& _internalErrorCount);

                    /**
                     * 判断参数 InternalErrorCount 是否已赋值
                     * @return InternalErrorCount 是否已赋值
                     */
                    bool InternalErrorCountHasBeenSet() const;

                    /**
                     * 获取Invalid or empty mobile numbers.
                     * @return InvalidNumberCount Invalid or empty mobile numbers.
                     */
                    uint64_t GetInvalidNumberCount() const;

                    /**
                     * 设置Invalid or empty mobile numbers.
                     * @param InvalidNumberCount Invalid or empty mobile numbers.
                     */
                    void SetInvalidNumberCount(const uint64_t& _invalidNumberCount);

                    /**
                     * 判断参数 InvalidNumberCount 是否已赋值
                     * @return InvalidNumberCount 是否已赋值
                     */
                    bool InvalidNumberCountHasBeenSet() const;

                    /**
                     * 获取Errors such as out-of-service or power-off.
                     * @return ShutdownErrorCount Errors such as out-of-service or power-off.
                     */
                    uint64_t GetShutdownErrorCount() const;

                    /**
                     * 设置Errors such as out-of-service or power-off.
                     * @param ShutdownErrorCount Errors such as out-of-service or power-off.
                     */
                    void SetShutdownErrorCount(const uint64_t& _shutdownErrorCount);

                    /**
                     * 判断参数 ShutdownErrorCount 是否已赋值
                     * @return ShutdownErrorCount 是否已赋值
                     */
                    bool ShutdownErrorCountHasBeenSet() const;

                    /**
                     * 获取Blacklisted mobile numbers.
                     * @return BlackListCount Blacklisted mobile numbers.
                     */
                    uint64_t GetBlackListCount() const;

                    /**
                     * 设置Blacklisted mobile numbers.
                     * @param BlackListCount Blacklisted mobile numbers.
                     */
                    void SetBlackListCount(const uint64_t& _blackListCount);

                    /**
                     * 判断参数 BlackListCount 是否已赋值
                     * @return BlackListCount 是否已赋值
                     */
                    bool BlackListCountHasBeenSet() const;

                    /**
                     * 获取Carrier frequency limit hits.
                     * @return FrequencyLimitCount Carrier frequency limit hits.
                     */
                    uint64_t GetFrequencyLimitCount() const;

                    /**
                     * 设置Carrier frequency limit hits.
                     * @param FrequencyLimitCount Carrier frequency limit hits.
                     */
                    void SetFrequencyLimitCount(const uint64_t& _frequencyLimitCount);

                    /**
                     * 判断参数 FrequencyLimitCount 是否已赋值
                     * @return FrequencyLimitCount 是否已赋值
                     */
                    bool FrequencyLimitCountHasBeenSet() const;

                private:

                    /**
                     * SMS receipts.
                     */
                    uint64_t m_callbackCount;
                    bool m_callbackCountHasBeenSet;

                    /**
                     * Successfully submitted SMS messages.
                     */
                    uint64_t m_requestSuccessCount;
                    bool m_requestSuccessCountHasBeenSet;

                    /**
                     * Failed SMS receipts.
                     */
                    uint64_t m_callbackFailCount;
                    bool m_callbackFailCountHasBeenSet;

                    /**
                     * Successful SMS receipts.
                     */
                    uint64_t m_callbackSuccessCount;
                    bool m_callbackSuccessCountHasBeenSet;

                    /**
                     * Internal carrier errors.
                     */
                    uint64_t m_internalErrorCount;
                    bool m_internalErrorCountHasBeenSet;

                    /**
                     * Invalid or empty mobile numbers.
                     */
                    uint64_t m_invalidNumberCount;
                    bool m_invalidNumberCountHasBeenSet;

                    /**
                     * Errors such as out-of-service or power-off.
                     */
                    uint64_t m_shutdownErrorCount;
                    bool m_shutdownErrorCountHasBeenSet;

                    /**
                     * Blacklisted mobile numbers.
                     */
                    uint64_t m_blackListCount;
                    bool m_blackListCountHasBeenSet;

                    /**
                     * Carrier frequency limit hits.
                     */
                    uint64_t m_frequencyLimitCount;
                    bool m_frequencyLimitCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_CALLBACKSTATUSSTATISTICS_H_
