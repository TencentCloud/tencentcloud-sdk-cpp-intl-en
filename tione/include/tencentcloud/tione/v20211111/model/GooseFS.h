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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFS_H_

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
                * GooseFS configuration parameters.
                */
                class GooseFS : public AbstractModel
                {
                public:
                    GooseFS();
                    ~GooseFS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GooseFS instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id GooseFS instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置GooseFS instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id GooseFS instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取GooseFS type, including GooseFS and GooseFSx.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type GooseFS type, including GooseFS and GooseFSx.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置GooseFS type, including GooseFS and GooseFSx.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type GooseFS type, including GooseFS and GooseFSx.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Path to mount the GooseFSx instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Path to mount the GooseFSx instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path to mount the GooseFSx instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path Path to mount the GooseFSx instance.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取GooseFS namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NameSpace GooseFS namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置GooseFS namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nameSpace GooseFS namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                private:

                    /**
                     * GooseFS instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * GooseFS type, including GooseFS and GooseFSx.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Path to mount the GooseFSx instance.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * GooseFS namespace.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFS_H_
