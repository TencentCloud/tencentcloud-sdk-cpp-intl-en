/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONRESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONRESOURCE_H_

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
                * Function Resource Information
                */
                class FunctionResource : public AbstractModel
                {
                public:
                    FunctionResource();
                    ~FunctionResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource PathNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Path Resource PathNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Resource PathNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _path Resource PathNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name NoNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置NoNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name NoNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Resource Unique Identifier
                     * @return Id Resource Unique Identifier
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource Unique Identifier
                     * @param _id Resource Unique Identifier
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
                     * 获取Resource MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Md5 Resource MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置Resource MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _md5 Resource MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Default is HDFS
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Default is HDFS
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Default is HDFS
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Default is HDFS
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Resource PathNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * NoNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Resource Unique Identifier
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Resource MD5 Value
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Default is HDFS
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONRESOURCE_H_
