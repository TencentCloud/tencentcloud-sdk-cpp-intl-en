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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PURGEPATHCACHEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PURGEPATHCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * PurgePathCache request structure.
                */
                class PurgePathCacheRequest : public AbstractModel
                {
                public:
                    PurgePathCacheRequest();
                    ~PurgePathCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of directories. The protocol header such as "http://" or "https://" needs to be included.
                     * @return Paths List of directories. The protocol header such as "http://" or "https://" needs to be included.
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置List of directories. The protocol header such as "http://" or "https://" needs to be included.
                     * @param _paths List of directories. The protocol header such as "http://" or "https://" needs to be included.
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取Purge type:
`flush`: purges updated resources
`delete`: purges all resources
                     * @return FlushType Purge type:
`flush`: purges updated resources
`delete`: purges all resources
                     * 
                     */
                    std::string GetFlushType() const;

                    /**
                     * 设置Purge type:
`flush`: purges updated resources
`delete`: purges all resources
                     * @param _flushType Purge type:
`flush`: purges updated resources
`delete`: purges all resources
                     * 
                     */
                    void SetFlushType(const std::string& _flushType);

                    /**
                     * 判断参数 FlushType 是否已赋值
                     * @return FlushType 是否已赋值
                     * 
                     */
                    bool FlushTypeHasBeenSet() const;

                    /**
                     * 获取Whether to encode Chinese characters before purge.
                     * @return UrlEncode Whether to encode Chinese characters before purge.
                     * 
                     */
                    bool GetUrlEncode() const;

                    /**
                     * 设置Whether to encode Chinese characters before purge.
                     * @param _urlEncode Whether to encode Chinese characters before purge.
                     * 
                     */
                    void SetUrlEncode(const bool& _urlEncode);

                    /**
                     * 判断参数 UrlEncode 是否已赋值
                     * @return UrlEncode 是否已赋值
                     * 
                     */
                    bool UrlEncodeHasBeenSet() const;

                    /**
                     * 获取Region to purge
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified region to purge should match the domain name’s acceleration region.
                     * @return Area Region to purge
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified region to purge should match the domain name’s acceleration region.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Region to purge
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified region to purge should match the domain name’s acceleration region.
                     * @param _area Region to purge
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified region to purge should match the domain name’s acceleration region.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * List of directories. The protocol header such as "http://" or "https://" needs to be included.
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * Purge type:
`flush`: purges updated resources
`delete`: purges all resources
                     */
                    std::string m_flushType;
                    bool m_flushTypeHasBeenSet;

                    /**
                     * Whether to encode Chinese characters before purge.
                     */
                    bool m_urlEncode;
                    bool m_urlEncodeHasBeenSet;

                    /**
                     * Region to purge
The acceleration region of the acceleration domain name will be purged if this parameter is not passed in.
If `mainland` is passed in, only the content cached on nodes in the Chinese mainland will be purged.
If `overseas` is passed in, only the content cached on nodes outside the Chinese mainland will be purged.
The specified region to purge should match the domain name’s acceleration region.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PURGEPATHCACHEREQUEST_H_
