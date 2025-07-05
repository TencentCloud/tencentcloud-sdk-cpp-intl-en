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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALBASICOCRREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALBASICOCRREQUEST_H_

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
                * GeneralBasicOCR request structure.
                */
                class GeneralBasicOCRRequest : public AbstractModel
                {
                public:
                    GeneralBasicOCRRequest();
                    ~GeneralBasicOCRRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded value of image/PDF.
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
                     * @return ImageBase64 Base64-encoded value of image/PDF.
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置Base64-encoded value of image/PDF.
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
                     * @param _imageBase64 Base64-encoded value of image/PDF.
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取URL address of image/PDF. (This field is not supported outside Chinese mainland)
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @return ImageUrl URL address of image/PDF. (This field is not supported outside Chinese mainland)
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置URL address of image/PDF. (This field is not supported outside Chinese mainland)
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * @param _imageUrl URL address of image/PDF. (This field is not supported outside Chinese mainland)
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取Reserved field.
                     * @return Scene Reserved field.
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置Reserved field.
                     * @param _scene Reserved field.
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取Language to recognize
The language can be automatically recognized or manually specified. Chinese-English mix (`zh`) is selected by default. Mixed characters in English and each supported language can be recognized together.
Valid values:
`zh`: Chinese-English mix
`zh_rare`: supports letters, digits, rare Chinese characters, Traditional Chinese characters, special characters, etc.
`auto`
`mix`: language mix
`jap`: Japanese
`kor`: Korean
`spa`: Spanish
`fre`: French
`ger`: German
`por`: Portuguese
`vie`: Vietnamese
`may`: Malay
`rus`: Russian
`ita`: Italian
`hol`: Dutch
`swe`: Swedish
`fin`: Finnish
`dan`: Danish
`nor`: Norwegian
`hun`: Hungarian
`tha`: Thai
`hi`: Hindi
`ara`: Arabic
                     * @return LanguageType Language to recognize
The language can be automatically recognized or manually specified. Chinese-English mix (`zh`) is selected by default. Mixed characters in English and each supported language can be recognized together.
Valid values:
`zh`: Chinese-English mix
`zh_rare`: supports letters, digits, rare Chinese characters, Traditional Chinese characters, special characters, etc.
`auto`
`mix`: language mix
`jap`: Japanese
`kor`: Korean
`spa`: Spanish
`fre`: French
`ger`: German
`por`: Portuguese
`vie`: Vietnamese
`may`: Malay
`rus`: Russian
`ita`: Italian
`hol`: Dutch
`swe`: Swedish
`fin`: Finnish
`dan`: Danish
`nor`: Norwegian
`hun`: Hungarian
`tha`: Thai
`hi`: Hindi
`ara`: Arabic
                     * 
                     */
                    std::string GetLanguageType() const;

                    /**
                     * 设置Language to recognize
The language can be automatically recognized or manually specified. Chinese-English mix (`zh`) is selected by default. Mixed characters in English and each supported language can be recognized together.
Valid values:
`zh`: Chinese-English mix
`zh_rare`: supports letters, digits, rare Chinese characters, Traditional Chinese characters, special characters, etc.
`auto`
`mix`: language mix
`jap`: Japanese
`kor`: Korean
`spa`: Spanish
`fre`: French
`ger`: German
`por`: Portuguese
`vie`: Vietnamese
`may`: Malay
`rus`: Russian
`ita`: Italian
`hol`: Dutch
`swe`: Swedish
`fin`: Finnish
`dan`: Danish
`nor`: Norwegian
`hun`: Hungarian
`tha`: Thai
`hi`: Hindi
`ara`: Arabic
                     * @param _languageType Language to recognize
The language can be automatically recognized or manually specified. Chinese-English mix (`zh`) is selected by default. Mixed characters in English and each supported language can be recognized together.
Valid values:
`zh`: Chinese-English mix
`zh_rare`: supports letters, digits, rare Chinese characters, Traditional Chinese characters, special characters, etc.
`auto`
`mix`: language mix
`jap`: Japanese
`kor`: Korean
`spa`: Spanish
`fre`: French
`ger`: German
`por`: Portuguese
`vie`: Vietnamese
`may`: Malay
`rus`: Russian
`ita`: Italian
`hol`: Dutch
`swe`: Swedish
`fin`: Finnish
`dan`: Danish
`nor`: Norwegian
`hun`: Hungarian
`tha`: Thai
`hi`: Hindi
`ara`: Arabic
                     * 
                     */
                    void SetLanguageType(const std::string& _languageType);

                    /**
                     * 判断参数 LanguageType 是否已赋值
                     * @return LanguageType 是否已赋值
                     * 
                     */
                    bool LanguageTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable PDF recognition. Default value: false. After this feature is enabled, both images and PDF files can be recognized at the same time.
                     * @return IsPdf Whether to enable PDF recognition. Default value: false. After this feature is enabled, both images and PDF files can be recognized at the same time.
                     * 
                     */
                    bool GetIsPdf() const;

                    /**
                     * 设置Whether to enable PDF recognition. Default value: false. After this feature is enabled, both images and PDF files can be recognized at the same time.
                     * @param _isPdf Whether to enable PDF recognition. Default value: false. After this feature is enabled, both images and PDF files can be recognized at the same time.
                     * 
                     */
                    void SetIsPdf(const bool& _isPdf);

                    /**
                     * 判断参数 IsPdf 是否已赋值
                     * @return IsPdf 是否已赋值
                     * 
                     */
                    bool IsPdfHasBeenSet() const;

                    /**
                     * 获取Page number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of the `IsPdf` parameter is `true`. Default value: 1.
                     * @return PdfPageNumber Page number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of the `IsPdf` parameter is `true`. Default value: 1.
                     * 
                     */
                    uint64_t GetPdfPageNumber() const;

                    /**
                     * 设置Page number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of the `IsPdf` parameter is `true`. Default value: 1.
                     * @param _pdfPageNumber Page number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of the `IsPdf` parameter is `true`. Default value: 1.
                     * 
                     */
                    void SetPdfPageNumber(const uint64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取Whether to return the character information. Default value: `false`
                     * @return IsWords Whether to return the character information. Default value: `false`
                     * 
                     */
                    bool GetIsWords() const;

                    /**
                     * 设置Whether to return the character information. Default value: `false`
                     * @param _isWords Whether to return the character information. Default value: `false`
                     * 
                     */
                    void SetIsWords(const bool& _isWords);

                    /**
                     * 判断参数 IsWords 是否已赋值
                     * @return IsWords 是否已赋值
                     * 
                     */
                    bool IsWordsHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded value of image/PDF.
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * URL address of image/PDF. (This field is not supported outside Chinese mainland)
The image/PDF cannot exceed 7 MB after being Base64-encoded. A resolution above 600x800 is recommended. PNG, JPG, JPEG, BMP, and PDF formats are supported.
We recommend you store the image in Tencent Cloud, as a Tencent Cloud URL can guarantee higher download speed and stability. The download speed and stability of non-Tencent Cloud URLs may be low.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * Reserved field.
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * Language to recognize
The language can be automatically recognized or manually specified. Chinese-English mix (`zh`) is selected by default. Mixed characters in English and each supported language can be recognized together.
Valid values:
`zh`: Chinese-English mix
`zh_rare`: supports letters, digits, rare Chinese characters, Traditional Chinese characters, special characters, etc.
`auto`
`mix`: language mix
`jap`: Japanese
`kor`: Korean
`spa`: Spanish
`fre`: French
`ger`: German
`por`: Portuguese
`vie`: Vietnamese
`may`: Malay
`rus`: Russian
`ita`: Italian
`hol`: Dutch
`swe`: Swedish
`fin`: Finnish
`dan`: Danish
`nor`: Norwegian
`hun`: Hungarian
`tha`: Thai
`hi`: Hindi
`ara`: Arabic
                     */
                    std::string m_languageType;
                    bool m_languageTypeHasBeenSet;

                    /**
                     * Whether to enable PDF recognition. Default value: false. After this feature is enabled, both images and PDF files can be recognized at the same time.
                     */
                    bool m_isPdf;
                    bool m_isPdfHasBeenSet;

                    /**
                     * Page number of the PDF page that needs to be recognized. Only one single PDF page can be recognized. This parameter is valid if the uploaded file is a PDF and the value of the `IsPdf` parameter is `true`. Default value: 1.
                     */
                    uint64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * Whether to return the character information. Default value: `false`
                     */
                    bool m_isWords;
                    bool m_isWordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALBASICOCRREQUEST_H_
