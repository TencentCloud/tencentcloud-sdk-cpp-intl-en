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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/PromptTokensDetails.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * Token quantity.
                */
                class Usage : public AbstractModel
                {
                public:
                    Usage();
                    ~Usage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input Token quantity.
                     * @return PromptTokens Input Token quantity.
                     * 
                     */
                    int64_t GetPromptTokens() const;

                    /**
                     * 设置Input Token quantity.
                     * @param _promptTokens Input Token quantity.
                     * 
                     */
                    void SetPromptTokens(const int64_t& _promptTokens);

                    /**
                     * 判断参数 PromptTokens 是否已赋值
                     * @return PromptTokens 是否已赋值
                     * 
                     */
                    bool PromptTokensHasBeenSet() const;

                    /**
                     * 获取Output Token quantity.
                     * @return CompletionTokens Output Token quantity.
                     * 
                     */
                    int64_t GetCompletionTokens() const;

                    /**
                     * 设置Output Token quantity.
                     * @param _completionTokens Output Token quantity.
                     * 
                     */
                    void SetCompletionTokens(const int64_t& _completionTokens);

                    /**
                     * 判断参数 CompletionTokens 是否已赋值
                     * @return CompletionTokens 是否已赋值
                     * 
                     */
                    bool CompletionTokensHasBeenSet() const;

                    /**
                     * 获取Total Token quantity.
                     * @return TotalTokens Total Token quantity.
                     * 
                     */
                    int64_t GetTotalTokens() const;

                    /**
                     * 设置Total Token quantity.
                     * @param _totalTokens Total Token quantity.
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
                     * 获取Details of the input token.
                     * @return PromptTokensDetails Details of the input token.
                     * 
                     */
                    PromptTokensDetails GetPromptTokensDetails() const;

                    /**
                     * 设置Details of the input token.
                     * @param _promptTokensDetails Details of the input token.
                     * 
                     */
                    void SetPromptTokensDetails(const PromptTokensDetails& _promptTokensDetails);

                    /**
                     * 判断参数 PromptTokensDetails 是否已赋值
                     * @return PromptTokensDetails 是否已赋值
                     * 
                     */
                    bool PromptTokensDetailsHasBeenSet() const;

                private:

                    /**
                     * Input Token quantity.
                     */
                    int64_t m_promptTokens;
                    bool m_promptTokensHasBeenSet;

                    /**
                     * Output Token quantity.
                     */
                    int64_t m_completionTokens;
                    bool m_completionTokensHasBeenSet;

                    /**
                     * Total Token quantity.
                     */
                    int64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * Details of the input token.
                     */
                    PromptTokensDetails m_promptTokensDetails;
                    bool m_promptTokensDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_USAGE_H_
