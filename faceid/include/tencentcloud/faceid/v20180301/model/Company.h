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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_COMPANY_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_COMPANY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * AML Company object
                */
                class Company : public AbstractModel
                {
                public:
                    Company();
                    ~Company() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Enterprise name (required)</p>
                     * @return CompanyName <p>Enterprise name (required)</p>
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置<p>Enterprise name (required)</p>
                     * @param _companyName <p>Enterprise name (required)</p>
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
                     * 获取<p>Enterprise registration number / unified social credit code (Option)</p>
                     * @return CompanyCertNumber <p>Enterprise registration number / unified social credit code (Option)</p>
                     * 
                     */
                    std::string GetCompanyCertNumber() const;

                    /**
                     * 设置<p>Enterprise registration number / unified social credit code (Option)</p>
                     * @param _companyCertNumber <p>Enterprise registration number / unified social credit code (Option)</p>
                     * 
                     */
                    void SetCompanyCertNumber(const std::string& _companyCertNumber);

                    /**
                     * 判断参数 CompanyCertNumber 是否已赋值
                     * @return CompanyCertNumber 是否已赋值
                     * 
                     */
                    bool CompanyCertNumberHasBeenSet() const;

                    /**
                     * 获取<p>Enterprise registration country, ISO 3166-1 alpha-2 country code (Option)</p>
                     * @return CompanyCountry <p>Enterprise registration country, ISO 3166-1 alpha-2 country code (Option)</p>
                     * 
                     */
                    std::string GetCompanyCountry() const;

                    /**
                     * 设置<p>Enterprise registration country, ISO 3166-1 alpha-2 country code (Option)</p>
                     * @param _companyCountry <p>Enterprise registration country, ISO 3166-1 alpha-2 country code (Option)</p>
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
                     * 获取<p>Company address (optional)</p>
                     * @return CompanyAddress <p>Company address (optional)</p>
                     * 
                     */
                    std::string GetCompanyAddress() const;

                    /**
                     * 设置<p>Company address (optional)</p>
                     * @param _companyAddress <p>Company address (optional)</p>
                     * 
                     */
                    void SetCompanyAddress(const std::string& _companyAddress);

                    /**
                     * 判断参数 CompanyAddress 是否已赋值
                     * @return CompanyAddress 是否已赋值
                     * 
                     */
                    bool CompanyAddressHasBeenSet() const;

                private:

                    /**
                     * <p>Enterprise name (required)</p>
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * <p>Enterprise registration number / unified social credit code (Option)</p>
                     */
                    std::string m_companyCertNumber;
                    bool m_companyCertNumberHasBeenSet;

                    /**
                     * <p>Enterprise registration country, ISO 3166-1 alpha-2 country code (Option)</p>
                     */
                    std::string m_companyCountry;
                    bool m_companyCountryHasBeenSet;

                    /**
                     * <p>Company address (optional)</p>
                     */
                    std::string m_companyAddress;
                    bool m_companyAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_COMPANY_H_
