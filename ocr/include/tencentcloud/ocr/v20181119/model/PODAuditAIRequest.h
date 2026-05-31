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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PODAUDITAIREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PODAUDITAIREQUEST_H_

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
                * PODAuditAI request structure.
                */
                class PODAuditAIRequest : public AbstractModel
                {
                public:
                    PODAuditAIRequest();
                    ~PODAuditAIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>The Base64 value of the image/PDF. The Base64 must be no more than 10M, resolution is recommended to be 600*800 or higher, and supports PNG, JPG, JPEG, BMP, PDF formats. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only use ImageUrl. Example value: /9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * @return ImageBase64List <p>The Base64 value of the image/PDF. The Base64 must be no more than 10M, resolution is recommended to be 600*800 or higher, and supports PNG, JPG, JPEG, BMP, PDF formats. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only use ImageUrl. Example value: /9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * 
                     */
                    std::vector<std::string> GetImageBase64List() const;

                    /**
                     * 设置<p>The Base64 value of the image/PDF. The Base64 must be no more than 10M, resolution is recommended to be 600*800 or higher, and supports PNG, JPG, JPEG, BMP, PDF formats. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only use ImageUrl. Example value: /9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * @param _imageBase64List <p>The Base64 value of the image/PDF. The Base64 must be no more than 10M, resolution is recommended to be 600*800 or higher, and supports PNG, JPG, JPEG, BMP, PDF formats. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only use ImageUrl. Example value: /9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * 
                     */
                    void SetImageBase64List(const std::vector<std::string>& _imageBase64List);

                    /**
                     * 判断参数 ImageBase64List 是否已赋值
                     * @return ImageBase64List 是否已赋值
                     * 
                     */
                    bool ImageBase64ListHasBeenSet() const;

                    /**
                     * 获取<p>The Url address of the image/PDF. The image after Base64 encoding should be no more than 10M, with a resolution of 600*800 or higher, and supports PNG, JPG, JPEG, BMP, and PDF formats. The image download time should not exceed 3 seconds. Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of non-Tencent Cloud storage URLs may be impacted to a certain extent. Example value: https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.JPG</p>
                     * @return ImageUrlList <p>The Url address of the image/PDF. The image after Base64 encoding should be no more than 10M, with a resolution of 600*800 or higher, and supports PNG, JPG, JPEG, BMP, and PDF formats. The image download time should not exceed 3 seconds. Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of non-Tencent Cloud storage URLs may be impacted to a certain extent. Example value: https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.JPG</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>The Url address of the image/PDF. The image after Base64 encoding should be no more than 10M, with a resolution of 600*800 or higher, and supports PNG, JPG, JPEG, BMP, and PDF formats. The image download time should not exceed 3 seconds. Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of non-Tencent Cloud storage URLs may be impacted to a certain extent. Example value: https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.JPG</p>
                     * @param _imageUrlList <p>The Url address of the image/PDF. The image after Base64 encoding should be no more than 10M, with a resolution of 600*800 or higher, and supports PNG, JPG, JPEG, BMP, and PDF formats. The image download time should not exceed 3 seconds. Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of non-Tencent Cloud storage URLs may be impacted to a certain extent. Example value: https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.JPG</p>
                     * 
                     */
                    void SetImageUrlList(const std::vector<std::string>& _imageUrlList);

                    /**
                     * 判断参数 ImageUrlList 是否已赋值
                     * @return ImageUrlList 是否已赋值
                     * 
                     */
                    bool ImageUrlListHasBeenSet() const;

                    /**
                     * 获取<p>Waybill number is used for pod rule review assistance</p>
                     * @return WaybillNumber <p>Waybill number is used for pod rule review assistance</p>
                     * 
                     */
                    std::string GetWaybillNumber() const;

                    /**
                     * 设置<p>Waybill number is used for pod rule review assistance</p>
                     * @param _waybillNumber <p>Waybill number is used for pod rule review assistance</p>
                     * 
                     */
                    void SetWaybillNumber(const std::string& _waybillNumber);

                    /**
                     * 判断参数 WaybillNumber 是否已赋值
                     * @return WaybillNumber 是否已赋值
                     * 
                     */
                    bool WaybillNumberHasBeenSet() const;

                    /**
                     * 获取<p>No      The acknowledge type, 0 is selected by default</p><p>Enumeration value:</p><ul><li>0: Doorstep/yard</li><li>1: Parcel reception room</li><li>2: Myself/others acknowledge</li><li>3: Front desk/reception</li><li>4: Express delivery collection point</li><li>5: Express cabinet</li></ul>
                     * @return SignType <p>No      The acknowledge type, 0 is selected by default</p><p>Enumeration value:</p><ul><li>0: Doorstep/yard</li><li>1: Parcel reception room</li><li>2: Myself/others acknowledge</li><li>3: Front desk/reception</li><li>4: Express delivery collection point</li><li>5: Express cabinet</li></ul>
                     * 
                     */
                    int64_t GetSignType() const;

                    /**
                     * 设置<p>No      The acknowledge type, 0 is selected by default</p><p>Enumeration value:</p><ul><li>0: Doorstep/yard</li><li>1: Parcel reception room</li><li>2: Myself/others acknowledge</li><li>3: Front desk/reception</li><li>4: Express delivery collection point</li><li>5: Express cabinet</li></ul>
                     * @param _signType <p>No      The acknowledge type, 0 is selected by default</p><p>Enumeration value:</p><ul><li>0: Doorstep/yard</li><li>1: Parcel reception room</li><li>2: Myself/others acknowledge</li><li>3: Front desk/reception</li><li>4: Express delivery collection point</li><li>5: Express cabinet</li></ul>
                     * 
                     */
                    void SetSignType(const int64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                private:

                    /**
                     * <p>The Base64 value of the image/PDF. The Base64 must be no more than 10M, resolution is recommended to be 600*800 or higher, and supports PNG, JPG, JPEG, BMP, PDF formats. Either ImageUrl or ImageBase64 of the image must be provided. If both are provided, only use ImageUrl. Example value: /9j/4AAQSkZJRg.....s97n//2Q==</p>
                     */
                    std::vector<std::string> m_imageBase64List;
                    bool m_imageBase64ListHasBeenSet;

                    /**
                     * <p>The Url address of the image/PDF. The image after Base64 encoding should be no more than 10M, with a resolution of 600*800 or higher, and supports PNG, JPG, JPEG, BMP, and PDF formats. The image download time should not exceed 3 seconds. Images stored in Tencent Cloud's Url can guarantee higher download speed and stability. It is recommended to store images in Tencent Cloud. The speed and stability of non-Tencent Cloud storage URLs may be impacted to a certain extent. Example value: https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.JPG</p>
                     */
                    std::vector<std::string> m_imageUrlList;
                    bool m_imageUrlListHasBeenSet;

                    /**
                     * <p>Waybill number is used for pod rule review assistance</p>
                     */
                    std::string m_waybillNumber;
                    bool m_waybillNumberHasBeenSet;

                    /**
                     * <p>No      The acknowledge type, 0 is selected by default</p><p>Enumeration value:</p><ul><li>0: Doorstep/yard</li><li>1: Parcel reception room</li><li>2: Myself/others acknowledge</li><li>3: Front desk/reception</li><li>4: Express delivery collection point</li><li>5: Express cabinet</li></ul>
                     */
                    int64_t m_signType;
                    bool m_signTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PODAUDITAIREQUEST_H_
