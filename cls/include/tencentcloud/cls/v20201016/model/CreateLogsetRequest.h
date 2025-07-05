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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateLogset request structure.
                */
                class CreateLogsetRequest : public AbstractModel
                {
                public:
                    CreateLogsetRequest();
                    ~CreateLogsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Logset name, which must be unique
                     * @return LogsetName Logset name, which must be unique
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Logset name, which must be unique
                     * @param _logsetName Logset name, which must be unique
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取Tag description list. Up to 10 tag key-value pairs are supported and must be unique.
                     * @return Tags Tag description list. Up to 10 tag key-value pairs are supported and must be unique.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. Up to 10 tag key-value pairs are supported and must be unique.
                     * @param _tags Tag description list. Up to 10 tag key-value pairs are supported and must be unique.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Logset name, which must be unique
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Tag description list. Up to 10 tag key-value pairs are supported and must be unique.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_
