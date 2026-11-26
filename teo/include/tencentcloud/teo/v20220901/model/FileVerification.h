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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FILEVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FILEVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information required for HTTP access verification file when verifying ownership or applying for a free certificate for a domain name in CNAME mode site integration.
                */
                class FileVerification : public AbstractModel
                {
                public:
                    FileVerification();
                    ~FileVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The EdgeOne backend server will get the file verification information via http://{Host}{URL Path} (for example, http://www.example.com/.well-known/teo-verification/z12h416twn.txt). This field is the URL Path part you need to create, and Host is the current accelerated domain.
                     * @return Path The EdgeOne backend server will get the file verification information via http://{Host}{URL Path} (for example, http://www.example.com/.well-known/teo-verification/z12h416twn.txt). This field is the URL Path part you need to create, and Host is the current accelerated domain.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置The EdgeOne backend server will get the file verification information via http://{Host}{URL Path} (for example, http://www.example.com/.well-known/teo-verification/z12h416twn.txt). This field is the URL Path part you need to create, and Host is the current accelerated domain.
                     * @param _path The EdgeOne backend server will get the file verification information via http://{Host}{URL Path} (for example, http://www.example.com/.well-known/teo-verification/z12h416twn.txt). This field is the URL Path part you need to create, and Host is the current accelerated domain.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Verify the content of the file. You need to fill in the content of this field into the txt file returned by the Path field.
                     * @return Content Verify the content of the file. You need to fill in the content of this field into the txt file returned by the Path field.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Verify the content of the file. You need to fill in the content of this field into the txt file returned by the Path field.
                     * @param _content Verify the content of the file. You need to fill in the content of this field into the txt file returned by the Path field.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * The EdgeOne backend server will get the file verification information via http://{Host}{URL Path} (for example, http://www.example.com/.well-known/teo-verification/z12h416twn.txt). This field is the URL Path part you need to create, and Host is the current accelerated domain.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Verify the content of the file. You need to fill in the content of this field into the txt file returned by the Path field.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FILEVERIFICATION_H_
