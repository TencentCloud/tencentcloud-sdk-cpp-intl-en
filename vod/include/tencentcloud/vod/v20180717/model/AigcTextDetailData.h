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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Aigc Text Detail Data
                */
                class AigcTextDetailData : public AbstractModel
                {
                public:
                    AigcTextDetailData();
                    ~AigcTextDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Request start time (RFC3339)</p>
                     * @return Timestamp <p>Request start time (RFC3339)</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>Request start time (RFC3339)</p>
                     * @param _timestamp <p>Request start time (RFC3339)</p>
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>Gateway layer request ID</p>
                     * @return ReqId <p>Gateway layer request ID</p>
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置<p>Gateway layer request ID</p>
                     * @param _reqId <p>Gateway layer request ID</p>
                     * 
                     */
                    void SetReqId(const std::string& _reqId);

                    /**
                     * 判断参数 ReqId 是否已赋值
                     * @return ReqId 是否已赋值
                     * 
                     */
                    bool ReqIdHasBeenSet() const;

                    /**
                     * 获取<p>Dialogue ID returned by the backend model</p>
                     * @return ChatId <p>Dialogue ID returned by the backend model</p>
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置<p>Dialogue ID returned by the backend model</p>
                     * @param _chatId <p>Dialogue ID returned by the backend model</p>
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取<p>HTTP status code returned to client</p>
                     * @return StatusCode <p>HTTP status code returned to client</p>
                     * 
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置<p>HTTP status code returned to client</p>
                     * @param _statusCode <p>HTTP status code returned to client</p>
                     * 
                     */
                    void SetStatusCode(const uint64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>Model name</p>
                     * @return Model <p>Model name</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>Model name</p>
                     * @param _model <p>Model name</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Application ID</p>
                     * @return SubAppId <p>Application ID</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>Application ID</p>
                     * @param _subAppId <p>Application ID</p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>api_key after masking: first 8 digits + **** (return without modification when length ≤ 8)</p>
                     * @return ApiKey <p>api_key after masking: first 8 digits + **** (return without modification when length ≤ 8)</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>api_key after masking: first 8 digits + **** (return without modification when length ≤ 8)</p>
                     * @param _apiKey <p>api_key after masking: first 8 digits + **** (return without modification when length ≤ 8)</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>Whether to return in streaming mode</p>
                     * @return Stream <p>Whether to return in streaming mode</p>
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置<p>Whether to return in streaming mode</p>
                     * @param _stream <p>Whether to return in streaming mode</p>
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取<p>Number of input tokens</p>
                     * @return InputTokens <p>Number of input tokens</p>
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置<p>Number of input tokens</p>
                     * @param _inputTokens <p>Number of input tokens</p>
                     * 
                     */
                    void SetInputTokens(const int64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>Number of output tokens</p>
                     * @return OutputTokens <p>Number of output tokens</p>
                     * 
                     */
                    int64_t GetOutputTokens() const;

                    /**
                     * 设置<p>Number of output tokens</p>
                     * @param _outputTokens <p>Number of output tokens</p>
                     * 
                     */
                    void SetOutputTokens(const int64_t& _outputTokens);

                    /**
                     * 判断参数 OutputTokens 是否已赋值
                     * @return OutputTokens 是否已赋值
                     * 
                     */
                    bool OutputTokensHasBeenSet() const;

                    /**
                     * 获取<p>Number of tokens with prompt cache hit</p>
                     * @return CacheInputTokens <p>Number of tokens with prompt cache hit</p>
                     * 
                     */
                    int64_t GetCacheInputTokens() const;

                    /**
                     * 设置<p>Number of tokens with prompt cache hit</p>
                     * @param _cacheInputTokens <p>Number of tokens with prompt cache hit</p>
                     * 
                     */
                    void SetCacheInputTokens(const int64_t& _cacheInputTokens);

                    /**
                     * 判断参数 CacheInputTokens 是否已赋值
                     * @return CacheInputTokens 是否已赋值
                     * 
                     */
                    bool CacheInputTokensHasBeenSet() const;

                    /**
                     * 获取<p>Total tokens</p>
                     * @return TotalTokens <p>Total tokens</p>
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置<p>Total tokens</p>
                     * @param _totalTokens <p>Total tokens</p>
                     * 
                     */
                    void SetTotalTokens(const int64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取<p>tokens per second in the generation stage</p>
                     * @return TPS <p>tokens per second in the generation stage</p>
                     * 
                     */
                    double GetTPS() const;

                    /**
                     * 设置<p>tokens per second in the generation stage</p>
                     * @param _tPS <p>tokens per second in the generation stage</p>
                     * 
                     */
                    void SetTPS(const double& _tPS);

                    /**
                     * 判断参数 TPS 是否已赋值
                     * @return TPS 是否已赋值
                     * 
                     */
                    bool TPSHasBeenSet() const;

                    /**
                     * 获取<p>Time To First Token</p><p>Measurement unit: seconds</p>
                     * @return TTFT <p>Time To First Token</p><p>Measurement unit: seconds</p>
                     * 
                     */
                    double GetTTFT() const;

                    /**
                     * 设置<p>Time To First Token</p><p>Measurement unit: seconds</p>
                     * @param _tTFT <p>Time To First Token</p><p>Measurement unit: seconds</p>
                     * 
                     */
                    void SetTTFT(const double& _tTFT);

                    /**
                     * 判断参数 TTFT 是否已赋值
                     * @return TTFT 是否已赋值
                     * 
                     */
                    bool TTFTHasBeenSet() const;

                    /**
                     * 获取<p>End-to-end total time</p><p>Unit: seconds</p>
                     * @return Total <p>End-to-end total time</p><p>Unit: seconds</p>
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置<p>End-to-end total time</p><p>Unit: seconds</p>
                     * @param _total <p>End-to-end total time</p><p>Unit: seconds</p>
                     * 
                     */
                    void SetTotal(const double& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>Entry protocol:completions / responses / anthropic</p>
                     * @return ApiType <p>Entry protocol:completions / responses / anthropic</p>
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置<p>Entry protocol:completions / responses / anthropic</p>
                     * @param _apiType <p>Entry protocol:completions / responses / anthropic</p>
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Request start time (RFC3339)</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>Gateway layer request ID</p>
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                    /**
                     * <p>Dialogue ID returned by the backend model</p>
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * <p>HTTP status code returned to client</p>
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>Model name</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Application ID</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>api_key after masking: first 8 digits + **** (return without modification when length ≤ 8)</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>Whether to return in streaming mode</p>
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * <p>Number of input tokens</p>
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>Number of output tokens</p>
                     */
                    int64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * <p>Number of tokens with prompt cache hit</p>
                     */
                    int64_t m_cacheInputTokens;
                    bool m_cacheInputTokensHasBeenSet;

                    /**
                     * <p>Total tokens</p>
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * <p>tokens per second in the generation stage</p>
                     */
                    double m_tPS;
                    bool m_tPSHasBeenSet;

                    /**
                     * <p>Time To First Token</p><p>Measurement unit: seconds</p>
                     */
                    double m_tTFT;
                    bool m_tTFTHasBeenSet;

                    /**
                     * <p>End-to-end total time</p><p>Unit: seconds</p>
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>Entry protocol:completions / responses / anthropic</p>
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_
