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
                     * 获取Log set name.

-Supports a maximum of 255 characters. The `|` character is not supported.
                     * @return LogsetName Log set name.

-Supports a maximum of 255 characters. The `|` character is not supported.
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置Log set name.

-Supports a maximum of 255 characters. The `|` character is not supported.
                     * @param _logsetName Log set name.

-Supports a maximum of 255 characters. The `|` character is not supported.
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

                    /**
                     * 获取Logset ID, format: custom part-User APPID. Automatically generate ID if left empty.

-The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and has a length of 3 to 40 characters.
-The end requires the use of - to concatenate the User APPID, which can be queried on the https://console.cloud.tencent.com/developer page.
-If you specify this field, ensure uniqueness across all regions.
                     * @return LogsetId Logset ID, format: custom part-User APPID. Automatically generate ID if left empty.

-The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and has a length of 3 to 40 characters.
-The end requires the use of - to concatenate the User APPID, which can be queried on the https://console.cloud.tencent.com/developer page.
-If you specify this field, ensure uniqueness across all regions.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID, format: custom part-User APPID. Automatically generate ID if left empty.

-The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and has a length of 3 to 40 characters.
-The end requires the use of - to concatenate the User APPID, which can be queried on the https://console.cloud.tencent.com/developer page.
-If you specify this field, ensure uniqueness across all regions.
                     * @param _logsetId Logset ID, format: custom part-User APPID. Automatically generate ID if left empty.

-The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and has a length of 3 to 40 characters.
-The end requires the use of - to concatenate the User APPID, which can be queried on the https://console.cloud.tencent.com/developer page.
-If you specify this field, ensure uniqueness across all regions.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * Log set name.

-Supports a maximum of 255 characters. The `|` character is not supported.
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * Tag description list. Up to 10 tag key-value pairs are supported and must be unique.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Logset ID, format: custom part-User APPID. Automatically generate ID if left empty.

-The custom part only supports lowercase letters, digits, and -, cannot start or end with -, and has a length of 3 to 40 characters.
-The end requires the use of - to concatenate the User APPID, which can be queried on the https://console.cloud.tencent.com/developer page.
-If you specify this field, ensure uniqueness across all regions.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATELOGSETREQUEST_H_
