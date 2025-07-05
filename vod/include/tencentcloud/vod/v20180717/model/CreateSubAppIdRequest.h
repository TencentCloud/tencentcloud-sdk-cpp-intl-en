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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateSubAppId request structure.
                */
                class CreateSubAppIdRequest : public AbstractModel
                {
                public:
                    CreateSubAppIdRequest();
                    ~CreateSubAppIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subapplication name. Length limit: 40 characters.
                     * @return Name Subapplication name. Length limit: 40 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subapplication name. Length limit: 40 characters.
                     * @param _name Subapplication name. Length limit: 40 characters.
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
                     * 获取Subapplication overview. Length limit: 300 characters.
                     * @return Description Subapplication overview. Length limit: 300 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Subapplication overview. Length limit: 300 characters.
                     * @param _description Subapplication overview. Length limit: 300 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Subapplication name. Length limit: 40 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subapplication overview. Length limit: 300 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
