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
                     * 获取Mode of cache purging. Values:
<li>`purge_url`: Purge by URL</li>
<li>`purge_prefix`: Purge by prefix</li>
<li>`purge_host`: Purge by hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by cache tag</li>
                     * @return Type Mode of cache purging. Values:
<li>`purge_url`: Purge by URL</li>
<li>`purge_prefix`: Purge by prefix</li>
<li>`purge_host`: Purge by hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by cache tag</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Mode of cache purging. Values:
<li>`purge_url`: Purge by URL</li>
<li>`purge_prefix`: Purge by prefix</li>
<li>`purge_host`: Purge by hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by cache tag</li>
                     * @param _type Mode of cache purging. Values:
<li>`purge_url`: Purge by URL</li>
<li>`purge_prefix`: Purge by prefix</li>
<li>`purge_host`: Purge by hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by cache tag</li>
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
                     * 获取Target resource to be purged, which depends on the `Type` field.
1. When `Type = purge_host`:
Enter the hostname, such as www.example.com and foo.bar.example.com.
2. When `Type = purge_prefix`:
Enter the prefix, such as http://www.example.com/example.
3. When `Type = purge_url`:
Enter the URL, such as https://www.example.com/example.jpg.
4. When `Type = purge_all`:
This field can be left empty.
5. When `Type = purge_cache_tag`:
Enter the cache tag, such as tag1.
                     * @return Targets Target resource to be purged, which depends on the `Type` field.
1. When `Type = purge_host`:
Enter the hostname, such as www.example.com and foo.bar.example.com.
2. When `Type = purge_prefix`:
Enter the prefix, such as http://www.example.com/example.
3. When `Type = purge_url`:
Enter the URL, such as https://www.example.com/example.jpg.
4. When `Type = purge_all`:
This field can be left empty.
5. When `Type = purge_cache_tag`:
Enter the cache tag, such as tag1.
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置Target resource to be purged, which depends on the `Type` field.
1. When `Type = purge_host`:
Enter the hostname, such as www.example.com and foo.bar.example.com.
2. When `Type = purge_prefix`:
Enter the prefix, such as http://www.example.com/example.
3. When `Type = purge_url`:
Enter the URL, such as https://www.example.com/example.jpg.
4. When `Type = purge_all`:
This field can be left empty.
5. When `Type = purge_cache_tag`:
Enter the cache tag, such as tag1.
                     * @param _targets Target resource to be purged, which depends on the `Type` field.
1. When `Type = purge_host`:
Enter the hostname, such as www.example.com and foo.bar.example.com.
2. When `Type = purge_prefix`:
Enter the prefix, such as http://www.example.com/example.
3. When `Type = purge_url`:
Enter the URL, such as https://www.example.com/example.jpg.
4. When `Type = purge_all`:
This field can be left empty.
5. When `Type = purge_cache_tag`:
Enter the cache tag, such as tag1.
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
                     * 
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     * @param _encodeUrl Specifies whether to transcode non-ASCII URLs according to RFC3986.
Note that if it’s enabled, the purging is based on the converted URLs.
                     * 
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * 
                     */
                    bool EncodeUrlHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Mode of cache purging. Values:
<li>`purge_url`: Purge by URL</li>
<li>`purge_prefix`: Purge by prefix</li>
<li>`purge_host`: Purge by hostname</li>
<li>`purge_all`: Purge all caches</li>
<li>`purge_cache_tag`: Purge by cache tag</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Target resource to be purged, which depends on the `Type` field.
1. When `Type = purge_host`:
Enter the hostname, such as www.example.com and foo.bar.example.com.
2. When `Type = purge_prefix`:
Enter the prefix, such as http://www.example.com/example.
3. When `Type = purge_url`:
Enter the URL, such as https://www.example.com/example.jpg.
4. When `Type = purge_all`:
This field can be left empty.
5. When `Type = purge_cache_tag`:
Enter the cache tag, such as tag1.
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
