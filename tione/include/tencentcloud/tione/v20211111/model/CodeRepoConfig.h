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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CODEREPOCONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CODEREPOCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Code repository configuration.
                */
                class CodeRepoConfig : public AbstractModel
                {
                public:
                    CodeRepoConfig();
                    ~CodeRepoConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Code repository ID.
                     * @return Id Code repository ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Code repository ID.
                     * @param _id Code repository ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Target address for the code repository download.
                     * @return TargetPath Target address for the code repository download.
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置Target address for the code repository download.
                     * @param _targetPath Target address for the code repository download.
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

                private:

                    /**
                     * Code repository ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Target address for the code repository download.
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CODEREPOCONFIG_H_
