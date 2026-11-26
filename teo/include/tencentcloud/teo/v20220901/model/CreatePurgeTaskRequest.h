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
                     * 获取Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill in *, but the account calling the API must have permission for all site resources under the root account.
                     * @return ZoneId Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill in *, but the account calling the API must have permission for all site resources under the root account.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill in *, but the account calling the API must have permission for all site resources under the root account.
                     * @param _zoneId Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill in *, but the account calling the API must have permission for all site resources under the root account.
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
                     * 获取Node cache clearing type, with values:
<li>purge_url: URL refresh;</li>
<li>purge_prefix: directory refresh;</li>
<li>purge_host: Hostname refresh;</li>
<li>purge_all: cache purge for all under the site (when this value is used, ZoneId input parameter * is not supported);</li>
<li>purge_cache_tag: cache-tag refresh.</li>For cache purge types, see [Purge Cache](https://www.tencentcloud.com/document/product/1552/70759?from_cn_redirect=1).
                     * @return Type Node cache clearing type, with values:
<li>purge_url: URL refresh;</li>
<li>purge_prefix: directory refresh;</li>
<li>purge_host: Hostname refresh;</li>
<li>purge_all: cache purge for all under the site (when this value is used, ZoneId input parameter * is not supported);</li>
<li>purge_cache_tag: cache-tag refresh.</li>For cache purge types, see [Purge Cache](https://www.tencentcloud.com/document/product/1552/70759?from_cn_redirect=1).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Node cache clearing type, with values:
<li>purge_url: URL refresh;</li>
<li>purge_prefix: directory refresh;</li>
<li>purge_host: Hostname refresh;</li>
<li>purge_all: cache purge for all under the site (when this value is used, ZoneId input parameter * is not supported);</li>
<li>purge_cache_tag: cache-tag refresh.</li>For cache purge types, see [Purge Cache](https://www.tencentcloud.com/document/product/1552/70759?from_cn_redirect=1).
                     * @param _type Node cache clearing type, with values:
<li>purge_url: URL refresh;</li>
<li>purge_prefix: directory refresh;</li>
<li>purge_host: Hostname refresh;</li>
<li>purge_all: cache purge for all under the site (when this value is used, ZoneId input parameter * is not supported);</li>
<li>purge_cache_tag: cache-tag refresh.</li>For cache purge types, see [Purge Cache](https://www.tencentcloud.com/document/product/1552/70759?from_cn_redirect=1).
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
                     * 获取Node cache purge method, valid for directory refresh, Hostname refresh, and refresh all cache types. Valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li><li> delete: refresh node resources regardless of whether resources under the directory are updated.</li>Default value: invalidate.
                     * @return Method Node cache purge method, valid for directory refresh, Hostname refresh, and refresh all cache types. Valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li><li> delete: refresh node resources regardless of whether resources under the directory are updated.</li>Default value: invalidate.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Node cache purge method, valid for directory refresh, Hostname refresh, and refresh all cache types. Valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li><li> delete: refresh node resources regardless of whether resources under the directory are updated.</li>Default value: invalidate.
                     * @param _method Node cache purge method, valid for directory refresh, Hostname refresh, and refresh all cache types. Valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li><li> delete: refresh node resources regardless of whether resources under the directory are updated.</li>Default value: invalidate.
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
                     * 获取List of resources for cache purging, for example, https://www.example.com/example.jpg. Protocol information must be included. The format of additional elements depends on the type of cache purging. Refer to the API call example below.<li>The number of tasks that can be submitted at a time is limited by the billing package quota. Check [EO billing packages](https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     * @return Targets List of resources for cache purging, for example, https://www.example.com/example.jpg. Protocol information must be included. The format of additional elements depends on the type of cache purging. Refer to the API call example below.<li>The number of tasks that can be submitted at a time is limited by the billing package quota. Check [EO billing packages](https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置List of resources for cache purging, for example, https://www.example.com/example.jpg. Protocol information must be included. The format of additional elements depends on the type of cache purging. Refer to the API call example below.<li>The number of tasks that can be submitted at a time is limited by the billing package quota. Check [EO billing packages](https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     * @param _targets List of resources for cache purging, for example, https://www.example.com/example.jpg. Protocol information must be included. The format of additional elements depends on the type of cache purging. Refer to the API call example below.<li>The number of tasks that can be submitted at a time is limited by the billing package quota. Check [EO billing packages](https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).</li>
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
                     * 获取If transcoding exists, only delete the resources that match after transcoding.
If the content contains characters in a non-ASCII character set, enable this switch for encoding conversion (the encoding rule adheres to RFC3986).
                     * @return EncodeUrl If transcoding exists, only delete the resources that match after transcoding.
If the content contains characters in a non-ASCII character set, enable this switch for encoding conversion (the encoding rule adheres to RFC3986).
                     * @deprecated
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置If transcoding exists, only delete the resources that match after transcoding.
If the content contains characters in a non-ASCII character set, enable this switch for encoding conversion (the encoding rule adheres to RFC3986).
                     * @param _encodeUrl If transcoding exists, only delete the resources that match after transcoding.
If the content contains characters in a non-ASCII character set, enable this switch for encoding conversion (the encoding rule adheres to RFC3986).
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
                     * 获取This parameter is required when the node cache purge type is set to purge_cache_tag. The input value is a domain name.
                     * @return CacheTag This parameter is required when the node cache purge type is set to purge_cache_tag. The input value is a domain name.
                     * 
                     */
                    CacheTag GetCacheTag() const;

                    /**
                     * 设置This parameter is required when the node cache purge type is set to purge_cache_tag. The input value is a domain name.
                     * @param _cacheTag This parameter is required when the node cache purge type is set to purge_cache_tag. The input value is a domain name.
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
                     * Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill in *, but the account calling the API must have permission for all site resources under the root account.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Node cache clearing type, with values:
<li>purge_url: URL refresh;</li>
<li>purge_prefix: directory refresh;</li>
<li>purge_host: Hostname refresh;</li>
<li>purge_all: cache purge for all under the site (when this value is used, ZoneId input parameter * is not supported);</li>
<li>purge_cache_tag: cache-tag refresh.</li>For cache purge types, see [Purge Cache](https://www.tencentcloud.com/document/product/1552/70759?from_cn_redirect=1).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node cache purge method, valid for directory refresh, Hostname refresh, and refresh all cache types. Valid values: <li> invalidate: refresh only resources that have been updated under the directory;</li><li> delete: refresh node resources regardless of whether resources under the directory are updated.</li>Default value: invalidate.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * List of resources for cache purging, for example, https://www.example.com/example.jpg. Protocol information must be included. The format of additional elements depends on the type of cache purging. Refer to the API call example below.<li>The number of tasks that can be submitted at a time is limited by the billing package quota. Check [EO billing packages](https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * If transcoding exists, only delete the resources that match after transcoding.
If the content contains characters in a non-ASCII character set, enable this switch for encoding conversion (the encoding rule adheres to RFC3986).
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * This parameter is required when the node cache purge type is set to purge_cache_tag. The input value is a domain name.
                     */
                    CacheTag m_cacheTag;
                    bool m_cacheTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
