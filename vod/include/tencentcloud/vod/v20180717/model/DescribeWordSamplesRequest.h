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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEWORDSAMPLESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEWORDSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeWordSamples request structure.
                */
                class DescribeWordSamplesRequest : public AbstractModel
                {
                public:
                    DescribeWordSamplesRequest();
                    ~DescribeWordSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<b>Keyword application scenario filtering conditions, available values:</b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
Multiple selections allowed. The relationship between elements is OR, meaning records where the keyword's application scenario includes any element in the field collection meet the condition.
                     * @return Usages <b>Keyword application scenario filtering conditions, available values:</b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
Multiple selections allowed. The relationship between elements is OR, meaning records where the keyword's application scenario includes any element in the field collection meet the condition.
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>Keyword application scenario filtering conditions, available values:</b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
Multiple selections allowed. The relationship between elements is OR, meaning records where the keyword's application scenario includes any element in the field collection meet the condition.
                     * @param _usages <b>Keyword application scenario filtering conditions, available values:</b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
Multiple selections allowed. The relationship between elements is OR, meaning records where the keyword's application scenario includes any element in the field collection meet the condition.
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
                     * 获取Keyword filtering conditions. The array can contain up to 100 keywords.
                     * @return Keywords Keyword filtering conditions. The array can contain up to 100 keywords.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Keyword filtering conditions. The array can contain up to 100 keywords.
                     * @param _keywords Keyword filtering conditions. The array can contain up to 100 keywords.
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取Tag filtering condition. Array length limit: 20 words.
                     * @return Tags Tag filtering condition. Array length limit: 20 words.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Tag filtering condition. Array length limit: 20 words.
                     * @param _tags Tag filtering condition. Array length limit: 20 words.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Pagination offset. Default value: 0.
                     * @return Offset Pagination offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Default value: 0.
                     * @param _offset Pagination offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned entries. Default value: 100. Maximum value: 100.
                     * @return Limit Number of returned entries. Default value: 100. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned entries. Default value: 100. Maximum value: 100.
                     * @param _limit Number of returned entries. Default value: 100. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <b>Keyword application scenario filtering conditions, available values:</b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition through audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
Multiple selections allowed. The relationship between elements is OR, meaning records where the keyword's application scenario includes any element in the field collection meet the condition.
                     */
                    std::vector<std::string> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * Keyword filtering conditions. The array can contain up to 100 keywords.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * Tag filtering condition. Array length limit: 20 words.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Pagination offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned entries. Default value: 100. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEWORDSAMPLESREQUEST_H_
