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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MLIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MLIDCARDOCRRESPONSE_H_

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
                * MLIDCardOCR response structure.
                */
                class MLIDCardOCRResponse : public AbstractModel
                {
                public:
                    MLIDCardOCRResponse();
                    ~MLIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity card number
                     * @return ID Identity card number
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Address
                     * @return Address Address
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Gender
                     * @return Sex Gender
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取Warning code
-9103 Warning for spoofed card
-9102 Warning for photocopied card
-9106 Warning for covered card
-9107 Warning for blurry image
                     * @return Warn Warning code
-9103 Warning for spoofed card
-9102 Warning for photocopied card
-9106 Warning for covered card
-9107 Warning for blurry image
                     */
                    std::vector<int64_t> GetWarn() const;

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取Identity photo
                     * @return Image Identity photo
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Extended field:
{
    ID:{
        Confidence:0.9999
    },
    Name:{
        Confidence:0.9996
    }
}
                     * @return AdvancedInfo Extended field:
{
    ID:{
        Confidence:0.9999
    },
    Name:{
        Confidence:0.9996
    }
}
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取Certificate type
MyKad  ID card
MyPR    Permanent resident card
MyTentera   Military identity card
MyKAS    Temporary ID card
POLIS  Police card
IKAD   Work permit
MyKid   Kid card
                     * @return Type Certificate type
MyKad  ID card
MyPR    Permanent resident card
MyTentera   Military identity card
MyKAS    Temporary ID card
POLIS  Police card
IKAD   Work permit
MyKid   Kid card
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Date of birth (currently, this field is only supported for IKAD).
                     * @return Birthday Date of birth (currently, this field is only supported for IKAD).
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     */
                    bool BirthdayHasBeenSet() const;

                private:

                    /**
                     * Identity card number
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Address
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Gender
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * Warning code
-9103 Warning for spoofed card
-9102 Warning for photocopied card
-9106 Warning for covered card
-9107 Warning for blurry image
                     */
                    std::vector<int64_t> m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * Identity photo
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Extended field:
{
    ID:{
        Confidence:0.9999
    },
    Name:{
        Confidence:0.9996
    }
}
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * Certificate type
MyKad  ID card
MyPR    Permanent resident card
MyTentera   Military identity card
MyKAS    Temporary ID card
POLIS  Police card
IKAD   Work permit
MyKid   Kid card
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Date of birth (currently, this field is only supported for IKAD).
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MLIDCARDOCRRESPONSE_H_
