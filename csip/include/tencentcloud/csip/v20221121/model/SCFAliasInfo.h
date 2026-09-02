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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCFALIASINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCFALIASINFO_H_

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
                * Streamlined SCF function alias info
                */
                class SCFAliasInfo : public AbstractModel
                {
                public:
                    SCFAliasInfo();
                    ~SCFAliasInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alias name
                     * @return Name Alias name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Alias name
                     * @param _name Alias name
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
                     * 获取Major version number that the alias points to
                     * @return FunctionVersion Major version number that the alias points to
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置Major version number that the alias points to
                     * @param _functionVersion Major version number that the alias points to
                     * 
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                private:

                    /**
                     * Alias name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Major version number that the alias points to
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCFALIASINFO_H_
