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
                * Category information description
                */
                class MediaClassInfo : public AbstractModel
                {
                public:
                    MediaClassInfo();
                    ~MediaClassInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Category ID
                     * @return ClassId Category ID
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID
                     * @param ClassId Category ID
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Parent category ID, which is -1 for a first-level category.
                     * @return ParentId Parent category ID, which is -1 for a first-level category.
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置Parent category ID, which is -1 for a first-level category.
                     * @param ParentId Parent category ID, which is -1 for a first-level category.
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Category name
                     * @return ClassName Category name
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Category name
                     * @param ClassName Category name
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取Category level. 0 for first-level category, up to 3, i.e., up to 4 levels of categories are allowed.
                     * @return Level Category level. 0 for first-level category, up to 3, i.e., up to 4 levels of categories are allowed.
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Category level. 0 for first-level category, up to 3, i.e., up to 4 levels of categories are allowed.
                     * @param Level Category level. 0 for first-level category, up to 3, i.e., up to 4 levels of categories are allowed.
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Set of IDs of the immediate subcategories in current category
                     * @return SubClassIdSet Set of IDs of the immediate subcategories in current category
                     */
                    std::vector<int64_t> GetSubClassIdSet() const;

                    /**
                     * 设置Set of IDs of the immediate subcategories in current category
                     * @param SubClassIdSet Set of IDs of the immediate subcategories in current category
                     */
                    void SetSubClassIdSet(const std::vector<int64_t>& _subClassIdSet);

                    /**
                     * 判断参数 SubClassIdSet 是否已赋值
                     * @return SubClassIdSet 是否已赋值
                     */
                    bool SubClassIdSetHasBeenSet() const;

                private:

                    /**
                     * Category ID
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Parent category ID, which is -1 for a first-level category.
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Category name
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Category level. 0 for first-level category, up to 3, i.e., up to 4 levels of categories are allowed.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Set of IDs of the immediate subcategories in current category
                     */
                    std::vector<int64_t> m_subClassIdSet;
                    bool m_subClassIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIACLASSINFO_H_
