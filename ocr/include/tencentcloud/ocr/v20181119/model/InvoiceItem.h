/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>
#include <tencentcloud/ocr/v20181119/model/SingleInvoiceItem.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Recognition information of a single invoice/ticket among multiple types of invoices/tickets
                */
                class InvoiceItem : public AbstractModel
                {
                public:
                    InvoiceItem();
                    ~InvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The recognition result.
`OK`: Recognition is successful.
`FailedOperation.UnsupportedInvoice`: Recognition is not supported.
`FailedOperation.UnKnowError`: Recognition failed.
For the information about other error codes, see the OCR API description for each invoice/ticket.
                     * @return Code The recognition result.
`OK`: Recognition is successful.
`FailedOperation.UnsupportedInvoice`: Recognition is not supported.
`FailedOperation.UnKnowError`: Recognition failed.
For the information about other error codes, see the OCR API description for each invoice/ticket.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置The recognition result.
`OK`: Recognition is successful.
`FailedOperation.UnsupportedInvoice`: Recognition is not supported.
`FailedOperation.UnKnowError`: Recognition failed.
For the information about other error codes, see the OCR API description for each invoice/ticket.
                     * @param _code The recognition result.
`OK`: Recognition is successful.
`FailedOperation.UnsupportedInvoice`: Recognition is not supported.
`FailedOperation.UnKnowError`: Recognition failed.
For the information about other error codes, see the OCR API description for each invoice/ticket.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取The type of invoice/ticket to which the recognized image belongs.
-1: Unknown
0: Taxi receipt
1: Quota invoice
2: Train ticket
3: VAT invoice
5: Itinerary/Receipt of e-ticket for air transportation
8: General machine-printed invoice
9: Bus ticket
10: Ship ticket
11: VAT invoice (roll)
12: Car sales invoice
13: Toll receipt
15: Non-tax revenue invoice
16: Fully digitalized electronic invoice
                     * @return Type The type of invoice/ticket to which the recognized image belongs.
-1: Unknown
0: Taxi receipt
1: Quota invoice
2: Train ticket
3: VAT invoice
5: Itinerary/Receipt of e-ticket for air transportation
8: General machine-printed invoice
9: Bus ticket
10: Ship ticket
11: VAT invoice (roll)
12: Car sales invoice
13: Toll receipt
15: Non-tax revenue invoice
16: Fully digitalized electronic invoice
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置The type of invoice/ticket to which the recognized image belongs.
-1: Unknown
0: Taxi receipt
1: Quota invoice
2: Train ticket
3: VAT invoice
5: Itinerary/Receipt of e-ticket for air transportation
8: General machine-printed invoice
9: Bus ticket
10: Ship ticket
11: VAT invoice (roll)
12: Car sales invoice
13: Toll receipt
15: Non-tax revenue invoice
16: Fully digitalized electronic invoice
                     * @param _type The type of invoice/ticket to which the recognized image belongs.
-1: Unknown
0: Taxi receipt
1: Quota invoice
2: Train ticket
3: VAT invoice
5: Itinerary/Receipt of e-ticket for air transportation
8: General machine-printed invoice
9: Bus ticket
10: Ship ticket
11: VAT invoice (roll)
12: Car sales invoice
13: Toll receipt
15: Non-tax revenue invoice
16: Fully digitalized electronic invoice
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The coordinates of the four vertices of the rotated image.
                     * @return Polygon The coordinates of the four vertices of the rotated image.
                     * 
                     */
                    Polygon GetPolygon() const;

                    /**
                     * 设置The coordinates of the four vertices of the rotated image.
                     * @param _polygon The coordinates of the four vertices of the rotated image.
                     * 
                     */
                    void SetPolygon(const Polygon& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取The rotation angle of the recognized image in the image with multiple types of invoices/tickets.
                     * @return Angle The rotation angle of the recognized image in the image with multiple types of invoices/tickets.
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 设置The rotation angle of the recognized image in the image with multiple types of invoices/tickets.
                     * @param _angle The rotation angle of the recognized image in the image with multiple types of invoices/tickets.
                     * 
                     */
                    void SetAngle(const double& _angle);

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取The recognized content.
                     * @return SingleInvoiceInfos The recognized content.
                     * 
                     */
                    SingleInvoiceItem GetSingleInvoiceInfos() const;

                    /**
                     * 设置The recognized content.
                     * @param _singleInvoiceInfos The recognized content.
                     * 
                     */
                    void SetSingleInvoiceInfos(const SingleInvoiceItem& _singleInvoiceInfos);

                    /**
                     * 判断参数 SingleInvoiceInfos 是否已赋值
                     * @return SingleInvoiceInfos 是否已赋值
                     * 
                     */
                    bool SingleInvoiceInfosHasBeenSet() const;

                    /**
                     * 获取The number of the page on which the recognized invoice is in the image or PDF file, starting from 1 by default.
                     * @return Page The number of the page on which the recognized invoice is in the image or PDF file, starting from 1 by default.
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置The number of the page on which the recognized invoice is in the image or PDF file, starting from 1 by default.
                     * @param _page The number of the page on which the recognized invoice is in the image or PDF file, starting from 1 by default.
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取The detailed invoice type. See the description of `SubType`.
                     * @return SubType The detailed invoice type. See the description of `SubType`.
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置The detailed invoice type. See the description of `SubType`.
                     * @param _subType The detailed invoice type. See the description of `SubType`.
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取The invoice description. See the description of `TypeDescription`.
                     * @return TypeDescription The invoice description. See the description of `TypeDescription`.
                     * 
                     */
                    std::string GetTypeDescription() const;

                    /**
                     * 设置The invoice description. See the description of `TypeDescription`.
                     * @param _typeDescription The invoice description. See the description of `TypeDescription`.
                     * 
                     */
                    void SetTypeDescription(const std::string& _typeDescription);

                    /**
                     * 判断参数 TypeDescription 是否已赋值
                     * @return TypeDescription 是否已赋值
                     * 
                     */
                    bool TypeDescriptionHasBeenSet() const;

                    /**
                     * 获取The image file after cropping, encoded in Base64. This is returned if `EnableCutImage` is set to `true`.
                     * @return CutImage The image file after cropping, encoded in Base64. This is returned if `EnableCutImage` is set to `true`.
                     * 
                     */
                    std::string GetCutImage() const;

                    /**
                     * 设置The image file after cropping, encoded in Base64. This is returned if `EnableCutImage` is set to `true`.
                     * @param _cutImage The image file after cropping, encoded in Base64. This is returned if `EnableCutImage` is set to `true`.
                     * 
                     */
                    void SetCutImage(const std::string& _cutImage);

                    /**
                     * 判断参数 CutImage 是否已赋值
                     * @return CutImage 是否已赋值
                     * 
                     */
                    bool CutImageHasBeenSet() const;

                    /**
                     * 获取The description of the detailed invoice type. See the description of `SubType`.
                     * @return SubTypeDescription The description of the detailed invoice type. See the description of `SubType`.
                     * 
                     */
                    std::string GetSubTypeDescription() const;

                    /**
                     * 设置The description of the detailed invoice type. See the description of `SubType`.
                     * @param _subTypeDescription The description of the detailed invoice type. See the description of `SubType`.
                     * 
                     */
                    void SetSubTypeDescription(const std::string& _subTypeDescription);

                    /**
                     * 判断参数 SubTypeDescription 是否已赋值
                     * @return SubTypeDescription 是否已赋值
                     * 
                     */
                    bool SubTypeDescriptionHasBeenSet() const;

                private:

                    /**
                     * The recognition result.
`OK`: Recognition is successful.
`FailedOperation.UnsupportedInvoice`: Recognition is not supported.
`FailedOperation.UnKnowError`: Recognition failed.
For the information about other error codes, see the OCR API description for each invoice/ticket.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * The type of invoice/ticket to which the recognized image belongs.
-1: Unknown
0: Taxi receipt
1: Quota invoice
2: Train ticket
3: VAT invoice
5: Itinerary/Receipt of e-ticket for air transportation
8: General machine-printed invoice
9: Bus ticket
10: Ship ticket
11: VAT invoice (roll)
12: Car sales invoice
13: Toll receipt
15: Non-tax revenue invoice
16: Fully digitalized electronic invoice
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The coordinates of the four vertices of the rotated image.
                     */
                    Polygon m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * The rotation angle of the recognized image in the image with multiple types of invoices/tickets.
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * The recognized content.
                     */
                    SingleInvoiceItem m_singleInvoiceInfos;
                    bool m_singleInvoiceInfosHasBeenSet;

                    /**
                     * The number of the page on which the recognized invoice is in the image or PDF file, starting from 1 by default.
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * The detailed invoice type. See the description of `SubType`.
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * The invoice description. See the description of `TypeDescription`.
                     */
                    std::string m_typeDescription;
                    bool m_typeDescriptionHasBeenSet;

                    /**
                     * The image file after cropping, encoded in Base64. This is returned if `EnableCutImage` is set to `true`.
                     */
                    std::string m_cutImage;
                    bool m_cutImageHasBeenSet;

                    /**
                     * The description of the detailed invoice type. See the description of `SubType`.
                     */
                    std::string m_subTypeDescription;
                    bool m_subTypeDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_INVOICEITEM_H_
