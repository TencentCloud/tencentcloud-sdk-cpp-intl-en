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
                * ES library information
                */
                class EsDictionaryInfo : public AbstractModel
                {
                public:
                    EsDictionaryInfo();
                    ~EsDictionaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of enabled word dictionaries
                     * @return MainDict List of enabled word dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetMainDict() const;

                    /**
                     * 设置List of enabled word dictionaries
                     * @param _mainDict List of enabled word dictionaries
                     * 
                     */
                    void SetMainDict(const std::vector<DictInfo>& _mainDict);

                    /**
                     * 判断参数 MainDict 是否已赋值
                     * @return MainDict 是否已赋值
                     * 
                     */
                    bool MainDictHasBeenSet() const;

                    /**
                     * 获取List of stopword dictionaries
                     * @return Stopwords List of stopword dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetStopwords() const;

                    /**
                     * 设置List of stopword dictionaries
                     * @param _stopwords List of stopword dictionaries
                     * 
                     */
                    void SetStopwords(const std::vector<DictInfo>& _stopwords);

                    /**
                     * 判断参数 Stopwords 是否已赋值
                     * @return Stopwords 是否已赋值
                     * 
                     */
                    bool StopwordsHasBeenSet() const;

                    /**
                     * 获取List of QQ word segmentation dictionaries
                     * @return QQDict List of QQ word segmentation dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetQQDict() const;

                    /**
                     * 设置List of QQ word segmentation dictionaries
                     * @param _qQDict List of QQ word segmentation dictionaries
                     * 
                     */
                    void SetQQDict(const std::vector<DictInfo>& _qQDict);

                    /**
                     * 判断参数 QQDict 是否已赋值
                     * @return QQDict 是否已赋值
                     * 
                     */
                    bool QQDictHasBeenSet() const;

                    /**
                     * 获取List of synonym dictionaries
                     * @return Synonym List of synonym dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetSynonym() const;

                    /**
                     * 设置List of synonym dictionaries
                     * @param _synonym List of synonym dictionaries
                     * 
                     */
                    void SetSynonym(const std::vector<DictInfo>& _synonym);

                    /**
                     * 判断参数 Synonym 是否已赋值
                     * @return Synonym 是否已赋值
                     * 
                     */
                    bool SynonymHasBeenSet() const;

                    /**
                     * 获取Update the dictionary type
                     * @return UpdateType Update the dictionary type
                     * 
                     */
                    std::string GetUpdateType() const;

                    /**
                     * 设置Update the dictionary type
                     * @param _updateType Update the dictionary type
                     * 
                     */
                    void SetUpdateType(const std::string& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取List of ansj enabled word dictionaries
                     * @return AnsjMain List of ansj enabled word dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetAnsjMain() const;

                    /**
                     * 设置List of ansj enabled word dictionaries
                     * @param _ansjMain List of ansj enabled word dictionaries
                     * 
                     */
                    void SetAnsjMain(const std::vector<DictInfo>& _ansjMain);

                    /**
                     * 判断参数 AnsjMain 是否已赋值
                     * @return AnsjMain 是否已赋值
                     * 
                     */
                    bool AnsjMainHasBeenSet() const;

                    /**
                     * 获取List of ansj stopword dictionaries
                     * @return AnsjStop List of ansj stopword dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetAnsjStop() const;

                    /**
                     * 设置List of ansj stopword dictionaries
                     * @param _ansjStop List of ansj stopword dictionaries
                     * 
                     */
                    void SetAnsjStop(const std::vector<DictInfo>& _ansjStop);

                    /**
                     * 判断参数 AnsjStop 是否已赋值
                     * @return AnsjStop 是否已赋值
                     * 
                     */
                    bool AnsjStopHasBeenSet() const;

                    /**
                     * 获取List of ansj ambiguity lexicons
                     * @return AnsjAmbiguity List of ansj ambiguity lexicons
                     * 
                     */
                    std::vector<DictInfo> GetAnsjAmbiguity() const;

                    /**
                     * 设置List of ansj ambiguity lexicons
                     * @param _ansjAmbiguity List of ansj ambiguity lexicons
                     * 
                     */
                    void SetAnsjAmbiguity(const std::vector<DictInfo>& _ansjAmbiguity);

                    /**
                     * 判断参数 AnsjAmbiguity 是否已赋值
                     * @return AnsjAmbiguity 是否已赋值
                     * 
                     */
                    bool AnsjAmbiguityHasBeenSet() const;

                    /**
                     * 获取List of ansj synonym dictionaries
                     * @return AnsjSynonyms List of ansj synonym dictionaries
                     * 
                     */
                    std::vector<DictInfo> GetAnsjSynonyms() const;

                    /**
                     * 设置List of ansj synonym dictionaries
                     * @param _ansjSynonyms List of ansj synonym dictionaries
                     * 
                     */
                    void SetAnsjSynonyms(const std::vector<DictInfo>& _ansjSynonyms);

                    /**
                     * 判断参数 AnsjSynonyms 是否已赋值
                     * @return AnsjSynonyms 是否已赋值
                     * 
                     */
                    bool AnsjSynonymsHasBeenSet() const;

                private:

                    /**
                     * List of enabled word dictionaries
                     */
                    std::vector<DictInfo> m_mainDict;
                    bool m_mainDictHasBeenSet;

                    /**
                     * List of stopword dictionaries
                     */
                    std::vector<DictInfo> m_stopwords;
                    bool m_stopwordsHasBeenSet;

                    /**
                     * List of QQ word segmentation dictionaries
                     */
                    std::vector<DictInfo> m_qQDict;
                    bool m_qQDictHasBeenSet;

                    /**
                     * List of synonym dictionaries
                     */
                    std::vector<DictInfo> m_synonym;
                    bool m_synonymHasBeenSet;

                    /**
                     * Update the dictionary type
                     */
                    std::string m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * List of ansj enabled word dictionaries
                     */
                    std::vector<DictInfo> m_ansjMain;
                    bool m_ansjMainHasBeenSet;

                    /**
                     * List of ansj stopword dictionaries
                     */
                    std::vector<DictInfo> m_ansjStop;
                    bool m_ansjStopHasBeenSet;

                    /**
                     * List of ansj ambiguity lexicons
                     */
                    std::vector<DictInfo> m_ansjAmbiguity;
                    bool m_ansjAmbiguityHasBeenSet;

                    /**
                     * List of ansj synonym dictionaries
                     */
                    std::vector<DictInfo> m_ansjSynonyms;
                    bool m_ansjSynonymsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_
