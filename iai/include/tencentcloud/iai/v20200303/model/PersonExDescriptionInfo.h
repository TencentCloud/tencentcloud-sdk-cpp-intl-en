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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_PERSONEXDESCRIPTIONINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_PERSONEXDESCRIPTIONINFO_H_

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
                * Content of the person description field to be modified, key-value
                */
                class PersonExDescriptionInfo : public AbstractModel
                {
                public:
                    PersonExDescriptionInfo();
                    ~PersonExDescriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Person description field Index, starts from 0.
                     * @return PersonExDescriptionIndex Person description field Index, starts from 0.
                     * 
                     */
                    uint64_t GetPersonExDescriptionIndex() const;

                    /**
                     * 设置Person description field Index, starts from 0.
                     * @param _personExDescriptionIndex Person description field Index, starts from 0.
                     * 
                     */
                    void SetPersonExDescriptionIndex(const uint64_t& _personExDescriptionIndex);

                    /**
                     * 判断参数 PersonExDescriptionIndex 是否已赋值
                     * @return PersonExDescriptionIndex 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionIndexHasBeenSet() const;

                    /**
                     * 获取Person description field content that needs to be updated.
                     * @return PersonExDescription Person description field content that needs to be updated.
                     * 
                     */
                    std::string GetPersonExDescription() const;

                    /**
                     * 设置Person description field content that needs to be updated.
                     * @param _personExDescription Person description field content that needs to be updated.
                     * 
                     */
                    void SetPersonExDescription(const std::string& _personExDescription);

                    /**
                     * 判断参数 PersonExDescription 是否已赋值
                     * @return PersonExDescription 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionHasBeenSet() const;

                private:

                    /**
                     * Person description field Index, starts from 0.
                     */
                    uint64_t m_personExDescriptionIndex;
                    bool m_personExDescriptionIndexHasBeenSet;

                    /**
                     * Person description field content that needs to be updated.
                     */
                    std::string m_personExDescription;
                    bool m_personExDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_PERSONEXDESCRIPTIONINFO_H_
