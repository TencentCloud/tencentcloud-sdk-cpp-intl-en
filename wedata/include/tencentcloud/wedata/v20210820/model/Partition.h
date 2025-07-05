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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARTITION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARTITION_H_

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
                * Partition Parameter
                */
                class Partition : public AbstractModel
                {
                public:
                    Partition();
                    ~Partition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition Conversion Strategy
                     * @return Transform Partition Conversion Strategy
                     * 
                     */
                    std::string GetTransform() const;

                    /**
                     * 设置Partition Conversion Strategy
                     * @param _transform Partition Conversion Strategy
                     * 
                     */
                    void SetTransform(const std::string& _transform);

                    /**
                     * 判断参数 Transform 是否已赋值
                     * @return Transform 是否已赋值
                     * 
                     */
                    bool TransformHasBeenSet() const;

                    /**
                     * 获取Partition Field Name
                     * @return Name Partition Field Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Partition Field Name
                     * @param _name Partition Field Name
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
                     * 获取Policy Parameter
                     * @return TransformArgs Policy Parameter
                     * 
                     */
                    std::vector<std::string> GetTransformArgs() const;

                    /**
                     * 设置Policy Parameter
                     * @param _transformArgs Policy Parameter
                     * 
                     */
                    void SetTransformArgs(const std::vector<std::string>& _transformArgs);

                    /**
                     * 判断参数 TransformArgs 是否已赋值
                     * @return TransformArgs 是否已赋值
                     * 
                     */
                    bool TransformArgsHasBeenSet() const;

                private:

                    /**
                     * Partition Conversion Strategy
                     */
                    std::string m_transform;
                    bool m_transformHasBeenSet;

                    /**
                     * Partition Field Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy Parameter
                     */
                    std::vector<std::string> m_transformArgs;
                    bool m_transformArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARTITION_H_
