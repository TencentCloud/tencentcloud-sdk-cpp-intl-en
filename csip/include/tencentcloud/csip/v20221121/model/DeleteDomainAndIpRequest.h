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
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Asset
                     * @return Content Asset
                     * 
                     */
                    std::vector<PublicIpDomainListKey> GetContent() const;

                    /**
                     * 设置Asset
                     * @param _content Asset
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
                     * 获取Whether to retain path configuration. 1: Yes; Other: No. No if not specified by default.
                     * @return RetainPath Whether to retain path configuration. 1: Yes; Other: No. No if not specified by default.
                     * 
                     */
                    int64_t GetRetainPath() const;

                    /**
                     * 设置Whether to retain path configuration. 1: Yes; Other: No. No if not specified by default.
                     * @param _retainPath Whether to retain path configuration. 1: Yes; Other: No. No if not specified by default.
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
                     * 获取Whether to ignore this asset in the future. 1: Yes; Other: No. No if not specified by default.
                     * @return IgnoreAsset Whether to ignore this asset in the future. 1: Yes; Other: No. No if not specified by default.
                     * 
                     */
                    int64_t GetIgnoreAsset() const;

                    /**
                     * 设置Whether to ignore this asset in the future. 1: Yes; Other: No. No if not specified by default.
                     * @param _ignoreAsset Whether to ignore this asset in the future. 1: Yes; Other: No. No if not specified by default.
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
                     * 获取Asset tag
                     * @return Tags Asset tag
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置Asset tag
                     * @param _tags Asset tag
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
                     * 获取Delete type. ALL: deleting all, which will directly ignore the content of Content; Other value: not all, and Content is required. Other value by default.
                     * @return Type Delete type. ALL: deleting all, which will directly ignore the content of Content; Other value: not all, and Content is required. Other value by default.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Delete type. ALL: deleting all, which will directly ignore the content of Content; Other value: not all, and Content is required. Other value by default.
                     * @param _type Delete type. ALL: deleting all, which will directly ignore the content of Content; Other value: not all, and Content is required. Other value by default.
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
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Asset
                     */
                    std::vector<PublicIpDomainListKey> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Whether to retain path configuration. 1: Yes; Other: No. No if not specified by default.
                     */
                    int64_t m_retainPath;
                    bool m_retainPathHasBeenSet;

                    /**
                     * Whether to ignore this asset in the future. 1: Yes; Other: No. No if not specified by default.
                     */
                    int64_t m_ignoreAsset;
                    bool m_ignoreAssetHasBeenSet;

                    /**
                     * Asset tag
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Delete type. ALL: deleting all, which will directly ignore the content of Content; Other value: not all, and Content is required. Other value by default.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
