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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/HTTPHeader.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * PushUrlsCache request structure.
                */
                class PushUrlsCacheRequest : public AbstractModel
                {
                public:
                    PushUrlsCacheRequest();
                    ~PushUrlsCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * @return Urls List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * @param _urls List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取Specifies the User-Agent header of an HTTP prefetch request when it is forwarded to the origin server
Default value: `TencentCdn`
                     * @return UserAgent Specifies the User-Agent header of an HTTP prefetch request when it is forwarded to the origin server
Default value: `TencentCdn`
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置Specifies the User-Agent header of an HTTP prefetch request when it is forwarded to the origin server
Default value: `TencentCdn`
                     * @param _userAgent Specifies the User-Agent header of an HTTP prefetch request when it is forwarded to the origin server
Default value: `TencentCdn`
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Destination region for the prefetch
`mainland`: prefetches resources to nodes within Mainland China
`overseas`: prefetches resources to nodes outside Mainland China
`global`: prefetches resources to global nodes
Default value: `mainland`. You can prefetch a URL to nodes in a region provided that CDN service has been enabled for the domain name in the URL in the region.
                     * @return Area Destination region for the prefetch
`mainland`: prefetches resources to nodes within Mainland China
`overseas`: prefetches resources to nodes outside Mainland China
`global`: prefetches resources to global nodes
Default value: `mainland`. You can prefetch a URL to nodes in a region provided that CDN service has been enabled for the domain name in the URL in the region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Destination region for the prefetch
`mainland`: prefetches resources to nodes within Mainland China
`overseas`: prefetches resources to nodes outside Mainland China
`global`: prefetches resources to global nodes
Default value: `mainland`. You can prefetch a URL to nodes in a region provided that CDN service has been enabled for the domain name in the URL in the region.
                     * @param _area Destination region for the prefetch
`mainland`: prefetches resources to nodes within Mainland China
`overseas`: prefetches resources to nodes outside Mainland China
`global`: prefetches resources to global nodes
Default value: `mainland`. You can prefetch a URL to nodes in a region provided that CDN service has been enabled for the domain name in the URL in the region.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取By default, prefetch for regions in the Chinese mainland is performed onto the intermediate nodes, while prefetch for regions outside the Chinese mainland is performed onto the edge nodes and the traffic generated will be billed.
If this parameter is `middle` or left empty, prefetch will be performed onto the intermediate node.
                     * @return Layer By default, prefetch for regions in the Chinese mainland is performed onto the intermediate nodes, while prefetch for regions outside the Chinese mainland is performed onto the edge nodes and the traffic generated will be billed.
If this parameter is `middle` or left empty, prefetch will be performed onto the intermediate node.
                     * 
                     */
                    std::string GetLayer() const;

                    /**
                     * 设置By default, prefetch for regions in the Chinese mainland is performed onto the intermediate nodes, while prefetch for regions outside the Chinese mainland is performed onto the edge nodes and the traffic generated will be billed.
If this parameter is `middle` or left empty, prefetch will be performed onto the intermediate node.
                     * @param _layer By default, prefetch for regions in the Chinese mainland is performed onto the intermediate nodes, while prefetch for regions outside the Chinese mainland is performed onto the edge nodes and the traffic generated will be billed.
If this parameter is `middle` or left empty, prefetch will be performed onto the intermediate node.
                     * 
                     */
                    void SetLayer(const std::string& _layer);

                    /**
                     * 判断参数 Layer 是否已赋值
                     * @return Layer 是否已赋值
                     * 
                     */
                    bool LayerHasBeenSet() const;

                    /**
                     * 获取Whether to recursively resolve the M3U8 index file and prefetch the TS shards in it.
Notes:
1. This feature requires that the M3U8 index file can be directly requested and obtained.
2. In the M3U8 index file, currently only the TS shards at the first to the third level can be recursively resolved.
3. Prefetching the TS shards obtained through recursive resolution consumes the daily prefetch quota. If the usage exceeds the quota, the feature will be disabled and TS shards will not be prefetched.
                     * @return ParseM3U8 Whether to recursively resolve the M3U8 index file and prefetch the TS shards in it.
Notes:
1. This feature requires that the M3U8 index file can be directly requested and obtained.
2. In the M3U8 index file, currently only the TS shards at the first to the third level can be recursively resolved.
3. Prefetching the TS shards obtained through recursive resolution consumes the daily prefetch quota. If the usage exceeds the quota, the feature will be disabled and TS shards will not be prefetched.
                     * 
                     */
                    bool GetParseM3U8() const;

                    /**
                     * 设置Whether to recursively resolve the M3U8 index file and prefetch the TS shards in it.
Notes:
1. This feature requires that the M3U8 index file can be directly requested and obtained.
2. In the M3U8 index file, currently only the TS shards at the first to the third level can be recursively resolved.
3. Prefetching the TS shards obtained through recursive resolution consumes the daily prefetch quota. If the usage exceeds the quota, the feature will be disabled and TS shards will not be prefetched.
                     * @param _parseM3U8 Whether to recursively resolve the M3U8 index file and prefetch the TS shards in it.
Notes:
1. This feature requires that the M3U8 index file can be directly requested and obtained.
2. In the M3U8 index file, currently only the TS shards at the first to the third level can be recursively resolved.
3. Prefetching the TS shards obtained through recursive resolution consumes the daily prefetch quota. If the usage exceeds the quota, the feature will be disabled and TS shards will not be prefetched.
                     * 
                     */
                    void SetParseM3U8(const bool& _parseM3U8);

                    /**
                     * 判断参数 ParseM3U8 是否已赋值
                     * @return ParseM3U8 是否已赋值
                     * 
                     */
                    bool ParseM3U8HasBeenSet() const;

                    /**
                     * 获取Specifies whether to disable Range GETs.
Notes:
This feature is in beta test.
                     * @return DisableRange Specifies whether to disable Range GETs.
Notes:
This feature is in beta test.
                     * 
                     */
                    bool GetDisableRange() const;

                    /**
                     * 设置Specifies whether to disable Range GETs.
Notes:
This feature is in beta test.
                     * @param _disableRange Specifies whether to disable Range GETs.
Notes:
This feature is in beta test.
                     * 
                     */
                    void SetDisableRange(const bool& _disableRange);

                    /**
                     * 判断参数 DisableRange 是否已赋值
                     * @return DisableRange 是否已赋值
                     * 
                     */
                    bool DisableRangeHasBeenSet() const;

                    /**
                     * 获取Custom HTTP request headers (Up to 20). `Name`: Up to 128 characters. `Value`: Up to 1024 characters.
                     * @return Headers Custom HTTP request headers (Up to 20). `Name`: Up to 128 characters. `Value`: Up to 1024 characters.
                     * 
                     */
                    std::vector<HTTPHeader> GetHeaders() const;

                    /**
                     * 设置Custom HTTP request headers (Up to 20). `Name`: Up to 128 characters. `Value`: Up to 1024 characters.
                     * @param _headers Custom HTTP request headers (Up to 20). `Name`: Up to 128 characters. `Value`: Up to 1024 characters.
                     * 
                     */
                    void SetHeaders(const std::vector<HTTPHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Whether to encode the URL
                     * @return UrlEncode Whether to encode the URL
                     * 
                     */
                    bool GetUrlEncode() const;

                    /**
                     * 设置Whether to encode the URL
                     * @param _urlEncode Whether to encode the URL
                     * 
                     */
                    void SetUrlEncode(const bool& _urlEncode);

                    /**
                     * 判断参数 UrlEncode 是否已赋值
                     * @return UrlEncode 是否已赋值
                     * 
                     */
                    bool UrlEncodeHasBeenSet() const;

                private:

                    /**
                     * List of URLs. The protocol header such as "http://" or "https://" needs to be included.
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * Specifies the User-Agent header of an HTTP prefetch request when it is forwarded to the origin server
Default value: `TencentCdn`
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Destination region for the prefetch
`mainland`: prefetches resources to nodes within Mainland China
`overseas`: prefetches resources to nodes outside Mainland China
`global`: prefetches resources to global nodes
Default value: `mainland`. You can prefetch a URL to nodes in a region provided that CDN service has been enabled for the domain name in the URL in the region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * By default, prefetch for regions in the Chinese mainland is performed onto the intermediate nodes, while prefetch for regions outside the Chinese mainland is performed onto the edge nodes and the traffic generated will be billed.
If this parameter is `middle` or left empty, prefetch will be performed onto the intermediate node.
                     */
                    std::string m_layer;
                    bool m_layerHasBeenSet;

                    /**
                     * Whether to recursively resolve the M3U8 index file and prefetch the TS shards in it.
Notes:
1. This feature requires that the M3U8 index file can be directly requested and obtained.
2. In the M3U8 index file, currently only the TS shards at the first to the third level can be recursively resolved.
3. Prefetching the TS shards obtained through recursive resolution consumes the daily prefetch quota. If the usage exceeds the quota, the feature will be disabled and TS shards will not be prefetched.
                     */
                    bool m_parseM3U8;
                    bool m_parseM3U8HasBeenSet;

                    /**
                     * Specifies whether to disable Range GETs.
Notes:
This feature is in beta test.
                     */
                    bool m_disableRange;
                    bool m_disableRangeHasBeenSet;

                    /**
                     * Custom HTTP request headers (Up to 20). `Name`: Up to 128 characters. `Value`: Up to 1024 characters.
                     */
                    std::vector<HTTPHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Whether to encode the URL
                     */
                    bool m_urlEncode;
                    bool m_urlEncodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHURLSCACHEREQUEST_H_
