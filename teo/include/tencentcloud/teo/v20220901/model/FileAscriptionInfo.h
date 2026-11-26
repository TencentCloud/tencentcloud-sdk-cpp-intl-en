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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FILEASCRIPTIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FILEASCRIPTIONINFO_H_

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
                * Site ownership verification — file verification information.
                */
                class FileAscriptionInfo : public AbstractModel
                {
                public:
                    FileAscriptionInfo();
                    ~FileAscriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File verification directory.
                     * @return IdentifyPath File verification directory.
                     * 
                     */
                    std::string GetIdentifyPath() const;

                    /**
                     * 设置File verification directory.
                     * @param _identifyPath File verification directory.
                     * 
                     */
                    void SetIdentifyPath(const std::string& _identifyPath);

                    /**
                     * 判断参数 IdentifyPath 是否已赋值
                     * @return IdentifyPath 是否已赋值
                     * 
                     */
                    bool IdentifyPathHasBeenSet() const;

                    /**
                     * 获取File content verification.
                     * @return IdentifyContent File content verification.
                     * 
                     */
                    std::string GetIdentifyContent() const;

                    /**
                     * 设置File content verification.
                     * @param _identifyContent File content verification.
                     * 
                     */
                    void SetIdentifyContent(const std::string& _identifyContent);

                    /**
                     * 判断参数 IdentifyContent 是否已赋值
                     * @return IdentifyContent 是否已赋值
                     * 
                     */
                    bool IdentifyContentHasBeenSet() const;

                private:

                    /**
                     * File verification directory.
                     */
                    std::string m_identifyPath;
                    bool m_identifyPathHasBeenSet;

                    /**
                     * File content verification.
                     */
                    std::string m_identifyContent;
                    bool m_identifyContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FILEASCRIPTIONINFO_H_
