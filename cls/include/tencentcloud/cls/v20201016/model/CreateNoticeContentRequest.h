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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATENOTICECONTENTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATENOTICECONTENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeContent.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateNoticeContent request structure.
                */
                class CreateNoticeContentRequest : public AbstractModel
                {
                public:
                    CreateNoticeContentRequest();
                    ~CreateNoticeContentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name. Supports a maximum of 255 bytes.
                     * @return Name Template name. Supports a maximum of 255 bytes.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name. Supports a maximum of 255 bytes.
                     * @param _name Template name. Supports a maximum of 255 bytes.
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
                     * 获取Template content language. Valid values: 0: Chinese; 1: English.
                     * @return Type Template content language. Valid values: 0: Chinese; 1: English.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Template content language. Valid values: 0: Chinese; 1: English.
                     * @param _type Template content language. Valid values: 0: Chinese; 1: English.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Detailed configurations of a template.
                     * @return NoticeContents Detailed configurations of a template.
                     * 
                     */
                    std::vector<NoticeContent> GetNoticeContents() const;

                    /**
                     * 设置Detailed configurations of a template.
                     * @param _noticeContents Detailed configurations of a template.
                     * 
                     */
                    void SetNoticeContents(const std::vector<NoticeContent>& _noticeContents);

                    /**
                     * 判断参数 NoticeContents 是否已赋值
                     * @return NoticeContents 是否已赋值
                     * 
                     */
                    bool NoticeContentsHasBeenSet() const;

                private:

                    /**
                     * Template name. Supports a maximum of 255 bytes.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template content language. Valid values: 0: Chinese; 1: English.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Detailed configurations of a template.
                     */
                    std::vector<NoticeContent> m_noticeContents;
                    bool m_noticeContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATENOTICECONTENTREQUEST_H_
