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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_METAVALUE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_METAVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Metadata value
                */
                class MetaValue : public AbstractModel
                {
                public:
                    MetaValue();
                    ~MetaValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Metadata value name (for display only).</p>
                     * @return Name <p>Metadata value name (for display only).</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Metadata value name (for display only).</p>
                     * @param _name <p>Metadata value name (for display only).</p>
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
                     * 获取<p>Whether to refer to all values of this type (when true, ref_value_id should be 0)</p>
                     * @return RefAll <p>Whether to refer to all values of this type (when true, ref_value_id should be 0)</p>
                     * 
                     */
                    bool GetRefAll() const;

                    /**
                     * 设置<p>Whether to refer to all values of this type (when true, ref_value_id should be 0)</p>
                     * @param _refAll <p>Whether to refer to all values of this type (when true, ref_value_id should be 0)</p>
                     * 
                     */
                    void SetRefAll(const bool& _refAll);

                    /**
                     * 判断参数 RefAll 是否已赋值
                     * @return RefAll 是否已赋值
                     * 
                     */
                    bool RefAllHasBeenSet() const;

                    /**
                     * 获取<p>Business ID referenced by metadata (property ID, category ID, etc.); this field should be 0 when ref_all=true</p>
                     * @return RefValueId <p>Business ID referenced by metadata (property ID, category ID, etc.); this field should be 0 when ref_all=true</p>
                     * 
                     */
                    std::string GetRefValueId() const;

                    /**
                     * 设置<p>Business ID referenced by metadata (property ID, category ID, etc.); this field should be 0 when ref_all=true</p>
                     * @param _refValueId <p>Business ID referenced by metadata (property ID, category ID, etc.); this field should be 0 when ref_all=true</p>
                     * 
                     */
                    void SetRefValueId(const std::string& _refValueId);

                    /**
                     * 判断参数 RefValueId 是否已赋值
                     * @return RefValueId 是否已赋值
                     * 
                     */
                    bool RefValueIdHasBeenSet() const;

                    /**
                     * 获取<p>Metadata usage scenario: 1=retrieve only, 2=both retrieve and generate<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>Retrieve only</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>Both retrieve and generate</td></tr></tbody></table></p>
                     * @return Scene <p>Metadata usage scenario: 1=retrieve only, 2=both retrieve and generate<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>Retrieve only</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>Both retrieve and generate</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetScene() const;

                    /**
                     * 设置<p>Metadata usage scenario: 1=retrieve only, 2=both retrieve and generate<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>Retrieve only</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>Both retrieve and generate</td></tr></tbody></table></p>
                     * @param _scene <p>Metadata usage scenario: 1=retrieve only, 2=both retrieve and generate<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>Retrieve only</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>Both retrieve and generate</td></tr></tbody></table></p>
                     * 
                     */
                    void SetScene(const int64_t& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取<p>Metadata value type: 1=property tag, 2=document classification, 3=QA classification<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>Property tag</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>Document classification</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>QA classification</td></tr></tbody></table></p>
                     * @return ValueType <p>Metadata value type: 1=property tag, 2=document classification, 3=QA classification<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>Property tag</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>Document classification</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>QA classification</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetValueType() const;

                    /**
                     * 设置<p>Metadata value type: 1=property tag, 2=document classification, 3=QA classification<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>Property tag</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>Document classification</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>QA classification</td></tr></tbody></table></p>
                     * @param _valueType <p>Metadata value type: 1=property tag, 2=document classification, 3=QA classification<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>Property tag</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>Document classification</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>QA classification</td></tr></tbody></table></p>
                     * 
                     */
                    void SetValueType(const int64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Metadata value name (for display only).</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Whether to refer to all values of this type (when true, ref_value_id should be 0)</p>
                     */
                    bool m_refAll;
                    bool m_refAllHasBeenSet;

                    /**
                     * <p>Business ID referenced by metadata (property ID, category ID, etc.); this field should be 0 when ref_all=true</p>
                     */
                    std::string m_refValueId;
                    bool m_refValueIdHasBeenSet;

                    /**
                     * <p>Metadata usage scenario: 1=retrieve only, 2=both retrieve and generate<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_SCENE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_SCENE_SEARCH_ONLY</td><td>1</td><td>Retrieve only</td></tr><tr><td>META_SCENE_ALL</td><td>2</td><td>Both retrieve and generate</td></tr></tbody></table></p>
                     */
                    int64_t m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * <p>Metadata value type: 1=property tag, 2=document classification, 3=QA classification<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>META_VALUE_TYPE_UNKNOWN</td><td>0</td><td>Unknown</td></tr><tr><td>META_VALUE_TYPE_TAG</td><td>1</td><td>Property tag</td></tr><tr><td>META_VALUE_TYPE_DOC_CATEGORY</td><td>2</td><td>Document classification</td></tr><tr><td>META_VALUE_TYPE_QA_CATEGORY</td><td>3</td><td>QA classification</td></tr></tbody></table></p>
                     */
                    int64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_METAVALUE_H_
