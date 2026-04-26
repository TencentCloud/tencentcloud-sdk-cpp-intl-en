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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ImageRecognition request structure.
                */
                class ImageRecognitionRequest : public AbstractModel
                {
                public:
                    ImageRecognitionRequest();
                    ~ImageRecognitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Identity card number</p>
                     * @return IdCard <p>Identity card number</p>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置<p>Identity card number</p>
                     * @param _idCard <p>Identity card number</p>
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取<p>Name. For Chinese, please use UTF-8 encode.</p>
                     * @return Name <p>Name. For Chinese, please use UTF-8 encode.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Name. For Chinese, please use UTF-8 encode.</p>
                     * @param _name <p>Name. For Chinese, please use UTF-8 encode.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Image for face comparison, the Base64 value of the image.<br>The size of the Base64-encoded image data should be no more than 3M. Only jpg and png formats are supported.<br>Please use the standard Base64 encoding type (with = padding). Refer to RFC4648 for the coding specification.</p>
                     * @return ImageBase64 <p>Image for face comparison, the Base64 value of the image.<br>The size of the Base64-encoded image data should be no more than 3M. Only jpg and png formats are supported.<br>Please use the standard Base64 encoding type (with = padding). Refer to RFC4648 for the coding specification.</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>Image for face comparison, the Base64 value of the image.<br>The size of the Base64-encoded image data should be no more than 3M. Only jpg and png formats are supported.<br>Please use the standard Base64 encoding type (with = padding). Refer to RFC4648 for the coding specification.</p>
                     * @param _imageBase64 <p>Image for face comparison, the Base64 value of the image.<br>The size of the Base64-encoded image data should be no more than 3M. Only jpg and png formats are supported.<br>Please use the standard Base64 encoding type (with = padding). Refer to RFC4648 for the coding specification.</p>
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
                     * 获取<p>This parameter is not required for this API.</p>
                     * @return Optional <p>This parameter is not required for this API.</p>
                     * 
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置<p>This parameter is not required for this API.</p>
                     * @param _optional <p>This parameter is not required for this API.</p>
                     * 
                     */
                    void SetOptional(const std::string& _optional);

                    /**
                     * 判断参数 Optional 是否已赋值
                     * @return Optional 是否已赋值
                     * 
                     */
                    bool OptionalHasBeenSet() const;

                    /**
                     * 获取<p>Sensitive data encryption information. Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.</p>
                     * @return Encryption <p>Sensitive data encryption information. Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>Sensitive data encryption information. Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.</p>
                     * @param _encryption <p>Sensitive data encryption information. Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.</p>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * <p>Identity card number</p>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>Name. For Chinese, please use UTF-8 encode.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Image for face comparison, the Base64 value of the image.<br>The size of the Base64-encoded image data should be no more than 3M. Only jpg and png formats are supported.<br>Please use the standard Base64 encoding type (with = padding). Refer to RFC4648 for the coding specification.</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>This parameter is not required for this API.</p>
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                    /**
                     * <p>Sensitive data encryption information. Users with encryption requirements for incoming information (name, identity card number) can use this parameter. For details, please click the left-side link.</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IMAGERECOGNITIONREQUEST_H_
