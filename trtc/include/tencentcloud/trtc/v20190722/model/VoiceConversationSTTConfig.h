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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONSTTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONSTTCONFIG_H_

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
                * STT configuration parameters for the AI conversation task
                */
                class VoiceConversationSTTConfig : public AbstractModel
                {
                public:
                    VoiceConversationSTTConfig();
                    ~VoiceConversationSTTConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ASR provider name: trtc (Tencent Self-developed) or third-party provider (for example, azure).</p>
                     * @return Provider <p>ASR provider name: trtc (Tencent Self-developed) or third-party provider (for example, azure).</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>ASR provider name: trtc (Tencent Self-developed) or third-party provider (for example, azure).</p>
                     * @param _provider <p>ASR provider name: trtc (Tencent Self-developed) or third-party provider (for example, azure).</p>
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>ASR manufacturer exclusive parameter. Fill in the JSON serialized string.</p>
                     * @return Params <p>ASR manufacturer exclusive parameter. Fill in the JSON serialized string.</p>
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置<p>ASR manufacturer exclusive parameter. Fill in the JSON serialized string.</p>
                     * @param _params <p>ASR manufacturer exclusive parameter. Fill in the JSON serialized string.</p>
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * <p>ASR provider name: trtc (Tencent Self-developed) or third-party provider (for example, azure).</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>ASR manufacturer exclusive parameter. Fill in the JSON serialized string.</p>
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONSTTCONFIG_H_
