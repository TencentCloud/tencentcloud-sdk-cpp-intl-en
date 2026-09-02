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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGTREENODE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGTREENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTagTreeNode.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Asset tag tree node
                */
                class AssetTagTreeNode : public AbstractModel
                {
                public:
                    AssetTagTreeNode();
                    ~AssetTagTreeNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key.
                     * @return Key Tag key.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Tag key.
                     * @param _key Tag key.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Tag value.
                     * @return Value Tag value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Tag value.
                     * @param _value Tag value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Child node.
                     * @return Children Child node.
                     * 
                     */
                    std::vector<AssetTagTreeNode> GetChildren() const;

                    /**
                     * 设置Child node.
                     * @param _children Child node.
                     * 
                     */
                    void SetChildren(const std::vector<AssetTagTreeNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取Color
                     * @return Color Color
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置Color
                     * @param _color Color
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * Tag key.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Tag value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Child node.
                     */
                    std::vector<AssetTagTreeNode> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * Color
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETTAGTREENODE_H_
