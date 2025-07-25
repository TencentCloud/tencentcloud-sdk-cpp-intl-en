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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline details
                */
                class BaselineDetail : public AbstractModel
                {
                public:
                    BaselineDetail();
                    ~BaselineDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Baseline description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Baseline description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Baseline description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Baseline description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Severity level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Severity level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Severity level
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Severity level
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PackageName Package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _packageName Package name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取Parent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParentId Parent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置Parent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parentId Parent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParentId(const uint64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Baseline description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Severity level
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Package name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * Parent ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEDETAIL_H_
