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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/TTSConfig.h>
#include <tencentcloud/trtc/v20190722/model/Terminology.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Translation config
                */
                class TranslationConfig : public AbstractModel
                {
                public:
                    TranslationConfig();
                    ~TranslationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target language, target language list (ISO 639-1).
                     * @return TargetLanguages Target language, target language list (ISO 639-1).
                     * 
                     */
                    std::vector<std::string> GetTargetLanguages() const;

                    /**
                     * 设置Target language, target language list (ISO 639-1).
                     * @param _targetLanguages Target language, target language list (ISO 639-1).
                     * 
                     */
                    void SetTargetLanguages(const std::vector<std::string>& _targetLanguages);

                    /**
                     * 判断参数 TargetLanguages 是否已赋值
                     * @return TargetLanguages 是否已赋值
                     * 
                     */
                    bool TargetLanguagesHasBeenSet() const;

                    /**
                     * 获取1: Only text translation, 2: Voice simultaneous interpretation.
                     * @return Mode 1: Only text translation, 2: Voice simultaneous interpretation.
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置1: Only text translation, 2: Voice simultaneous interpretation.
                     * @param _mode 1: Only text translation, 2: Voice simultaneous interpretation.
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Voice simultaneous interpretation configuration: When enabling simultaneous interpretation, this parameter needs to be passed.
                     * @return TTSConfig Voice simultaneous interpretation configuration: When enabling simultaneous interpretation, this parameter needs to be passed.
                     * 
                     */
                    TTSConfig GetTTSConfig() const;

                    /**
                     * 设置Voice simultaneous interpretation configuration: When enabling simultaneous interpretation, this parameter needs to be passed.
                     * @param _tTSConfig Voice simultaneous interpretation configuration: When enabling simultaneous interpretation, this parameter needs to be passed.
                     * 
                     */
                    void SetTTSConfig(const TTSConfig& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取Translation terminology.
                     * @return Terminology Translation terminology.
                     * 
                     */
                    std::vector<Terminology> GetTerminology() const;

                    /**
                     * 设置Translation terminology.
                     * @param _terminology Translation terminology.
                     * 
                     */
                    void SetTerminology(const std::vector<Terminology>& _terminology);

                    /**
                     * 判断参数 Terminology 是否已赋值
                     * @return Terminology 是否已赋值
                     * 
                     */
                    bool TerminologyHasBeenSet() const;

                private:

                    /**
                     * Target language, target language list (ISO 639-1).
                     */
                    std::vector<std::string> m_targetLanguages;
                    bool m_targetLanguagesHasBeenSet;

                    /**
                     * 1: Only text translation, 2: Voice simultaneous interpretation.
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Voice simultaneous interpretation configuration: When enabling simultaneous interpretation, this parameter needs to be passed.
                     */
                    TTSConfig m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * Translation terminology.
                     */
                    std::vector<Terminology> m_terminology;
                    bool m_terminologyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRANSLATIONCONFIG_H_
