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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_PRONUNCIATIONDICT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_PRONUNCIATIONDICT_H_

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
                * 
                */
                class PronunciationDict : public AbstractModel
                {
                public:
                    PronunciationDict();
                    ~PronunciationDict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Word 
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置
                     * @param _word 
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取
                     * @return Pronunciation 
                     * 
                     */
                    std::string GetPronunciation() const;

                    /**
                     * 设置
                     * @param _pronunciation 
                     * 
                     */
                    void SetPronunciation(const std::string& _pronunciation);

                    /**
                     * 判断参数 Pronunciation 是否已赋值
                     * @return Pronunciation 是否已赋值
                     * 
                     */
                    bool PronunciationHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_pronunciation;
                    bool m_pronunciationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_PRONUNCIATIONDICT_H_
