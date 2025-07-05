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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDRESULT_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * Keyword recognition result.
                */
                class KeyWordResult : public AbstractModel
                {
                public:
                    KeyWordResult();
                    ~KeyWordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Keyword library ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyWordLibID Keyword library ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyWordLibID() const;

                    /**
                     * 设置Keyword library ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyWordLibID Keyword library ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyWordLibID(const std::string& _keyWordLibID);

                    /**
                     * 判断参数 KeyWordLibID 是否已赋值
                     * @return KeyWordLibID 是否已赋值
                     * 
                     */
                    bool KeyWordLibIDHasBeenSet() const;

                    /**
                     * 获取Keyword library name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyWordLibName Keyword library name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyWordLibName() const;

                    /**
                     * 设置Keyword library name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyWordLibName Keyword library name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyWordLibName(const std::string& _keyWordLibName);

                    /**
                     * 判断参数 KeyWordLibName 是否已赋值
                     * @return KeyWordLibName 是否已赋值
                     * 
                     */
                    bool KeyWordLibNameHasBeenSet() const;

                    /**
                     * 获取Matching keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyWords Matching keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetKeyWords() const;

                    /**
                     * 设置Matching keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyWords Matching keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyWords(const std::vector<std::string>& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                private:

                    /**
                     * Keyword library ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyWordLibID;
                    bool m_keyWordLibIDHasBeenSet;

                    /**
                     * Keyword library name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyWordLibName;
                    bool m_keyWordLibNameHasBeenSet;

                    /**
                     * Matching keywords.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_keyWords;
                    bool m_keyWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_KEYWORDRESULT_H_
