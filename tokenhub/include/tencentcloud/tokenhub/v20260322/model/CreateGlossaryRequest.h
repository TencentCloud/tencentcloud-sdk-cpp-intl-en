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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateGlossary request structure.
                */
                class CreateGlossaryRequest : public AbstractModel
                {
                public:
                    CreateGlossaryRequest();
                    ~CreateGlossaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Terminology library name. Maximum 50 characters.
                     * @return Name Terminology library name. Maximum 50 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Terminology library name. Maximum 50 characters.
                     * @param _name Terminology library name. Maximum 50 characters.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Source language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * @return Source Source language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * @param _source Source language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Target language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * @return Target Target language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Target language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * @param _target Target language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Termbase description. Maximum 255 characters.
                     * @return Description Termbase description. Maximum 255 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Termbase description. Maximum 255 characters.
                     * @param _description Termbase description. Maximum 255 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Terminology library name. Maximum 50 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Source language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Target language code. Maximum 16 characters, such as zh (Chinese), en (English).
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Termbase description. Maximum 255 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYREQUEST_H_
