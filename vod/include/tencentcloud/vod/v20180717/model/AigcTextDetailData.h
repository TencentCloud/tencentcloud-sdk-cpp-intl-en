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
                * 
                */
                class AigcTextDetailData : public AbstractModel
                {
                public:
                    AigcTextDetailData();
                    ~AigcTextDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Timestamp 
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置
                     * @param _timestamp 
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
                     * 获取
                     * @return ReqId 
                     * 
                     */
                    std::string GetReqId() const;

                    /**
                     * 设置
                     * @param _reqId 
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
                     * 获取
                     * @return ChatId 
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置
                     * @param _chatId 
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
                     * 获取
                     * @return StatusCode 
                     * 
                     */
                    uint64_t GetStatusCode() const;

                    /**
                     * 设置
                     * @param _statusCode 
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
                     * 获取
                     * @return Model 
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置
                     * @param _model 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return ApiKey 
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置
                     * @param _apiKey 
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
                     * 获取
                     * @return Stream 
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置
                     * @param _stream 
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
                     * 获取
                     * @return InputTokens 
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置
                     * @param _inputTokens 
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
                     * 获取
                     * @return OutputTokens 
                     * 
                     */
                    int64_t GetOutputTokens() const;

                    /**
                     * 设置
                     * @param _outputTokens 
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
                     * 获取
                     * @return CacheInputTokens 
                     * 
                     */
                    int64_t GetCacheInputTokens() const;

                    /**
                     * 设置
                     * @param _cacheInputTokens 
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
                     * 获取
                     * @return TotalTokens 
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置
                     * @param _totalTokens 
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
                     * 获取
                     * @return TPS 
                     * 
                     */
                    double GetTPS() const;

                    /**
                     * 设置
                     * @param _tPS 
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
                     * 获取
                     * @return TTFT 
                     * 
                     */
                    double GetTTFT() const;

                    /**
                     * 设置
                     * @param _tTFT 
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
                     * 获取
                     * @return Total 
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置
                     * @param _total 
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
                     * 获取
                     * @return ApiType 
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置
                     * @param _apiType 
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
                     * 
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_reqId;
                    bool m_reqIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * 
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_outputTokens;
                    bool m_outputTokensHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_cacheInputTokens;
                    bool m_cacheInputTokensHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * 
                     */
                    double m_tPS;
                    bool m_tPSHasBeenSet;

                    /**
                     * 
                     */
                    double m_tTFT;
                    bool m_tTFTHasBeenSet;

                    /**
                     * 
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCTEXTDETAILDATA_H_
