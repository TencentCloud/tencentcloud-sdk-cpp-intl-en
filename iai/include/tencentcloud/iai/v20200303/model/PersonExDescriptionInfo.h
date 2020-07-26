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
                * Custom description field of the person to be modified, which is a `key-value`
                */
                class PersonExDescriptionInfo : public AbstractModel
                {
                public:
                    PersonExDescriptionInfo();
                    ~PersonExDescriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Person description field index, whose value starts from 0
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PersonExDescriptionIndex Person description field index, whose value starts from 0
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPersonExDescriptionIndex() const;

                    /**
                     * 设置Person description field index, whose value starts from 0
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param PersonExDescriptionIndex Person description field index, whose value starts from 0
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPersonExDescriptionIndex(const uint64_t& _personExDescriptionIndex);

                    /**
                     * 判断参数 PersonExDescriptionIndex 是否已赋值
                     * @return PersonExDescriptionIndex 是否已赋值
                     */
                    bool PersonExDescriptionIndexHasBeenSet() const;

                    /**
                     * 获取Content of the person description field to be updated
                     * @return PersonExDescription Content of the person description field to be updated
                     */
                    std::string GetPersonExDescription() const;

                    /**
                     * 设置Content of the person description field to be updated
                     * @param PersonExDescription Content of the person description field to be updated
                     */
                    void SetPersonExDescription(const std::string& _personExDescription);

                    /**
                     * 判断参数 PersonExDescription 是否已赋值
                     * @return PersonExDescription 是否已赋值
                     */
                    bool PersonExDescriptionHasBeenSet() const;

                private:

                    /**
                     * Person description field index, whose value starts from 0
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_personExDescriptionIndex;
                    bool m_personExDescriptionIndexHasBeenSet;

                    /**
                     * Content of the person description field to be updated
                     */
                    std::string m_personExDescription;
                    bool m_personExDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_PERSONEXDESCRIPTIONINFO_H_
