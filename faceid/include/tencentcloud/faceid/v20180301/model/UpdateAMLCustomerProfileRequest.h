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
                     * 获取<p>User's unique identifier in the customer system, up to 256 characters.</p>
                     * @return UniqueCustomerID <p>User's unique identifier in the customer system, up to 256 characters.</p>
                     * 
                     */
                    std::string GetUniqueCustomerID() const;

                    /**
                     * 设置<p>User's unique identifier in the customer system, up to 256 characters.</p>
                     * @param _uniqueCustomerID <p>User's unique identifier in the customer system, up to 256 characters.</p>
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
                     * 获取<p>Entity type. Enumeration values: PERSON / COMPANY</p><p>Enumeration values:</p><ul><li>PERSON: individual</li><li>COMPANY: company</li></ul>
                     * @return EntityType <p>Entity type. Enumeration values: PERSON / COMPANY</p><p>Enumeration values:</p><ul><li>PERSON: individual</li><li>COMPANY: company</li></ul>
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置<p>Entity type. Enumeration values: PERSON / COMPANY</p><p>Enumeration values:</p><ul><li>PERSON: individual</li><li>COMPANY: company</li></ul>
                     * @param _entityType <p>Entity type. Enumeration values: PERSON / COMPANY</p><p>Enumeration values:</p><ul><li>PERSON: individual</li><li>COMPANY: company</li></ul>
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
                     * 获取<p>Personal information, required when EntityType=PERSON</p><p>Input limit: EntityType=PERSON</p>
                     * @return Person <p>Personal information, required when EntityType=PERSON</p><p>Input limit: EntityType=PERSON</p>
                     * 
                     */
                    Person GetPerson() const;

                    /**
                     * 设置<p>Personal information, required when EntityType=PERSON</p><p>Input limit: EntityType=PERSON</p>
                     * @param _person <p>Personal information, required when EntityType=PERSON</p><p>Input limit: EntityType=PERSON</p>
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
                     * 获取<p>Enterprise info. Required when EntityType=COMPANY</p><p>Input limitation: EntityType=COMPANY</p>
                     * @return Company <p>Enterprise info. Required when EntityType=COMPANY</p><p>Input limitation: EntityType=COMPANY</p>
                     * 
                     */
                    Company GetCompany() const;

                    /**
                     * 设置<p>Enterprise info. Required when EntityType=COMPANY</p><p>Input limitation: EntityType=COMPANY</p>
                     * @param _company <p>Enterprise info. Required when EntityType=COMPANY</p><p>Input limitation: EntityType=COMPANY</p>
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
                     * <p>User's unique identifier in the customer system, up to 256 characters.</p>
                     */
                    std::string m_uniqueCustomerID;
                    bool m_uniqueCustomerIDHasBeenSet;

                    /**
                     * <p>Entity type. Enumeration values: PERSON / COMPANY</p><p>Enumeration values:</p><ul><li>PERSON: individual</li><li>COMPANY: company</li></ul>
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * <p>Personal information, required when EntityType=PERSON</p><p>Input limit: EntityType=PERSON</p>
                     */
                    Person m_person;
                    bool m_personHasBeenSet;

                    /**
                     * <p>Enterprise info. Required when EntityType=COMPANY</p><p>Input limitation: EntityType=COMPANY</p>
                     */
                    Company m_company;
                    bool m_companyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_UPDATEAMLCUSTOMERPROFILEREQUEST_H_
