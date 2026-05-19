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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWORDSAMPLEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWORDSAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSampleTagOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取Keyword, length limit: 128 characters.
                     * @return Keyword Keyword, length limit: 128 characters.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Keyword, length limit: 128 characters.
                     * @param _keyword Keyword, length limit: 128 characters.
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

                    /**
                     * 获取<b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition using audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Include all of the above, equivalent to 1+2+3+4.
                     * @return Usages <b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition using audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Include all of the above, equivalent to 1+2+3+4.
                     * 
                     */
                    std::vector<std::string> GetUsages() const;

                    /**
                     * 设置<b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition using audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Include all of the above, equivalent to 1+2+3+4.
                     * @param _usages <b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition using audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Include all of the above, equivalent to 1+2+3+4.
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
                     * Keyword, length limit: 128 characters.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <b>Keyword application scenario, available values: </b>
1. Recognition.Ocr: Perform content recognition using OCR.
2. Recognition.Asr: Perform content recognition using audio recognition technology.
3. Review.Ocr: Perform inappropriate content recognition using OCR.
4. Review.Asr: Perform inappropriate content recognition using audio recognition technology.
<b>Can be abbreviated as:</b>
5. Recognition: Perform content recognition using OCR and audio recognition technology, equivalent to 1+2.
6. Review: Perform inappropriate content recognition using OCR and audio recognition technology, equivalent to 3+4.
7. All: Include all of the above, equivalent to 1+2+3+4.
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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWORDSAMPLEREQUEST_H_
