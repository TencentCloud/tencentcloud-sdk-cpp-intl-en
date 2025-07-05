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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEFUNCTIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateFunction request structure.
                */
                class CreateFunctionRequest : public AbstractModel
                {
                public:
                    CreateFunctionRequest();
                    ~CreateFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Function name, which can contain up to 30 characters, including lowercase letters, digits, and hyphens. It should start and end with a digit or a letter.
                     * @return Name Function name, which can contain up to 30 characters, including lowercase letters, digits, and hyphens. It should start and end with a digit or a letter.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Function name, which can contain up to 30 characters, including lowercase letters, digits, and hyphens. It should start and end with a digit or a letter.
                     * @param _name Function name, which can contain up to 30 characters, including lowercase letters, digits, and hyphens. It should start and end with a digit or a letter.
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
                     * 获取Function content, which currently only supports JavaScript code. Its maximum size is 5 MB.
                     * @return Content Function content, which currently only supports JavaScript code. Its maximum size is 5 MB.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Function content, which currently only supports JavaScript code. Its maximum size is 5 MB.
                     * @param _content Function content, which currently only supports JavaScript code. Its maximum size is 5 MB.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Function description, which can contain up to 60 characters.
                     * @return Remark Function description, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Function description, which can contain up to 60 characters.
                     * @param _remark Function description, which can contain up to 60 characters.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Function name, which can contain up to 30 characters, including lowercase letters, digits, and hyphens. It should start and end with a digit or a letter.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Function content, which currently only supports JavaScript code. Its maximum size is 5 MB.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Function description, which can contain up to 60 characters.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEFUNCTIONREQUEST_H_
