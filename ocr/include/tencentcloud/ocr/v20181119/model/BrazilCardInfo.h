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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILCARDINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/BrazilRNEInfo.h>
#include <tencentcloud/ocr/v20181119/model/BrazilRNMInfo.h>
#include <tencentcloud/ocr/v20181119/model/BrazilDriverLicenseInfo.h>
#include <tencentcloud/ocr/v20181119/model/BrazilIDCardInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Type of document in brazil.
                */
                class BrazilCardInfo : public AbstractModel
                {
                public:
                    BrazilCardInfo();
                    ~BrazilCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RNE document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RNE RNE document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BrazilRNEInfo GetRNE() const;

                    /**
                     * 设置RNE document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rNE RNE document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRNE(const BrazilRNEInfo& _rNE);

                    /**
                     * 判断参数 RNE 是否已赋值
                     * @return RNE 是否已赋值
                     * 
                     */
                    bool RNEHasBeenSet() const;

                    /**
                     * 获取Specifies the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RNM Specifies the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BrazilRNMInfo GetRNM() const;

                    /**
                     * 设置Specifies the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rNM Specifies the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRNM(const BrazilRNMInfo& _rNM);

                    /**
                     * 判断参数 RNM 是否已赋值
                     * @return RNM 是否已赋值
                     * 
                     */
                    bool RNMHasBeenSet() const;

                    /**
                     * 获取Driver license document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DriverLicense Driver license document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BrazilDriverLicenseInfo GetDriverLicense() const;

                    /**
                     * 设置Driver license document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _driverLicense Driver license document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDriverLicense(const BrazilDriverLicenseInfo& _driverLicense);

                    /**
                     * 判断参数 DriverLicense 是否已赋值
                     * @return DriverLicense 是否已赋值
                     * 
                     */
                    bool DriverLicenseHasBeenSet() const;

                    /**
                     * 获取ID card document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IDCard ID card document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BrazilIDCardInfo GetIDCard() const;

                    /**
                     * 设置ID card document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _iDCard ID card document.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIDCard(const BrazilIDCardInfo& _iDCard);

                    /**
                     * 判断参数 IDCard 是否已赋值
                     * @return IDCard 是否已赋值
                     * 
                     */
                    bool IDCardHasBeenSet() const;

                private:

                    /**
                     * RNE document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BrazilRNEInfo m_rNE;
                    bool m_rNEHasBeenSet;

                    /**
                     * Specifies the document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BrazilRNMInfo m_rNM;
                    bool m_rNMHasBeenSet;

                    /**
                     * Driver license document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BrazilDriverLicenseInfo m_driverLicense;
                    bool m_driverLicenseHasBeenSet;

                    /**
                     * ID card document.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BrazilIDCardInfo m_iDCard;
                    bool m_iDCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BRAZILCARDINFO_H_
