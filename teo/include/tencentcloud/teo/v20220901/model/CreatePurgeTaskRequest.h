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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


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
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param _zoneId ID of the site.
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
                     * 获取Node cache purge method, valid for directory, hostname, and all cache refreshes. Valid values: <li>invalidate: Refreshes only resources that were updated under the directory; </li><li>delete: Refreshes all node resources, regardless of whether they were updated. </li>Default value: invalidate.
                     * @return Method Node cache purge method, valid for directory, hostname, and all cache refreshes. Valid values: <li>invalidate: Refreshes only resources that were updated under the directory; </li><li>delete: Refreshes all node resources, regardless of whether they were updated. </li>Default value: invalidate.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Node cache purge method, valid for directory, hostname, and all cache refreshes. Valid values: <li>invalidate: Refreshes only resources that were updated under the directory; </li><li>delete: Refreshes all node resources, regardless of whether they were updated. </li>Default value: invalidate.
                     * @param _method Node cache purge method, valid for directory, hostname, and all cache refreshes. Valid values: <li>invalidate: Refreshes only resources that were updated under the directory; </li><li>delete: Refreshes all node resources, regardless of whether they were updated. </li>Default value: invalidate.
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
                     * 获取List of resources for which cache is to be purged. Each element format depends on the cache purge type and you can refer to the API examples for details. <li>The number of tasks that can be submitted at a time is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     * @return Targets List of resources for which cache is to be purged. Each element format depends on the cache purge type and you can refer to the API examples for details. <li>The number of tasks that can be submitted at a time is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置List of resources for which cache is to be purged. Each element format depends on the cache purge type and you can refer to the API examples for details. <li>The number of tasks that can be submitted at a time is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     * @param _targets List of resources for which cache is to be purged. Each element format depends on the cache purge type and you can refer to the API examples for details. <li>The number of tasks that can be submitted at a time is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>
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

                private:

                    /**
                     * ID of the site.
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
                     * Node cache purge method, valid for directory, hostname, and all cache refreshes. Valid values: <li>invalidate: Refreshes only resources that were updated under the directory; </li><li>delete: Refreshes all node resources, regardless of whether they were updated. </li>Default value: invalidate.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * List of resources for which cache is to be purged. Each element format depends on the cache purge type and you can refer to the API examples for details. <li>The number of tasks that can be submitted at a time is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).</li>
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPURGETASKREQUEST_H_
