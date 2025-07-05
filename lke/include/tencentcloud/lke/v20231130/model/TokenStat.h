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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TOKENSTAT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TOKENSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Procedure.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Current executed token statistical information.
                */
                class TokenStat : public AbstractModel
                {
                public:
                    TokenStat();
                    ~TokenStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Session ID.
                     * @return SessionId Session ID.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Session ID.
                     * @param _sessionId Session ID.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Request ID.
                     * @return RequestId Request ID.
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置Request ID.
                     * @param _requestId Request ID.
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取It corresponds to a session, session id, used for storing messages for answering. It can be generated in advance, used when saving messages.
                     * @return RecordId It corresponds to a session, session id, used for storing messages for answering. It can be generated in advance, used when saving messages.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置It corresponds to a session, session id, used for storing messages for answering. It can be generated in advance, used when saving messages.
                     * @param _recordId It corresponds to a session, session id, used for storing messages for answering. It can be generated in advance, used when saving messages.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Number of consumed tokens.
                     * @return UsedCount Number of consumed tokens.
                     * 
                     */
                    uint64_t GetUsedCount() const;

                    /**
                     * 设置Number of consumed tokens.
                     * @param _usedCount Number of consumed tokens.
                     * 
                     */
                    void SetUsedCount(const uint64_t& _usedCount);

                    /**
                     * 判断参数 UsedCount 是否已赋值
                     * @return UsedCount 是否已赋值
                     * 
                     */
                    bool UsedCountHasBeenSet() const;

                    /**
                     * 获取Number of free tokens.
                     * @return FreeCount Number of free tokens.
                     * 
                     */
                    uint64_t GetFreeCount() const;

                    /**
                     * 设置Number of free tokens.
                     * @param _freeCount Number of free tokens.
                     * 
                     */
                    void SetFreeCount(const uint64_t& _freeCount);

                    /**
                     * 判断参数 FreeCount 是否已赋值
                     * @return FreeCount 是否已赋值
                     * 
                     */
                    bool FreeCountHasBeenSet() const;

                    /**
                     * 获取Total number of tokens for orders.
                     * @return OrderCount Total number of tokens for orders.
                     * 
                     */
                    uint64_t GetOrderCount() const;

                    /**
                     * 设置Total number of tokens for orders.
                     * @param _orderCount Total number of tokens for orders.
                     * 
                     */
                    void SetOrderCount(const uint64_t& _orderCount);

                    /**
                     * 判断参数 OrderCount 是否已赋值
                     * @return OrderCount 是否已赋值
                     * 
                     */
                    bool OrderCountHasBeenSet() const;

                    /**
                     * 获取Current execution status summary. Constant: processing, success., failed.
                     * @return StatusSummary Current execution status summary. Constant: processing, success., failed.
                     * 
                     */
                    std::string GetStatusSummary() const;

                    /**
                     * 设置Current execution status summary. Constant: processing, success., failed.
                     * @param _statusSummary Current execution status summary. Constant: processing, success., failed.
                     * 
                     */
                    void SetStatusSummary(const std::string& _statusSummary);

                    /**
                     * 判断参数 StatusSummary 是否已赋值
                     * @return StatusSummary 是否已赋值
                     * 
                     */
                    bool StatusSummaryHasBeenSet() const;

                    /**
                     * 获取Chinese display after summarizing the current execution status.
                     * @return StatusSummaryTitle Chinese display after summarizing the current execution status.
                     * 
                     */
                    std::string GetStatusSummaryTitle() const;

                    /**
                     * 设置Chinese display after summarizing the current execution status.
                     * @param _statusSummaryTitle Chinese display after summarizing the current execution status.
                     * 
                     */
                    void SetStatusSummaryTitle(const std::string& _statusSummaryTitle);

                    /**
                     * 判断参数 StatusSummaryTitle 是否已赋值
                     * @return StatusSummaryTitle 是否已赋值
                     * 
                     */
                    bool StatusSummaryTitleHasBeenSet() const;

                    /**
                     * 获取Current request execution time, in milliseconds.
                     * @return Elapsed Current request execution time, in milliseconds.
                     * 
                     */
                    uint64_t GetElapsed() const;

                    /**
                     * 设置Current request execution time, in milliseconds.
                     * @param _elapsed Current request execution time, in milliseconds.
                     * 
                     */
                    void SetElapsed(const uint64_t& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取Number of tokens consumed by the current request.
                     * @return TokenCount Number of tokens consumed by the current request.
                     * 
                     */
                    uint64_t GetTokenCount() const;

                    /**
                     * 设置Number of tokens consumed by the current request.
                     * @param _tokenCount Number of tokens consumed by the current request.
                     * 
                     */
                    void SetTokenCount(const uint64_t& _tokenCount);

                    /**
                     * 判断参数 TokenCount 是否已赋值
                     * @return TokenCount 是否已赋值
                     * 
                     */
                    bool TokenCountHasBeenSet() const;

                    /**
                     * 获取Execution information.
                     * @return Procedures Execution information.
                     * 
                     */
                    std::vector<Procedure> GetProcedures() const;

                    /**
                     * 设置Execution information.
                     * @param _procedures Execution information.
                     * 
                     */
                    void SetProcedures(const std::vector<Procedure>& _procedures);

                    /**
                     * 判断参数 Procedures 是否已赋值
                     * @return Procedures 是否已赋值
                     * 
                     */
                    bool ProceduresHasBeenSet() const;

                    /**
                     * 获取Execution process information TraceId.
                     * @return TraceId Execution process information TraceId.
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置Execution process information TraceId.
                     * @param _traceId Execution process information TraceId.
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * Session ID.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Request ID.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * It corresponds to a session, session id, used for storing messages for answering. It can be generated in advance, used when saving messages.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Number of consumed tokens.
                     */
                    uint64_t m_usedCount;
                    bool m_usedCountHasBeenSet;

                    /**
                     * Number of free tokens.
                     */
                    uint64_t m_freeCount;
                    bool m_freeCountHasBeenSet;

                    /**
                     * Total number of tokens for orders.
                     */
                    uint64_t m_orderCount;
                    bool m_orderCountHasBeenSet;

                    /**
                     * Current execution status summary. Constant: processing, success., failed.
                     */
                    std::string m_statusSummary;
                    bool m_statusSummaryHasBeenSet;

                    /**
                     * Chinese display after summarizing the current execution status.
                     */
                    std::string m_statusSummaryTitle;
                    bool m_statusSummaryTitleHasBeenSet;

                    /**
                     * Current request execution time, in milliseconds.
                     */
                    uint64_t m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * Number of tokens consumed by the current request.
                     */
                    uint64_t m_tokenCount;
                    bool m_tokenCountHasBeenSet;

                    /**
                     * Execution information.
                     */
                    std::vector<Procedure> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * Execution process information TraceId.
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TOKENSTAT_H_
