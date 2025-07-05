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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEMAPINFORESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEMAPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/MapInfo.h>
#include <tencentcloud/cdn/v20180606/model/RegionMapRelation.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeMapInfo response structure.
                */
                class DescribeMapInfoResponse : public AbstractModel
                {
                public:
                    DescribeMapInfoResponse();
                    ~DescribeMapInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of mappings.
                     * @return MapInfoList Array of mappings.
                     * 
                     */
                    std::vector<MapInfo> GetMapInfoList() const;

                    /**
                     * 判断参数 MapInfoList 是否已赋值
                     * @return MapInfoList 是否已赋值
                     * 
                     */
                    bool MapInfoListHasBeenSet() const;

                    /**
                     * 获取Mapping relationship between server region ID and sub-region ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ServerRegionRelation Mapping relationship between server region ID and sub-region ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RegionMapRelation> GetServerRegionRelation() const;

                    /**
                     * 判断参数 ServerRegionRelation 是否已赋值
                     * @return ServerRegionRelation 是否已赋值
                     * 
                     */
                    bool ServerRegionRelationHasBeenSet() const;

                    /**
                     * 获取Mapping relationship between client region ID and sub-region ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ClientRegionRelation Mapping relationship between client region ID and sub-region ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<RegionMapRelation> GetClientRegionRelation() const;

                    /**
                     * 判断参数 ClientRegionRelation 是否已赋值
                     * @return ClientRegionRelation 是否已赋值
                     * 
                     */
                    bool ClientRegionRelationHasBeenSet() const;

                private:

                    /**
                     * Array of mappings.
                     */
                    std::vector<MapInfo> m_mapInfoList;
                    bool m_mapInfoListHasBeenSet;

                    /**
                     * Mapping relationship between server region ID and sub-region ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<RegionMapRelation> m_serverRegionRelation;
                    bool m_serverRegionRelationHasBeenSet;

                    /**
                     * Mapping relationship between client region ID and sub-region ID
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<RegionMapRelation> m_clientRegionRelation;
                    bool m_clientRegionRelationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEMAPINFORESPONSE_H_
