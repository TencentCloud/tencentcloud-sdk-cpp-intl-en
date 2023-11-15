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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/PublicIpDomainListKey.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteDomainAndIp request structure.
                */
                class DeleteDomainAndIpRequest : public AbstractModel
                {
                public:
                    DeleteDomainAndIpRequest();
                    ~DeleteDomainAndIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取u200c-
                     * @return Content u200c-
                     * 
                     */
                    std::vector<PublicIpDomainListKey> GetContent() const;

                    /**
                     * 设置u200c-
                     * @param _content u200c-
                     * 
                     */
                    void SetContent(const std::vector<PublicIpDomainListKey>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Whether to retain the path configuration. `1`: Retain; Others: Do not retain. It defaults to do not retain if not specified.
                     * @return RetainPath Whether to retain the path configuration. `1`: Retain; Others: Do not retain. It defaults to do not retain if not specified.
                     * 
                     */
                    int64_t GetRetainPath() const;

                    /**
                     * 设置Whether to retain the path configuration. `1`: Retain; Others: Do not retain. It defaults to do not retain if not specified.
                     * @param _retainPath Whether to retain the path configuration. `1`: Retain; Others: Do not retain. It defaults to do not retain if not specified.
                     * 
                     */
                    void SetRetainPath(const int64_t& _retainPath);

                    /**
                     * 判断参数 RetainPath 是否已赋值
                     * @return RetainPath 是否已赋值
                     * 
                     */
                    bool RetainPathHasBeenSet() const;

                    /**
                     * 获取Whether to ignore this asset in the future. `1`: Ignore; Others: Do not ignore. It defaults to ignore if not specified.
                     * @return IgnoreAsset Whether to ignore this asset in the future. `1`: Ignore; Others: Do not ignore. It defaults to ignore if not specified.
                     * 
                     */
                    int64_t GetIgnoreAsset() const;

                    /**
                     * 设置Whether to ignore this asset in the future. `1`: Ignore; Others: Do not ignore. It defaults to ignore if not specified.
                     * @param _ignoreAsset Whether to ignore this asset in the future. `1`: Ignore; Others: Do not ignore. It defaults to ignore if not specified.
                     * 
                     */
                    void SetIgnoreAsset(const int64_t& _ignoreAsset);

                    /**
                     * 判断参数 IgnoreAsset 是否已赋值
                     * @return IgnoreAsset 是否已赋值
                     * 
                     */
                    bool IgnoreAssetHasBeenSet() const;

                    /**
                     * 获取Asset tags
                     * @return Tags Asset tags
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置Asset tags
                     * @param _tags Asset tags
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Deletion mode. Values: `ALL` (delete all). If it's not specified, `Content` is required.
                     * @return Type Deletion mode. Values: `ALL` (delete all). If it's not specified, `Content` is required.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Deletion mode. Values: `ALL` (delete all). If it's not specified, `Content` is required.
                     * @param _type Deletion mode. Values: `ALL` (delete all). If it's not specified, `Content` is required.
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
                     * u200c-
                     */
                    std::vector<PublicIpDomainListKey> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Whether to retain the path configuration. `1`: Retain; Others: Do not retain. It defaults to do not retain if not specified.
                     */
                    int64_t m_retainPath;
                    bool m_retainPathHasBeenSet;

                    /**
                     * Whether to ignore this asset in the future. `1`: Ignore; Others: Do not ignore. It defaults to ignore if not specified.
                     */
                    int64_t m_ignoreAsset;
                    bool m_ignoreAssetHasBeenSet;

                    /**
                     * Asset tags
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Deletion mode. Values: `ALL` (delete all). If it's not specified, `Content` is required.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
