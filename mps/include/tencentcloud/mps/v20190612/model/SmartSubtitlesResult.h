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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskAsrFullTextResult.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTransTextResult.h>
#include <tencentcloud/mps/v20190612/model/PureSubtitleTransResult.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskFullTextResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Smart subtitle task result.
                */
                class SmartSubtitlesResult : public AbstractModel
                {
                public:
                    SmartSubtitlesResult();
                    ~SmartSubtitlesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
- AsrFullTextRecognition: full speech recognition
- TransTextRecognition: speech translation
- PureSubtitleTrans: pure subtitle translation.
- OcrFullTextRecognition: text-based subtitle extraction.
                     * @return Type Task type. Valid values:
- AsrFullTextRecognition: full speech recognition
- TransTextRecognition: speech translation
- PureSubtitleTrans: pure subtitle translation.
- OcrFullTextRecognition: text-based subtitle extraction.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
- AsrFullTextRecognition: full speech recognition
- TransTextRecognition: speech translation
- PureSubtitleTrans: pure subtitle translation.
- OcrFullTextRecognition: text-based subtitle extraction.
                     * @param _type Task type. Valid values:
- AsrFullTextRecognition: full speech recognition
- TransTextRecognition: speech translation
- PureSubtitleTrans: pure subtitle translation.
- OcrFullTextRecognition: text-based subtitle extraction.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return AsrFullTextTask 
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResult GetAsrFullTextTask() const;

                    /**
                     * 设置
                     * @param _asrFullTextTask 
                     * 
                     */
                    void SetAsrFullTextTask(const SmartSubtitleTaskAsrFullTextResult& _asrFullTextTask);

                    /**
                     * 判断参数 AsrFullTextTask 是否已赋值
                     * @return AsrFullTextTask 是否已赋值
                     * 
                     */
                    bool AsrFullTextTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return TransTextTask 
                     * 
                     */
                    SmartSubtitleTaskTransTextResult GetTransTextTask() const;

                    /**
                     * 设置
                     * @param _transTextTask 
                     * 
                     */
                    void SetTransTextTask(const SmartSubtitleTaskTransTextResult& _transTextTask);

                    /**
                     * 判断参数 TransTextTask 是否已赋值
                     * @return TransTextTask 是否已赋值
                     * 
                     */
                    bool TransTextTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return PureSubtitleTransTask 
                     * 
                     */
                    PureSubtitleTransResult GetPureSubtitleTransTask() const;

                    /**
                     * 设置
                     * @param _pureSubtitleTransTask 
                     * 
                     */
                    void SetPureSubtitleTransTask(const PureSubtitleTransResult& _pureSubtitleTransTask);

                    /**
                     * 判断参数 PureSubtitleTransTask 是否已赋值
                     * @return PureSubtitleTransTask 是否已赋值
                     * 
                     */
                    bool PureSubtitleTransTaskHasBeenSet() const;

                    /**
                     * 获取
                     * @return OcrFullTextTask 
                     * 
                     */
                    SmartSubtitleTaskFullTextResult GetOcrFullTextTask() const;

                    /**
                     * 设置
                     * @param _ocrFullTextTask 
                     * 
                     */
                    void SetOcrFullTextTask(const SmartSubtitleTaskFullTextResult& _ocrFullTextTask);

                    /**
                     * 判断参数 OcrFullTextTask 是否已赋值
                     * @return OcrFullTextTask 是否已赋值
                     * 
                     */
                    bool OcrFullTextTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
- AsrFullTextRecognition: full speech recognition
- TransTextRecognition: speech translation
- PureSubtitleTrans: pure subtitle translation.
- OcrFullTextRecognition: text-based subtitle extraction.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    SmartSubtitleTaskAsrFullTextResult m_asrFullTextTask;
                    bool m_asrFullTextTaskHasBeenSet;

                    /**
                     * 
                     */
                    SmartSubtitleTaskTransTextResult m_transTextTask;
                    bool m_transTextTaskHasBeenSet;

                    /**
                     * 
                     */
                    PureSubtitleTransResult m_pureSubtitleTransTask;
                    bool m_pureSubtitleTransTaskHasBeenSet;

                    /**
                     * 
                     */
                    SmartSubtitleTaskFullTextResult m_ocrFullTextTask;
                    bool m_ocrFullTextTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESRESULT_H_
