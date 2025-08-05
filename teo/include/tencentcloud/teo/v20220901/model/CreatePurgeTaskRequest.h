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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheTag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePurgeTask request structure.
                */
                class CreatePurgeTaskRequest : public AbstractModel
                {
                public:
                    CreatePurgeTaskRequest();
                    ~CreatePurgeTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone id.
.
If you want to quickly submit targets urls under different sites, you can set it to *, but the account calling this api must have permission for all site resources under the main account.
                     * @return ZoneId Zone id.
.
If you want to quickly submit targets urls under different sites, you can set it to *, but the account calling this api must have permission for all site resources under the main account.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.
.
If you want to quickly submit targets urls under different sites, you can set it to *, but the account calling this api must have permission for all site resources under the main account.
                     * @param _zoneId Zone id.
.
If you want to quickly submit targets urls under different sites, you can set it to *, but the account calling this api must have permission for all site resources under the main account.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Type of cache purging. Values:
<li>`purge_url`: Purge by the URL</li>
<li>`purge_prefix`: Purge by the directory</li>
<li>`purge_host`: Purge by the hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by the cache-tag </li>For more details, see [Cache Purge](https://intl.cloud.tencent.com/document/product/1552/70759?from_cn_redirect=1).
                     * @return Type Type of cache purging. Values:
<li>`purge_url`: Purge by the URL</li>
<li>`purge_prefix`: Purge by the directory</li>
<li>`purge_host`: Purge by the hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by the cache-tag </li>For more details, see [Cache Purge](https://intl.cloud.tencent.com/document/product/1552/70759?from_cn_redirect=1).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of cache purging. Values:
<li>`purge_url`: Purge by the URL</li>
<li>`purge_prefix`: Purge by the directory</li>
<li>`purge_host`: Purge by the hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by the cache-tag </li>For more details, see [Cache Purge](https://intl.cloud.tencent.com/document/product/1552/70759?from_cn_redirect=1).
                     * @param _type Type of cache purging. Values:
<li>`purge_url`: Purge by the URL</li>
<li>`purge_prefix`: Purge by the directory</li>
<li>`purge_host`: Purge by the hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by the cache-tag </li>For more details, see [Cache Purge](https://intl.cloud.tencent.com/document/product/1552/70759?from_cn_redirect=1).
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
                     * 获取Node cache clearing method is valid for directory refresh, Hostname refresh, and refresh all cache types. valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li> <li> delete: refresh node resources regardless of whether resources under the directory are updated.</li> default value: invalidate.
                     * @return Method Node cache clearing method is valid for directory refresh, Hostname refresh, and refresh all cache types. valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li> <li> delete: refresh node resources regardless of whether resources under the directory are updated.</li> default value: invalidate.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Node cache clearing method is valid for directory refresh, Hostname refresh, and refresh all cache types. valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li> <li> delete: refresh node resources regardless of whether resources under the directory are updated.</li> default value: invalidate.
                     * @param _method Node cache clearing method is valid for directory refresh, Hostname refresh, and refresh all cache types. valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li> <li> delete: refresh node resources regardless of whether resources under the directory are updated.</li> default value: invalidate.
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取The list of resources to purge cache, such as https://www.example.com/example.jpg, must carry protocol information. the format for multi-elements depends on the type of cache purging. refer to the following API call example.  <li>the number of tasks that can be submitted at a time is limited by the billing package quota. check [EO billing package](https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>.
                     * @return Targets The list of resources to purge cache, such as https://www.example.com/example.jpg, must carry protocol information. the format for multi-elements depends on the type of cache purging. refer to the following API call example.  <li>the number of tasks that can be submitted at a time is limited by the billing package quota. check [EO billing package](https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>.
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置The list of resources to purge cache, such as https://www.example.com/example.jpg, must carry protocol information. the format for multi-elements depends on the type of cache purging. refer to the following API call example.  <li>the number of tasks that can be submitted at a time is limited by the billing package quota. check [EO billing package](https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>.
                     * @param _targets The list of resources to purge cache, such as https://www.example.com/example.jpg, must carry protocol information. the format for multi-elements depends on the type of cache purging. refer to the following API call example.  <li>the number of tasks that can be submitted at a time is limited by the billing package quota. check [EO billing package](https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>.
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     * @return EncodeUrl Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     * @deprecated
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     * @param _encodeUrl Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     * @deprecated
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * @deprecated
                     */
                    bool EncodeUrlHasBeenSet() const;

                    /**
                     * 获取The information attached when the node cache purge type is set to purge_cache_tag.
                     * @return CacheTag The information attached when the node cache purge type is set to purge_cache_tag.
                     * 
                     */
                    CacheTag GetCacheTag() const;

                    /**
                     * 设置The information attached when the node cache purge type is set to purge_cache_tag.
                     * @param _cacheTag The information attached when the node cache purge type is set to purge_cache_tag.
                     * 
                     */
                    void SetCacheTag(const CacheTag& _cacheTag);

                    /**
                     * 判断参数 CacheTag 是否已赋值
                     * @return CacheTag 是否已赋值
                     * 
                     */
                    bool CacheTagHasBeenSet() const;

                private:

                    /**
                     * Zone id.
.
If you want to quickly submit targets urls under different sites, you can set it to *, but the account calling this api must have permission for all site resources under the main account.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Type of cache purging. Values:
<li>`purge_url`: Purge by the URL</li>
<li>`purge_prefix`: Purge by the directory</li>
<li>`purge_host`: Purge by the hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by the cache-tag </li>For more details, see [Cache Purge](https://intl.cloud.tencent.com/document/product/1552/70759?from_cn_redirect=1).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node cache clearing method is valid for directory refresh, Hostname refresh, and refresh all cache types. valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li> <li> delete: refresh node resources regardless of whether resources under the directory are updated.</li> default value: invalidate.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * The list of resources to purge cache, such as https://www.example.com/example.jpg, must carry protocol information. the format for multi-elements depends on the type of cache purging. refer to the following API call example.  <li>the number of tasks that can be submitted at a time is limited by the billing package quota. check [EO billing package](https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>.
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * The information attached when the node cache purge type is set to purge_cache_tag.
                     */
                    CacheTag m_cacheTag;
                    bool m_cacheTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
