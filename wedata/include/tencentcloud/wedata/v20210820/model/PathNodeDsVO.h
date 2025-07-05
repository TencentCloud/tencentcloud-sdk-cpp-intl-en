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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHNODEDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHNODEDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/PathNodeDsVO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Data Development - Unified Tree Structure Return Attributes
                */
                class PathNodeDsVO : public AbstractModel
                {
                public:
                    PathNodeDsVO();
                    ~PathNodeDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PathNode ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id PathNode ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置PathNode ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id PathNode ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取PathNode Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Title PathNode Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置PathNode Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _title PathNode Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取PathNode Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type PathNode Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置PathNode Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type PathNode Type
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

                    /**
                     * 获取Unique Identifier of Parent Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ParentId Unique Identifier of Parent Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Unique Identifier of Parent Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _parentId Unique Identifier of Parent Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取Is Leaf Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IsLeaf Is Leaf Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置Is Leaf Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _isLeaf Is Leaf Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Children Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<PathNodeDsVO> GetChildren() const;

                    /**
                     * 设置Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _children Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChildren(const std::vector<PathNodeDsVO>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取Business Parameters, base64 encoded JSON string, to obtain specific parameters, base64 decoding is required
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Params Business Parameters, base64 encoded JSON string, to obtain specific parameters, base64 decoding is required
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置Business Parameters, base64 encoded JSON string, to obtain specific parameters, base64 decoding is required
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _params Business Parameters, base64 encoded JSON string, to obtain specific parameters, base64 decoding is required
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * PathNode ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * PathNode Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * PathNode Type
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Unique Identifier of Parent Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * Is Leaf Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * Child Node List
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<PathNodeDsVO> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * Business Parameters, base64 encoded JSON string, to obtain specific parameters, base64 decoding is required
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PATHNODEDSVO_H_
