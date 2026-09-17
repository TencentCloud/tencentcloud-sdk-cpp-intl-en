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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ListFiles request structure.
                */
                class ListFilesRequest : public AbstractModel
                {
                public:
                    ListFilesRequest();
                    ~ListFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Prefix 
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置
                     * @param _prefix 
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取
                     * @return Delimiter 
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置
                     * @param _delimiter 
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取
                     * @return MaxKeys 
                     * 
                     */
                    int64_t GetMaxKeys() const;

                    /**
                     * 设置
                     * @param _maxKeys 
                     * 
                     */
                    void SetMaxKeys(const int64_t& _maxKeys);

                    /**
                     * 判断参数 MaxKeys 是否已赋值
                     * @return MaxKeys 是否已赋值
                     * 
                     */
                    bool MaxKeysHasBeenSet() const;

                    /**
                     * 获取
                     * @return Marker 
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置
                     * @param _marker 
                     * 
                     */
                    void SetMarker(const std::string& _marker);

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取
                     * @return Categories 
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置
                     * @param _categories 
                     * 
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_maxKeys;
                    bool m_maxKeysHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_
