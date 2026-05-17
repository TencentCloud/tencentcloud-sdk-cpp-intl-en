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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_COMPANYINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_COMPANYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Company Information
                */
                class CompanyInfo : public AbstractModel
                {
                public:
                    CompanyInfo();
                    ~CompanyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Company Name
                     * @return CompanyName Company Name
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置Company Name
                     * @param _companyName Company Name
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取company ID
                     * @return CompanyId company ID
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置company ID
                     * @param _companyId company ID
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取Country of residence
                     * @return CompanyCountry Country of residence
                     * 
                     */
                    std::string GetCompanyCountry() const;

                    /**
                     * 设置Country of residence
                     * @param _companyCountry Country of residence
                     * 
                     */
                    void SetCompanyCountry(const std::string& _companyCountry);

                    /**
                     * 判断参数 CompanyCountry 是否已赋值
                     * @return CompanyCountry 是否已赋值
                     * 
                     */
                    bool CompanyCountryHasBeenSet() const;

                    /**
                     * 获取Company province
                     * @return CompanyProvince Company province
                     * 
                     */
                    std::string GetCompanyProvince() const;

                    /**
                     * 设置Company province
                     * @param _companyProvince Company province
                     * 
                     */
                    void SetCompanyProvince(const std::string& _companyProvince);

                    /**
                     * 判断参数 CompanyProvince 是否已赋值
                     * @return CompanyProvince 是否已赋值
                     * 
                     */
                    bool CompanyProvinceHasBeenSet() const;

                    /**
                     * 获取Company located city
                     * @return CompanyCity Company located city
                     * 
                     */
                    std::string GetCompanyCity() const;

                    /**
                     * 设置Company located city
                     * @param _companyCity Company located city
                     * 
                     */
                    void SetCompanyCity(const std::string& _companyCity);

                    /**
                     * 判断参数 CompanyCity 是否已赋值
                     * @return CompanyCity 是否已赋值
                     * 
                     */
                    bool CompanyCityHasBeenSet() const;

                    /**
                     * 获取Company's detailed address
                     * @return CompanyAddress Company's detailed address
                     * 
                     */
                    std::string GetCompanyAddress() const;

                    /**
                     * 设置Company's detailed address
                     * @param _companyAddress Company's detailed address
                     * 
                     */
                    void SetCompanyAddress(const std::string& _companyAddress);

                    /**
                     * 判断参数 CompanyAddress 是否已赋值
                     * @return CompanyAddress 是否已赋值
                     * 
                     */
                    bool CompanyAddressHasBeenSet() const;

                    /**
                     * 获取company phone number
                     * @return CompanyPhone company phone number
                     * 
                     */
                    std::string GetCompanyPhone() const;

                    /**
                     * 设置company phone number
                     * @param _companyPhone company phone number
                     * 
                     */
                    void SetCompanyPhone(const std::string& _companyPhone);

                    /**
                     * 判断参数 CompanyPhone 是否已赋值
                     * @return CompanyPhone 是否已赋值
                     * 
                     */
                    bool CompanyPhoneHasBeenSet() const;

                    /**
                     * 获取Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certs and not required for other types.
OTHERS
                     * @return IdType Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certs and not required for other types.
OTHERS
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 设置Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certs and not required for other types.
OTHERS
                     * @param _idType Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certs and not required for other types.
OTHERS
                     * 
                     */
                    void SetIdType(const std::string& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820
                     * @return IdNumber Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820
                     * 
                     */
                    std::string GetIdNumber() const;

                    /**
                     * 设置Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820
                     * @param _idNumber Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820
                     * 
                     */
                    void SetIdNumber(const std::string& _idNumber);

                    /**
                     * 判断参数 IdNumber 是否已赋值
                     * @return IdNumber 是否已赋值
                     * 
                     */
                    bool IdNumberHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Company Name
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * company ID
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * Country of residence
                     */
                    std::string m_companyCountry;
                    bool m_companyCountryHasBeenSet;

                    /**
                     * Company province
                     */
                    std::string m_companyProvince;
                    bool m_companyProvinceHasBeenSet;

                    /**
                     * Company located city
                     */
                    std::string m_companyCity;
                    bool m_companyCityHasBeenSet;

                    /**
                     * Company's detailed address
                     */
                    std::string m_companyAddress;
                    bool m_companyAddressHasBeenSet;

                    /**
                     * company phone number
                     */
                    std::string m_companyPhone;
                    bool m_companyPhoneHasBeenSet;

                    /**
                     * Company document type. Valid values:
TYDMZ (unified social credit code): This field is required only for CFCA certs and not required for other types.
OTHERS
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * Company identification number, value ranges from...to...
TYDMZ (unified social credit code): 11532xxxxxxxx24820
                     */
                    std::string m_idNumber;
                    bool m_idNumberHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_COMPANYINFO_H_
