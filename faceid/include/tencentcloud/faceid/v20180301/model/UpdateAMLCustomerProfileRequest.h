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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILEREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Person.h>
#include <tencentcloud/faceid/v20180301/model/Company.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * UpdateAMLCustomerProfile request structure.
                */
                class UpdateAMLCustomerProfileRequest : public AbstractModel
                {
                public:
                    UpdateAMLCustomerProfileRequest();
                    ~UpdateAMLCustomerProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取End user's unique identifier in the customer system, up to 256 characters.
                     * @return UniqueCustomerID End user's unique identifier in the customer system, up to 256 characters.
                     * 
                     */
                    std::string GetUniqueCustomerID() const;

                    /**
                     * 设置End user's unique identifier in the customer system, up to 256 characters.
                     * @param _uniqueCustomerID End user's unique identifier in the customer system, up to 256 characters.
                     * 
                     */
                    void SetUniqueCustomerID(const std::string& _uniqueCustomerID);

                    /**
                     * 判断参数 UniqueCustomerID 是否已赋值
                     * @return UniqueCustomerID 是否已赋值
                     * 
                     */
                    bool UniqueCustomerIDHasBeenSet() const;

                    /**
                     * 获取Entity type. Enumeration values: PERSON (individual) / COMPANY (company).
                     * @return EntityType Entity type. Enumeration values: PERSON (individual) / COMPANY (company).
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置Entity type. Enumeration values: PERSON (individual) / COMPANY (company).
                     * @param _entityType Entity type. Enumeration values: PERSON (individual) / COMPANY (company).
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取Personal information, required when EntityType=PERSON. 
Input restriction: EntityType=PERSON.
                     * @return Person Personal information, required when EntityType=PERSON. 
Input restriction: EntityType=PERSON.
                     * 
                     */
                    Person GetPerson() const;

                    /**
                     * 设置Personal information, required when EntityType=PERSON. 
Input restriction: EntityType=PERSON.
                     * @param _person Personal information, required when EntityType=PERSON. 
Input restriction: EntityType=PERSON.
                     * 
                     */
                    void SetPerson(const Person& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取Enterprise information, required when EntityType=COMPANY. Input restriction: EntityType=COMPANY.
                     * @return Company Enterprise information, required when EntityType=COMPANY. Input restriction: EntityType=COMPANY.
                     * 
                     */
                    Company GetCompany() const;

                    /**
                     * 设置Enterprise information, required when EntityType=COMPANY. Input restriction: EntityType=COMPANY.
                     * @param _company Enterprise information, required when EntityType=COMPANY. Input restriction: EntityType=COMPANY.
                     * 
                     */
                    void SetCompany(const Company& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                private:

                    /**
                     * End user's unique identifier in the customer system, up to 256 characters.
                     */
                    std::string m_uniqueCustomerID;
                    bool m_uniqueCustomerIDHasBeenSet;

                    /**
                     * Entity type. Enumeration values: PERSON (individual) / COMPANY (company).
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * Personal information, required when EntityType=PERSON. 
Input restriction: EntityType=PERSON.
                     */
                    Person m_person;
                    bool m_personHasBeenSet;

                    /**
                     * Enterprise information, required when EntityType=COMPANY. Input restriction: EntityType=COMPANY.
                     */
                    Company m_company;
                    bool m_companyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILEREQUEST_H_
