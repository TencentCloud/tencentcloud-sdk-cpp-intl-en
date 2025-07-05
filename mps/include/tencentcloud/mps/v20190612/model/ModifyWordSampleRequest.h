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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYWORDSAMPLEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYWORDSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSampleTagOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyWordSample request structure.
                */
                class ModifyWordSampleRequest : public AbstractModel
                {
                public:
                    ModifyWordSampleRequest();
                    ~ModifyWordSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Keyword. Length limit: 128 characters.
                     * @return Keyword Keyword. Length limit: 128 characters.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword. Length limit: 128 characters.
                     * @param _keyword Keyword. Length limit: 128 characters.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<b>Keyword usage. Valid values:</b>
1. Recognition.Ocr: OCR-based content recognition
2. Recognition.Asr: ASR-based content recognition
3. Review.Ocr: OCR-based inappropriate information recognition
4. Review.Asr: ASR-based inappropriate information recognition
<b>Valid values can also be:</b>
5. Recognition: ASR- and OCR-based content recognition; equivalent to 1+2
6. Review: ASR- and OCR-based inappropriate information recognition; equivalent to 3+4
7. All: equivalent to 1+2+3+4
                     * @return Usages <b>Keyword usage. Valid values:</b>
1. Recognition.Ocr: OCR-based content recognition
2. Recognition.Asr: ASR-based content recognition
3. Review.Ocr: OCR-based inappropriate information recognition
4. Review.Asr: ASR-based inappropriate information recognition
<b>Valid values can also be:</b>
5. Recognition: ASR- and OCR-based content recognition; equivalent to 1+2
6. Review: ASR- and OCR-based inappropriate information recognition; equivalent to 3+4
7. All: equivalent to 1+2+3+4
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>Keyword usage. Valid values:</b>
1. Recognition.Ocr: OCR-based content recognition
2. Recognition.Asr: ASR-based content recognition
3. Review.Ocr: OCR-based inappropriate information recognition
4. Review.Asr: ASR-based inappropriate information recognition
<b>Valid values can also be:</b>
5. Recognition: ASR- and OCR-based content recognition; equivalent to 1+2
6. Review: ASR- and OCR-based inappropriate information recognition; equivalent to 3+4
7. All: equivalent to 1+2+3+4
                     * @param _usages <b>Keyword usage. Valid values:</b>
1. Recognition.Ocr: OCR-based content recognition
2. Recognition.Asr: ASR-based content recognition
3. Review.Ocr: OCR-based inappropriate information recognition
4. Review.Asr: ASR-based inappropriate information recognition
<b>Valid values can also be:</b>
5. Recognition: ASR- and OCR-based content recognition; equivalent to 1+2
6. Review: ASR- and OCR-based inappropriate information recognition; equivalent to 3+4
7. All: equivalent to 1+2+3+4
                     * 
                     */
                    void SetUsages(const std::vector<std::string>& _usages);

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     * 
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取Tag operation information.
                     * @return TagOperationInfo Tag operation information.
                     * 
                     */
                    AiSampleTagOperation GetTagOperationInfo() const;

                    /**
                     * 设置Tag operation information.
                     * @param _tagOperationInfo Tag operation information.
                     * 
                     */
                    void SetTagOperationInfo(const AiSampleTagOperation& _tagOperationInfo);

                    /**
                     * 判断参数 TagOperationInfo 是否已赋值
                     * @return TagOperationInfo 是否已赋值
                     * 
                     */
                    bool TagOperationInfoHasBeenSet() const;

                private:

                    /**
                     * Keyword. Length limit: 128 characters.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <b>Keyword usage. Valid values:</b>
1. Recognition.Ocr: OCR-based content recognition
2. Recognition.Asr: ASR-based content recognition
3. Review.Ocr: OCR-based inappropriate information recognition
4. Review.Asr: ASR-based inappropriate information recognition
<b>Valid values can also be:</b>
5. Recognition: ASR- and OCR-based content recognition; equivalent to 1+2
6. Review: ASR- and OCR-based inappropriate information recognition; equivalent to 3+4
7. All: equivalent to 1+2+3+4
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * Tag operation information.
                     */
                    AiSampleTagOperation m_tagOperationInfo;
                    bool m_tagOperationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYWORDSAMPLEREQUEST_H_
