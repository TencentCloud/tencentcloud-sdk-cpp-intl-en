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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Classification information description
                */
                class MediaClassInfo : public AbstractModel
                {
                public:
                    MediaClassInfo();
                    ~MediaClassInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Category ID.
                     * @return ClassId Category ID.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID.
                     * @param _classId Category ID.
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Parent category ID. The parent category ID of a first-level category is -1.
                     * @return ParentId Parent category ID. The parent category ID of a first-level category is -1.
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置Parent category ID. The parent category ID of a first-level category is -1.
                     * @param _parentId Parent category ID. The parent category ID of a first-level category is -1.
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Category name.
                     * @return Name Category name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Category name.
                     * @param _name Category name.
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
                     * 获取Category level. The first-level category is 0, and the maximum value is 3, which allows up to 4 category levels.
                     * @return Level Category level. The first-level category is 0, and the maximum value is 3, which allows up to 4 category levels.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Category level. The first-level category is 0, and the maximum value is 3, which allows up to 4 category levels.
                     * @param _level Category level. The first-level category is 0, and the maximum value is 3, which allows up to 4 category levels.
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
                     * 获取ID set of level-1 subcategories in the current category.
                     * @return SubClassIdSet ID set of level-1 subcategories in the current category.
                     * 
                     */
                    std::vector<int64_t> GetSubClassIdSet() const;

                    /**
                     * 设置ID set of level-1 subcategories in the current category.
                     * @param _subClassIdSet ID set of level-1 subcategories in the current category.
                     * 
                     */
                    void SetSubClassIdSet(const std::vector<int64_t>& _subClassIdSet);

                    /**
                     * 判断参数 SubClassIdSet 是否已赋值
                     * @return SubClassIdSet 是否已赋值
                     * 
                     */
                    bool SubClassIdSetHasBeenSet() const;

                    /**
                     * 获取Category name (this field is not recommended. Use the new category name field Name instead).
                     * @return ClassName Category name (this field is not recommended. Use the new category name field Name instead).
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Category name (this field is not recommended. Use the new category name field Name instead).
                     * @param _className Category name (this field is not recommended. Use the new category name field Name instead).
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                private:

                    /**
                     * Category ID.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Parent category ID. The parent category ID of a first-level category is -1.
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Category name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Category level. The first-level category is 0, and the maximum value is 3, which allows up to 4 category levels.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * ID set of level-1 subcategories in the current category.
                     */
                    std::vector<int64_t> m_subClassIdSet;
                    bool m_subClassIdSetHasBeenSet;

                    /**
                     * Category name (this field is not recommended. Use the new category name field Name instead).
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_
