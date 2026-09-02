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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMPERSONUSER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMPERSONUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Personal user information
                */
                class DspmPersonUser : public AbstractModel
                {
                public:
                    DspmPersonUser();
                    ~DspmPersonUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Personal id
                     * @return PersonId Personal id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Personal id
                     * @param _personId Personal id
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return PersonName Name
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置Name
                     * @param _personName Name
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Phone Mobile number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Mobile number.
                     * @param _phone Mobile number.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                private:

                    /**
                     * Personal id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMPERSONUSER_H_
