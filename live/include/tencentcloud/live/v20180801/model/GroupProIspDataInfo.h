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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_GROUPPROISPDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_GROUPPROISPDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CdnPlayStatData.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Bandwidth, traffic, number of requests, and number of concurrent connections of an ISP in a district.
                */
                class GroupProIspDataInfo : public AbstractModel
                {
                public:
                    GroupProIspDataInfo();
                    ~GroupProIspDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取District.
                     * @return ProvinceName District.
                     * 
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置District.
                     * @param _provinceName District.
                     * 
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     * 
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取ISP.
                     * @return IspName ISP.
                     * 
                     */
                    std::string GetIspName() const;

                    /**
                     * 设置ISP.
                     * @param _ispName ISP.
                     * 
                     */
                    void SetIspName(const std::string& _ispName);

                    /**
                     * 判断参数 IspName 是否已赋值
                     * @return IspName 是否已赋值
                     * 
                     */
                    bool IspNameHasBeenSet() const;

                    /**
                     * 获取Detailed data at the minute level.
                     * @return DetailInfoList Detailed data at the minute level.
                     * 
                     */
                    std::vector<CdnPlayStatData> GetDetailInfoList() const;

                    /**
                     * 设置Detailed data at the minute level.
                     * @param _detailInfoList Detailed data at the minute level.
                     * 
                     */
                    void SetDetailInfoList(const std::vector<CdnPlayStatData>& _detailInfoList);

                    /**
                     * 判断参数 DetailInfoList 是否已赋值
                     * @return DetailInfoList 是否已赋值
                     * 
                     */
                    bool DetailInfoListHasBeenSet() const;

                private:

                    /**
                     * District.
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * ISP.
                     */
                    std::string m_ispName;
                    bool m_ispNameHasBeenSet;

                    /**
                     * Detailed data at the minute level.
                     */
                    std::vector<CdnPlayStatData> m_detailInfoList;
                    bool m_detailInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_GROUPPROISPDATAINFO_H_
