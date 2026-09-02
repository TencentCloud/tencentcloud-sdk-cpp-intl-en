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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>
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
                * DescribeAssetTagAttributes response structure.
                */
                class DescribeAssetTagAttributesResponse : public AbstractModel
                {
                public:
                    DescribeAssetTagAttributesResponse();
                    ~DescribeAssetTagAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Filter conditions.</p>
                     * @return FilterConditions <p>Filter conditions.</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetFilterConditions() const;

                    /**
                     * 判断参数 FilterConditions 是否已赋值
                     * @return FilterConditions 是否已赋值
                     * 
                     */
                    bool FilterConditionsHasBeenSet() const;

                    /**
                     * 获取<p>Common properties of tagging policy</p>
                     * @return TaggingAttributes <p>Common properties of tagging policy</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetTaggingAttributes() const;

                    /**
                     * 判断参数 TaggingAttributes 是否已赋值
                     * @return TaggingAttributes 是否已赋值
                     * 
                     */
                    bool TaggingAttributesHasBeenSet() const;

                    /**
                     * 获取<p>Existing tag key list</p>
                     * @return TagKeyList <p>Existing tag key list</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetTagKeyList() const;

                    /**
                     * 判断参数 TagKeyList 是否已赋值
                     * @return TagKeyList 是否已赋值
                     * 
                     */
                    bool TagKeyListHasBeenSet() const;

                    /**
                     * 获取<p>Selectable color list.</p>
                     * @return ColorOptions <p>Selectable color list.</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetColorOptions() const;

                    /**
                     * 判断参数 ColorOptions 是否已赋值
                     * @return ColorOptions 是否已赋值
                     * 
                     */
                    bool ColorOptionsHasBeenSet() const;

                    /**
                     * 获取<p>Asset type list</p>
                     * @return AssetTypeList <p>Asset type list</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Tag tree</p>
                     * @return TagTree <p>Tag tree</p>
                     * 
                     */
                    std::vector<AssetTagTreeNode> GetTagTree() const;

                    /**
                     * 判断参数 TagTree 是否已赋值
                     * @return TagTree 是否已赋值
                     * 
                     */
                    bool TagTreeHasBeenSet() const;

                private:

                    /**
                     * <p>Filter conditions.</p>
                     */
                    std::vector<FilterDataObject> m_filterConditions;
                    bool m_filterConditionsHasBeenSet;

                    /**
                     * <p>Common properties of tagging policy</p>
                     */
                    std::vector<FilterDataObject> m_taggingAttributes;
                    bool m_taggingAttributesHasBeenSet;

                    /**
                     * <p>Existing tag key list</p>
                     */
                    std::vector<FilterDataObject> m_tagKeyList;
                    bool m_tagKeyListHasBeenSet;

                    /**
                     * <p>Selectable color list.</p>
                     */
                    std::vector<FilterDataObject> m_colorOptions;
                    bool m_colorOptionsHasBeenSet;

                    /**
                     * <p>Asset type list</p>
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>Tag tree</p>
                     */
                    std::vector<AssetTagTreeNode> m_tagTree;
                    bool m_tagTreeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEASSETTAGATTRIBUTESRESPONSE_H_
