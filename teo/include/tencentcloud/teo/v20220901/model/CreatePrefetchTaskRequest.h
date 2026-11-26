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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePrefetchTask request structure.
                */
                class CreatePrefetchTaskRequest : public AbstractModel
                {
                public:
                    CreatePrefetchTaskRequest();
                    ~CreatePrefetchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill it in as *, but the premise is that the account calling the API must have permission for all site resources under the root account.
                     * @return ZoneId Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill it in as *, but the premise is that the account calling the API must have permission for all site resources under the root account.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill it in as *, but the premise is that the account calling the API must have permission for all site resources under the root account.
                     * @param _zoneId Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill it in as *, but the premise is that the account calling the API must have permission for all site resources under the root account.
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
                     * 获取List of resources to be preheated. Required. The format of each element is as follows:
http://www.example.com/example.txt.
Note: The number of submitted tasks is limited by the quota of a billing package. Check EO billing packages (https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).
                     * @return Targets List of resources to be preheated. Required. The format of each element is as follows:
http://www.example.com/example.txt.
Note: The number of submitted tasks is limited by the quota of a billing package. Check EO billing packages (https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置List of resources to be preheated. Required. The format of each element is as follows:
http://www.example.com/example.txt.
Note: The number of submitted tasks is limited by the quota of a billing package. Check EO billing packages (https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).
                     * @param _targets List of resources to be preheated. Required. The format of each element is as follows:
http://www.example.com/example.txt.
Note: The number of submitted tasks is limited by the quota of a billing package. Check EO billing packages (https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).
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
                     * 获取Preheat mode. Valid values:
<li>default: default mode, which means preheating to the middle layer;</li>
<li>edge: Edge preheating mode, which preheats to the edge and middle layer.</li>If left empty, the default value is default.
Notes:
1. Edge layer traffic generated by preheating to the edge is included in billing traffic;
2. Edge preheating is assigned a separate preheating amount of 1,000 entries per day by default and does not consume the normal preheating amount.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * @return Mode Preheat mode. Valid values:
<li>default: default mode, which means preheating to the middle layer;</li>
<li>edge: Edge preheating mode, which preheats to the edge and middle layer.</li>If left empty, the default value is default.
Notes:
1. Edge layer traffic generated by preheating to the edge is included in billing traffic;
2. Edge preheating is assigned a separate preheating amount of 1,000 entries per day by default and does not consume the normal preheating amount.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Preheat mode. Valid values:
<li>default: default mode, which means preheating to the middle layer;</li>
<li>edge: Edge preheating mode, which preheats to the edge and middle layer.</li>If left empty, the default value is default.
Notes:
1. Edge layer traffic generated by preheating to the edge is included in billing traffic;
2. Edge preheating is assigned a separate preheating amount of 1,000 entries per day by default and does not consume the normal preheating amount.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * @param _mode Preheat mode. Valid values:
<li>default: default mode, which means preheating to the middle layer;</li>
<li>edge: Edge preheating mode, which preheats to the edge and middle layer.</li>If left empty, the default value is default.
Notes:
1. Edge layer traffic generated by preheating to the edge is included in billing traffic;
2. Edge preheating is assigned a separate preheating amount of 1,000 entries per day by default and does not consume the normal preheating amount.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Whether to encode the url. If the content contains non-ASCII characters, enable this switch to perform encoding (following the RFC3986 encoding rule).
                     * @return EncodeUrl Whether to encode the url. If the content contains non-ASCII characters, enable this switch to perform encoding (following the RFC3986 encoding rule).
                     * @deprecated
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置Whether to encode the url. If the content contains non-ASCII characters, enable this switch to perform encoding (following the RFC3986 encoding rule).
                     * @param _encodeUrl Whether to encode the url. If the content contains non-ASCII characters, enable this switch to perform encoding (following the RFC3986 encoding rule).
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
                     * 获取If you need to carry HTTP header information for preheating, you can pass in this parameter. Otherwise, leave it empty.
                     * @return Headers If you need to carry HTTP header information for preheating, you can pass in this parameter. Otherwise, leave it empty.
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置If you need to carry HTTP header information for preheating, you can pass in this parameter. Otherwise, leave it empty.
                     * @param _headers If you need to carry HTTP header information for preheating, you can pass in this parameter. Otherwise, leave it empty.
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Media fragment preheating control. Valid values:
<li>on: enable shard preheating, preheat the description file, and perform recursive resolution on the description file shards for preheating;</li>
<li>off: only preheat the description file of the submission;</li>If left empty, the default value is off.
Notes:
1. The supported description file is M3U8, and the corresponding shard is TS;
2. The description file is required to handle normal requests and describe the fragment path according to industry standards.
3. Recursive resolution depth no more than 3 levels;
4. Parsed shards accumulate the daily preheating amount normally. When the amount exceeds the quota, it is handled silently and preheating is no longer executed.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * @return PrefetchMediaSegments Media fragment preheating control. Valid values:
<li>on: enable shard preheating, preheat the description file, and perform recursive resolution on the description file shards for preheating;</li>
<li>off: only preheat the description file of the submission;</li>If left empty, the default value is off.
Notes:
1. The supported description file is M3U8, and the corresponding shard is TS;
2. The description file is required to handle normal requests and describe the fragment path according to industry standards.
3. Recursive resolution depth no more than 3 levels;
4. Parsed shards accumulate the daily preheating amount normally. When the amount exceeds the quota, it is handled silently and preheating is no longer executed.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * 
                     */
                    std::string GetPrefetchMediaSegments() const;

                    /**
                     * 设置Media fragment preheating control. Valid values:
<li>on: enable shard preheating, preheat the description file, and perform recursive resolution on the description file shards for preheating;</li>
<li>off: only preheat the description file of the submission;</li>If left empty, the default value is off.
Notes:
1. The supported description file is M3U8, and the corresponding shard is TS;
2. The description file is required to handle normal requests and describe the fragment path according to industry standards.
3. Recursive resolution depth no more than 3 levels;
4. Parsed shards accumulate the daily preheating amount normally. When the amount exceeds the quota, it is handled silently and preheating is no longer executed.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * @param _prefetchMediaSegments Media fragment preheating control. Valid values:
<li>on: enable shard preheating, preheat the description file, and perform recursive resolution on the description file shards for preheating;</li>
<li>off: only preheat the description file of the submission;</li>If left empty, the default value is off.
Notes:
1. The supported description file is M3U8, and the corresponding shard is TS;
2. The description file is required to handle normal requests and describe the fragment path according to industry standards.
3. Recursive resolution depth no more than 3 levels;
4. Parsed shards accumulate the daily preheating amount normally. When the amount exceeds the quota, it is handled silently and preheating is no longer executed.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     * 
                     */
                    void SetPrefetchMediaSegments(const std::string& _prefetchMediaSegments);

                    /**
                     * 判断参数 PrefetchMediaSegments 是否已赋值
                     * @return PrefetchMediaSegments 是否已赋值
                     * 
                     */
                    bool PrefetchMediaSegmentsHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
If you wish to quickly submit Targets Url under different sites, you can fill it in as *, but the premise is that the account calling the API must have permission for all site resources under the root account.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of resources to be preheated. Required. The format of each element is as follows:
http://www.example.com/example.txt.
Note: The number of submitted tasks is limited by the quota of a billing package. Check EO billing packages (https://www.tencentcloud.com/document/product/1552/77380?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Preheat mode. Valid values:
<li>default: default mode, which means preheating to the middle layer;</li>
<li>edge: Edge preheating mode, which preheats to the edge and middle layer.</li>If left empty, the default value is default.
Notes:
1. Edge layer traffic generated by preheating to the edge is included in billing traffic;
2. Edge preheating is assigned a separate preheating amount of 1,000 entries per day by default and does not consume the normal preheating amount.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Whether to encode the url. If the content contains non-ASCII characters, enable this switch to perform encoding (following the RFC3986 encoding rule).
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * If you need to carry HTTP header information for preheating, you can pass in this parameter. Otherwise, leave it empty.
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Media fragment preheating control. Valid values:
<li>on: enable shard preheating, preheat the description file, and perform recursive resolution on the description file shards for preheating;</li>
<li>off: only preheat the description file of the submission;</li>If left empty, the default value is off.
Notes:
1. The supported description file is M3U8, and the corresponding shard is TS;
2. The description file is required to handle normal requests and describe the fragment path according to industry standards.
3. Recursive resolution depth no more than 3 levels;
4. Parsed shards accumulate the daily preheating amount normally. When the amount exceeds the quota, it is handled silently and preheating is no longer executed.
Note:
This parameter is an allowlist feature. If needed, contact Tencent Cloud Engineers.
                     */
                    std::string m_prefetchMediaSegments;
                    bool m_prefetchMediaSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
