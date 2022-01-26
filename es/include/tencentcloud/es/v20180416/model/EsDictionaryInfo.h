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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DictInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES dictionary information
                */
                class EsDictionaryInfo : public AbstractModel
                {
                public:
                    EsDictionaryInfo();
                    ~EsDictionaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of non-stop words
                     * @return MainDict List of non-stop words
                     */
                    std::vector<DictInfo> GetMainDict() const;

                    /**
                     * 设置List of non-stop words
                     * @param MainDict List of non-stop words
                     */
                    void SetMainDict(const std::vector<DictInfo>& _mainDict);

                    /**
                     * 判断参数 MainDict 是否已赋值
                     * @return MainDict 是否已赋值
                     */
                    bool MainDictHasBeenSet() const;

                    /**
                     * 获取List of stop words
                     * @return Stopwords List of stop words
                     */
                    std::vector<DictInfo> GetStopwords() const;

                    /**
                     * 设置List of stop words
                     * @param Stopwords List of stop words
                     */
                    void SetStopwords(const std::vector<DictInfo>& _stopwords);

                    /**
                     * 判断参数 Stopwords 是否已赋值
                     * @return Stopwords 是否已赋值
                     */
                    bool StopwordsHasBeenSet() const;

                    /**
                     * 获取QQ dictionary list
                     * @return QQDict QQ dictionary list
                     */
                    std::vector<DictInfo> GetQQDict() const;

                    /**
                     * 设置QQ dictionary list
                     * @param QQDict QQ dictionary list
                     */
                    void SetQQDict(const std::vector<DictInfo>& _qQDict);

                    /**
                     * 判断参数 QQDict 是否已赋值
                     * @return QQDict 是否已赋值
                     */
                    bool QQDictHasBeenSet() const;

                    /**
                     * 获取Synonym dictionary list
                     * @return Synonym Synonym dictionary list
                     */
                    std::vector<DictInfo> GetSynonym() const;

                    /**
                     * 设置Synonym dictionary list
                     * @param Synonym Synonym dictionary list
                     */
                    void SetSynonym(const std::vector<DictInfo>& _synonym);

                    /**
                     * 判断参数 Synonym 是否已赋值
                     * @return Synonym 是否已赋值
                     */
                    bool SynonymHasBeenSet() const;

                    /**
                     * 获取Update dictionary type
                     * @return UpdateType Update dictionary type
                     */
                    std::string GetUpdateType() const;

                    /**
                     * 设置Update dictionary type
                     * @param UpdateType Update dictionary type
                     */
                    void SetUpdateType(const std::string& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     */
                    bool UpdateTypeHasBeenSet() const;

                private:

                    /**
                     * List of non-stop words
                     */
                    std::vector<DictInfo> m_mainDict;
                    bool m_mainDictHasBeenSet;

                    /**
                     * List of stop words
                     */
                    std::vector<DictInfo> m_stopwords;
                    bool m_stopwordsHasBeenSet;

                    /**
                     * QQ dictionary list
                     */
                    std::vector<DictInfo> m_qQDict;
                    bool m_qQDictHasBeenSet;

                    /**
                     * Synonym dictionary list
                     */
                    std::vector<DictInfo> m_synonym;
                    bool m_synonymHasBeenSet;

                    /**
                     * Update dictionary type
                     */
                    std::string m_updateType;
                    bool m_updateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_
