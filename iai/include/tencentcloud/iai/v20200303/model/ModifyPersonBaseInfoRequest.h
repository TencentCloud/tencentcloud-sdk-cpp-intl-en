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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONBASEINFOREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONBASEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * ModifyPersonBaseInfo request structure.
                */
                class ModifyPersonBaseInfoRequest : public AbstractModel
                {
                public:
                    ModifyPersonBaseInfoRequest();
                    ~ModifyPersonBaseInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Person ID
                     * @return PersonId Person ID
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Person ID
                     * @param PersonId Person ID
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Name of the person to be modified
                     * @return PersonName Name of the person to be modified
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Name of the person to be modified
                     * @param PersonName Name of the person to be modified
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Gender of the person to be modified
                     * @return Gender Gender of the person to be modified
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置Gender of the person to be modified
                     * @param Gender Gender of the person to be modified
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                private:

                    /**
                     * Person ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Name of the person to be modified
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Gender of the person to be modified
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_MODIFYPERSONBASEINFOREQUEST_H_
