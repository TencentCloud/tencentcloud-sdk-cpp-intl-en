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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSUREAUTOTAGATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSUREAUTOTAGATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ExposeAssetTypeItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeExposureAutoTagAttribute response structure.
                */
                class DescribeExposureAutoTagAttributeResponse : public AbstractModel
                {
                public:
                    DescribeExposureAutoTagAttributeResponse();
                    ~DescribeExposureAutoTagAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Asset type</p>
                     * @return AssetTypeList <p>Asset type</p>
                     * 
                     */
                    std::vector<ExposeAssetTypeItem> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     * 
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取<p>Tag set</p>
                     * @return TagList <p>Tag set</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetTagList() const;

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Open status set</p>
                     * @return OpenStatusList <p>Open status set</p>
                     * 
                     */
                    std::vector<AttributeOptionSet> GetOpenStatusList() const;

                    /**
                     * 判断参数 OpenStatusList 是否已赋值
                     * @return OpenStatusList 是否已赋值
                     * 
                     */
                    bool OpenStatusListHasBeenSet() const;

                private:

                    /**
                     * <p>Asset type</p>
                     */
                    std::vector<ExposeAssetTypeItem> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * <p>Tag set</p>
                     */
                    std::vector<AttributeOptionSet> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Open status set</p>
                     */
                    std::vector<AttributeOptionSet> m_openStatusList;
                    bool m_openStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSUREAUTOTAGATTRIBUTERESPONSE_H_
