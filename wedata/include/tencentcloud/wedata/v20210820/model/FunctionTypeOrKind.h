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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONTYPEORKIND_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONTYPEORKIND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Function Type or Function Classification
                */
                class FunctionTypeOrKind : public AbstractModel
                {
                public:
                    FunctionTypeOrKind();
                    ~FunctionTypeOrKind() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
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
                     * 获取Function Classification English Name
                     * @return ZhName Function Classification English Name
                     * 
                     */
                    std::string GetZhName() const;

                    /**
                     * 设置Function Classification English Name
                     * @param _zhName Function Classification English Name
                     * 
                     */
                    void SetZhName(const std::string& _zhName);

                    /**
                     * 判断参数 ZhName 是否已赋值
                     * @return ZhName 是否已赋值
                     * 
                     */
                    bool ZhNameHasBeenSet() const;

                    /**
                     * 获取Function Classification Chinese Name
                     * @return EnName Function Classification Chinese Name
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置Function Classification Chinese Name
                     * @param _enName Function Classification Chinese Name
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Function Classification English Name
                     */
                    std::string m_zhName;
                    bool m_zhNameHasBeenSet;

                    /**
                     * Function Classification Chinese Name
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONTYPEORKIND_H_
