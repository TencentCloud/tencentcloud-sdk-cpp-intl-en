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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYPDFOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYPDFOCRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyPdfOcr request structure.
                */
                class VerifyPdfOcrRequest : public AbstractModel
                {
                public:
                    VerifyPdfOcrRequest();
                    ~VerifyPdfOcrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Base64-encoded content of the PDF file. The data:application/pdf;base64, prefix is supported (the server automatically strips it).</p>
                     * @return ImageBase64 <p>Base64-encoded content of the PDF file. The data:application/pdf;base64, prefix is supported (the server automatically strips it).</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>Base64-encoded content of the PDF file. The data:application/pdf;base64, prefix is supported (the server automatically strips it).</p>
                     * @param _imageBase64 <p>Base64-encoded content of the PDF file. The data:application/pdf;base64, prefix is supported (the server automatically strips it).</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                private:

                    /**
                     * <p>Base64-encoded content of the PDF file. The data:application/pdf;base64, prefix is supported (the server automatically strips it).</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYPDFOCRREQUEST_H_
