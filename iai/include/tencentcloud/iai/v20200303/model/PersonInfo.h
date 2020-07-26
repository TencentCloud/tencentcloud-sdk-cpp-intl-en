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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Returned person information
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Person name
                     * @return PersonName Person name
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Person name
                     * @param PersonName Person name
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

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
                     * 获取Person gender
                     * @return Gender Person gender
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置Person gender
                     * @param Gender Person gender
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取Content of person description field
                     * @return PersonExDescriptions Content of person description field
                     */
                    std::vector<std::string> GetPersonExDescriptions() const;

                    /**
                     * 设置Content of person description field
                     * @param PersonExDescriptions Content of person description field
                     */
                    void SetPersonExDescriptions(const std::vector<std::string>& _personExDescriptions);

                    /**
                     * 判断参数 PersonExDescriptions 是否已赋值
                     * @return PersonExDescriptions 是否已赋值
                     */
                    bool PersonExDescriptionsHasBeenSet() const;

                    /**
                     * 获取List of contained face images
                     * @return FaceIds List of contained face images
                     */
                    std::vector<std::string> GetFaceIds() const;

                    /**
                     * 设置List of contained face images
                     * @param FaceIds List of contained face images
                     */
                    void SetFaceIds(const std::vector<std::string>& _faceIds);

                    /**
                     * 判断参数 FaceIds 是否已赋值
                     * @return FaceIds 是否已赋值
                     */
                    bool FaceIdsHasBeenSet() const;

                    /**
                     * 获取Person creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
                     * @return CreationTimestamp Person creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
                     */
                    uint64_t GetCreationTimestamp() const;

                    /**
                     * 设置Person creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
                     * @param CreationTimestamp Person creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
                     */
                    void SetCreationTimestamp(const uint64_t& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     */
                    bool CreationTimestampHasBeenSet() const;

                private:

                    /**
                     * Person name
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Person ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Person gender
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * Content of person description field
                     */
                    std::vector<std::string> m_personExDescriptions;
                    bool m_personExDescriptionsHasBeenSet;

                    /**
                     * List of contained face images
                     */
                    std::vector<std::string> m_faceIds;
                    bool m_faceIdsHasBeenSet;

                    /**
                     * Person creation time and date (`CreationTimestamp`), whose value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). For more information, please see the UNIX time document.
                     */
                    uint64_t m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_PERSONINFO_H_
