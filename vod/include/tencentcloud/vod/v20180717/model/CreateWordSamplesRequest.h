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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEWORDSAMPLESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEWORDSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSampleWordInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateWordSamples request structure.
                */
                class CreateWordSamplesRequest : public AbstractModel
                {
                public:
                    CreateWordSamplesRequest();
                    ~CreateWordSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Perform content recognition and inappropriate content recognition through OCR and audio recognition technology, equivalent to 1+2+3+4.
                     * @return Usages <b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Perform content recognition and inappropriate content recognition through OCR and audio recognition technology, equivalent to 1+2+3+4.
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Perform content recognition and inappropriate content recognition through OCR and audio recognition technology, equivalent to 1+2+3+4.
                     * @param _usages <b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Perform content recognition and inappropriate content recognition through OCR and audio recognition technology, equivalent to 1+2+3+4.
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
                     * 获取Keyword, array length limit: 100.
                     * @return Words Keyword, array length limit: 100.
                     * 
                     */
                    std::vector<AiSampleWordInfo> GetWords() const;

                    /**
                     * 设置Keyword, array length limit: 100.
                     * @param _words Keyword, array length limit: 100.
                     * 
                     */
                    void SetWords(const std::vector<AiSampleWordInfo>& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * <b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Perform content recognition and inappropriate content recognition through OCR and audio recognition technology, equivalent to 1+2+3+4.
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * Keyword, array length limit: 100.
                     */
                    std::vector<AiSampleWordInfo> m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEWORDSAMPLESREQUEST_H_
