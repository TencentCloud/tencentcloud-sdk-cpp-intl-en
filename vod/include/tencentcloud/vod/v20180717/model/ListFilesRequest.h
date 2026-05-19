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
                     * 获取VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.
                     * @return SubAppId VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.
                     * @param _subAppId VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.
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
                     * 获取Object key prefix matching, limited to object keys whose names contain the specified prefix in response.
                     * @return Prefix Object key prefix matching, limited to object keys whose names contain the specified prefix in response.
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置Object key prefix matching, limited to object keys whose names contain the specified prefix in response.
                     * @param _prefix Object key prefix matching, limited to object keys whose names contain the specified prefix in response.
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
                     * 获取A character separator used for grouping object keys. All object keys with the same part between the prefix or the start (if no prefix is specified) and the first delimiter are grouped as a prefix node under CommonPrefixes. Grouped object keys no longer appear in the subsequent object list.
                     * @return Delimiter A character separator used for grouping object keys. All object keys with the same part between the prefix or the start (if no prefix is specified) and the first delimiter are grouped as a prefix node under CommonPrefixes. Grouped object keys no longer appear in the subsequent object list.
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置A character separator used for grouping object keys. All object keys with the same part between the prefix or the start (if no prefix is specified) and the first delimiter are grouped as a prefix node under CommonPrefixes. Grouped object keys no longer appear in the subsequent object list.
                     * @param _delimiter A character separator used for grouping object keys. All object keys with the same part between the prefix or the start (if no prefix is specified) and the first delimiter are grouped as a prefix node under CommonPrefixes. Grouped object keys no longer appear in the subsequent object list.
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
                     * 获取ys  Maximum number of entries returned at a time. Default value: 100. Minimum: 1. Maximum: 100.
                     * @return MaxKeys ys  Maximum number of entries returned at a time. Default value: 100. Minimum: 1. Maximum: 100.
                     * 
                     */
                    int64_t GetMaxKeys() const;

                    /**
                     * 设置ys  Maximum number of entries returned at a time. Default value: 100. Minimum: 1. Maximum: 100.
                     * @param _maxKeys ys  Maximum number of entries returned at a time. Default value: 100. Minimum: 1. Maximum: 100.
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
                     * 获取Starting object key marker
                     * @return Marker Starting object key marker
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置Starting object key marker
                     * @param _marker Starting object key marker
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
                     * 获取File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li>
                     * @return Categories File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li>
                     * @param _categories File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li>
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
                     * VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Object key prefix matching, limited to object keys whose names contain the specified prefix in response.
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * A character separator used for grouping object keys. All object keys with the same part between the prefix or the start (if no prefix is specified) and the first delimiter are grouped as a prefix node under CommonPrefixes. Grouped object keys no longer appear in the subsequent object list.
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * ys  Maximum number of entries returned at a time. Default value: 100. Minimum: 1. Maximum: 100.
                     */
                    int64_t m_maxKeys;
                    bool m_maxKeysHasBeenSet;

                    /**
                     * Starting object key marker
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * File type. Match any element in the collection: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_
