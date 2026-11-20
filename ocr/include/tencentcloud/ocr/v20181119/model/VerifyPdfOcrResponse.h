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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYPDFOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYPDFOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ExtractedFields.h>
#include <tencentcloud/ocr/v20181119/model/SignResult.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyPdfOcr response structure.
                */
                class VerifyPdfOcrResponse : public AbstractModel
                {
                public:
                    VerifyPdfOcrResponse();
                    ~VerifyPdfOcrResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Flattened extraction result of exit-entry records (recommended)</p>
                     * @return ExtractedFields <p>Flattened extraction result of exit-entry records (recommended)</p>
                     * 
                     */
                    ExtractedFields GetExtractedFields() const;

                    /**
                     * 判断参数 ExtractedFields 是否已赋值
                     * @return ExtractedFields 是否已赋值
                     * 
                     */
                    bool ExtractedFieldsHasBeenSet() const;

                    /**
                     * 获取<p>Signature verification conclusion (recommended)</p>
                     * @return SignResult <p>Signature verification conclusion (recommended)</p>
                     * 
                     */
                    SignResult GetSignResult() const;

                    /**
                     * 判断参数 SignResult 是否已赋值
                     * @return SignResult 是否已赋值
                     * 
                     */
                    bool SignResultHasBeenSet() const;

                private:

                    /**
                     * <p>Flattened extraction result of exit-entry records (recommended)</p>
                     */
                    ExtractedFields m_extractedFields;
                    bool m_extractedFieldsHasBeenSet;

                    /**
                     * <p>Signature verification conclusion (recommended)</p>
                     */
                    SignResult m_signResult;
                    bool m_signResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYPDFOCRRESPONSE_H_
