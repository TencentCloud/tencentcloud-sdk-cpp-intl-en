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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEREGIONINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * StreamLive region information
                */
                class StreamLiveRegionInfo : public AbstractModel
                {
                public:
                    StreamLiveRegionInfo();
                    ~StreamLiveRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of StreamLive regions
                     * @return Regions List of StreamLive regions
                     */
                    std::vector<RegionInfo> GetRegions() const;

                    /**
                     * 设置List of StreamLive regions
                     * @param Regions List of StreamLive regions
                     */
                    void SetRegions(const std::vector<RegionInfo>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * List of StreamLive regions
                     */
                    std::vector<RegionInfo> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_STREAMLIVEREGIONINFO_H_
