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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_RUNAMLNAMESCREENINGREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_RUNAMLNAMESCREENINGREQUEST_H_

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
                * RunAMLNameScreening request structure.
                */
                class RunAMLNameScreeningRequest : public AbstractModel
                {
                public:
                    RunAMLNameScreeningRequest();
                    ~RunAMLNameScreeningRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique identifier of the end user in the customer system, up to 256 characters.</p>
                     * @return UniqueCustomerID <p>Unique identifier of the end user in the customer system, up to 256 characters.</p>
                     * 
                     */
                    std::string GetUniqueCustomerID() const;

                    /**
                     * 设置<p>Unique identifier of the end user in the customer system, up to 256 characters.</p>
                     * @param _uniqueCustomerID <p>Unique identifier of the end user in the customer system, up to 256 characters.</p>
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
                     * 获取Enterprise information, required when EntityType=COMPANY. 
Input restriction: EntityType=COMPANY.
                     * @return Company Enterprise information, required when EntityType=COMPANY. 
Input restriction: EntityType=COMPANY.
                     * 
                     */
                    Company GetCompany() const;

                    /**
                     * 设置Enterprise information, required when EntityType=COMPANY. 
Input restriction: EntityType=COMPANY.
                     * @param _company Enterprise information, required when EntityType=COMPANY. 
Input restriction: EntityType=COMPANY.
                     * 
                     */
                    void SetCompany(const Company& _company);

                    /**
                     * 判断参数 Company 是否已赋值
                     * @return Company 是否已赋值
                     * 
                     */
                    bool CompanyHasBeenSet() const;

                    /**
                     * 获取Whether continuous monitoring screening is enabled. Default value: false.
                     * @return EnableOngoingScreening Whether continuous monitoring screening is enabled. Default value: false.
                     * 
                     */
                    bool GetEnableOngoingScreening() const;

                    /**
                     * 设置Whether continuous monitoring screening is enabled. Default value: false.
                     * @param _enableOngoingScreening Whether continuous monitoring screening is enabled. Default value: false.
                     * 
                     */
                    void SetEnableOngoingScreening(const bool& _enableOngoingScreening);

                    /**
                     * 判断参数 EnableOngoingScreening 是否已赋值
                     * @return EnableOngoingScreening 是否已赋值
                     * 
                     */
                    bool EnableOngoingScreeningHasBeenSet() const;

                private:

                    /**
                     * <p>Unique identifier of the end user in the customer system, up to 256 characters.</p>
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
                     * Enterprise information, required when EntityType=COMPANY. 
Input restriction: EntityType=COMPANY.
                     */
                    Company m_company;
                    bool m_companyHasBeenSet;

                    /**
                     * Whether continuous monitoring screening is enabled. Default value: false.
                     */
                    bool m_enableOngoingScreening;
                    bool m_enableOngoingScreeningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_RUNAMLNAMESCREENINGREQUEST_H_
